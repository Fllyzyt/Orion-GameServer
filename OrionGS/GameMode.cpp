#include "GameMode.h"
#include "settings.h"
#include "XP.h"

#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include "Misc.h"


void GameMode::HandleNewSafeZonePhase(AFortGameModeAthena* GameMode, int32 ZoneIndex)
{
	auto GameStateAsFort = (AFortGameStateAthena*)GameMode->GameState;

	if (!GameStateAsFort)
		return HandleNewSafeZonePhaseOG(GameMode, ZoneIndex);

	auto MapInfo = GameStateAsFort->MapInfo;
	if (!MapInfo)
		return HandleNewSafeZonePhaseOG(GameMode, ZoneIndex);

	static bool bHasBeenSetup = false;
	auto& WaitTimes = MapInfo->SafeZoneDefinition.WaitTimes();
	auto& Durations = MapInfo->SafeZoneDefinition.Durations();
	if (!bHasBeenSetup)
	{
		bHasBeenSetup = true;

		static auto GameData = StaticLoadObject<UCurveTable>(UKismetStringLibrary::Conv_NameToString(GameStateAsFort->CurrentPlaylistInfo.BasePlaylist->GameData.ObjectID.AssetPathName).ToString());
		if (!GameData)
			GameData = UObject::FindObject<UCurveTable>("AthenaGameData.AthenaGameData");
		static auto ShrinkTime_NAME = UKismetStringLibrary::Conv_StringToName(L"Default.SafeZone.ShrinkTime");
		static auto WaitTime_NAME = UKismetStringLibrary::Conv_StringToName(L"Default.SafeZone.WaitTime");

		for (size_t i = 0; i < WaitTimes.Num(); i++)
		{
			float Out;
			EEvaluateCurveTableResult Res;
			UDataTableFunctionLibrary::EvaluateCurveTableRow(GameData, WaitTime_NAME, i, &Res, &Out, FString());
			WaitTimes[i] = Out;
		}
		for (size_t i = 0; i < Durations.Num(); i++)
		{
			float Out;
			EEvaluateCurveTableResult Res;
			UDataTableFunctionLibrary::EvaluateCurveTableRow(GameData, ShrinkTime_NAME, i, &Res, &Out, FString());
			Durations[i] = Out;
		}
	}
	
	static auto Accolade = StaticLoadObject<UFortAccoladeItemDefinition>("/Game/Athena/Items/Accolades/AccoladeID_SurviveStormCircle.AccoladeID_SurviveStormCircle");
	for (auto PC : GameMode->AlivePlayers)
	{
		XP::Accolades::GiveAccolade(PC, Accolade, nullptr, EXPEventPriorityType::NearReticle);
		bool bruh;
		FGameplayTagContainer Empty{};
		FGameplayTagContainer Empty2{};
		XP::Challanges::SendStatEvent(PC->GetQuestManager(ESubGame::Athena), nullptr, Empty, Empty2, &bruh, &bruh, 1, EFortQuestObjectiveStatEvent::StormPhase);
	}

	if (!LateGame)
	{
		HandleNewSafeZonePhaseOG(GameMode, ZoneIndex);
		GameMode->SafeZoneIndicator->SafeZoneStartShrinkTime = UGameplayStatics::GetTimeSeconds(UWorld::GetWorld()) + WaitTimes[GameMode->SafeZonePhase];
		GameMode->SafeZoneIndicator->SafeZoneFinishShrinkTime = GameMode->SafeZoneIndicator->SafeZoneStartShrinkTime + Durations[GameMode->SafeZonePhase];
	}
	else
	{
		ZoneIndex = 4;
		GameMode->SafeZonePhase = 4;
		GameStateAsFort->SafeZonePhase = 4;
		GameStateAsFort->OnRep_SafeZonePhase();
		HandleNewSafeZonePhaseOG(GameMode, ZoneIndex);
		GameMode->SafeZoneIndicator->SafeZoneStartShrinkTime = UGameplayStatics::GetTimeSeconds(UWorld::GetWorld()) + WaitTimes[GameMode->SafeZonePhase];
		GameMode->SafeZoneIndicator->SafeZoneFinishShrinkTime = GameMode->SafeZoneIndicator->SafeZoneStartShrinkTime + Durations[GameMode->SafeZonePhase];
	}
}

