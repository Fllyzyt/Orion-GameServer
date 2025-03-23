#include "PlayerController.h"
#include "Inventory.h"
#include "Misc.h"
#include "settings.h"
#include "XP.h"
#include <iostream>
#include <fstream>

void PlayerController::GetPlayerViewPoint(APlayerController* PC, FVector& outLocation, FRotator& outRotation)
{
	auto PCViewTarget = PC->GetViewTarget();
	if (PC->StateName.ComparisonIndex == SpectatingName.ComparisonIndex)
	{
		outLocation = PC->LastSpectatorSyncLocation;
		outRotation = PC->LastSpectatorSyncRotation;
	}
	else if (PCViewTarget)
	{
		outLocation = PCViewTarget->K2_GetActorLocation();
		outRotation = PC->GetControlRotation();
	}
	else
	{
		GetPlayerViewPointOG(PC, outLocation, outRotation);
	}
}

void PlayerController::ServerAcknowledgePossession(APlayerController* PlayerController, APawn* Pawn)
{
	PlayerController->AcknowledgedPawn = Pawn;
}

static bool AllPlayersConnected(AFortGameModeAthena* GameMode) {
	// im lazy asf atm
	return true;
}

void PlayerController::ServerReadyToStartMatch(AFortPlayerController* PlayerController)
{
	ServerReadyToStartMatchOG(PlayerController);

	// I hope this is not being called multiple times, otherwise its gonna fuck up
	#ifdef USING_EZAntiCheat
		std::string accountId = PlayerController->GetAccountId();
		if (accountId.length() != 32) {
			// !KICK THE PLAYER PLS!
			return ServerReadyToStartMatchOG(PlayerController);
		}

		// Start making sure that the player is running the Anti Cheat, not running = kick after 40 secs
		FEasyAntiCheatServer::Get()->OnClientConnect(NewPlayer);
	#endif

	static auto AbilitySet = UObject::FindObject<UFortAbilitySet>("GAS_AthenaPlayer.GAS_AthenaPlayer");

	for (int i = 0; i < AbilitySet->GameplayAbilities.Num(); i++)
	{
		if (((AFortPlayerStateAthena*)PlayerController->PlayerState)->AbilitySystemComponent)
		{
			if (AbilitySet->GameplayAbilities[i].Get())
				PlayerController::Abilities::GiveAbility(((AFortPlayerStateAthena*)PlayerController->PlayerState)->AbilitySystemComponent, AbilitySet->GameplayAbilities[i].Get(), nullptr);
		}
	}

	auto PlayerState = Utils::Cast<AFortPlayerStateAthena>(PlayerController->PlayerState);
	auto GameState = Utils::Cast<AFortGameStateAthena>(UWorld::GetWorld()->GameState);
	if (!PlayerState)
		return;

	auto Playlist = GameState->CurrentPlaylistInfo.BasePlaylist;

	for (auto& SoftModifier : Playlist->ModifierList)
	{
		FString WStr = UKismetStringLibrary::Conv_NameToString(SoftModifier.ObjectID.AssetPathName);
		auto Modifier = StaticLoadObject<UFortGameplayModifierItemDefinition>(WStr.ToString());
		WStr.Free();
		if (!Modifier)
			continue;
		for (auto& AbilitySetInfo : Modifier->PersistentAbilitySets)
		{
			for (auto& SoftAbilitySet : AbilitySetInfo.AbilitySets)
			{
				FString WStrSet = UKismetStringLibrary::Conv_NameToString(SoftModifier.ObjectID.AssetPathName);
				UFortAbilitySet* Set = StaticLoadObject<UFortAbilitySet>(WStrSet.ToString());
				WStrSet.Free();
				if (!Set)
					continue;
				for (auto Ability : Set->GameplayAbilities)
				{
					Abilities::GiveAbility(PlayerState->AbilitySystemComponent, Ability.Get());
				}
				for (auto Effect : Set->GrantedGameplayEffects)
				{
					if (!Effect.GameplayEffect.Get())
						continue;
					PlayerState->AbilitySystemComponent->BP_ApplyGameplayEffectToSelf(Effect.GameplayEffect, Effect.Level, PlayerState->AbilitySystemComponent->MakeEffectContext());
				}
			}
		}
		
		for (auto& EffectInfo : Modifier->PersistentGameplayEffects)
		{
			for (auto& bruh : EffectInfo.GameplayEffects)
			{
				FString WStrSet = UKismetStringLibrary::Conv_NameToString(bruh.GameplayEffect.ObjectID.AssetPathName);
				auto EffectClass = StaticLoadObject<UClass>(WStrSet.ToString());
				WStrSet.Free();
				if (!EffectClass)
					continue;
				PlayerState->AbilitySystemComponent->BP_ApplyGameplayEffectToSelf(EffectClass, bruh.Level, PlayerState->AbilitySystemComponent->MakeEffectContext());
			}
		}
	}

	cout << "bro " << PlayerState->bResurrectionChipDisabled << endl;

	PlayerState->bResurrectionChipDisabled = false;

	cout << "TINDEX " << to_string(PlayerState->TeamIndex) << endl;
	cout << "SquadId " << to_string(PlayerState->SquadId) << endl;

//#ifdef NO_DEDISES
//	PlayerState->SquadId = PlayerState->TeamIndex - 2;
//#endif NO_DEDISES


	PlayerState->OnRep_SquadId();
	PlayerState->OnRep_TeamIndex(0);
	PlayerState->OnRep_PlayerTeam();
	PlayerState->OnRep_PlayerTeamPrivate();

	uint8 TeamIndex = PlayerState->TeamIndex;

	//__int64 GameStateIda = __int64(GameState);

	//__int64 v2 = 0; // r8
	//int v3 = 0; // eax
	//__int64* result = nullptr; // rax

	//if (TeamIndex >= *(int*)(GameStateIda + 0x15E0))// Max team indexes ig???
	//{
	//	printf("label13 fsgaddgsf\n");
	//}
	//cout << "MaxTeamMaybe " << *(int*)(GameStateIda + 0x15E0) << endl;
	//v2 = GameStateIda + 0x15C8;
	//if (*(__int64*)(GameStateIda + 0x15D8))
	//{
	//	printf("v2 switching\n");
	//	v2 = *(__int64*)(GameStateIda + 0x15D8);
	//}

	//v3 = *(DWORD*)(v2 + 4 * ((unsigned __int64)TeamIndex >> 5));
	//cout << "v3 right shift thing " << v3 << endl;
	//cout << "_bittest(reinterpret_cast<const long*>(&v3), TeamIndex & 0x1F): " << _bittest(reinterpret_cast<const long*>(&v3), TeamIndex & 0x1F) << endl;
	//cout << "_bittest(reinterpret_cast<const long*>(&v3), TeamIndex & 0x1F) __int64: " << __int64(_bittest(reinterpret_cast<const long*>(&v3), TeamIndex & 0x1F)) << endl;
	//if (!_bittest(reinterpret_cast<const long*>(&v3), TeamIndex & 0x1F)
	//	|| (result = (__int64*)(*(__int64*)(GameStateIda + 0x15B8) + 0x10i64 * TeamIndex)) == 0i64)
	//{
	//	printf("label13 123\n");
	//}

	//result = (__int64*)(*(__int64*)(GameStateIda + 0x15B8) + 0x10i64 * TeamIndex);

	//cout << "result " << result << endl;

	//__int64 SomeWeirdArray = __int64(result); // rax
	//int* v11 = nullptr; // rbx
	//__int64 v12 = 0; // rbp

	//cout << "SomeWeirdArray " << SomeWeirdArray << endl;

	//v11 = *(int**)SomeWeirdArray;
	//v12 = *(__int64*)SomeWeirdArray + 8i64 * *(int*)(SomeWeirdArray + 8);
	//cout << "*(__int64*)SomeWeirdArray: " << *(__int64*)SomeWeirdArray << endl;
	//cout << "v12 " << v12 << endl;
	//if (*(__int64*)SomeWeirdArray == v12)
	//{
	//	cout << "*(__int64*)SomeWeirdArray == v12" << endl;
	//}

	//TSparseArray<TWeakObjectPtr<AFortPlayerStateAthena>>& SparseArrayOne = *(TSparseArray<TWeakObjectPtr<AFortPlayerStateAthena>>*)(__int64(GameState) + 0x15B8);
	//TArray<TWeakObjectPtr<AFortPlayerStateAthena>>& ArrayOne = *(TArray<TWeakObjectPtr<AFortPlayerStateAthena>>*)(__int64(GameState) + 0x15B8);

	//cout << "ArrayOne Max " << ArrayOne.Max() << endl;
	//cout << "ArrayOne Num " << ArrayOne.Num() << endl;

	//cout << "SparseArrayOne Num " << SparseArrayOne.Num() << endl;
	//cout << "SparseArrayOne AllocFlags Num " << SparseArrayOne.GetAllocationFlags().Num() << endl;
	//cout << "SparseArrayOne AllocFlags Max " << SparseArrayOne.GetAllocationFlags().Max() << endl;
	//cout << "SparseArrayOne GetFirstFreeIndex " << SparseArrayOne.GetFirstFreeIndex() << endl;
	//cout << "SparseArrayOne GetNumFreeIndices " << SparseArrayOne.GetNumFreeIndices() << endl;


	//TWeakObjectPtr<AFortPlayerStateAthena> TestPtr{};
	//TestPtr.ObjectIndex = PlayerState->Index;
	//TestPtr.ObjectSerialNumber = UObject::GObjects->GetSerialByIdx(TestPtr.ObjectIndex);

	//SparseArrayOne.Add(TestPtr);

	//auto bro3 = (__int64*)(*(__int64*)(GameState + 0x15B8) + 0x10i64 * TeamIndex);

	//cout << bro3 << endl;

	TSparseArray<TArray<TWeakObjectPtr<AFortPlayerStateAthena>>>& Array = *(TSparseArray<TArray<TWeakObjectPtr<AFortPlayerStateAthena>>>*)(__int64(GameState) + 0x15B8);
	TSparseArray<TArray<TWeakObjectPtr<AFortPlayerStateAthena>>>& ArraySquad = *(TSparseArray<TArray<TWeakObjectPtr<AFortPlayerStateAthena>>>*)(__int64(GameState) + 0x15F0);
	//auto bro2 = (__int64*)(*(__int64*)(GameState + 0x15B8) + 0x10i64 * TeamIndex);
	//cout << bro2 << endl;
	TWeakObjectPtr<AFortPlayerStateAthena> ptr{};
	ptr.ObjectIndex = PlayerState->Index;
	ptr.ObjectSerialNumber = UObject::GObjects->GetSerialByIdx(PlayerState->Index);
	cout << "Serial " << ptr.ObjectSerialNumber << endl;
	Array[TeamIndex].ElementData.Add(ptr);
	ArraySquad[PlayerState->SquadId].ElementData.Add(ptr);

	//Array.Add(ptr);

	//auto bro = (__int64*)(*(__int64*)(GameState + 0x15B8) + 0x10i64 * TeamIndex);

	//cout << bro << endl;

	FGameMemberInfo Info{ -1,-1,-1 };
	Info.MemberUniqueId = PlayerState->UniqueId;
	Info.SquadId = PlayerState->SquadId;
	Info.TeamIndex = PlayerState->TeamIndex;
	GameState->GameMemberInfoArray.Members.Add(Info);
	GameState->GameMemberInfoArray.MarkItemDirty(Info);
	// GameState->WarmupCountdownEndTime = 99999;
	static bool First = false;
	if (!First)
	{
		First = true;
		TArray<AActor*> Actors;
		UGameplayStatics::GetAllActorsOfClass(UWorld::GetWorld(), ABuildingContainer::StaticClass(), &Actors);
		for (auto actor : Actors)
		{
			if (Utils::Cast<ABuildingContainer>(actor)->bStartAlreadySearched_Athena)
			{
				actor->K2_DestroyActor();
			}
		}
		Actors.Free();
	}

	if (AllPlayersConnected((AFortGameModeAthena*)UWorld::GetWorld()->AuthorityGameMode)) {
		float Duration = 10; // Notify the players that the game will start in 10 seconds!
		float EarlyDuration = Duration;

		float TimeSeconds = UGameplayStatics::GetTimeSeconds(UWorld::GetWorld());

		// Make sure the countdown new countdown is shorter than the current one
		if (TimeSeconds + Duration < GameState->WarmupCountdownEndTime) {
			auto GameMode = Utils::Cast<AFortGameModeAthena>(UWorld::GetWorld()->AuthorityGameMode);

			GameState->WarmupCountdownEndTime = TimeSeconds + Duration;
			GameMode->WarmupCountdownDuration = Duration;

			GameState->WarmupCountdownStartTime = TimeSeconds;
			GameMode->WarmupEarlyCountdownDuration = EarlyDuration;

			TArray<AActor*> PlayerStarts;
			UGameplayStatics::GetAllActorsOfClass(UWorld::GetWorld(), AFortPlayerStartWarmup::StaticClass(), &PlayerStarts);
			auto GameSession = Utils::Cast<AFortGameSessionDedicatedAthena>(GameMode->GameSession);
			for (size_t i = 0; i < Utils::Cast<AFortGameStateAthena>(GameMode->GameState)->CurrentPlaylistInfo.BasePlaylist->MaxPlayers - GameMode->AlivePlayers.Num(); i++) {
				auto start = PlayerStarts.At(i);
				//auto start = PlayerStarts[UKismetMathLibrary::RandomIntegerInRange(0, PlayerStarts.Num() - 1)];
				FTransform Transform{};
				Transform.Translation = start->K2_GetActorLocation();
				Transform.Rotation = FQuat();
				Transform.Scale3D = FVector{ 1,1,1 };

				static auto PhoebeSpawnerData = StaticLoadObject<UClass>("/Game/Athena/AI/Phoebe/BP_AISpawnerData_Phoebe.BP_AISpawnerData_Phoebe_C");

				((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(UFortAthenaAIBotSpawnerData::CreateComponentListFromClass(PhoebeSpawnerData, UWorld::GetWorld()), Transform);
				//auto Pawn = ((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->PlayerBotManager->CachedBotMutator->SpawnBot(StaticLoadObject<UClass>("/Game/Athena/AI/Phoebe/BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C"), start, Transform.Translation, (FRotator&)FRotator(), false);
				//printf("PAWN: %s\n", Pawn->GetName().c_str());
			}

			PlayerStarts.Free();
		}

		// GameState->WarmupCountdownEndTime = 10.0f;
	}
}

/*void PlayerController::ServerRepairBuildingActor(AFortPlayerController* PC, ABuildingSMActor* Actor)
{
	if (!Actor)
		return;

	static int32(*GetRepairCostOG)(void*, void*) = decltype(GetRepairCostOG)(__int64((*(void***)Actor)[0xC80 / 8]));
	auto RepairCost = GetRepairCostOG(Actor, PC);
	if (RepairCost <= 0)
		return;

	auto ResDef = UFortKismetLibrary::K2_GetResourceItemDefinition(Actor->ResourceType);
	if (!ResDef)
		return;

	Inventory::RemoveItem(PC, ResDef, RepairCost);
	Actor->RepairBuilding(PC, RepairCost);
}*/

/*
__int64 *__fastcall TeamIdxArrayCheck(__int64 GameState, unsigned __int8 TeamIndex)
{
  __int64 v2; // r8
  int v3; // eax
  __int64 *result; // rax

  if ( TeamIndex >= *(int *)(GameState + 0x15E0) )// Max team indexes ig???
    goto LABEL_13;
  v2 = GameState + 0x15C8;
  if ( *(_QWORD *)(GameState + 0x15D8) )//always false
    v2 = *(_QWORD *)(GameState + 0x15D8);
  v3 = *(_DWORD *)(v2 + 4 * ((unsigned __int64)TeamIndex >> 5));
  if ( !_bittest(&v3, TeamIndex & 0x1F)
    || (result = (__int64 *)(*(_QWORD *)(GameState + 0x15B8) + 0x10i64 * TeamIndex)) == 0i64 )
  {
LABEL_13:
    if ( dword_7FF76EBD3D20 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                        + 44i64)
      && (Init_thread_header(&dword_7FF76EBD3D20), dword_7FF76EBD3D20 == -1) )
    {
      atexit(sub_7FF76BC9BAB0);
      Init_thread_footer(&dword_7FF76EBD3D20);
      return &qword_7FF76EBD3D10;               // zero
    }
    else
    {
      return &qword_7FF76EBD3D10;               // zero
    }
  }
  return result;
}
*/

void PlayerController::ServerAttemptAircraftJump(UFortControllerComponent_Aircraft* Comp, FRotator ClientRot)
{
	auto PC = (AFortPlayerControllerAthena*)Comp->GetOwner();
	
	#ifdef USING_EZAntiCheat
		if (!FEasyAntiCheatServer::Get()->IsClientAuthenticated(PC)) {
			EasyAntiCheatHelpers->KickPlayer(UWorld::GetWorld(), PC, FString(L"Failed"));
		}
	#endif

	((AFortGameModeAthena*)UWorld::GetWorld()->AuthorityGameMode)->RestartPlayer(PC);
	if (PC->MyFortPawn)
	{
		PC->MyFortPawn->BeginSkydiving(true);
	}
}

void PlayerController::ServerLoadingScreenDropped(AFortPlayerController* PlayerController)
{
	if (PlayerController->bLoadingScreenDropped)
		return;

	auto PlayerState = (AFortPlayerStateAthena*)PlayerController->PlayerState;
	if (PlayerState)
	{
		auto CharacterDef = ((AFortPlayerControllerAthena*)PlayerController)->CosmeticLoadoutPC.Character;
		if (CharacterDef)
			PlayerState->HeroType = CharacterDef->HeroDefinition;
		UFortKismetLibrary::UpdatePlayerCustomCharacterPartsVisualization(PlayerState);
	}
	auto GameMode = Utils::Cast<AFortGameModeAthena>(UWorld::GetWorld()->AuthorityGameMode);
	for (size_t i = 0; i < GameMode->StartingItems.Num(); i++)
	{
		auto& Item = GameMode->StartingItems[i];
		Inventory::GiveItem(PlayerController, Item.Item, Item.Count);
	}
	Inventory::GiveItem(PlayerController, PlayerController->CosmeticLoadoutPC.Pickaxe->WeaponDefinition);
	((AFortPlayerControllerAthena*)PlayerController)->XPComponent->bRegisteredWithQuestManager = true;
	((AFortPlayerControllerAthena*)PlayerController)->XPComponent->OnRep_bRegisteredWithQuestManager();
	PlayerState->SeasonLevelUIDisplay = ((AFortPlayerControllerAthena*)PlayerController)->XPComponent->CurrentLevel;
	PlayerState->OnRep_SeasonLevelUIDisplay();
	static bool First = false;

	auto test = (UFortControllerComponent_InventoryService*)PlayerController->GetComponentByClass(UFortControllerComponent_InventoryService::StaticClass());

	if (test)
	{
		static auto GoldDef = test->GetDefaultGlobalCurrencyItemDefinition();
		Inventory::GiveItem(PlayerController, GoldDef, test->GlobalCurrencyData.Currency.Count);
	}

	if (!First && !UKismetStringLibrary::Conv_NameToString(Utils::Cast<AFortGameStateAthena>(GameMode->GameState)->CurrentPlaylistInfo.BasePlaylist->PlaylistName).ToString().contains("Showdown"))
	{
		First = true;

		auto SpawnerData = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Deadfire/BP_AIBotSpawnerData_Deadfire.BP_AIBotSpawnerData_Deadfire_C");
		auto SpawnerData2 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Guide/BP_AIBotSpawnerData_Guide.BP_AIBotSpawnerData_Guide_C");
		auto SpawnerData3 = StaticLoadObject<UClass>("/CosmosGameplay/AI/NPCs/Cosmos/AISpawnerData/BP_AIBotSpawnerData_Cosmos.BP_AIBotSpawnerData_Cosmos_C");
		auto SpawnerData4 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Gladiator/BP_AIBotSpawnerData_Gladiator.BP_AIBotSpawnerData_Gladiator_C");
		auto SpawnerData5 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Outlaw/BP_AIBotSpawnerData_Outlaw.BP_AIBotSpawnerData_Outlaw_C");
		auto SpawnerData6 = StaticLoadObject<UClass>("/NightmareGameplay/AI/NPCs/Nightmare/AISpawnerData/BP_AIBotSpawnerData_Nightmare.BP_AIBotSpawnerData_Nightmare_C");
		auto SpawnerData7 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Dummy/BP_AIBotSpawnerData_Dummy.BP_AIBotSpawnerData_Dummy_C");
		auto SpawnerData8 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Splode/BP_AIBotSpawnerData_Splode.BP_AIBotSpawnerData_Splode_C");
		auto SpawnerData9 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Remedy/BP_AIBotSpawnerData_Remedy.BP_AIBotSpawnerData_Remedy_C");
		auto SpawnerData10 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Doggo/BP_AIBotSpawnerData_Doggo.BP_AIBotSpawnerData_Doggo_C");
		auto SpawnerData11 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Fishstick/BP_AIBotSpawnerData_Fishstick.BP_AIBotSpawnerData_Fishstick_C");
		auto SpawnerData12 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Blaze/BP_AIBotSpawnerData_Blaze.BP_AIBotSpawnerData_Blaze_C");
		auto SpawnerData13 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Bullseye/BP_AIBotSpawnerData_Bullseye.BP_AIBotSpawnerData_Bullseye_C");
		auto SpawnerData14 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Burnout/BP_AIBotSpawnerData_Burnout.BP_AIBotSpawnerData_Burnout_C");
		auto SpawnerData15 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/TomatoHead/BP_AIBotSpawnerData_TomatoHead.BP_AIBotSpawnerData_TomatoHead_C");
		auto SpawnerData16 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Ragnarok/BP_AIBotSpawnerData_Ragnarok.BP_AIBotSpawnerData_Ragnarok_C");
		auto SpawnerData17 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Outcast/BP_AIBotSpawnerData_Outcast.BP_AIBotSpawnerData_Outcast_C");
		auto SpawnerData18 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Bigfoot/BP_AIBotSpawnerData_Bigfoot.BP_AIBotSpawnerData_Bigfoot_C");
		auto SpawnerData19 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/BeefBoss/BP_AIBotSpawnerData_BeefBoss.BP_AIBotSpawnerData_BeefBoss_C");
		auto SpawnerData20 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Kyle/BP_AIBotSpawnerData_Kyle.BP_AIBotSpawnerData_Kyle_C");
		auto SpawnerData21 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/BigChuggus/BP_AIBotSpawnerData_BigChuggus.BP_AIBotSpawnerData_BigChuggus_C");
		auto SpawnerData22 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Bandolier/BP_AIBotSpawnerData_Bandolier.BP_AIBotSpawnerData_Bandolier_C");
		auto SpawnerData23 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/RuckusH/BP_AIBotSpawnerData_NPC_RuckusH.BP_AIBotSpawnerData_NPC_RuckusH_C");
		auto SpawnerData24 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/FutureSamurai/BP_AIBotSpawnerData_FutureSamurai.BP_AIBotSpawnerData_FutureSamurai_C");
		auto SpawnerData25 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Longshot/BP_AIBotSpawnerData_Longshot.BP_AIBotSpawnerData_Longshot_C");
		auto SpawnerData26 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Turk/BP_AIBotSpawnerData_Turk.BP_AIBotSpawnerData_Turk_C");
		auto SpawnerData27 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Cole/BP_AIBotSpawnerData_Cole.BP_AIBotSpawnerData_Cole_C");
		auto SpawnerData28 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/TheReaper/BP_AIBotSpawnerData_TheReaper.BP_AIBotSpawnerData_TheReaper_C");
		auto SpawnerData29 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Triggerfish/BP_AIBotSpawnerData_Triggerfish.BP_AIBotSpawnerData_Triggerfish_C");
		auto SpawnerData30 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Grimbles/BP_AIBotSpawnerData_Grimbles.BP_AIBotSpawnerData_Grimbles_C");
		auto SpawnerData31 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Sleuth/BP_AIBotSpawnerData_Sleuth.BP_AIBotSpawnerData_Sleuth_C");
		auto SpawnerData32 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Bushranger/BP_AIBotSpawnerData_Bushranger.BP_AIBotSpawnerData_Bushranger_C");
		auto SpawnerData33 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/BunkerJonesy/BP_AIBotSpawnerData_BunkerJonesy.BP_AIBotSpawnerData_BunkerJonesy_C");
		auto SpawnerData34 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Kit/BP_AIBotSpawnerData_Kit.BP_AIBotSpawnerData_Kit_C");
		auto SpawnerData35 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Shapeshifter/BP_AIBotSpawnerData_Shapeshifter.BP_AIBotSpawnerData_Shapeshifter_C");
		auto SpawnerData36 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Brutus/BP_AIBotSpawnerData_Brutus.BP_AIBotSpawnerData_Brutus_C");
		auto SpawnerData37 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/WeaponsExpert/BP_AIBotSpawnerData_WeaponsExpert.BP_AIBotSpawnerData_WeaponsExpert_C");
		auto SpawnerData38 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/FarmerSteel/BP_AIBotSpawnerData_FarmerSteel.BP_AIBotSpawnerData_FarmerSteel_C");
		auto SpawnerData39 = StaticLoadObject<UClass>("/BattlepassS15/AI/NPCs/Sunflower/BP_AIBotSpawnerData_Sunflower.BP_AIBotSpawnerData_Sunflower_C");
		auto list = ((UFortAthenaAIBotSpawnerData*)SpawnerData)->CreateComponentListFromClass(SpawnerData, UWorld::GetWorld());
		auto list2 = ((UFortAthenaAIBotSpawnerData*)SpawnerData2)->GetDefaultObj()->CreateComponentListFromClass(SpawnerData2, UWorld::GetWorld());
		auto list3 = ((UFortAthenaAIBotSpawnerData*)SpawnerData3)->GetDefaultObj()->CreateComponentListFromClass(SpawnerData3, UWorld::GetWorld());
		auto list4 = ((UFortAthenaAIBotSpawnerData*)SpawnerData4)->CreateComponentListFromClass(SpawnerData4, UWorld::GetWorld());
		auto list5 = ((UFortAthenaAIBotSpawnerData*)SpawnerData5)->CreateComponentListFromClass(SpawnerData5, UWorld::GetWorld());
		auto list6 = ((UFortAthenaAIBotSpawnerData*)SpawnerData6)->CreateComponentListFromClass(SpawnerData6, UWorld::GetWorld());
		auto list7 = ((UFortAthenaAIBotSpawnerData*)SpawnerData7)->CreateComponentListFromClass(SpawnerData7, UWorld::GetWorld());
		auto list8 = ((UFortAthenaAIBotSpawnerData*)SpawnerData8)->CreateComponentListFromClass(SpawnerData8, UWorld::GetWorld());
		auto list9 = ((UFortAthenaAIBotSpawnerData*)SpawnerData9)->CreateComponentListFromClass(SpawnerData9, UWorld::GetWorld());
		auto list10 = ((UFortAthenaAIBotSpawnerData*)SpawnerData10)->CreateComponentListFromClass(SpawnerData10, UWorld::GetWorld());
		auto list11 = ((UFortAthenaAIBotSpawnerData*)SpawnerData11)->CreateComponentListFromClass(SpawnerData11, UWorld::GetWorld());
		auto list12 = ((UFortAthenaAIBotSpawnerData*)SpawnerData12)->CreateComponentListFromClass(SpawnerData12, UWorld::GetWorld());
		auto list13 = ((UFortAthenaAIBotSpawnerData*)SpawnerData13)->CreateComponentListFromClass(SpawnerData13, UWorld::GetWorld());
		auto list14 = ((UFortAthenaAIBotSpawnerData*)SpawnerData14)->CreateComponentListFromClass(SpawnerData14, UWorld::GetWorld());
		auto list15 = ((UFortAthenaAIBotSpawnerData*)SpawnerData15)->CreateComponentListFromClass(SpawnerData15, UWorld::GetWorld());
		auto list16 = ((UFortAthenaAIBotSpawnerData*)SpawnerData16)->CreateComponentListFromClass(SpawnerData16, UWorld::GetWorld());
		auto list17 = ((UFortAthenaAIBotSpawnerData*)SpawnerData17)->CreateComponentListFromClass(SpawnerData17, UWorld::GetWorld());
		auto list18 = ((UFortAthenaAIBotSpawnerData*)SpawnerData18)->CreateComponentListFromClass(SpawnerData18, UWorld::GetWorld());
		auto list19 = ((UFortAthenaAIBotSpawnerData*)SpawnerData19)->CreateComponentListFromClass(SpawnerData19, UWorld::GetWorld());
		auto list20 = ((UFortAthenaAIBotSpawnerData*)SpawnerData20)->CreateComponentListFromClass(SpawnerData20, UWorld::GetWorld());
		auto list21 = ((UFortAthenaAIBotSpawnerData*)SpawnerData21)->CreateComponentListFromClass(SpawnerData21, UWorld::GetWorld());
		auto list22 = ((UFortAthenaAIBotSpawnerData*)SpawnerData22)->CreateComponentListFromClass(SpawnerData22, UWorld::GetWorld());
		auto list23 = ((UFortAthenaAIBotSpawnerData*)SpawnerData23)->CreateComponentListFromClass(SpawnerData23, UWorld::GetWorld());
		auto list24 = ((UFortAthenaAIBotSpawnerData*)SpawnerData24)->CreateComponentListFromClass(SpawnerData24, UWorld::GetWorld());
		auto list25 = ((UFortAthenaAIBotSpawnerData*)SpawnerData25)->CreateComponentListFromClass(SpawnerData25, UWorld::GetWorld());
		auto list26 = ((UFortAthenaAIBotSpawnerData*)SpawnerData26)->CreateComponentListFromClass(SpawnerData26, UWorld::GetWorld());
		auto list27 = ((UFortAthenaAIBotSpawnerData*)SpawnerData27)->CreateComponentListFromClass(SpawnerData27, UWorld::GetWorld());
		auto list28 = ((UFortAthenaAIBotSpawnerData*)SpawnerData28)->CreateComponentListFromClass(SpawnerData28, UWorld::GetWorld());
		auto list29 = ((UFortAthenaAIBotSpawnerData*)SpawnerData29)->CreateComponentListFromClass(SpawnerData29, UWorld::GetWorld());
		auto list30 = ((UFortAthenaAIBotSpawnerData*)SpawnerData30)->CreateComponentListFromClass(SpawnerData30, UWorld::GetWorld());
		auto list31 = ((UFortAthenaAIBotSpawnerData*)SpawnerData31)->CreateComponentListFromClass(SpawnerData31, UWorld::GetWorld());
		auto list32 = ((UFortAthenaAIBotSpawnerData*)SpawnerData32)->CreateComponentListFromClass(SpawnerData32, UWorld::GetWorld());
		auto list33 = ((UFortAthenaAIBotSpawnerData*)SpawnerData33)->CreateComponentListFromClass(SpawnerData33, UWorld::GetWorld());
		auto list34 = ((UFortAthenaAIBotSpawnerData*)SpawnerData34)->CreateComponentListFromClass(SpawnerData34, UWorld::GetWorld());
		auto list35 = ((UFortAthenaAIBotSpawnerData*)SpawnerData35)->CreateComponentListFromClass(SpawnerData35, UWorld::GetWorld());
		auto list36 = ((UFortAthenaAIBotSpawnerData*)SpawnerData36)->CreateComponentListFromClass(SpawnerData36, UWorld::GetWorld());
		auto list37 = ((UFortAthenaAIBotSpawnerData*)SpawnerData37)->CreateComponentListFromClass(SpawnerData37, UWorld::GetWorld());
		auto list38 = ((UFortAthenaAIBotSpawnerData*)SpawnerData38)->CreateComponentListFromClass(SpawnerData38, UWorld::GetWorld());
		auto list39 = ((UFortAthenaAIBotSpawnerData*)SpawnerData39)->CreateComponentListFromClass(SpawnerData39, UWorld::GetWorld());
		
		FTransform Transform{};
		Transform.Translation = FVector{ 19972, 25561, -376 };
		Transform.Rotation = FQuat();
		Transform.Scale3D = FVector{ 1,1,1 };

		FTransform Transform2{};
		Transform2.Translation = FVector{ -37632, 10752, 4992 };
		Transform2.Rotation = FQuat();
		Transform2.Scale3D = FVector{ 1,1,1 };

		FTransform Transform3{};
		Transform3.Translation = FVector{ 5632, 54016, -1536 };
		Transform3.Rotation = FQuat();
		Transform3.Scale3D = FVector{ 1,1,1 };

		FTransform Transform4{};
		Transform4.Translation = FVector{ 28160, 42752 ,-1152 };
		Transform4.Rotation = FQuat();
		Transform4.Scale3D = FVector{ 1,1,1 };

		FTransform Transform5{};
		Transform5.Translation = FVector{ -7935, 14592 ,-2304 };
		Transform5.Rotation = FQuat();
		Transform5.Scale3D = FVector{ 1,1,1 };

		FTransform Transform6{};
		Transform6.Translation = FVector{ 102656, -31744, -1152 };
		Transform6.Rotation = FQuat();
		Transform6.Scale3D = FVector{ 1,1,1 };

		FTransform Transform7{};
		Transform7.Translation = FVector{ 65024, -32512, 100 };
		Transform7.Rotation = FQuat();
		Transform7.Scale3D = FVector{ 1,1,1 };

		FTransform Transform8{};
		Transform8.Translation = FVector{ 112640 - 4351 - 3072 };
		Transform8.Rotation = FQuat();
		Transform8.Scale3D = FVector{ 1,1,1 };

		FTransform Transform9{};
		Transform9.Translation = FVector{ 83968, -256 ,1152 };
		Transform9.Rotation = FQuat();
		Transform9.Scale3D = FVector{ 1,1,1 };

		FTransform Transform10{};
		Transform10.Translation = FVector{ 69375, -10496, -2304 };
		Transform10.Rotation = FQuat();
		Transform10.Scale3D = FVector{ 1,1,1 };

		FTransform Transform11{};
		Transform11.Translation = FVector{ 104448 ,26880 ,-1920 };
		Transform11.Rotation = FQuat();
		Transform11.Scale3D = FVector{ 1,1,1 };

		FTransform Transform12{};
		Transform12.Translation = FVector{ 107776, 74240, -1160 };
		Transform12.Rotation = FQuat();
		Transform12.Scale3D = FVector{ 1,1,1 };

		FTransform Transform13{};
		Transform13.Translation = FVector{ 83200, 93440, -1536 };
		Transform13.Rotation = FQuat();
		Transform13.Scale3D = FVector{ 1,1,1 };

		FTransform Transform14{};
		Transform14.Translation = FVector{ 65536, 84736, -2304 };
		Transform14.Rotation = FQuat();
		Transform14.Scale3D = FVector{ 1,1,1 };

		FTransform Transform15{};
		Transform15.Translation = FVector{ 51712, 54528, -768 };
		Transform15.Rotation = FQuat();
		Transform15.Scale3D = FVector{ 1,1,1 };

		FTransform Transform16{};
		Transform16.Translation = FVector{ -13926 ,-96267 ,-384 };
		Transform16.Rotation = FQuat();
		Transform16.Scale3D = FVector{ 1,1,1 };

		FTransform Transform17{};
		Transform17.Translation = FVector{ -768 ,-55296 ,-1920 };
		Transform17.Rotation = FQuat();
		Transform17.Scale3D = FVector{ 1,1,1 };

		FTransform Transform18{};
		Transform18.Translation = FVector{ -21950, -55905, -2672 };
		Transform18.Rotation = FQuat();
		Transform18.Scale3D = FVector{ 1,1,1 };

		FTransform Transform19{};
		Transform19.Translation = FVector{ -38411, -70157, -2679 };
		Transform19.Rotation = FQuat();
		Transform19.Scale3D = FVector{ 1,1,1 };

		FTransform Transform20{};
		Transform20.Translation = FVector{ -33536, -24576, -2304 };
		Transform20.Rotation = FQuat();
		Transform20.Scale3D = FVector{ 1,1,1 };

		FTransform Transform21{};
		Transform21.Translation = FVector{ -63488, -43264, -3072 };
		Transform21.Rotation = FQuat();
		Transform21.Scale3D = FVector{ 1,1,1 };

		FTransform Transform22{};
		Transform22.Translation = FVector{ -87552, -29952, -3840 };
		Transform22.Rotation = FQuat();
		Transform22.Scale3D = FVector{ 1,1,1 };

		FTransform Transform23{};
		Transform23.Translation = FVector{ -71680, -12031, -3456 };
		Transform23.Rotation = FQuat();
		Transform23.Scale3D = FVector{ 1,1,1 };

		FTransform Transform24{};
		Transform24.Translation = FVector{ -88126, 32251, 1552 };
		Transform24.Rotation = FQuat();
		Transform24.Scale3D = FVector{ 1,1,1 };

		FTransform Transform25{};
		Transform25.Translation = FVector{ -87296, 44032, 6144 };
		Transform25.Rotation = FQuat();
		Transform25.Scale3D = FVector{ 1,1,1 };

		FTransform Transform26{};
		Transform26.Translation = FVector{ -64512, 30976, 384 };
		Transform26.Rotation = FQuat();
		Transform26.Scale3D = FVector{ 1,1,1 };

		FTransform Transform27{};
		Transform27.Translation = FVector{ -22528, 92416, 7296 };
		Transform27.Rotation = FQuat();
		Transform27.Scale3D = FVector{ 1,1,1 };

		FTransform Transform28{};
		Transform28.Translation = FVector{ 19968, -114432, -1920 };
		Transform28.Rotation = FQuat();
		Transform28.Scale3D = FVector{ 1,1,1 };

		FTransform Transform29{};
		Transform29.Translation = FVector{ 32768, -112384, -3840 };
		Transform29.Rotation = FQuat();
		Transform29.Scale3D = FVector{ 1,1,1 };

		FTransform Transform30{};
		Transform30.Translation = FVector{ 50176, 108800, -768 };
		Transform30.Rotation = FQuat();
		Transform30.Scale3D = FVector{ 1,1,1 };

		FTransform Transform31{};
		Transform31.Translation = FVector{ 33536, -73727, -3456 };
		Transform31.Rotation = FQuat();
		Transform31.Scale3D = FVector{ 1,1,1 };

		FTransform Transform32{};
		Transform32.Translation = FVector{ 18944, -35584, 0 };
		Transform32.Rotation = FQuat();
		Transform32.Scale3D = FVector{ 1,1,1 };

		FTransform Transform33{};
		Transform33.Translation = FVector{ -125696, 69119, -1920 };
		Transform33.Rotation = FQuat();
		Transform33.Scale3D = FVector{ 1,1,1 };

		FTransform Transform34{};
		Transform34.Translation = FVector{ -77824, 79104, 4992 };
		Transform34.Rotation = FQuat();
		Transform34.Scale3D = FVector{ 1,1,1 };

		FTransform Transform35{};
		Transform35.Translation = FVector{ -89088, 97024, 3456 };
		Transform35.Rotation = FQuat();
		Transform35.Scale3D = FVector{ 1,1,1 };

		FTransform Transform36{};
		Transform36.Translation = FVector{ 3326, 113663, -3072 };
		Transform36.Rotation = FQuat();
		Transform36.Scale3D = FVector{ 1,1,1 };

		FTransform Transform37{};
		Transform37.Translation = FVector{ 18686, 121342, -2304 };
		Transform37.Rotation = FQuat();
		Transform37.Scale3D = FVector{ 1,1,1 };

		FTransform Transform38{};
		Transform38.Translation = FVector{ 42752, 67072, -1152 };
		Transform38.Rotation = FQuat();
		Transform38.Scale3D = FVector{ 1,1,1 };

		FTransform Transform39{};
		Transform39.Translation = FVector{ 59648, 55296, -768 };
		Transform39.Rotation = FQuat();
		Transform39.Scale3D = FVector{ 1,1,1 };
		GlobalList = list;
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list, Transform);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list2, Transform2);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list3, Transform3);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list4, Transform4);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list5, Transform5);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list6, Transform6);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list7, Transform7);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list8, Transform8);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list9, Transform9);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list10, Transform10);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list11, Transform11);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list12, Transform12);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list13, Transform13);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list14, Transform14);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list15, Transform15);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list16, Transform16);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list17, Transform17);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list18, Transform18);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list19, Transform19);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list20, Transform20);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list21, Transform21);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list22, Transform22);
		//((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list23, Transform23);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list24, Transform24);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list25, Transform25);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list26, Transform26);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list27, Transform27);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list28, Transform28);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list29, Transform29);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list30, Transform30);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list31, Transform31);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list32, Transform32);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list33, Transform33);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list34, Transform34);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list35, Transform35);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list36, Transform36);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list37, Transform37);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list38, Transform38);
		((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(list39, Transform39);
	}
	auto InvServiceComp = ((UFortControllerComponent_InventoryService*)PlayerController->GetComponentByClass(UFortControllerComponent_InventoryService::StaticClass()));
	Inventory::GiveItem(PlayerController, InvServiceComp->GetDefaultGlobalCurrencyItemDefinition(), 5000);

	

	auto QuestManager = PlayerController->GetQuestManager(ESubGame::Athena);
	if (!QuestManager)
		return;
	QuestManager->InitializeQuestAbilities(PlayerController->Pawn);//doesnt do anything such a W
	for (auto Quest : QuestManager->CurrentQuests)
	{
		FString AssetPathNameWStr = UKismetStringLibrary::Conv_NameToString(Quest->GetQuestDefinitionBP()->QuestAbilitySet.ObjectID.AssetPathName);
		UFortAbilitySet* QuestSet = StaticLoadObject<UFortAbilitySet>(AssetPathNameWStr.ToString());
		AssetPathNameWStr.Free();
		if (!QuestSet)
			continue;
		FFortAbilitySetHandle Real{};
		for (auto Ability : QuestSet->GameplayAbilities)
		{
			auto Handle = Abilities::GiveAbility(PlayerController->MyFortPawn->AbilitySystemComponent, Ability);
			Real.GrantedAbilityHandles.Add(Handle);
			for (auto ab : PlayerController->MyFortPawn->AbilitySystemComponent->ActivatableAbilities.Items)
			{
				if (ab.Handle.Handle == Handle.Handle)
				{
					static auto Offset1 = GetOffset(ab.Ability, "OwningPlayerQuestManager");
					static auto Offset2 = GetOffset(ab.Ability, "OwningPlayerPawn");
					*(UObject**)(__int64(ab.Ability) + Offset1) = QuestManager;
					*(UObject**)(__int64(ab.Ability) + Offset2) = PlayerController->Pawn;
					break;
				}
			}
		}
		TWeakObjectPtr<UAbilitySystemComponent> Bruh;
		Bruh.ObjectIndex = PlayerController->MyFortPawn->AbilitySystemComponent->Index;
		Bruh.ObjectSerialNumber = UObject::GObjects->GetSerialByIdx(Bruh.ObjectIndex);
		Real.TargetAbilitySystemComponent = Bruh;
	}
	
	for (auto Quest : QuestManager->CurrentQuests)
	{
		for (auto Obj : Quest->Objectives)
		{
			Obj->QuestOwner = PlayerState;
		}
		Quest->bHasRegisteredWithQuestManager = true;
	}
	return ServerLoadingScreenDroppedOG(PlayerController);
}