template<typename T>
T* GetClosestActor(AActor* FromActor, float Max = 500)
{
	TArray<AActor*> ActorArray;
	UGameplayStatics::GetAllActorsOfClass(UWorld::GetWorld(), T::StaticClass(), &ActorArray);
	AActor* Ret = nullptr;
	for (auto Actor : ActorArray)
	{
		if (!Actor || Actor->GetDistanceTo(FromActor) > Max)
			continue;
		if (!Ret || Actor->GetDistanceTo(FromActor) < Ret->GetDistanceTo(FromActor))
			Ret = Actor;
	}

	ActorArray.Free();
	return (T*)Ret;
}

static std::vector<std::string> splitString(const std::string& str, char delimiter) {
	std::vector<std::string> tokens;
	std::string token;
	std::istringstream tokenStream(str);

	while (std::getline(tokenStream, token, delimiter)) {
		tokens.push_back(token);
	}

	return tokens;
}

static inline std::vector<UObject*> GetAllObjectsOfClass(UClass* Class)
{
	std::vector<UObject*> Objects;

	if (!Class)
		return Objects;

	for (int i = 0; i < UObject::GObjects->Num(); i++)
	{
		auto Object = BasicFilesImpleUtils::GetObjectByIndex(i);

		if (!Object)
			continue;

		if (Object->IsA(Class))
			Objects.push_back(Object);
	}

	return Objects;
}

static UFortPlaylistAthena* /*GameRewritten::FortniteGame::Fort::UFortPlaylistManager::*/GetAthenaPlaylistByName(FName PlaylistName) {
	static auto FortPlaylistClass = UObject::FindObject<SDK::UClass>("/Script/FortniteGame.FortPlaylist");

	auto AllObjects = GetAllObjectsOfClass(FortPlaylistClass);
	for (int i = 0; i < AllObjects.size(); i++) {
		auto Object = (UFortPlaylist*)AllObjects.at(i);

		printf("Object->PlaylistName != PlaylistName %s %s", Object->PlaylistName.ToString().c_str(), PlaylistName.ToString().c_str());
		if (Object->PlaylistName == PlaylistName)
			return (UFortPlaylistAthena*)Object;
	}

	return 0;
}