void PlayerController::ServerPlayEmoteItemHook(AFortPlayerController* PlayerController, UFortItemDefinition* EmoteAsset, float RandomEmoteNumber)
{
	if (!PlayerController->MyFortPawn)
		return;
	static UClass* AbilityClass = StaticLoadObject<UClass>("/Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C");
	
	if (EmoteAsset->IsA(UAthenaSprayItemDefinition::StaticClass()))
		AbilityClass = UGAB_Spray_Generic_C::StaticClass();

	FGameplayAbilitySpec Spec{};
	FGameplayAbilitySpec* (*FGameplayAbilitySpecCtor)(FGameplayAbilitySpec * Spec, UGameplayAbility * Ability, int Level, int InputID, UObject * SourceObject) = decltype(FGameplayAbilitySpecCtor)(__int64(GetModuleHandleW(0)) + 0xC18600);
	FGameplayAbilitySpecCtor(&Spec, (UGameplayAbility*)AbilityClass->DefaultObject, 1, -1, EmoteAsset);
	FGameplayAbilitySpecHandle(*GiveAbilityAndActivateOnce)(UAbilitySystemComponent * ASC, FGameplayAbilitySpecHandle*, FGameplayAbilitySpec, __int64) = decltype(GiveAbilityAndActivateOnce)(__int64(GetModuleHandleW(0)) + 0xC3C010);
	GiveAbilityAndActivateOnce(((AFortPlayerStateAthena*)PlayerController->PlayerState)->AbilitySystemComponent, &Spec.Handle, Spec, 0);
}

FGameplayAbilitySpecHandle PlayerController::Abilities::GiveAbility(UAbilitySystemComponent* AbilitySystemComponent, UClass* AbilityClass, UObject* SourceObject, bool RemoveAfterActivation)
{
	if (!AbilityClass)
		return FGameplayAbilitySpecHandle();

	for (auto& Ability : AbilitySystemComponent->ActivatableAbilities.Items)
	{
		if (Ability.Ability->Class == AbilityClass)
			return FGameplayAbilitySpecHandle();
	}

	FGameplayAbilitySpec Spec{};
	FGameplayAbilitySpec* (*FGameplayAbilitySpecCtor)(FGameplayAbilitySpec * Spec, UGameplayAbility * Ability, int Level, int InputID, UObject * SourceObject) = decltype(FGameplayAbilitySpecCtor)(__int64(GetModuleHandleW(0)) + 0xC18600);
	FGameplayAbilitySpecCtor(&Spec, (UGameplayAbility*)AbilityClass->DefaultObject, 1, -1, SourceObject);
	Spec.RemoveAfterActivation = RemoveAfterActivation;
	GiveAbilityOG = decltype(GiveAbilityOG)(__int64(GetModuleHandleW(0)) + 0xC3BEE0);
	FGameplayAbilitySpecHandle OutHandle;
	GiveAbilityOG(AbilitySystemComponent, &OutHandle, Spec);

	return OutHandle;
}