bool GameMode::ReadyToStartMatch(AFortGameModeAthena* GameMode)
{
	bool Ret = ReadyToStartMatchOriginal(GameMode);
	auto GameState = Utils::Cast<AFortGameStateAthena>(GameMode->GameState);

	if (!GameState)
		return false;

	if (!UWorld::GetWorld()->NetDriver) {
		return false;
	}

	GameMode->bWorldIsReady = true;

	#ifdef USE_BACKEND
		if (GameMode->CurrentBucketId.IsValid() && GameMode->CurrentPlaylistName.ComparisonIndex <= 0) {
			printf("CurrentBucketId: %s\n", GameMode->CurrentBucketId.ToString().c_str());
			std::vector<std::string> parts = splitString(GameMode->CurrentBucketId.ToString(), ':');
			if (parts.size() > 5) {
				// We do this to convert back to the right name, on backend it's all lowercase
				auto PlaylistName = UKismetStringLibrary::Conv_StringToName(
					FString(std::wstring(parts[5].begin(), parts[5].end()).c_str())
				).ToString();
				
				auto Playlist = UObject::FindObject<UFortPlaylistAthena>(std::string(PlaylistName + "." + PlaylistName).c_str());
				if (!Playlist) {
					printf("Failed to get \"%s\", falling back to DefaultSolo!\n", std::string(PlaylistName + "." + PlaylistName).c_str());
					Playlist = UObject::FindObject<UFortPlaylistAthena>("Playlist_DefaultSolo.Playlist_DefaultSolo");
				}

				if (Playlist) {
					GameMode->CurrentPlaylistName = Playlist->PlaylistName;
					GameMode->CurrentPlaylistId = Playlist->PlaylistId;
				}
			}
		}
	#else
		if (GameMode->CurrentPlaylistName.ComparisonIndex <= 0) {
			//auto Playlist = UObject::FindObject<UFortPlaylistAthena>("Playlist_ShowdownAlt_Duos.Playlist_ShowdownAlt_Duos");
			//auto Playlist = UObject::FindObject<UFortPlaylistAthena>("Playlist_ShowdownTournament_Melt_Squads.Playlist_ShowdownTournament_Melt_Squads");
			//auto Playlist = UObject::FindObject<UFortPlaylistAthena>("Playlist_DefaultDuo.Playlist_DefaultDuo");
			//auto Playlist = UObject::FindObject<UFortPlaylistAthena>("Playlist_Low_Solo.Playlist_Low_Solo");
			//auto Playlist = UObject::FindObject<UFortPlaylistAthena>("Playlist_Vamp_Solo.Playlist_Vamp_Solo");
			auto Playlist = UObject::FindObject<UFortPlaylistAthena>("Playlist_DefaultDuo.Playlist_DefaultDuo");
			//auto Playlist = UObject::FindObject<UFortPlaylistAthena>("Playlist_ShowdownTournament_Vendetta_Solo.Playlist_ShowdownTournament_Vendetta_Solo");
			//auto Playlist = UObject::FindObject<UFortPlaylistAthena>("Playlist_ShowdownTournament_Vendetta_Solo.Playlist_ShowdownTournament_Vendetta_Solo");
			//auto Playlist = UObject::FindObject<UFortPlaylistAthena>("Playlist_Melt_Duos.Playlist_Melt_Duos");
			printf("Playlist: %p\n", Playlist);
			if (Playlist) {
				GameMode->CurrentPlaylistName = Playlist->PlaylistName;
				GameMode->CurrentPlaylistId = Playlist->PlaylistId;
			}
		}
	#endif
		
	if (!GameState->MapInfo)
		return false;

	static bool Setup = false;
	if (GameMode->CurrentPlaylistName.ComparisonIndex > 0 && !GameState->CurrentPlaylistInfo.BasePlaylist) {
		std::string PlaylistName = GameMode->CurrentPlaylistName.ToString();
		auto Playlist = UObject::FindObject<UFortPlaylistAthena>(std::string(PlaylistName + "." + PlaylistName));
		if (Playlist) {
			GameState->CurrentPlaylistInfo.BasePlaylist = Playlist;
			GameState->CurrentPlaylistInfo.OverridePlaylist = Playlist;
			GameState->CurrentPlaylistInfo.PlaylistReplicationKey++;
			GameState->CurrentPlaylistInfo.MarkArrayDirty();
			GameState->OnRep_CurrentPlaylistInfo();

			GameState->CurrentPlaylistId = Playlist->PlaylistId;
			GameState->OnRep_CurrentPlaylistId();
			GameMode->PlaylistHotfixOriginalGCFrequency = Playlist->GarbageCollectionFrequency;
			
			if (Playlist->bIsTournament) {
				GameState->EventTournamentRound = EEventTournamentRound::Open;
				GameState->OnRep_EventTournamentRound();
			}

			GameState->AirCraftBehavior = Playlist->AirCraftBehavior;
			GameState->CachedSafeZoneStartUp = Playlist->SafeZoneStartUp;
			GameMode->AISettings = Playlist->AISettings;

			GameMode->bDBNOEnabled = true;
			GameState->bDBNOEnabledForGameMode = true;
			GameState->bDBNODeathEnabled = true;
			GameMode->bAllowSpectateAfterDeath = true;
			GameMode->ServerBotManagerClass = Playlist->ServerBotManagerClass;
			printf("ServerBotManagerClass: %s\n", GameMode->ServerBotManagerClass.Get()->GetName().c_str());

			for (int i = 0; i < GameState->CurrentPlaylistInfo.BasePlaylist->AdditionalLevels.Num(); i++)
			{
				FVector Loc{};
				FRotator Rot{};
				bool bSuccess = false;
				((ULevelStreamingDynamic*)ULevelStreamingDynamic::StaticClass()->DefaultObject)->LoadLevelInstanceBySoftObjectPtr(UWorld::GetWorld(), GameState->CurrentPlaylistInfo.BasePlaylist->AdditionalLevels[i], Loc, Rot, &bSuccess, FString());
				FAdditionalLevelStreamed NewLevel{};
				NewLevel.LevelName = GameState->CurrentPlaylistInfo.BasePlaylist->AdditionalLevels[i].ObjectID.AssetPathName;
				NewLevel.bIsServerOnly = false;
				GameState->AdditionalPlaylistLevelsStreamed.Add(NewLevel);
			}

			for (int i = 0; i < GameState->CurrentPlaylistInfo.BasePlaylist->AdditionalLevelsServerOnly.Num(); i++)
			{
				FVector Loc{};
				FRotator Rot{};
				bool bSuccess = false;
				((ULevelStreamingDynamic*)ULevelStreamingDynamic::StaticClass()->DefaultObject)->LoadLevelInstanceBySoftObjectPtr(UWorld::GetWorld(), GameState->CurrentPlaylistInfo.BasePlaylist->AdditionalLevelsServerOnly[i], Loc, Rot, &bSuccess, FString());
				FAdditionalLevelStreamed NewLevel{};
				NewLevel.LevelName = GameState->CurrentPlaylistInfo.BasePlaylist->AdditionalLevelsServerOnly[i].ObjectID.AssetPathName;
				NewLevel.bIsServerOnly = true;
				GameState->AdditionalPlaylistLevelsStreamed.Add(NewLevel);
			}

			GameState->OnRep_AdditionalPlaylistLevelsStreamed();
		}
	}

	if (GameMode->ServerBotManager == nullptr && GameState->CurrentPlaylistInfo.BasePlaylist) {
		printf("Spawning ServerBotManager!\n");
		GameMode->ServerBotManager = (UFortServerBotManagerAthena*)((UGameplayStatics*)UGameplayStatics::StaticClass()->DefaultObject)->SpawnObject(UFortServerBotManagerAthena::StaticClass(), GameMode);
		GameMode->ServerBotManager->CachedGameMode = GameMode;
		*(bool*)(__int64(GameMode->ServerBotManager) + 0x458) = true;
		GameMode->ServerBotManager->CachedGameState = GameState;
		GameMode->ServerBotManager->CachedAIPopulationTracker = ((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AIPopulationTracker;

		if (!GameMode->SpawningPolicyManager)
		{
			GameMode->SpawningPolicyManager = Utils::SpawnActor<AFortAthenaSpawningPolicyManager>({}, {});
		}

		GameMode->SpawningPolicyManager->GameModeAthena = GameMode;
		GameMode->SpawningPolicyManager->GameStateAthena = GameState;

		auto Mutator = GameMode->ServerBotManager->CachedBotMutator;

		if (!Mutator)
		{
			Mutator = (AFortAthenaMutator_Bots*)GameMode->GetMutatorByClass(GameMode, AFortAthenaMutator_Bots::StaticClass());
		}

		if (!Mutator)
		{
			Mutator = (AFortAthenaMutator_Bots*)GameMode->GetMutatorByClass(GameMode->GameState, AFortAthenaMutator_Bots::StaticClass());
		}

		printf("Mutator Name: %s\n", Mutator->GetName().c_str());

		FTransform Transform{};
		Transform.Scale3D = FVector{ 1,1,1 };
		GameMode->AIDirector = Utils::SpawnActor<AAthenaAIDirector>({});
		GameMode->AIDirector->Activate();

		if (!GameMode->AIGoalManager)
		{
			GameMode->AIGoalManager = Utils::SpawnActor<AFortAIGoalManager>({});
		}
		CharacterItemDefs = Utils::GetAllObjectsOfClass<UAthenaCharacterItemDefinition>();
		BackpackItemDefs = Utils::GetAllObjectsOfClass<UAthenaBackpackItemDefinition>();
		EmoteItemDefs = Utils::GetAllObjectsOfClass<UAthenaDanceItemDefinition>();
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->PlayerBotManager = GameMode->ServerBotManager;
	}
	
	if (!Setup) {
		Setup = true;
		printf("Setting up GS\n");
		TArray<AActor*> Spawners;
		UGameplayStatics::GetAllActorsOfClass(UWorld::GetWorld(), AFortAthenaVehicleSpawner::StaticClass(), &Spawners);
		for (size_t i = 0; i < Spawners.Num(); i++)
		{
			AFortAthenaVehicleSpawner* Spawner = Utils::Cast<AFortAthenaVehicleSpawner>(Spawners[i]);
			if (!Spawner)
				continue;
			AActor* Vehicle = UGameplayStatics::FinishSpawningActor(UGameplayStatics::BeginDeferredActorSpawnFromClass(UWorld::GetWorld(), Spawner->GetVehicleClass(), (FTransform&)Spawner->GetTransform(), ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn, nullptr), (FTransform&)Spawner->GetTransform());
			UFortAthenaVehicleFuelComponent* TestComp = Utils::Cast<UFortAthenaVehicleFuelComponent>(Vehicle->GetComponentByClass(UFortAthenaVehicleFuelComponent::StaticClass()));
			if (TestComp)
			{
				TestComp->ServerFuel = 100;
				TestComp->OnRep_ServerFuel(0);
			}
			Utils::SwapVFTs(Vehicle, 0xF0, Misc::ServerMove);
		}
		Spawners.Free();

		TSparseArray<TArray<TWeakObjectPtr<AFortPlayerStateAthena>>>& ArrayTeam = *(TSparseArray<TArray<TWeakObjectPtr<AFortPlayerStateAthena>>>*)(__int64(GameState) + 0x15B8);
		TSparseArray<TArray<TWeakObjectPtr<AFortPlayerStateAthena>>>& ArraySquad = *(TSparseArray<TArray<TWeakObjectPtr<AFortPlayerStateAthena>>>*)(__int64(GameState) + 0x15F0);

		ArrayTeam.Data.Data = nullptr;
		ArrayTeam.Data.NumElements = 0;
		ArrayTeam.Data.MaxElements = 0;
		ArrayTeam.AllocationFlags.ZeroAll();
		ArrayTeam.AllocationFlags.Data = nullptr;
		ArrayTeam.NumFreeIndices = 0;
		ArrayTeam.FirstFreeIndex = 0;

		cout << "ArrayTeam Num " << ArrayTeam.Num() << endl;
		cout << "ArrayTeam Num " << ArrayTeam.GetAllocationFlags().Num() << endl;

		ArraySquad.Data.Data = nullptr;
		ArraySquad.Data.NumElements = 0;
		ArraySquad.Data.MaxElements = 0;
		ArraySquad.AllocationFlags.ZeroAll();
		ArraySquad.AllocationFlags.Data = nullptr;
		ArraySquad.NumFreeIndices = 0;
		ArraySquad.FirstFreeIndex = 0;

		cout << "ArraySquad Num " << ArraySquad.Num() << endl;
		cout << "ArraySquad Num " << ArraySquad.GetAllocationFlags().Num() << endl;

		for (size_t i = 0; i < 103; i++)
		{
			TArray<TWeakObjectPtr<AFortPlayerStateAthena>> EmptyArray;
			ArrayTeam.Add(EmptyArray);
		}

		for (size_t i = 0; i < 103; i++)
		{
			TArray<TWeakObjectPtr<AFortPlayerStateAthena>> EmptyArray;
			ArraySquad.Add(EmptyArray);
		}

		TArray<AActor*> SpawnMachines;
		UGameplayStatics::GetAllActorsOfClass(UWorld::GetWorld(), ABuildingGameplayActorSpawnMachine::StaticClass(), &SpawnMachines);

		auto& TeamSquadCounts = *(TArray<int>*)(__int64(GameMode) + 0xE38);
		printf("TeamSquadCounts Num: %d, Max: %d\n", TeamSquadCounts.Num(), TeamSquadCounts.Max());
		TeamSquadCounts.ResetNum();

		for (size_t i = 0; i < 103; i++)
		{
			TeamSquadCounts.Add(0);
		}

		for (auto Machine : SpawnMachines)
		{
			auto Van = Utils::Cast<ABuildingGameplayActorSpawnMachine>(Machine);
			if (!Van)
				continue;
			Van->ResurrectLocation = GetClosestActor<AFortPlayerStart>(Van);
		}

		SpawnMachines.Free();
		GameMode->GameSession->MaxPlayers = 100;
		printf("GameState->PoiManager->PoiTagContainerTable: %d\n", GameState->PoiManager->PoiTagContainerTable.Num());
	}

	if (GameState->TotalPlayers > 0) {
		if (!GameState->GameSessionId.IsValid()) {
			printf("WHAT SKUNKY SHIT IS THIS?!\n");
			exit(1);
		}
		#ifdef USING_EZAntiCheat
			FEasyAntiCheatServer::Get()->BeginSession();
			FEasyAntiCheatServer::Get()->SetGameSessionId(GameState->GameSessionId);
		#endif

		GameState->WarmupCountdownEndTime = 90.f;
		
		return true;
	}

	return false;
}

APawn* GameMode::SpawnDefaultPawnFor(AGameModeBase* GameModeBase, AController* NewPlayer, AActor* StartSpot)
{
	if (!NewPlayer || !StartSpot)
		return nullptr;

	auto Ret = GameModeBase->SpawnDefaultPawnAtTransform(NewPlayer, (FTransform&)StartSpot->GetTransform());
	return Ret;
}

void GameMode::InitializeForWorld(UNavigationSystemV1* NavSystem, UWorld* World, EFNavigationSystemRunMode Mode)
{
	auto NavSystemAsAthena = (UAthenaNavSystem*)NavSystem;
	NavSystemAsAthena->bAutoCreateNavigationData = true;
	return InitializeForWorldOG(NavSystem, World, Mode);
}

void GameMode::OnAircraftEnteredDropZone(AFortGameModeAthena* GameMode, AFortAthenaAircraft* Aircraft)
{
	auto GameState = ((AFortGameStateAthena*)UWorld::GetWorld()->GameState);
	static bool First = false;
	if (!First)
	{
		First = true;
		GameState->GamePhaseStep = EAthenaGamePhaseStep::BusFlying;
		for (auto Bot : GameMode->AliveBots)
		{
			static auto Name1 = UKismetStringLibrary::Conv_StringToName(TEXT("AIEvaluator_Global_GamePhaseStep"));
			static auto Name2 = UKismetStringLibrary::Conv_StringToName(TEXT("AIEvaluator_Global_GamePhase"));
			Bot->Blackboard->SetValueAsEnum(Name1, (uint8)GameState->GamePhaseStep);
			Bot->Blackboard->SetValueAsEnum(Name2, (uint8)EAthenaGamePhase::Aircraft);

			static auto Name9 = UKismetStringLibrary::Conv_StringToName(TEXT("AIEvaluator_Global_IsInBus"));

			Bot->Blackboard->SetValueAsBool(Name9, true);
		}
	}
	OnAircraftEnteredDropZoneOG(GameMode, Aircraft);
}

void GameMode::OnAircraftExitedDropZone(AFortGameModeAthena* GameMode, AFortAthenaAircraft* Aircraft)
{
	auto GameState = ((AFortGameStateAthena*)UWorld::GetWorld()->GameState);
	static bool First = false;
	if (!First)
	{
		First = true;
		GameState->GamePhaseStep = EAthenaGamePhaseStep::StormHolding;
		for (auto Bot : GameMode->AliveBots)
		{
			static auto Name1 = UKismetStringLibrary::Conv_StringToName(TEXT("AIEvaluator_Global_GamePhaseStep"));
			static auto Name2 = UKismetStringLibrary::Conv_StringToName(TEXT("AIEvaluator_Global_GamePhase"));
			Bot->Blackboard->SetValueAsEnum(Name1, (uint8)GameState->GamePhaseStep);
			Bot->Blackboard->SetValueAsEnum(Name2, (uint8)EAthenaGamePhase::SafeZones);
		}
	}
	OnAircraftExitedDropZoneOG(GameMode, Aircraft);
}

EFortTeam GameMode::PickTeam()
{
	static int MaxTeamSize = 2;
	static int Team = 3;
	static int CurrentPlayers = 0;
	
	int Ret = Team;

	CurrentPlayers++;
	if (CurrentPlayers == MaxTeamSize)
	{
		CurrentPlayers = 0;
		Team++;
	}
	return EFortTeam(Ret);
}