FGameplayAbilitySpec* PlayerController::Abilities::FindAbilityFromSpecHandle(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle& SpecHandle)
{
	for (int i = 0; i < AbilitySystemComponent->ActivatableAbilities.Items.Num(); i++)
	{

		if (AbilitySystemComponent->ActivatableAbilities.Items[i].Handle.Handle == SpecHandle.Handle)
		{
			return &AbilitySystemComponent->ActivatableAbilities.Items[i];
		}
	}
	return nullptr;
}

FGameplayAbilitySpec* PlayerController::Abilities::FindAbilityFromClass(UAbilitySystemComponent* AbilitySystemComponent, UClass* Class)
{
	for (int i = 0; i < AbilitySystemComponent->ActivatableAbilities.Items.Num(); i++)
	{

		if (AbilitySystemComponent->ActivatableAbilities.Items[i].Ability->Class == Class)
		{
			return &AbilitySystemComponent->ActivatableAbilities.Items[i];
		}
	}
	return nullptr;
}

void PlayerController::Abilities::InternalServerTryActivateAbilityHook(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle, bool InputPressed, FPredictionKey& PredictionKey, FGameplayEventData* TriggerEventData)
{
	auto Spec = FindAbilityFromSpecHandle(AbilitySystemComponent, Handle);
	if (!Spec)
		return AbilitySystemComponent->ClientActivateAbilityFailed(Handle, PredictionKey.Current);

	UGameplayAbility* AbilityToActivate = Spec->Ability;

	UGameplayAbility* InstancedAbility = nullptr;
	Spec->InputPressed = true;


	if (!InternalTryActivateAbility(AbilitySystemComponent, Handle, PredictionKey, &InstancedAbility, nullptr, TriggerEventData))
	{
		AbilitySystemComponent->ClientActivateAbilityFailed(Handle, PredictionKey.Current);
		Spec->InputPressed = false;
		AbilitySystemComponent->ActivatableAbilities.MarkItemDirty((*Spec));
	}
}

void PlayerController::ServerExecuteInventoryItem(AFortPlayerController* PC, FGuid Guid)
{
	if (!PC || !PC->MyFortPawn || PC->IsInAircraft())
		return;
	for (size_t i = 0; i < PC->WorldInventory->Inventory.ReplicatedEntries.Num(); i++)
	{
		if (!PC->WorldInventory->Inventory.ReplicatedEntries[i].ItemDefinition)
			continue;
		if (PC->WorldInventory->Inventory.ReplicatedEntries[i].ItemGuid == Guid)
		{
			UFortWeaponItemDefinition* WeaponDef = Utils::Cast<UFortWeaponItemDefinition>(PC->WorldInventory->Inventory.ReplicatedEntries[i].ItemDefinition);
			if (PC->WorldInventory->Inventory.ReplicatedEntries[i].ItemDefinition->IsA(UFortGadgetItemDefinition::StaticClass()))
			{
				printf("gadget: %s\n", PC->WorldInventory->Inventory.ReplicatedEntries[i].ItemDefinition->GetName().c_str());
				FString WStr = UKismetStringLibrary::Conv_NameToString(Utils::Cast<UFortGadgetItemDefinition>(PC->WorldInventory->Inventory.ReplicatedEntries[i].ItemDefinition)->WeaponItemDefinition.ObjectID.AssetPathName);
				WeaponDef = StaticLoadObject<UFortWeaponItemDefinition>(WStr.ToString());
				WStr.Free();
			}
			if (PC->WorldInventory->Inventory.ReplicatedEntries[i].ItemDefinition->IsA(UFortDecoItemDefinition::StaticClass()))
			{
				PC->MyFortPawn->PickUpActor(nullptr, (UFortDecoItemDefinition*)PC->WorldInventory->Inventory.ReplicatedEntries[i].ItemDefinition);
				PC->MyFortPawn->CurrentWeapon->ItemEntryGuid = Guid;

				if (PC->MyFortPawn->CurrentWeapon->IsA(AFortDecoTool_ContextTrap::StaticClass()))
				{
					reinterpret_cast<AFortDecoTool_ContextTrap*>(PC->MyFortPawn->CurrentWeapon)->ContextTrapItemDefinition = (UFortContextTrapItemDefinition*)PC->WorldInventory->Inventory.ReplicatedEntries[i].ItemDefinition;
				}
			}
			if (!WeaponDef)
				return;
			PC->MyFortPawn->EquipWeaponDefinition(WeaponDef, Guid, PC->WorldInventory->Inventory.ReplicatedEntries[i].TrackerGuid);
			break;
		}
	}
}

void PlayerController::ServerCheat(AFortPlayerControllerAthena* PC, FString msg)
{
	auto PlayerState = Utils::Cast<AFortPlayerStateAthena>(PC->PlayerState);
	auto PlayerName = PlayerState->GetPlayerName().ToString();
	auto Pawn = (AFortPlayerPawnAthena*)PC->Pawn;
	if (true || PlayerName == "joel" || PlayerName == "MagmaDev" || PlayerName ==  "akos0511" || PlayerName == "jyzo" || PlayerName == "GD")
	{
		string MsgStr = msg.ToString();
		if (MsgStr == "StartAircraft")
		{
			UKismetSystemLibrary::ExecuteConsoleCommand(UWorld::GetWorld(), TEXT("startaircraft"), nullptr);
		}
		if (MsgStr == "godmode true")
		{
			PC->MyFortPawn->bIsInvulnerable = true;
			PC->MyFortPawn->OnRep_bIsInvulnerable();
		}
		if (MsgStr == "godmode false")
		{
			PC->MyFortPawn->bIsInvulnerable = false;
			PC->MyFortPawn->OnRep_bIsInvulnerable();
		}
		if (MsgStr == "poi")
		{
			TArray<AFortPoiVolume*> Actor;
			UGameplayStatics::GetAllActorsOfClass(UWorld::GetWorld(), AFortPoiVolume::StaticClass(), (TArray<AActor*>*)&Actor);
			for (auto poi : Actor)
			{
				printf("size: %g, %g\n", poi->CurrentFortPoiVolumeSize, poi->K2_GetActorLocation().Magnitude());
			}
			Actor.Free();
		}
		if (MsgStr == "thanos")
		{
			static auto wid = StaticLoadObject<UAthenaGadgetItemDefinition>("/Game/Athena/Items/Gameplay/BackPacks/Ashton/Hippo/AGID_AshtonPack_Hippo.AGID_AshtonPack_Hippo");
			static auto wid2 = StaticLoadObject<UAthenaGadgetItemDefinition>("/Game/Athena/Items/Gameplay/BackPacks/Ashton/Turbo/AGID_AshtonPack_Turbo.AGID_AshtonPack_Turbo");
			static auto wid3 = StaticLoadObject<UAthenaGadgetItemDefinition>("/Game/Athena/Items/Gameplay/BackPacks/Ashton/Indigo/AGID_AshtonPack_Indigo.AGID_AshtonPack_Indigo");
			static auto wid4 = StaticLoadObject<UAthenaGadgetItemDefinition>("/Game/Athena/Items/Gameplay/BackPacks/Ashton/Chicago/AGID_AshtonPack_Chicago.AGID_AshtonPack_Chicago");
			Inventory::GiveItem(PC, wid4);
			Inventory::GiveItem(PC, wid3);
			Inventory::GiveItem(PC, wid2);
			Inventory::GiveItem(PC, wid);
		}
		if (MsgStr == "spawnbot")
		{
			TArray<AActor*> PlayerStarts;
			UGameplayStatics::GetAllActorsOfClass(UWorld::GetWorld(), AFortPlayerStartWarmup::StaticClass(), &PlayerStarts);
			auto GameMode = Utils::Cast<AFortGameModeAthena>(UWorld::GetWorld()->AuthorityGameMode);
			auto GameSession = Utils::Cast<AFortGameSessionDedicatedAthena>(GameMode->GameSession);
			for (size_t i = 0; i < Utils::Cast<AFortGameStateAthena>(GameMode->GameState)->CurrentPlaylistInfo.BasePlaylist->MaxPlayers - GameMode->AlivePlayers.Num(); i++)
			{
				auto start = PlayerStarts.At(i);
				//auto start = PlayerStarts[UKismetMathLibrary::RandomIntegerInRange(0, PlayerStarts.Num() - 1)];
				FTransform Transform{};
				Transform.Translation = start->K2_GetActorLocation();
				Transform.Rotation = FQuat();
				Transform.Scale3D = FVector{ 1,1,1 };

				static auto PhoebeSpawnerData = StaticLoadObject<UClass>("/Game/Athena/AI/Phoebe/BP_AISpawnerData_Phoebe.BP_AISpawnerData_Phoebe_C");

				((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->AISpawner->RequestSpawn(UFortAthenaAIBotSpawnerData::CreateComponentListFromClass(PhoebeSpawnerData, UWorld::GetWorld()), Transform);
				//auto Pawn = ((UAthenaAISystem*)UWorld::GetWorld()->AISystem)->PlayerBotManager->CachedBotMutator->SpawnBot(StaticLoadObject<UClass>("/Game/Athena/AI/Phoebe/BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C"), start, Transform.Translation, (FRotator&)FRotator(), false);
				//printf("PAWN: %s\n", Pawn->GetName().c_str());
				
			}
			PlayerStarts.Free();
		}
		
	}
}

void PlayerController::ServerCreateBuildingActor(AFortPlayerControllerAthena* PC, FCreateBuildingActorData CreateBuildingData)
{
	if (!PC || PC->IsInAircraft())
		return;

	UClass* BuildingClass = PC->BroadcastRemoteClientInfo->RemoteBuildableClass.Get();
	char a7;
	TArray<AActor*> BuildingsToRemove;
	if (!CantBuild(UWorld::GetWorld(), BuildingClass, CreateBuildingData.BuildLoc, CreateBuildingData.BuildRot, CreateBuildingData.bMirrored, &BuildingsToRemove, &a7))
	{
		auto ResDef = UFortKismetLibrary::GetDefaultObj()->K2_GetResourceItemDefinition(((ABuildingSMActor*)BuildingClass->DefaultObject)->ResourceType);
		Inventory::RemoveItem(PC, ResDef, 10);

		ABuildingSMActor* NewBuilding = Utils::SpawnActor<ABuildingSMActor>(CreateBuildingData.BuildLoc, CreateBuildingData.BuildRot, PC, BuildingClass);

		NewBuilding->bPlayerPlaced = true;
		NewBuilding->InitializeKismetSpawnedBuildingActor(NewBuilding, PC, true);
		NewBuilding->TeamIndex = ((AFortPlayerStateAthena*)PC->PlayerState)->TeamIndex;
		NewBuilding->Team = EFortTeam(NewBuilding->TeamIndex);

		for (size_t i = 0; i < BuildingsToRemove.Num(); i++)
		{
			BuildingsToRemove[i]->K2_DestroyActor();
		}
		BuildingsToRemove.Free();
		FGameplayTagContainer Empty{};
		bool bor;
		XP::Challanges::SendStatEvent(PC->GetQuestManager(ESubGame::Athena), NewBuilding, Empty, Empty, &bor, &bor, 1, EFortQuestObjectiveStatEvent::Build);
	}
}

__int64 PlayerController::OnDamageServer(ABuildingSMActor* Actor, float Damage, FGameplayTagContainer DamageTags, FVector Momentum, FHitResult HitInfo, AFortPlayerControllerAthena* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext)
{
	if (!Actor || !Actor->IsA(ABuildingSMActor::StaticClass()) || !InstigatedBy || !InstigatedBy->IsA(AFortPlayerControllerAthena::StaticClass()) || !DamageCauser->IsA(AFortWeapon::StaticClass()) || !((AFortWeapon*)DamageCauser)->WeaponData->IsA(UFortWeaponMeleeItemDefinition::StaticClass()) || Actor->bPlayerPlaced)
		return OnDamageServerOG(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

	auto Def = UFortKismetLibrary::K2_GetResourceItemDefinition(Actor->ResourceType);

	if (Def)
	{
		auto& BuildingResourceAmountOverride = Actor->BuildingResourceAmountOverride;
		if (!BuildingResourceAmountOverride.RowName.ComparisonIndex)
			return OnDamageServerOG(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);
		auto GameState = (AFortGameStateAthena*)UWorld::GetWorld()->GameState;

		FString CurveTableAssetPath = UKismetStringLibrary::Conv_NameToString(GameState->CurrentPlaylistInfo.BasePlaylist->ResourceRates.ObjectID.AssetPathName);
		static auto CurveTable = StaticLoadObject<UCurveTable>(CurveTableAssetPath.ToString());
		CurveTableAssetPath.Free();
		if(!CurveTable)
			CurveTable = StaticLoadObject<UCurveTable>("/Game/Athena/Balance/DataTables/AthenaResourceRates.AthenaResourceRates");

		float Average = 1;
		EEvaluateCurveTableResult OutCurveTable;
		UDataTableFunctionLibrary::EvaluateCurveTableRow(CurveTable, BuildingResourceAmountOverride.RowName, 0.f, &OutCurveTable, &Average, FString());
		float FinalResourceCount = round(Average / (Actor->GetMaxHealth() / Damage));

		if (FinalResourceCount > 0)
		{
			InstigatedBy->ClientReportDamagedResourceBuilding(Actor, Actor->ResourceType, FinalResourceCount, false, Damage == 100.f);
			Inventory::GiveItemStack(InstigatedBy, Def, FinalResourceCount, 0);
		}
	}

	return OnDamageServerOG(Actor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);
}

void PlayerController::ServerBeginEditingBuildingActor(AFortPlayerControllerAthena* PC, ABuildingSMActor* BuildingActorToEdit)
{
	if (!BuildingActorToEdit || !BuildingActorToEdit->bPlayerPlaced || !PC->MyFortPawn)
		return;

	AFortPlayerStateAthena* PlayerState = (AFortPlayerStateAthena*)PC->PlayerState;
	BuildingActorToEdit->SetNetDormancy(ENetDormancy::DORM_Awake);
	BuildingActorToEdit->EditingPlayer = PlayerState;
	for (size_t i = 0; i < PC->WorldInventory->Inventory.ItemInstances.Num(); i++)
	{
		auto Item = PC->WorldInventory->Inventory.ItemInstances[i];
		if (Item->GetItemDefinitionBP()->IsA(UFortEditToolItemDefinition::StaticClass()))
		{
			PC->MyFortPawn->EquipWeaponDefinition((UFortWeaponItemDefinition*)Item->GetItemDefinitionBP(), Item->GetItemGuid(), Item->GetTrackerGuid());
			break;
		}
	}
	if (!PC->MyFortPawn->CurrentWeapon || !PC->MyFortPawn->CurrentWeapon->WeaponData || !PC->MyFortPawn->CurrentWeapon->IsA(AFortWeap_EditingTool::StaticClass()))
		return;

	AFortWeap_EditingTool* EditTool = (AFortWeap_EditingTool*)PC->MyFortPawn->CurrentWeapon;
	EditTool->EditActor = BuildingActorToEdit;
	EditTool->OnRep_EditActor();
}

void PlayerController::ServerEndEditingBuildingActor(AFortPlayerControllerAthena* PC, ABuildingSMActor* BuildingActorToEdit)
{
	if (!BuildingActorToEdit || !PC->MyFortPawn || BuildingActorToEdit->bDestroyed == 1 || BuildingActorToEdit->EditingPlayer != PC->PlayerState)
		return;
	BuildingActorToEdit->SetNetDormancy(ENetDormancy::DORM_DormantAll);
	BuildingActorToEdit->EditingPlayer = nullptr;
	for (size_t i = 0; i < PC->WorldInventory->Inventory.ItemInstances.Num(); i++)
	{
		auto Item = PC->WorldInventory->Inventory.ItemInstances[i];
		if (Item->GetItemDefinitionBP()->IsA(UFortEditToolItemDefinition::StaticClass()))
		{
			PC->MyFortPawn->EquipWeaponDefinition((UFortWeaponItemDefinition*)Item->GetItemDefinitionBP(), Item->GetItemGuid(), Item->GetTrackerGuid());
			break;
		}
	}
	if (!PC->MyFortPawn->CurrentWeapon || !PC->MyFortPawn->CurrentWeapon->WeaponData || !PC->MyFortPawn->CurrentWeapon->IsA(AFortWeap_EditingTool::StaticClass()))
		return;

	AFortWeap_EditingTool* EditTool = (AFortWeap_EditingTool*)PC->MyFortPawn->CurrentWeapon;
	
	EditTool->EditActor = nullptr;
	EditTool->OnRep_EditActor();
}

void PlayerController::ServerEditBuildingActor(AFortPlayerControllerAthena* PC, ABuildingSMActor* BuildingActorToEdit, TSubclassOf<ABuildingSMActor> NewBuildingClass, uint8 RotationIterations, bool bMirrored)
{
	if (!BuildingActorToEdit || BuildingActorToEdit->EditingPlayer != PC->PlayerState || !NewBuildingClass.Get() || BuildingActorToEdit->bDestroyed == 1)
		return;

	BuildingActorToEdit->SetNetDormancy(ENetDormancy::DORM_DormantAll);
	BuildingActorToEdit->EditingPlayer = nullptr;
	ABuildingSMActor* NewActor = ReplaceBuildingActor(BuildingActorToEdit, 1, NewBuildingClass.Get(), 0, RotationIterations, bMirrored, PC);
	if (NewActor)
		NewActor->bPlayerPlaced = true;
}

void PlayerController::ServerAttemptInventoryDrop(AFortPlayerControllerAthena* PC, FGuid ItemGuid, int Count, bool bTrash)
{
	if (Count < 1)
		return;
	if (!PC->WorldInventory)
		return;

	FFortItemEntry* Entry = Inventory::FindEntry(PC, ItemGuid);
	if (Entry->Count < Count)
		return;
	static auto petrolpickupclass = StaticLoadObject<UFortWeaponRangedItemDefinition>("/Game/Athena/Items/Weapons/Prototype/WID_Launcher_Petrol.WID_Launcher_Petrol");
	if (Entry->ItemDefinition == petrolpickupclass)
	{
		std::cout << Entry->ItemDefinition->GetFullName() << std::endl;
		FTransform Transform{};
		Transform.Translation = PC->Pawn->K2_GetActorLocation();
		Transform.Rotation = FQuat();
		Transform.Scale3D = FVector(1, 1, 1);
		UGameplayStatics::FinishSpawningActor(UGameplayStatics::BeginDeferredActorSpawnFromClass(UWorld::GetWorld(), ABGA_Petrol_Pickup_C::StaticClass(), Transform, ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn, nullptr), Transform);
		Inventory::RemoveItem(PC, ItemGuid, Count);
	}
	else {

		Utils::SpawnPickup(PC->Pawn->K2_GetActorLocation(), Entry->ItemDefinition, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::Unset, Count, Entry->LoadedAmmo);
		Inventory::RemoveItem(PC, ItemGuid, Count);
	}
}

void PlayerController::ServerRepairBuildingActorHook(AFortPlayerController* PC, ABuildingSMActor* Actor)
{
	if (!Actor)
		return;

	static int32(*GetRepairCostOG)(void*, void*) = decltype(GetRepairCostOG)(__int64((*(void***)Actor)[0xC80 / 8]));
	auto RepairCost = GetRepairCostOG(Actor, PC);
	if (RepairCost <= 0)
		return;

	auto ResDef = UFortKismetLibrary::K2_GetResourceItemDefinition(Actor->ResourceType);
	if (!ResDef)
		return;

	Inventory::RemoveItem(PC, ResDef, RepairCost);
	Actor->RepairBuilding(PC, RepairCost);
}

void PlayerController::ClientOnPawnDied(AFortPlayerControllerAthena* PC, FFortPlayerDeathReport DeathReport)
{
	auto GameState = (AFortGameStateAthena*)UWorld::GetWorld()->GameState;
	auto PlayerState = Utils::Cast<AFortPlayerStateAthena>(PC->PlayerState);
	
	PlayerState->DeathInfo.bDBNO = false;
	PlayerState->DeathInfo.bInitialized = true;
	PlayerState->DeathInfo.DeathTags = DeathReport.Tags;
	PlayerState->DeathInfo.DeathCause = PlayerState->ToDeathCause(DeathReport.Tags, PlayerState->DeathInfo.bDBNO);
	PlayerState->DeathInfo.DeathClassSlot = (uint8)PlayerState->DeathInfo.DeathCause;
	PlayerState->DeathInfo.DeathLocation = PC->Pawn->K2_GetActorLocation();
	PlayerState->DeathInfo.FinisherOrDowner = DeathReport.KillerPlayerState ? DeathReport.KillerPlayerState : PC->PlayerState;
	PlayerState->OnRep_DeathInfo();
	
	if (PC->WorldInventory)
	{
		for (auto entry : PC->WorldInventory->Inventory.ReplicatedEntries)
		{
			if (((UFortWeaponItemDefinition*)entry.ItemDefinition)->bCanBeDropped == 0)
				continue;
			Utils::SpawnPickup(PC->Pawn->K2_GetActorLocation(), entry.ItemDefinition, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::PlayerElimination, entry.Count, entry.LoadedAmmo);
			Inventory::RemoveItem(PC, entry.ItemGuid, entry.Count);
		}
	}

	bool AllDead = true;
	for (auto Member : PlayerState->PlayerTeam->TeamMembers)
	{
		if (Member != PC && ((AFortPlayerControllerAthena*)Member)->bMarkedAlive)
		{
			AllDead = false;
			break;
		}
	}

	if (AllDead)
	{
		for (auto Member : PlayerState->PlayerTeam->TeamMembers)
		{
			auto MemberPC = (AFortPlayerControllerAthena*)Member;
			((AFortPlayerStateAthena*)Member->PlayerState)->Place = ((AFortGameStateAthena*)UWorld::GetWorld()->GameState)->PlayersLeft;
			((AFortPlayerStateAthena*)Member->PlayerState)->OnRep_Place();

			FAthenaRewardResult Result{};
			Result.TotalSeasonXpGained = MemberPC->XPComponent->TotalXpEarned;
			Result.TotalBookXpGained = MemberPC->XPComponent->TotalXpEarned;
			FAthenaMatchStats Stats{};
			FAthenaMatchTeamStats TeamStats{};
			TeamStats.Place = PlayerState->Place;
			TeamStats.TotalPlayers = ((AFortGameStateAthena*)UWorld::GetWorld()->GameState)->TotalPlayers;
			Stats.bIsValid = true;
			MemberPC->ClientSendEndBattleRoyaleMatchForPlayer(true, Result);
			MemberPC->ClientSendMatchStatsForPlayer(Stats);
			MemberPC->ClientSendTeamStatsForPlayer(TeamStats);
			//TArray<FFortQuestObjectiveCompletion> Compl;
			//TArray<FAthenaAccolades> Accolades;
			//TArray<FString> Bro;
			//TArray<FFortTransientQuestGrant> tf;
			//TArray<FFortCreateItemDetail> wtf;
			//TArray<FSecondaryXpGained> Bro2;
			//wstring PlaylistId = to_wstring(GameState->CurrentPlaylistInfo.BasePlaylist->PlaylistId);
			//FDedicatedServerUrlContext Context{};
			//MemberPC->AthenaProfile->EndBattleRoyaleGameV2(Compl, PlaylistId.c_str(), Stats, Result.TotalBookXpGained, MemberPC->XPComponent->RestXP, 0, 0, 0, GameState->CurrentPlaylistInfo.BasePlaylist->bAccumulateToProfileStats, false, Accolades, Bro, 0, Bro, Bro, Bro2, wtf, tf, &Context);
		}
	}

	if (PC && DeathReport.KillerPlayerState)
	{
		PC->ClientReceiveKillNotification((AFortPlayerStateAthena*)DeathReport.KillerPlayerState, PlayerState);
		((AFortPlayerStateAthena*)DeathReport.KillerPlayerState)->ClientReportKill(PlayerState);
		((AFortPlayerStateAthena*)DeathReport.KillerPlayerState)->KillScore++;
		for (auto Member : ((AFortPlayerStateAthena*)DeathReport.KillerPlayerState)->PlayerTeam->TeamMembers)
		{
			((AFortPlayerStateAthena*)Member->PlayerState)->TeamKillScore++;
			((AFortPlayerStateAthena*)Member->PlayerState)->OnRep_TeamKillScore();
			((AFortPlayerStateAthena*)Member->PlayerState)->ClientReportTeamKill(((AFortPlayerStateAthena*)Member->PlayerState)->TeamKillScore);
		}
		((AFortPlayerStateAthena*)DeathReport.KillerPlayerState)->OnRep_Kills();
	}

	RemoveFromAlivePlayers(UWorld::GetWorld()->AuthorityGameMode, PC, PlayerState, DeathReport.KillerPawn, DeathReport.KillerWeapon, (uint8)PlayerState->DeathInfo.DeathCause, 0);
	PC->bMarkedAlive = false;
	ClientOnPawnDiedOG(PC, DeathReport);
	if (DeathReport.KillerPawn)
	{
		auto KillerPC = Utils::Cast<AFortPlayerControllerAthena>(DeathReport.KillerPawn->Controller);
		Misc::OnKilled(PC, KillerPC, DeathReport.KillerWeapon);
	}
}

void PlayerController::ServerReturnToMainMenu(AFortPlayerControllerAthena* PC)
{
	if (!PC || PC->bIsDisconnecting)
		return;
	
	PC->ClientReturnToMainMenu(FString());
}

void PlayerController::ServerReviveFromDBNO(AFortPlayerPawnAthena* Pawn, AFortPlayerControllerAthena* Instigator)
{
	float ServerTime = UGameplayStatics::GetTimeSeconds(UWorld::GetWorld());
	printf("ServerReviveFromDBNO called\n");
	if (!Pawn || !Instigator)
		return;

	AFortPlayerControllerAthena* PC = (AFortPlayerControllerAthena*)Pawn->Controller;
	if (!PC || !PC->PlayerState)
		return;
	auto PlayerState = (AFortPlayerStateAthena*)PC->PlayerState;
	auto AbilitySystemComp = (UFortAbilitySystemComponentAthena*)PlayerState->AbilitySystemComponent;

	//Pawn->ReviveFromDBNOTime = 30;
	//Pawn->ServerWorldTimeRevivalTime = 30;
	//Pawn->DBNORevivalStacking = 0;
	
	FGameplayEventData Data{};
	Data.EventTag = Pawn->EventReviveTag;
	Data.ContextHandle = PlayerState->AbilitySystemComponent->MakeEffectContext();
	Data.Instigator = Instigator;
	Data.Target = Pawn;
	Data.TargetData = UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActor(Pawn);
	Data.TargetTags = Pawn->GameplayTags;
	UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(Pawn, Pawn->EventReviveTag, Data);

	for (auto& Ability : AbilitySystemComp->ActivatableAbilities.Items)
	{
		if (Ability.Ability->Class == UGAB_AthenaDBNO_C::StaticClass())
		{
			printf("UGAB_AthenaDBNO_C\n");
			AbilitySystemComp->ServerCancelAbility(Ability.Handle, Ability.ActivationInfo);
			AbilitySystemComp->ServerEndAbility(Ability.Handle, Ability.ActivationInfo, Ability.ActivationInfo.PredictionKeyWhenActivated);
			AbilitySystemComp->ClientCancelAbility(Ability.Handle, Ability.ActivationInfo);
			AbilitySystemComp->ClientEndAbility(Ability.Handle, Ability.ActivationInfo);
			break;
		}
	}

	Pawn->bIsDBNO = false;
	Pawn->OnRep_IsDBNO();
	Pawn->SetHealth(30);
	PlayerState->DeathInfo = {};
	PlayerState->OnRep_DeathInfo();

	PC->ClientOnPawnRevived(Instigator);
}

void PlayerController::ServerSetInAircraft(AFortPlayerStateAthena* PlayerState, bool bInAircraft)
{
	ServerSetInAircraftOG(PlayerState, bInAircraft);
	auto GameState = ((AFortGameStateAthena*)UWorld::GetWorld()->GameState);
	auto GameMode = ((AFortGameModeAthena*)UWorld::GetWorld()->AuthorityGameMode);
	static bool First = false;
	if (!First)
	{
		First = true;
		GameState->GamePhaseStep = EAthenaGamePhaseStep::BusLocked;
		for (auto Bot : GameMode->AliveBots)
		{
			static auto Name1 = UKismetStringLibrary::Conv_StringToName(TEXT("AIEvaluator_Global_GamePhaseStep"));
			static auto Name2 = UKismetStringLibrary::Conv_StringToName(TEXT("AIEvaluator_Global_GamePhase"));
			Bot->Blackboard->SetValueAsEnum(Name1, (uint8)GameState->GamePhaseStep);
			Bot->Blackboard->SetValueAsEnum(Name2, (uint8)EAthenaGamePhase::Aircraft);

			static auto Name4 = UKismetStringLibrary::Conv_StringToName(TEXT("AIEvaluator_JumpOffBus_ExecutionStatus"));
			static auto Name3 = UKismetStringLibrary::Conv_StringToName(TEXT("AIEvaluator_Global_IsInBus"));
			Bot->Blackboard->SetValueAsBool(Name3, true);
			Bot->Blackboard->SetValueAsEnum(Name4, (uint8)EExecutionStatus::ExecutionAllowed);
		}
	}
	auto PC = (AFortPlayerControllerAthena*)PlayerState->Owner;
	for (auto& Entry : PC->WorldInventory->Inventory.ReplicatedEntries)
	{
		if (auto WorldDef = Utils::Cast<UFortWorldItemDefinition>(Entry.ItemDefinition)->bCanBeDropped == 1)
		{
			Inventory::RemoveItem(PC, Entry.ItemGuid, Entry.Count);
		}
	}
}
