#include "Misc.h"
#include "Inventory.h"
#include "Utils.h"
#include "XP.h"
#include "PlayerController.h"

UClass** Misc::Patchs::GetGameSessionClassHook(__int64 a1, UClass** a2)
{
	*a2 = AFortGameSessionDedicatedAthena::StaticClass();
	return a2;
}

float Misc::GetMaxTickRate()
{
	return 30.f;
}

void PrintVector(FVector Vector)
{
	printf("X: %g, Y: %g, Z: %g\n", Vector.X, Vector.Y, Vector.Z);
}

void PrintQuat(FQuat Quat)
{
	printf("X: %g, Y: %g, Z: %g, W: %g\n", Quat.X, Quat.Y, Quat.Z, Quat.W);
}

FQuat MultiplyQuat(FQuat One, FQuat Two)
{
	return FQuat(One.X * Two.X, One.Y * Two.Y, One.Z * Two.Z, One.W * Two.W);
}

void Misc::ServerMove(AFortPhysicsPawn* Pawn, FReplicatedPhysicsPawnState InState)
{
	printf("ServerMove called, LinearVelocity: %g, %g, %g. Angular Velocity: %g, %g, %g. RootComponent: %s. SyncKey: %d\n", InState.LinearVelocity.X, InState.LinearVelocity.Y, InState.LinearVelocity.Z, InState.AngularVelocity.X, InState.AngularVelocity.Y, InState.AngularVelocity.Z, Pawn->RootComponent->GetFullName().c_str(), (int)InState.SyncKey);
	UFortVehicleSkelMeshComponent* RootComp = (UFortVehicleSkelMeshComponent*)Pawn->RootComponent;

	Pawn->ReplicatedMovement.AngularVelocity = InState.AngularVelocity;
	Pawn->ReplicatedMovement.LinearVelocity = InState.LinearVelocity;
	Pawn->ReplicatedMovement.Location = InState.Translation;
	Pawn->ReplicatedMovement.Rotation = FQuatToRot(InState.Rotation);
	Pawn->OnRep_ReplicatedMovement();

	RootComp->SetAllPhysicsLinearVelocity(InState.LinearVelocity, false);
	RootComp->SetAllPhysicsAngularVelocityInRadians(InState.AngularVelocity, false);
	RootComp->K2_SetWorldRotation(Pawn->ReplicatedMovement.Rotation, false, nullptr, true);
	RootComp->K2_SetWorldLocation(InState.Translation, false, nullptr, true);
}

AFortPlayerControllerAthena* GetPCFromId(FUniqueNetIdRepl& ID)
{
	for (auto& PlayerState : UWorld::GetWorld()->GameState->PlayerArray)
	{
		auto PlayerStateAthena = Utils::Cast<AFortPlayerStateAthena>(PlayerState);
		if (!PlayerStateAthena)
			continue;
		if (PlayerStateAthena->AreUniqueIDsIdentical(ID, PlayerState->UniqueId))
			return Utils::Cast<AFortPlayerControllerAthena>(PlayerState->Owner);
	}

	return nullptr;
}

void Misc::RebootingDelegate(ABuildingGameplayActorSpawnMachine* RebootVan)
{
	if (!RebootVan->ResurrectLocation || RebootVan->PlayerIdsForResurrection.Num() <= 0)
		return;
	auto PC = GetPCFromId(RebootVan->PlayerIdsForResurrection[0]);
	if (!PC)
		return;
	AFortPlayerStateAthena* PlayerState = (AFortPlayerStateAthena*)PC->PlayerState;
	if (!PlayerState)
		return;
	cout << PlayerState->ResurrectionChipAvailable.bResurrectionChipAvailable << endl;
	TWeakObjectPtr<AFortPlayerStart> WeakPlayerStart{};
	WeakPlayerStart.ObjectIndex = RebootVan->ResurrectLocation->Index;
	WeakPlayerStart.ObjectSerialNumber = UObject::GObjects->GetSerialByIdx(WeakPlayerStart.ObjectIndex);
	PC->ResurrectionComponent->ResurrectionLocation = WeakPlayerStart;
	PC->RespawnPlayerAfterDeath(false);
	PC->ClientClearDeathNotification();
	UWorld::GetWorld()->AuthorityGameMode->RestartPlayer(PC);
	AFortPlayerPawnAthena* Pawn = Utils::Cast<AFortPlayerPawnAthena>(PC->Pawn);
	if (!Pawn)
	{
		printf("Failed to spawn!\n");
		OnResurrectionCompleted(RebootVan, RebootVan->SquadId);
		return;
	}

	Pawn->SetHealth(100);
	Pawn->SetMaxHealth(100);
	Pawn->SetMaxShield(100);
	Pawn->SetShield(0);

	static UFunction* OnPlayerPawnResurrected = RebootVan->Class->GetFunction(RebootVan->Class->GetName(), "OnPlayerPawnResurrected");
	RebootVan->ProcessEvent(OnPlayerPawnResurrected, &Pawn);

	AFortPlayerControllerAthena* Instigator = RebootVan->InstigatorPC.Get();
	if (Instigator && Instigator->PlayerState) {
		((AFortPlayerStateAthena*)Instigator->PlayerState)->RebootCounter++;
		((AFortPlayerStateAthena*)Instigator->PlayerState)->OnRep_RebootCounter();
		for (size_t i = 0; i < ((AFortPlayerStateAthena*)Instigator->PlayerState)->Spectators.SpectatorArray.Num(); i++)
		{
			auto& Spectator = ((AFortPlayerStateAthena*)Instigator->PlayerState)->Spectators.SpectatorArray[i];
			if (Spectator.PlayerState == PlayerState)
			{
				((AFortPlayerStateAthena*)Instigator->PlayerState)->Spectators.SpectatorArray.Remove(i);
				break;
			}
		}
		((AFortPlayerStateAthena*)Instigator->PlayerState)->Spectators.MarkArrayDirty();
	}
	PlayerState->Spectators.SpectatorArray.Free();
	PlayerState->Spectators.MarkArrayDirty();
	PlayerState->SpectatingTarget = nullptr;
	PlayerState->OnRep_SpectatingTarget();

	static FName Loot_AthenaSCM = UKismetStringLibrary::Conv_StringToName(TEXT("Loot_AthenaSCM"));
	static auto LootDrops = Inventory::PickLootDrops(Loot_AthenaSCM, Utils::Cast<AFortGameStateAthena>(UWorld::GetWorld()->GameState)->WorldLevel, -1);
	for (auto& Drop : LootDrops)
	{
		Inventory::GiveItem(PC, Drop.ItemDefinition, Drop.Count, Drop.LoadedAmmo);
	}

	AddToAlivePlayers(UWorld::GetWorld()->AuthorityGameMode, PC);
	RebootVan->PlayerIdsForResurrection.Remove(0);
	if (RebootVan->PlayerIdsForResurrection.Num() <= 0)
		OnResurrectionCompleted(RebootVan, RebootVan->SquadId);
}

void Misc::Siphon(AFortPlayerControllerAthena* PC)
{
	if (!PC || !PC->MyFortPawn || !PC->WorldInventory || !EnableSiphon)
		return;
	static auto Wood = StaticLoadObject<UFortItemDefinition>("/Game/Items/ResourcePickups/WoodItemData.WoodItemData");
	static auto Stone = StaticLoadObject<UFortItemDefinition>("/Game/Items/ResourcePickups/StoneItemData.StoneItemData");
	static auto Metal = StaticLoadObject<UFortItemDefinition>("/Game/Items/ResourcePickups/MetalItemData.MetalItemData");

	Inventory::GiveItem(PC, Wood, 50);
	Inventory::GiveItem(PC, Stone, 50);
	Inventory::GiveItem(PC, Metal, 50);
}

void Misc::OnReload(AFortWeapon* Weapon, int AmmoUsed)
{
	OnReloadOG(Weapon, AmmoUsed);

	if (!Weapon || !Weapon->WeaponData)
		return;
	auto WeaponData = Weapon->WeaponData->GetAmmoWorldItemDefinition_BP();
	AFortPlayerPawnAthena* Pawn = Utils::Cast<AFortPlayerPawnAthena>(Weapon->Owner);
	if (!Pawn)
		return;
	AFortPlayerControllerAthena* PC = Utils::Cast<AFortPlayerControllerAthena>(Pawn->Controller);
	if (!PC)
		return;

	Inventory::RemoveItem(PC, WeaponData, AmmoUsed);

	for (auto& Entry : PC->WorldInventory->Inventory.ReplicatedEntries)
	{
		if (Entry.ItemGuid == Weapon->ItemEntryGuid)
		{
			Entry.LoadedAmmo += AmmoUsed;
			PC->WorldInventory->Inventory.MarkItemDirty(Entry);
			Inventory::UpdateInventory(PC, Entry);
			PC->WorldInventory->HandleInventoryLocalUpdate();
			break;
		}
	}
}

void Misc::CollectGarbageInternal(unsigned int a1, unsigned __int8 a2)
{
	return;
}

__int64 Misc::RandomCrash(__int64 a1)
{
	auto bruh = *(__int64**)(a1 + 2176);
	if (!bruh)
		return 0;
	return RandomCrashOG(a1);
}

void Misc::OnPawnAISpawnedHook(AActor* Controller, AFortPlayerPawnAthena* Pawn)
{
	if (Pawn->Controller->Class == ABP_PhoebePlayerController_C::StaticClass())
	{
		if (Pawn)
		{
			OnPawnAISpawnedHookOG(Controller, Pawn);
			ABP_PhoebePlayerController_C* BotPC = (ABP_PhoebePlayerController_C*)Pawn->Controller;
			if (BotPC)
			{
				BotPC->RunBehaviorTree(BotPC->BehaviorTree);
				
				static auto Name1 = UKismetStringLibrary::Conv_StringToName(TEXT("AIEvaluator_Global_GamePhaseStep"));
				static auto Name2 = UKismetStringLibrary::Conv_StringToName(TEXT("AIEvaluator_Global_GamePhase"));
				BotPC->Blackboard->SetValueAsEnum(Name1, (uint8)EAthenaGamePhaseStep::Warmup);
				BotPC->Blackboard->SetValueAsEnum(Name2, (uint8)EAthenaGamePhase::Warmup);

				auto BotPlayerState = (AFortPlayerStateAthena*)Pawn->PlayerState;
				for (size_t i = 0; i < EmoteItemDefs.size(); i++)
				{
					BotPC->CosmeticLoadoutBC.Dances.Add(EmoteItemDefs.at(i));
				}
				BotPC->CosmeticLoadoutBC.Character = CharacterItemDefs.at(UKismetMathLibrary::RandomIntegerInRange(0, CharacterItemDefs.size() - 1));
				while (!BotPC->CosmeticLoadoutBC.Character)
				{
					BotPC->CosmeticLoadoutBC.Character = CharacterItemDefs.at(UKismetMathLibrary::RandomIntegerInRange(0, CharacterItemDefs.size() - 1));
				}
				if (BotPC->CosmeticLoadoutBC.Character)
				{
					if (BotPC->CosmeticLoadoutBC.Character->HeroDefinition)
					{
						for (int i = 0; i < BotPC->CosmeticLoadoutBC.Character->HeroDefinition->Specializations.Num(); i++)
						{
							auto SpecStr = UKismetStringLibrary::Conv_NameToString(BotPC->CosmeticLoadoutBC.Character->HeroDefinition->Specializations[i].ObjectID.AssetPathName);
							UFortHeroSpecialization* Spec = StaticLoadObject<UFortHeroSpecialization>(SpecStr.ToString());
							if (Spec)
							{
								for (int j = 0; j < Spec->CharacterParts.Num(); j++)
								{
									auto PartStr = UKismetStringLibrary::Conv_NameToString(Spec->CharacterParts[j].ObjectID.AssetPathName);
									UCustomCharacterPart* CharacterPart = StaticLoadObject<UCustomCharacterPart>(PartStr.ToString());
									if (CharacterPart)
									{
										BotPlayerState->CharacterData.Parts[(uintptr_t)CharacterPart->CharacterPartType] = CharacterPart;
									}
									PartStr.Free();
								}
							}
							SpecStr.Free();
						}
					}
				}
				BotPlayerState->OnRep_CharacterData();
				

				if (!BotPC->Inventory)
					BotPC->Inventory = Utils::SpawnActor<AFortInventory>({}, {}, BotPC);
				
				for (auto& Item : ((AFortGameModeAthena*)UWorld::GetWorld()->AuthorityGameMode)->StartingItems)
				{
					UFortWorldItem* Bro = Utils::Cast<UFortWorldItem>(Item.Item->CreateTemporaryItemInstanceBP(Item.Count, 0));
					Bro->OwnerInventory = BotPC->Inventory;
					FFortItemEntry& Entry = Bro->ItemEntry;
					BotPC->Inventory->Inventory.ReplicatedEntries.Add(Entry);
					BotPC->Inventory->Inventory.ItemInstances.Add(Bro);
					BotPC->Inventory->Inventory.MarkItemDirty(Entry);
					BotPC->Inventory->HandleInventoryLocalUpdate();
				}
				//FItemAndCount bro{};
				//bro.Count = 9999;
				//bro.Item = StaticLoadObject<UFortItemDefinition>("/Game/Athena/Items/Ammo/AthenaAmmoDataBulletsLight.AthenaAmmoDataBulletsLight");
				//BotPC->StartupInventory->Items.Add(bro);
				//FItemAndCount bro2{};
				//bro2.Count = 9999;
				//bro2.Item = StaticLoadObject<UFortItemDefinition>("/Game/Athena/Items/Ammo/AthenaAmmoDataBulletsMedium.AthenaAmmoDataBulletsMedium");
				//BotPC->StartupInventory->Items.Add(bro2);
				for (auto& Item : BotPC->StartupInventory->Items)
				{
					if (!Item.Item)
						continue;
					UFortWorldItem* Bro = Utils::Cast<UFortWorldItem>(Item.Item->CreateTemporaryItemInstanceBP(Item.Count, 0));
					Bro->OwnerInventory = BotPC->Inventory;
					FFortItemEntry& Entry = Bro->ItemEntry;
					Entry.LoadedAmmo = 9999;
					BotPC->Inventory->Inventory.ReplicatedEntries.Add(Entry);
					BotPC->Inventory->Inventory.ItemInstances.Add(Bro);
					BotPC->Inventory->Inventory.MarkItemDirty(Entry);
					BotPC->Inventory->HandleInventoryLocalUpdate();
					if (auto WeaponDef = Utils::Cast<UFortWeaponMeleeItemDefinition>(Entry.ItemDefinition))
					{
						BotPC->PendingEquipWeapon = Bro;
						Pawn->EquipWeaponDefinition(WeaponDef, Entry.ItemGuid, Entry.TrackerGuid);
					}
				}
			}

		}
		return;
	}
	

	OnPawnAISpawnedHookOG(Controller, Pawn);

	void (*NotExecRunBehaviorTree)(AAIController * Controller, UBehaviorTree * BehaviorTree) = decltype(NotExecRunBehaviorTree)(__int64(GetModuleHandleW(0)) + 0x5880C30);
	//UBehaviorTree* BehaviorTree = (UBehaviorTree*)(__int64(Controller) + 0xA80); // BehaviorTree Offset
	//UBehaviorTree* BehaviorTree = StaticLoadObject<UBehaviorTree>("/Game/Athena/AI/NPCs/Base/BehaviorTree/BT_NPC.BT_NPC");

	auto PC = (AFortAthenaAIBotController*)Pawn->Controller;
	auto PlayerState = (AFortPlayerStateAthena*)Pawn->PlayerState;
	
	
	if (PC->CosmeticLoadoutBC.Character)
	{
		if (PC->CosmeticLoadoutBC.Character->HeroDefinition)
		{
			for (int i = 0; i < PC->CosmeticLoadoutBC.Character->HeroDefinition->Specializations.Num(); i++)
			{
				auto SpecStr = UKismetStringLibrary::Conv_NameToString(PC->CosmeticLoadoutBC.Character->HeroDefinition->Specializations[i].ObjectID.AssetPathName);
				UFortHeroSpecialization* Spec = StaticLoadObject<UFortHeroSpecialization>(SpecStr.ToString());
				if (Spec)
				{
					for (int j = 0; j < Spec->CharacterParts.Num(); j++)
					{
						auto PartStr = UKismetStringLibrary::Conv_NameToString(Spec->CharacterParts[j].ObjectID.AssetPathName);
						UCustomCharacterPart* CharacterPart = StaticLoadObject<UCustomCharacterPart>(PartStr.ToString());
						if (CharacterPart)
						{
							PlayerState->CharacterData.Parts[(uintptr_t)CharacterPart->CharacterPartType] = CharacterPart;
						}
						PartStr.Free();
					}
				}
				SpecStr.Free();
			}
		}
	}
	PlayerState->OnRep_CharacterData();
	
	

	//NotExecRunBehaviorTree((AFortAthenaAIBotController*)Pawn->Controller, PC->BehaviorTree);


	//((AFortAthenaAIBotController*)Pawn->Controller)->RunBehaviorTree(((AFortAthenaAIBotController*)Pawn->Controller)->BehaviorTree);
	auto BlackboardComp = ((AFortAthenaAIBotController*)Pawn->Controller)->Blackboard;
	static auto name1 = UKismetStringLibrary::Conv_StringToName(L"AIEvaluator_Global_GamePhaseStep");
	static auto name1b = UKismetStringLibrary::Conv_StringToName(L"AIEvaluator_Global_GamePhase");
	BlackboardComp->SetValueAsEnum(name1, 7);
	BlackboardComp->SetValueAsEnum(name1b, (uint8)EAthenaGamePhase::SafeZones);

	UFortNPCConversationParticipantComponent* bruh = (UFortNPCConversationParticipantComponent*)Pawn->GetComponentByClass(UFortNPCConversationParticipantComponent::StaticClass());

	if (!bruh)
		return;

	bruh->BotControllerOwner = PC;
	bruh->PlayerPawnOwner = Pawn;

	int MaxServices = bruh->MaxServices;
	bruh->bCanStartConversation = true;
	bruh->OnRep_CanStartConversation();

	printf("bruh->AffiliationManager %s\n", bruh->AffiliationManager->GetName().c_str());	
	printf("MaxServices: %d\n", MaxServices);

	auto& SalesMap = *(MTMap<FName, FNPCSaleInventoryRow*>*)(__int64(bruh->SalesInventory) + 0x0030);
	auto& QuestMap = *(MTMap<FName, FNPCQuestRow*>*)(__int64(bruh->Quests) + 0x0030);
	auto& ServicesMap = *(MTMap<FName, FNPCDynamicServiceRow*>*)(__int64(bruh->Services) + 0x0030);

	bool HasBuy = false;
	bool HasBounty = false;

	if (bruh->SalesInventory)
	{
		for (auto& Pair : SalesMap)
		{
			if (Pair.Value()->NPC.TagName.ComparisonIndex == bruh->CharacterData->GameplayTag.TagName.ComparisonIndex)
			{
				bruh->SupportedSales.Add(*Pair.Value());
			}
		}
	}

	if (bruh->Quests)
	{
		for (auto& Pair : QuestMap)
		{
			if (!Pair.Value()->Quest.ObjectID.AssetPathName.ComparisonIndex)
				continue;
			if (Pair.Value()->NPC.TagName.ComparisonIndex == bruh->CharacterData->GameplayTag.TagName.ComparisonIndex)
			{
				bruh->SupportedQuests.Add(Pair.Value()->Quest);
			}
		}
	}

	if (bruh->Services)
	{
		for (auto& Pair : ServicesMap)
		{
			if (Pair.Value()->Chance <= 0)
				continue;
			if (Pair.Value()->NPC.TagName.ComparisonIndex == bruh->CharacterData->GameplayTag.TagName.ComparisonIndex)
			{
				bool IsBounty = Pair.Value()->ServiceTag.TagName.ToString().contains("Bounty");
				bool IsBuy = Pair.Value()->ServiceTag.TagName.ToString().contains("Sell");
				if (IsBuy && HasBuy)
					continue;
				if (IsBounty && HasBounty)
					continue;
				if (IsBounty)
					HasBounty = true;
				if (IsBuy)
					HasBuy = true;
				bruh->SupportedServices.GameplayTags.Add(Pair.Value()->ServiceTag);
			}
		}
	}
	while (bruh->SupportedServices.GameplayTags.Num() > MaxServices)
	{
		for (auto& Pair : ServicesMap)
		{
			if (Pair.Value()->Chance <= 0)
				continue;
			if (bruh->SupportedServices.GameplayTags.Num() <= MaxServices)
				break;
			if (Pair.Value()->NPC.TagName.ComparisonIndex == bruh->CharacterData->GameplayTag.TagName.ComparisonIndex)
			{
				if (!UKismetMathLibrary::RandomBoolWithWeight(Pair.Value()->Chance))
				{
					for (size_t i = 0; i < bruh->SupportedServices.GameplayTags.Num(); i++)
					{
						if (bruh->SupportedServices.GameplayTags[i].TagName.ComparisonIndex == Pair.Value()->ServiceTag.TagName.ComparisonIndex)
						{
							bruh->SupportedServices.GameplayTags.Remove(i);
							break;
						}
					}
				}
			}
		}
	}

	FItemAndCount bro{};
	bro.Count = 9999;
	bro.Item = StaticLoadObject<UFortItemDefinition>("/Game/Athena/Items/Ammo/AthenaAmmoDataBulletsLight.AthenaAmmoDataBulletsLight");
	PC->StartupInventory->Items.Add(bro);
	FItemAndCount bro2{};
	bro2.Count = 9999;
	bro2.Item = StaticLoadObject<UFortItemDefinition>("/Game/Athena/Items/Ammo/AthenaAmmoDataBulletsMedium.AthenaAmmoDataBulletsMedium");
	PC->StartupInventory->Items.Add(bro2);

	for (auto& Item : PC->StartupInventory->Items)
	{
		UFortWorldItem* Bro = Utils::Cast<UFortWorldItem>(Item.Item->CreateTemporaryItemInstanceBP(Item.Count, 0));
		Bro->OwnerInventory = PC->Inventory;
		FFortItemEntry& Entry = Bro->ItemEntry;
		Entry.LoadedAmmo = 9999;
		PC->Inventory->Inventory.ReplicatedEntries.Add(Entry);
		PC->Inventory->Inventory.ItemInstances.Add(Bro);
		PC->Inventory->Inventory.MarkItemDirty(Entry);
		PC->Inventory->HandleInventoryLocalUpdate();
		if (auto WeaponDef = Utils::Cast<UFortWeaponRangedItemDefinition>(Entry.ItemDefinition))
		{
			PC->PendingEquipWeapon = Bro;
		}
	}
}

__int64 __fastcall Misc::UserMathErrorFunction(__int64 a1)
{
	static auto BaseAddr = __int64(GetModuleHandleW(0));
	auto result = (__int64(_ReturnAddress()) - BaseAddr);
	if (result == 0x223FFCF)
	{
		printf("Returning ServerBotManager\n");
		auto GameMode = ((AFortGameModeAthena*)UWorld::GetWorld()->AuthorityGameMode);
		return __int64(GameMode->ServerBotManager);
	}
	
	return 0;
}

TArray<FGuid> AIs::GetEntryPointGUIDs(UConversationRegistry* Registry, FGameplayTag EntryPoint)
{
	BuildDependenciesGraph(Registry);
	static auto EntryTagToEntryListOffset = 0x0090 + 0x50 + 0x50;
	auto& EntryTagToEntryList = *(MTMap<FGameplayTag, TArray<FGuid>>*)(__int64(Registry) + EntryTagToEntryListOffset);
	for (auto& pair : EntryTagToEntryList)
	{
		if (pair.Key().TagName.ComparisonIndex == EntryPoint.TagName.ComparisonIndex)
			return pair.Value();
	}
	return TArray<FGuid>{};
}

TArray<FGuid> AIs::GetOutputLinkGUIDs(UConversationRegistry* Registry, FGameplayTag EntryPoint)
{
	TArray<FGuid> SourceGUIDs = GetEntryPointGUIDs(Registry, EntryPoint);
	return GetOutputLinkGUIDs(Registry, SourceGUIDs);
}

TArray<FGuid> AIs::GetOutputLinkGUIDs(UConversationRegistry* Registry, FGuid& SourceGUID)
{
	TArray<FGuid> Array;
	Array.Add(SourceGUID);
	return GetOutputLinkGUIDs(Registry, Array);
}

TArray<FGuid> AIs::GetOutputLinkGUIDs(UConversationRegistry* Registry, TArray<FGuid> SourceGUIDs)
{
	BuildDependenciesGraph(Registry);

	TArray<FGuid> Result;
	for (FGuid& SourceGUID : SourceGUIDs)
	{
		if (UConversationDatabase* SourceConversation = GetConversationFromNodeGUID(Registry, SourceGUID))
		{
			UConversationNode* SourceNode = nullptr;
			auto& ReachableNodeMap = *(MTMap<FGuid, UConversationNode*>*)(__int64(SourceConversation) + 0x38);
			for (auto& pair : ReachableNodeMap)
			{
				if (pair.Key() == SourceGUID)
				{
					SourceNode = pair.Value();
					break;
				}
			}
			if (SourceNode)
			{
				if (UConversationNodeWithLinks* SourceNodeWithLinks = Utils::Cast<UConversationNodeWithLinks>(SourceNode))
				{
					for (auto item : SourceNodeWithLinks->OutputConnections)
					{
						Result.Add(item);
					}
				}
			}
		}
	}
	return Result;
}

FConversationContext AIs::CreateServerContext(UConversationInstance* InActiveConversation, UConversationTaskNode* InTaskBeingConsidered)
{
	UWorld* World = UWorld::GetWorld();
	FConversationContext Context{};
	Context.ActiveConversation = InActiveConversation;
	Context.TaskBeingConsidered = InTaskBeingConsidered;
	Context.bServer = true;
	//Context.bClient_PRIVATE = World->GetNetMode() != NM_DedicatedServer; //Already set to false
	Context.ConversationRegistry = GetRegistryFromWorld(World);
	return Context;
}

void AIs::ServerAdvanceConversationHook(UFortPlayerConversationComponent_C* Comp, FAdvanceConversationRequest& InChoicePicked)
{
	ServerAdvanceConversation(Comp->Auth_CurrentConversation, InChoicePicked);
}

void AIs::ServerNotifyConversationEnded(UConversationParticipantComponent* Comp, UConversationInstance* Conversation, FConversationParticipants& PreservedParticipants)
{
	AActor* Owner = Comp->GetOwner();
	if (Owner->GetLocalRole() == ENetRole::ROLE_Authority)
	{
		if (!Conversation)
			return;

		//if (auto NpcComp = Utils::Cast<UFortNPCConversationParticipantComponent>(Comp))
		//{
			//NpcComp->bConversationModeActive = false;
			//NpcComp->OnRep_ConversationModeActive();
		//}

		for (UConversationInstance* ConversationInstance : Comp->Auth_Conversations)
		{
			if (Conversation == ConversationInstance)
			{
				if (Conversation == Comp->Auth_CurrentConversation)
				{
					Comp->Auth_CurrentConversation = nullptr;
				}

				for (size_t i = 0; i < Comp->Auth_Conversations.Num(); i++)
				{
					if (Comp->Auth_Conversations[i] == Conversation)
					{
						Comp->Auth_Conversations.Remove(i);
						break;
					}
				}

				int32 OldConversationsActive = Comp->ConversationsActive;
				Comp->ConversationsActive--;

				//Comp->OnServerConversationEnded(Conversation);
				//Comp->Exit(PreservedParticipants);

				Comp->ClientUpdateConversations(Comp->ConversationsActive);

				if (Comp->ConversationsActive == 0)
				{
					Comp->OnRep_ConversationsActive(OldConversationsActive);
				}

				break;
			}
		}
	}
}

void AIs::ServerRemoveParticipant(UConversationInstance* Instance, FGameplayTag ParticipantID, FConversationParticipants& PreservedParticipants)
{
	for (size_t i = 0; i < Instance->Participants.List.Num(); i++)
	{
		auto& It = Instance->Participants.List[i];
		if (It.ParticipantID == ParticipantID)
		{
			if (UConversationParticipantComponent* OldParticipant = Utils::Cast<UConversationParticipantComponent>(It.Actor->GetComponentByClass(UConversationParticipantComponent::StaticClass())))
			{
				if (Bruh[Instance].ConvoStarted)
				{
					ServerNotifyConversationEnded(OldParticipant, Instance, PreservedParticipants);
				}
			}
			Instance->Participants.List.Remove(i);
			break;
		}
	}
}

void AIs::ServerAssignParticipant(UConversationInstance* Instance, FGameplayTag ParticipantID, AActor* ParticipantActor)
{
	if (!ParticipantID.TagName.ComparisonIndex || (ParticipantActor == nullptr))
	{
		printf("AConversationInstance::ServerAssignParticipant(ID=%s, Actor=%s) passed bad arguments\n",
			ParticipantID.TagName.ToString().c_str(), ParticipantActor->GetName().c_str());
		return;
	}

	ServerRemoveParticipant(Instance, ParticipantID, Instance->Participants);

	FConversationParticipantEntry NewEntry;
	NewEntry.ParticipantID = ParticipantID;
	NewEntry.Actor = ParticipantActor;
	Instance->Participants.List.Add(NewEntry);

	if (Bruh[Instance].ConvoStarted)
	{
		if (UConversationParticipantComponent* ParticipantComponent = Utils::Cast<UConversationParticipantComponent>(NewEntry.Actor->GetComponentByClass(UConversationParticipantComponent::StaticClass())))
		{
			//if (auto NpcComp = Utils::Cast<UFortNPCConversationParticipantComponent>(ParticipantComponent))
			//{
			//	NpcComp->bConversationModeActive = true;
			//	NpcComp->OnRep_ConversationModeActive();
			//}
			ServerNotifyConversationStarted(ParticipantComponent, Instance, ParticipantID);
		}
	}

	printf("Conversation %s assigned participant ID=%s to Actor=%s\n",
		Instance->GetName().c_str(), ParticipantID.TagName.ToString().c_str(), ParticipantActor->GetName().c_str());
}

void AIs::ServerNotifyConversationStarted(UConversationParticipantComponent* Comp, UConversationInstance* Conversation, FGameplayTag AsParticipant)
{
	AActor* Owner = Comp->GetOwner();
	if (Owner->GetLocalRole() == ENetRole::ROLE_Authority)
	{
		if (!Conversation)
			return;
		Comp->Auth_CurrentConversation = Conversation;
		Comp->Auth_Conversations.Add(Conversation);

		//@TODO: CONVERSATION: ClientUpdateParticipants, we need to do this immediately so when we tell the client a task has been
		// executed, the client has knowledge of what participants, before any client side task effects need to execute.
		Comp->ClientUpdateParticipants(Comp->Auth_CurrentConversation->Participants);

		int32 OldConversationsActive = Comp->ConversationsActive;

		Comp->ConversationsActive++;

		if (OldConversationsActive == 0)
		{
			Comp->OnRep_ConversationsActive(OldConversationsActive);
		}

		//Comp->OnServerConversationStarted(Conversation, AsParticipant);
		Comp->ClientStartConversation(Conversation, AsParticipant);

		Comp->ClientUpdateConversations(Comp->ConversationsActive);
	}
}

void AIs::MakeConversationParticipant(FConversationContext& Context, AActor* ParticipantActor, FGameplayTag ParticipantTag)
{
	if (ParticipantActor == nullptr)
	{
		printf("MakeConversationParticipant needs a valid participant actor\n");
		return;
	}

	if (!ParticipantTag.TagName.ComparisonIndex)
	{
		printf("MakeConversationParticipant needs a valid participant tag\n");
		return;
	}

	if (UConversationInstance* Conversation = Context.ActiveConversation)
	{
		ServerAssignParticipant(Conversation, ParticipantTag, ParticipantActor);
	}
}

void ResetConversationProgress(UConversationInstance* Instance)
{
	Bruh[Instance] = {};
}

void AIs::ServerAbortConversation(UConversationInstance* Instance)
{
	if (Bruh[Instance].ConvoStarted)
	{
		printf("Conversation aborted or finished\n");

		//OnEnded();

		FConversationParticipants ParticipantsCopy = Instance->Participants;
		for (FConversationParticipantEntry& ParticipantEntry : ParticipantsCopy.List)
		{
			ServerRemoveParticipant(Instance, ParticipantEntry.ParticipantID, ParticipantsCopy);
		}
	}

	ResetConversationProgress(Instance);
}

TArray<FGuid> AIs::DetermineBranches(UConversationInstance* Instance, TArray<FGuid>& SourceList, EConversationRequirementResult MaximumRequirementResult)
{
	FConversationContext Context = CreateServerContext(Instance, nullptr);

	TArray<FGuid> EnabledPaths;
	for (FGuid& TestGUID : SourceList)
	{
		UConversationNode* TestNode = GetRuntimeNodeFromGuid(Context.ConversationRegistry, TestGUID);
		if (UConversationTaskNode* TaskNode = Utils::Cast<UConversationTaskNode>(TestNode))
		{
			//EConversationRequirementResult RequirementResult = EConversationRequirementResult::Passed;//TODO: HERE
			EConversationRequirementResult RequirementResult = CheckRequirements(TaskNode, Context);

			if ((int64)RequirementResult <= (int64)MaximumRequirementResult)
			{
				printf("is legal\n");
				EnabledPaths.Add(TestGUID);
			}
		}
	}

	printf("%d paths out of %d are legal\n", EnabledPaths.Num(), SourceList.Num());
	return EnabledPaths;
}

FConversationChoiceReference& AIs::GetCurrentChoiceReference(UConversationInstance* Instance)
{
	return Bruh[Instance].CurrentBranchPoint.ClientChoice.ChoiceReference;
}

UConversationNode* AIs::TryToResolve(FConversationContext Context, FGuid NodeGUID)
{
	return GetRuntimeNodeFromGuid(Context.ConversationRegistry, NodeGUID);
}

UConversationNode* AIs::TryToResolveChoiceNode(FClientConversationOptionEntry OptionEntry, FConversationContext Context)
{
	return TryToResolve(Context, OptionEntry.ChoiceReference.NodeReference.NodeGUID);
}

bool AIs::CanConversationContinue(FConversationTaskResult& ConversationTasResult)
{
	return ConversationTasResult.Type != EConversationTaskResultType::Invalid && ConversationTasResult.Type != EConversationTaskResultType::AbortConversation;
}

AFortPlayerControllerAthena* GetRandomPC(AFortPlayerControllerAthena* Exclude = nullptr, int timescalled = 0)
{
	if (timescalled > 10)
		return nullptr;
	timescalled++;

	auto Ret = ((AFortGameModeAthena*)UWorld::GetWorld()->AuthorityGameMode)->AlivePlayers[UKismetMathLibrary::RandomIntegerInRange(0, ((AFortGameModeAthena*)UWorld::GetWorld()->AuthorityGameMode)->AlivePlayers.Num() - 1)];

	if (Ret == Exclude || Ret->TransientQuestsComponent->ActiveUrgentQuests.Num() > 0)
		return GetRandomPC(Exclude, timescalled);

	return Ret;
}

string GetExtraDataValue(FConversationBranchPoint& BranchPoint, string Name)
{
	for (auto& ExtraData : BranchPoint.ClientChoice.ExtraData)
	{
		string NameStr = ExtraData.Name.ToString();
		if (NameStr == Name)
		{
			return ExtraData.Value.ToString();
		}
	}
	return "";
}

void SetExtraDataValue(FConversationBranchPoint& BranchPoint, string Name, string Value)
{
	for (auto& ExtraData : BranchPoint.ClientChoice.ExtraData)
	{
		string NameStr = ExtraData.Name.ToString();
		if (NameStr == Name)
		{
			ExtraData.Value = wstring(Value.begin(), Value.end()).c_str();
			return;
		}
	}

	FConversationNodeParameterPair Pair{};
	Pair.Name = wstring(Name.begin(), Name.end()).c_str();
	Pair.Value = wstring(Value.begin(), Value.end()).c_str();
}

FConversationTaskResult ExecuteTaskNode(UConversationTaskNode* TaskNode, FConversationContext& InContext)
{
	FConversationTaskResult Res = TaskNode->ExecuteTaskNode(InContext);
	Res.Type = EConversationTaskResultType::AdvanceConversation;
	static UClass* SpeechClass = StaticLoadObject<UClass>("/FortniteConversation/Conversation/Speech.Speech_C");
	static UClass* BackNode = StaticLoadObject<UClass>("/Game/Conversation/Back.Back_C");
	static UClass* UpgradeNode = UFortConversationTaskNode_UpgradeItem::StaticClass();

	static UClass* DuelNPCNode = StaticLoadObject<UClass>("/Game/Conversation/ChallengeNPC.ChallengeNPC_C");
	static UClass* HireNPCNode = StaticLoadObject<UClass>("/Game/Conversation/HireNPC.HireNPC_C");

	if (TaskNode->IsA(SpeechClass))
	{
		static auto MessageOffset = GetOffset(TaskNode, "Message");
		Res.Type = EConversationTaskResultType::PauseConversationAndSendClientChoices;
		Res.Message.Text = *(FText*)(__int64(TaskNode) + MessageOffset);
		Res.Message.SpeakerID = InContext.ActiveConversation->Participants.List[0].ParticipantID;
	}
	else if (TaskNode->IsA(BackNode))
	{
		Res.Type = EConversationTaskResultType::ReturnToLastClientChoice;
	}
	else if (TaskNode->IsA(UpgradeNode))
	{
		auto PC = (AFortPlayerControllerAthena*)InContext.ActiveConversation->Participants.List[1].Actor;
		if (!PC || !PC->MyFortPawn || !PC->MyFortPawn->CurrentWeapon)
			return Res;
		auto Upgrade = UFortKismetLibrary::GetUpgradedWeaponItemVerticalToRarity(PC->MyFortPawn->CurrentWeapon->WeaponData, EFortRarity(((uint8)PC->MyFortPawn->CurrentWeapon->WeaponData->Rarity)+1));
		if (!Upgrade)
			return Res;
		Inventory::RemoveItem(PC, PC->MyFortPawn->CurrentWeapon->ItemEntryGuid, 1);
		Inventory::GiveItem(PC, Upgrade, 1, Inventory::GetMagSize(Upgrade));
		string CostStr = GetExtraDataValue(Bruh[InContext.ActiveConversation].CurrentBranchPoint, "cost");
		int IntCost = stoi(CostStr);
		Inventory::RemoveItem(PC, ((UFortConversationTaskNode_UpgradeItem*)TaskNode)->ResourceCurrency, IntCost);
		Res.Type = EConversationTaskResultType::AbortConversation;
	}
	else if (TaskNode->IsA(UFortConversationTaskNode_GrantPlayerBounty::StaticClass()))
	{
		auto HunterPC = (AFortPlayerControllerAthena*)InContext.ActiveConversation->Participants.List[1].Actor;
		if (!HunterPC)
			return Res;
		auto HunterState = (AFortPlayerStateAthena*)HunterPC->PlayerState;
		if (!HunterState)
			return Res;
		auto TargetPC = GetRandomPC(HunterPC);

		Bounties::StartHunt(HunterPC, TargetPC);
	}
	return Res;
}

FConversationTaskResult AIs::ExecuteTaskNodeWithSideEffects(UConversationTaskNode* TaskNode, FConversationContext& InContext)
{
	if (InContext.TaskBeingConsidered != TaskNode)
		return FConversationTaskResult();

	TaskNode->EvalWorldContextObj = UWorld::GetWorld();

	FConversationTaskResult Result = FConversationTaskResult();

	if (InContext.bServer)
	{
		printf("TaskNode FULL NAME: %s\n", TaskNode->GetFullName().c_str());
		Result = ExecuteTaskNode(TaskNode, InContext);
		if (Result.Type == EConversationTaskResultType::Invalid)
			printf("Conversation Node %s - Returned an Invalid result indicating no specific decision was made on how to continue.\n", TaskNode->GetName().c_str());

		// After executing the task we need to determine if we should run side effects on the server and client.
		if (CanConversationContinue(Result))
		{
			for (UConversationNode* SubNode : TaskNode->SubNodes)
			{
				if (UConversationSideEffectNode* SideEffectNode = Utils::Cast<UConversationSideEffectNode>(SubNode))
				{
					printf("Running side effect %s\n", SideEffectNode->GetName().c_str());
					SideEffectNode->EvalWorldContextObj = UWorld::GetWorld();
					SideEffectNode->ServerCauseSideEffect(InContext);
				}
			}

			FConversationParticipants Participants = InContext.ActiveConversation->Participants;
			for (FConversationParticipantEntry& ParticipantEntry : Participants.List)
			{
				if (UConversationParticipantComponent* Component = Utils::Cast<UConversationParticipantComponent>(ParticipantEntry.Actor->GetComponentByClass(UConversationParticipantComponent::StaticClass())))
				{
					Component->ClientExecuteTaskAndSideEffects(Bruh[InContext.ActiveConversation].CurrentBranchPoint.ClientChoice.ChoiceReference.NodeReference);
				}
			}
		}
	}

	return Result;
}

void SetChoiceAvailable(FClientConversationOptionEntry& Entry, bool bIsAvailable) { Entry.ChoiceType = bIsAvailable ? EConversationChoiceType::UserChoiceAvailable : EConversationChoiceType::UserChoiceUnavailable; }

bool GenerateChoice(UConversationChoiceNode* Node, FConversationContext& Context, FClientConversationOptionEntry& ChoiceEntry)
{
	Node->FillChoice(Context, &ChoiceEntry);
	return true;
}

void AIs::GatherStaticChoices(UConversationTaskNode* Node, FConversationBranchPointBuilder& BranchBuilder, FConversationContext& InContext)
{
	void (*GatherStaticChoicesOG)(UConversationTaskNode* Node, FConversationBranchPointBuilder&, FConversationContext& InContext) = decltype(GatherStaticChoicesOG)((*(void***)Node)[0x56]);
	void (*GatherDynamicChoicesOG)(UConversationTaskNode* Node, FConversationBranchPointBuilder&, FConversationContext& InContext) = decltype(GatherDynamicChoicesOG)((*(void***)Node)[0x57]);
	GatherStaticChoicesOG(Node, BranchBuilder, InContext);
	GatherDynamicChoicesOG(Node, BranchBuilder, InContext);
}

void AIs::GatherChoices(UConversationTaskNode* Node, FConversationBranchPointBuilder& BranchBuilder, FConversationContext& Context)
{
	if (Node->IsA(UConversationLinkNode::StaticClass()))
	{
		TArray<FGuid> PotentialStartingPoints = GetOutputLinkGUIDs(Context.ConversationRegistry, { ((UConversationLinkNode*)Node)->RemoteEntryTag });

		if (PotentialStartingPoints.Num() > 0)
		{
			TArray<FGuid> LegalStartingPoints = DetermineBranches(Context.ActiveConversation, PotentialStartingPoints, EConversationRequirementResult::FailedButVisible);
			FConversationContext ReturnScopeContext = Context;
			ReturnScopeContext.ReturnScopeStack.Add({ Node->Compiled_NodeGUID });
			GenerateChoicesForDestinations(BranchBuilder, ReturnScopeContext, LegalStartingPoints);
		}
		return;
	}

	GatherStaticChoices(Node, BranchBuilder, Context);
	//GatherDynamicChoices(Node, BranchBuilder, Context);
}

void AIs::GenerateChoicesForDestinations(FConversationBranchPointBuilder& BranchBuilder, FConversationContext& InContext, TArray<FGuid>& CandidateDestinations)
{
	if (!InContext.bServer)
		return;
	printf("GenerateChoicesForDestinations CandidateDestinations: %d\n", CandidateDestinations.Num());
	UWorld* World = UWorld::GetWorld();

	for (FGuid& DestinationGUID : CandidateDestinations)
	{
		auto Node = GetRuntimeNodeFromGuid(InContext.ConversationRegistry, DestinationGUID);
		printf("CandidateDestinations DestinationTaskNode: %s\n", Node->GetName().c_str());
		if (UConversationTaskNode* DestinationTaskNode = Utils::Cast<UConversationTaskNode>(Node))
		{
			DestinationTaskNode->EvalWorldContextObj = World;

			FConversationContext DestinationContext = InContext;
			DestinationContext.TaskBeingConsidered = DestinationTaskNode;

			int32 StartingNumber = BranchBuilder.Num();

			GatherChoices(DestinationTaskNode, BranchBuilder, DestinationContext);

			// If a node has no choices, but we're generating the choices, we need to have this node as 'a' choice, even if
			// it's not something we're ever sending to the client, we just need to know this is a valid path for the
			// conversation to flow.
			if (BranchBuilder.Num() == StartingNumber)
			{
				//EConversationRequirementResult RequirementResult = EConversationRequirementResult::Passed;
				EConversationRequirementResult RequirementResult = CheckRequirements(DestinationTaskNode, DestinationContext);

				if (RequirementResult == EConversationRequirementResult::Passed)
				{
					printf("DefaultChoice\n");
					FClientConversationOptionEntry DefaultChoice{};
					DefaultChoice.ChoiceReference.NodeReference.NodeGUID = DestinationGUID;
					DefaultChoice.ChoiceType = EConversationChoiceType::ServerOnly;
					BranchBuilder.AddChoice(DestinationContext, DefaultChoice);
				}
			}
		}
	}
}

void AIs::GenerateNextChoices(UConversationTaskNode* TaskNode, FConversationBranchPointBuilder& BranchBuilder, FConversationContext& Context)
{
	printf("Generate next choices called\n");
	if (UConversationInstance* Conversation = Context.ActiveConversation)
	{
		TArray<FGuid> CandidateDestinations = GetOutputLinkGUIDs(Context.ConversationRegistry, GetCurrentChoiceReference(Conversation).NodeReference.NodeGUID);
		GenerateChoicesForDestinations(BranchBuilder, Context, CandidateDestinations);
	}
}

void AIs::SetNextChoices(UConversationInstance* Instance, TArray<FConversationBranchPoint>& InAllChoices)
{
	Bruh[Instance].CurrentUserChoices.Free();
	Bruh[Instance].CurrentBranchPoints = InAllChoices;

	for (FConversationBranchPoint& UserBranchPoint : Bruh[Instance].CurrentBranchPoints)
	{
		if (UserBranchPoint.ClientChoice.ChoiceType != EConversationChoiceType::ServerOnly)
		{
			Bruh[Instance].CurrentUserChoices.Add(UserBranchPoint.ClientChoice);
		}
	}
	
	if (Bruh[Instance].CurrentBranchPoints.Num() > 0 || Bruh[Instance].ScopeStack.Num() > 0)
	{
		if (Bruh[Instance].CurrentUserChoices.Num() == 0)
		{
			FClientConversationOptionEntry DefaultChoice{};
			DefaultChoice.ChoiceReference = FConversationChoiceReference();
			DefaultChoice.ChoiceText = UKismetTextLibrary::Conv_StringToText(TEXT("Continue"));
			//DefaultChoice.ChoiceText = NSLOCTEXT("ConversationInstance", "ConversationInstance_DefaultText", "Continue");
			DefaultChoice.ChoiceType = EConversationChoiceType::UserChoiceAvailable;
			Bruh[Instance].CurrentUserChoices.Add(DefaultChoice);
		}
	}
}

void AIs::UpdateNextChoices(UConversationInstance* Instance, FConversationContext& Context)
{
	TArray<FConversationBranchPoint> AllChoices;

	printf("UpdateNextChoices\n");
	if (UConversationTaskNode* TaskNode = Utils::Cast<UConversationTaskNode>(TryToResolve(Context, GetCurrentChoiceReference(Instance).NodeReference.NodeGUID)))
	{
		printf("UpdateNextChoices TaskNode: %s\n", TaskNode->GetName().c_str());
		FConversationContext ChoiceContext = Context;
		ChoiceContext.TaskBeingConsidered = TaskNode;
		FConversationBranchPointBuilder BranchBuilder{};

		GenerateNextChoices(TaskNode, BranchBuilder, ChoiceContext);

		AllChoices = BranchBuilder.BranchPoints;
	}

	SetNextChoices(Instance, AllChoices);
}

void AIs::PauseConversationAndSendClientChoices(UConversationInstance* Instance, FConversationContext& Context, FClientConversationMessage& ClientMessage)
{
	FClientConversationMessagePayload LastMessage = FClientConversationMessagePayload();
	LastMessage.Message = ClientMessage;
	LastMessage.Options = Bruh[Instance].CurrentUserChoices;
	LastMessage.CurrentNode = Bruh[Context.ActiveConversation].CurrentBranchPoint.ClientChoice.ChoiceReference.NodeReference;
	LastMessage.Participants = Instance->Participants;

	Bruh[Instance].ClientBranchPoints.Add({ Bruh[Instance].CurrentBranchPoint, Bruh[Instance].ScopeStack });

	for (FConversationParticipantEntry& KVP : LastMessage.Participants.List)
	{
		if (UConversationParticipantComponent* ParticipantComponent = Utils::Cast<UConversationParticipantComponent>(KVP.Actor->GetComponentByClass(UConversationParticipantComponent::StaticClass())))
		{
			ParticipantComponent->ClientUpdateConversation(LastMessage);
		}
	}
}

void AIs::ReturnToLastClientChoice(UConversationInstance* Instance, FConversationContext& Context)
{
	if (Bruh[Instance].ClientBranchPoints.Num() > 1)
	{
		Bruh[Instance].ClientBranchPoints.Remove(Bruh[Instance].ClientBranchPoints.Num() - 1);

		FCheckpoint& Checkpoint = Bruh[Instance].ClientBranchPoints[Bruh[Instance].ClientBranchPoints.Num() - 1];
		Bruh[Instance].ScopeStack = Checkpoint.ScopeStack;
		ModifyCurrentConversationNode(Instance, Checkpoint.ClientBranchPoint);
	}
}

void AIs::ReturnToCurrentClientChoice(UConversationInstance* Instance, FConversationContext& Context)
{
	if (Bruh[Instance].ClientBranchPoints.Num() > 0)
	{
		FCheckpoint Checkpoint = Bruh[Instance].ClientBranchPoints[Bruh[Instance].ClientBranchPoints.Num() - 1];

		// Pop after get the last checkpoint since we're about to repeat and push the same one onto the stack.
		Bruh[Instance].ClientBranchPoints.Remove(Bruh[Instance].ClientBranchPoints.Num() - 1);

		Bruh[Instance].ScopeStack = Checkpoint.ScopeStack;
		ModifyCurrentConversationNode(Instance, Checkpoint.ClientBranchPoint);
	}
}

void AIs::ReturnToStart(UConversationInstance* Instance, FConversationContext& Context)
{
	FGameplayTag EntryStartPointGameplayTagCache = Bruh[Instance].EntryTag;
	FConversationBranchPoint StartingBranchPointCache = Bruh[Instance].StartingBranchPoint;
	
	ResetConversationProgress(Instance);

	Bruh[Instance].EntryTag = EntryStartPointGameplayTagCache;
	Bruh[Instance].StartingBranchPoint = StartingBranchPointCache;

	ModifyCurrentConversationNode(Instance, Bruh[Instance].StartingBranchPoint);
}

void AIs::ModifyCurrentConversationNode(UConversationInstance* Instance, FConversationChoiceReference& NewChoice)
{
	FConversationBranchPoint BranchPoint;
	BranchPoint.ClientChoice.ChoiceReference = NewChoice;

	ModifyCurrentConversationNode(Instance, BranchPoint);
}

void AIs::ModifyCurrentConversationNode(UConversationInstance* Instance, FConversationBranchPoint& NewBranchPoint)
{
	printf("Modying Current Node From %s To %s\n", UKismetGuidLibrary::Conv_GuidToString(GetCurrentChoiceReference(Instance).NodeReference.NodeGUID).ToString().c_str(), UKismetGuidLibrary::Conv_GuidToString(NewBranchPoint.ClientChoice.ChoiceReference.NodeReference.NodeGUID).ToString().c_str());

	Bruh[Instance].CurrentBranchPoint = NewBranchPoint;

	for (auto& item1 : Bruh[Instance].ScopeStack)
	{
		NewBranchPoint.ReturnScopeStack.Add(item1.NodeReference);
	}

	OnCurrentConversationNodeModified(Instance);
}

void AIs::OnInvalidBranchChoice(UConversationInstance* Instance, FAdvanceConversationRequest& ChoiceReference)
{
	printf("User picked option %s but it's not a legal output, aborting", Instance->GetName().c_str());
	ServerAbortConversation(Instance);
}

FConversationBranchPoint* FindBranchPointFromClientChoice(UConversationInstance* Instance, FConversationChoiceReference& InChoice)
{
	for (auto& ConversationPoint : Bruh[Instance].CurrentBranchPoints)
	{
		if (ConversationPoint.ClientChoice.ChoiceType != EConversationChoiceType::ServerOnly)
		{
			if (ConversationPoint.ClientChoice.ChoiceReference.NodeReference.NodeGUID == InChoice.NodeReference.NodeGUID)
			{
				return &ConversationPoint;
			}
		}
	}

	return nullptr;
}

void AIs::ServerAdvanceConversation(UConversationInstance* Instance, FAdvanceConversationRequest& InChoicePicked)
{
	if (Bruh[Instance].ConvoStarted && UKismetGuidLibrary::IsValid_Guid(GetCurrentChoiceReference(Instance).NodeReference.NodeGUID))
	{
		printf("ServerAdvanceConversation is determining destinations from\n");

		TArray<FConversationBranchPoint> CandidateDestinations;

		FConversationContext ServerContext = CreateServerContext(Instance, nullptr);
		UConversationChoiceNode* ChoiceNodePicked = nullptr;

		if (UKismetGuidLibrary::IsValid_Guid(InChoicePicked.Choice.NodeReference.NodeGUID))
		{
			if (FConversationBranchPoint* BranchPoint = FindBranchPointFromClientChoice(Instance, InChoicePicked.Choice))
			{
				printf("User picked option br, going to try that\n");
				CandidateDestinations.Add(*BranchPoint);

				if (UConversationTaskNode* TaskNode = Utils::Cast<UConversationTaskNode>(TryToResolveChoiceNode(BranchPoint->ClientChoice, ServerContext)))
				{
					for (UConversationNode* SubNode : TaskNode->SubNodes)
					{
						if (UConversationChoiceNode* ChoiceNode = Utils::Cast<UConversationChoiceNode>(SubNode))
						{
							ChoiceNodePicked = ChoiceNode;
							//ChoiceNode->NotifyChoicePickedByUser(ServerContext, BranchPoint->ClientChoice); //HERE
							break;
						}
					}
				}
			}
			else
			{
				OnInvalidBranchChoice(Instance, InChoicePicked);
				return;
			}
		}
		else
		{
			if (Bruh[Instance].CurrentBranchPoints.Num() == 0 && Bruh[Instance].ScopeStack.Num() > 0)
			{
				ModifyCurrentConversationNode(Instance, Bruh[Instance].ScopeStack[Bruh[Instance].ScopeStack.Num() - 1]);
				return;
			}

			for (FConversationBranchPoint& BranchPoint : Bruh[Instance].CurrentBranchPoints)
			{
				if (BranchPoint.ClientChoice.ChoiceType != EConversationChoiceType::UserChoiceUnavailable)
				{
					CandidateDestinations.Add(BranchPoint);
				}
			}
		}

		// Double check the choices are still valid, things may have changed since the user picked the choices.
		TArray<FConversationBranchPoint> ValidDestinations;
		{
			FConversationContext Context = CreateServerContext(Instance, nullptr);
			for (FConversationBranchPoint& BranchPoint : CandidateDestinations)
			{
				if (UConversationTaskNode* TaskNode = Utils::Cast<UConversationTaskNode>(TryToResolveChoiceNode(BranchPoint.ClientChoice, Context)))
				{
					EConversationRequirementResult Result = EConversationRequirementResult::Passed;/*TaskNode->bIgnoreRequirementsWhileAdvancingConversations ? EConversationRequirementResult::Passed : TaskNode->CheckRequirements(Context);*/
					if (Result == EConversationRequirementResult::Passed)
					{
						ValidDestinations.Add(BranchPoint);
					}
				}
				else
				{
					ValidDestinations.Add(BranchPoint);
				}
			}
		}

		// Allow derived conversation instances a chance to respond to a choice being picked
		if (ChoiceNodePicked)
		{
			//OnChoiceNodePickedByUser(ServerContext, ChoiceNodePicked, ValidDestinations);
		}

		if (ValidDestinations.Num() == 0)
		{
			printf("No available destinations from nuh uh, ending the conversation\n");
			ServerAbortConversation(Instance);
			return;
		}
		else
		{
			FConversationChoiceReference& PreviousNode = GetCurrentChoiceReference(Instance);
			int32 StartingIndex = UKismetMathLibrary::RandomIntegerInRange(0, ValidDestinations.Num() - 1);
			FConversationBranchPoint& TargetChoice = ValidDestinations[StartingIndex];

			printf("Chosing destination index to (of legal branches) from\n");

			ModifyCurrentConversationNode(Instance, TargetChoice);
		}
	}
	else
	{
		printf("ServerAdvanceConversation called when the conversation is not active\n");
	}
}

void AIs::OnCurrentConversationNodeModified(UConversationInstance* Instance)
{
	if (!UKismetGuidLibrary::IsValid_Guid(GetCurrentChoiceReference(Instance).NodeReference.NodeGUID))
		return;

	FConversationContext AnonContext = CreateServerContext(Instance, nullptr);
	UConversationNode* CurrentNode = TryToResolve(AnonContext, GetCurrentChoiceReference(Instance).NodeReference.NodeGUID);
	if (UConversationTaskNode* TaskNode = Utils::Cast<UConversationTaskNode>(CurrentNode))
	{
		printf("Executing task node %s\n", UKismetGuidLibrary::Conv_GuidToString(GetCurrentChoiceReference(Instance).NodeReference.NodeGUID).ToString().c_str());

		FConversationContext Context = AnonContext;
		Context.TaskBeingConsidered = TaskNode;

		FConversationTaskResult TaskResult = ExecuteTaskNodeWithSideEffects(TaskNode, Context);
		printf("Task Result: %d\n", (int)TaskResult.Type);
		auto& ScopeStack = Bruh[Instance].ScopeStack;
		if (ScopeStack.Num() > 0 && ScopeStack[ScopeStack.Num() - 1].NodeReference.NodeGUID == TaskNode->Compiled_NodeGUID)
		{
			// Now that we've finally executed the Subgraph / scope modifying node, we can pop it from
			// the scope stack.
			ScopeStack.Remove(ScopeStack.Num() - 1);
		}

		// Update the next choices now that we've executed the task
		UpdateNextChoices(Instance, Context);

		if (TaskResult.Type == EConversationTaskResultType::AbortConversation)
		{
			ServerAbortConversation(Instance);
		}
		else if (TaskResult.Type == EConversationTaskResultType::AdvanceConversation)
		{
			auto bro = FAdvanceConversationRequest();
			ServerAdvanceConversation(Instance, bro);
		}
		else if (TaskResult.Type == EConversationTaskResultType::AdvanceConversationWithChoice)
		{
			//@TODO: CONVERSATION: We are only using the Choice here part of the request, but we need to complete
			// support UserParameters, just so we don't have unexpected differences in the system.
			ModifyCurrentConversationNode(Instance, TaskResult.AdvanceToChoice.Choice);
		}
		else if (TaskResult.Type == EConversationTaskResultType::PauseConversationAndSendClientChoices)
		{
			PauseConversationAndSendClientChoices(Instance, Context, TaskResult.Message);
		}
		else if (TaskResult.Type == EConversationTaskResultType::ReturnToLastClientChoice)
		{
			ReturnToLastClientChoice(Instance, Context);
		}
		else if (TaskResult.Type == EConversationTaskResultType::ReturnToCurrentClientChoice)
		{
			ReturnToCurrentClientChoice(Instance, Context);
		}
		else if (TaskResult.Type == EConversationTaskResultType::ReturnToConversationStart)
		{
			ReturnToStart(Instance, Context);
		}
		else
		{
			printf("Invalid ResultType executing task node %s\n", UKismetGuidLibrary::Conv_GuidToString(GetCurrentChoiceReference(Instance).NodeReference.NodeGUID).ToString().c_str());
		}
	}
	else
	{
		printf("Ended up with no task node with ID %s, aborting conversation\n", UKismetGuidLibrary::Conv_GuidToString(GetCurrentChoiceReference(Instance).NodeReference.NodeGUID).ToString().c_str());

		ServerAbortConversation(Instance);
	}
}

void AIs::TryStartingConversation(UConversationInstance* Instance)
{
	// If the conversation was aborted, nevermind.
	if (!Bruh[Instance].ConvoStarted)
	{
		return;
	}
	OnCurrentConversationNodeModified(Instance);
}

void AIs::ServerStartConversation(UConversationInstance* Instance, FGameplayTag EntryPoint)
{
	printf("Conversation %s starting at %s with %d participants\n",
		Instance->GetName().c_str(), EntryPoint.TagName.ToString().c_str(), Instance->Participants.List.Num());

	ResetConversationProgress(Instance);
	Bruh[Instance].EntryTag = EntryPoint;

	UConversationRegistry* ConversationRegistry = GetRegistryFromWorld(UWorld::GetWorld());

	TArray<FGuid> PotentialStartingPoints = GetOutputLinkGUIDs(ConversationRegistry, EntryPoint);
	if (PotentialStartingPoints.Num() == 0)
	{
		printf("Entry point %s did not exist or had no destination entries; conversation aborted\n", EntryPoint.TagName.ToString().c_str());
		ServerAbortConversation(Instance);
		return;
	}
	else
	{
		TArray<FGuid> LegalStartingPoints = DetermineBranches(Instance, PotentialStartingPoints, EConversationRequirementResult::FailedButVisible);

		if (LegalStartingPoints.Num() == 0)
		{
			printf("All branches from entry point %s are disabled, conversation aborted\n", EntryPoint.TagName.ToString().c_str());
			ServerAbortConversation(Instance);
			return;
		}
		else
		{
			int32 StartingIndex = UKismetMathLibrary::RandomIntegerInRange(0, LegalStartingPoints.Num() - 1);

			FConversationBranchPoint StartingPoint;
			StartingPoint.ClientChoice.ChoiceReference.NodeReference.NodeGUID = LegalStartingPoints[StartingIndex];

			Bruh[Instance].StartingBranchPoint = StartingPoint;
			Bruh[Instance].CurrentBranchPoint = StartingPoint;

			printf("Chosing branch index %d to g (of %d legal branches) from entry point %s\n",
				StartingIndex, LegalStartingPoints.Num(), EntryPoint.TagName.ToString().c_str());
		}
	}

	for (FConversationParticipantEntry& ParticipantEntry : Instance->Participants.List)
	{
		if (UConversationParticipantComponent* ParticipantComponent = Utils::Cast<UConversationParticipantComponent>(ParticipantEntry.Actor->GetComponentByClass(UConversationParticipantComponent::StaticClass())))
		{
			ServerNotifyConversationStarted(ParticipantComponent, Instance, ParticipantEntry.ParticipantID);
		}
	}

	Bruh[Instance].ConvoStarted = true;
	//OnAllParticipantsNotifiedOfStart.Broadcast(this);

	TryStartingConversation(Instance);
}

UConversationInstance* AIs::StartConversation(FGameplayTag ConversationEntryTag, AActor* Instigator,
	FGameplayTag InstigatorTag, AActor* Target, FGameplayTag TargetTag)
{
	if (Instigator == nullptr || Target == nullptr)
	{
		return nullptr;
	}

	if (UWorld* World = UWorld::GetWorld())
	{
		UClass* InstanceClass = UConversationSettings::GetDefaultObj()->ConversationInstanceClass.Get();
		if (InstanceClass == nullptr)
		{
			InstanceClass = UConversationInstance::StaticClass();
		}
		UConversationInstance* ConversationInstance = Utils::Cast<UConversationInstance>(UGameplayStatics::SpawnObject(InstanceClass, World));
		if (ConversationInstance)
		{
			Bruh[ConversationInstance] = {};
			FConversationContext Context = CreateServerContext(ConversationInstance, nullptr);

			MakeConversationParticipant(Context, Target, TargetTag);
			MakeConversationParticipant(Context, Instigator, InstigatorTag);

			ServerStartConversation(ConversationInstance, ConversationEntryTag);
		}

		return ConversationInstance;
	}

	return nullptr;
}

void Misc::OnKilled(AFortPlayerControllerAthena* DeadPC, AFortPlayerControllerAthena* KillerPC, UFortWeaponItemDefinition* KillerWeapon)
{
	Siphon(KillerPC);
	bool bruh;
	FGameplayTagContainer Empty{};
	FGameplayTagContainer Empty2{};
	XP::Challanges::SendStatEvent(KillerPC->GetQuestManager(ESubGame::Athena), DeadPC, KillerWeapon ? KillerWeapon->GameplayTags : (KillerPC->MyFortPawn->CurrentWeapon ? KillerPC->MyFortPawn->CurrentWeapon->WeaponData->GameplayTags : Empty), Empty2, &bruh, &bruh, 1, EFortQuestObjectiveStatEvent::Kill);
	Empty.GameplayTags.Free();
	Empty.ParentTags.Free();
	Empty2.ParentTags.Free();
	Empty2.GameplayTags.Free();
	auto GameMode = (AFortGameModeAthena*)UWorld::GetWorld()->AuthorityGameMode;
	for (auto PC : GameMode->AlivePlayers)
	{
		XP::Challanges::SendStatEvent(PC->GetQuestManager(ESubGame::Athena), nullptr, Empty, Empty2, &bruh, &bruh, 1, EFortQuestObjectiveStatEvent::AthenaOutlive);
	}

	auto KillerState = (AFortPlayerStateAthena*)KillerPC->PlayerState;
	if (!KillerState)
		return;
	auto DeadState = (AFortPlayerStateAthena*)DeadPC->PlayerState;
	if (!DeadState)
		return;

	static FGameplayTag EarnedElim = { UKismetStringLibrary::Conv_StringToName(TEXT("Event.EarnedElimination")) };
	FGameplayEventData Data{};
	Data.EventTag = EarnedElim;
	Data.ContextHandle = KillerState->AbilitySystemComponent->MakeEffectContext();
	Data.Instigator = KillerPC;
	Data.Target = DeadState;
	Data.TargetData = UAbilitySystemBlueprintLibrary::AbilityTargetDataFromActor(DeadState);
	UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(KillerPC->Pawn, Data.EventTag, Data);

	static auto BountyHunterClass = StaticLoadObject<UClass>("/Bounties/HuntingPlayer/Abilities/Hunter/GA_QuestBountyHunter.GA_QuestBountyHunter_C");
	static auto BountyTargetClass = StaticLoadObject<UClass>("/Bounties/HuntingPlayer/Abilities/Target/GA_QuestBountyTarget.GA_QuestBountyTarget_C");
	static auto TargetQuest = StaticLoadObject<UFortUrgentQuestItemDefinition>("/Bounties/HuntingPlayer/Quests/Items/quest_bounty_target_ind.quest_bounty_target_ind");
	static auto HunterQuest = StaticLoadObject<UFortUrgentQuestItemDefinition>("/Bounties/HuntingPlayer/Quests/Items/quest_bounty_hunter_ind.quest_bounty_hunter_ind");

	if (DeadPC->TransientQuestsComponent->ActiveUrgentQuests.Num() > 0)
	{
		for (auto& AbilitySpec : DeadState->AbilitySystemComponent->ActivatableAbilities.Items)
		{
			if (AbilitySpec.Ability->Class == BountyTargetClass)
			{
				((UFortPlayerBountyGameplayAbility*)AbilitySpec.ReplicatedInstances[0])->FailQuest();
				((UFortPlayerBountyGameplayAbility*)AbilitySpec.ReplicatedInstances[0])->StopUrgentQuestEvent(DeadPC->TransientQuestsComponent->ActiveUrgentQuests[0]);
				DeadState->AbilitySystemComponent->ClientEndAbility(AbilitySpec.Handle, AbilitySpec.ActivationInfo);
				DeadState->AbilitySystemComponent->ServerEndAbility(AbilitySpec.Handle, AbilitySpec.ActivationInfo, AbilitySpec.ActivationInfo.PredictionKeyWhenActivated);
				DeadPC->TransientQuestsComponent->StopPlayerBountyThreatLevelUpdates();
				DeadPC->TransientQuestsComponent->ClientRemoveThreatLevelBind();
				//DeadPC->TransientQuestsComponent->ClientBroadcastOnUrgentQuestEnded(DeadPC->TransientQuestsComponent->ActiveUrgentQuests[0].EventTag);
				DeadPC->TransientQuestsComponent->ClientRemoveTransientQuest(TargetQuest);
				DeadPC->TransientQuestsComponent->ActiveUrgentQuests.Remove(0);
				break;
			}
		}
	}

	if (KillerPC->TransientQuestsComponent->ActiveUrgentQuests.Num() > 0)
	{
		for (auto& AbilitySpec : KillerState->AbilitySystemComponent->ActivatableAbilities.Items)
		{
			if (AbilitySpec.Ability->Class == BountyHunterClass)
			{
				int Price = KillerPC->TransientQuestsComponent->TrackedHunterBountyTargetPrice;
				((UFortPlayerBountyGameplayAbility*)AbilitySpec.ReplicatedInstances[0])->CompleteQuest();
				((UFortPlayerBountyGameplayAbility*)AbilitySpec.ReplicatedInstances[0])->StopUrgentQuestEvent(KillerPC->TransientQuestsComponent->ActiveUrgentQuests[0]);
				KillerState->AbilitySystemComponent->ClientEndAbility(AbilitySpec.Handle, AbilitySpec.ActivationInfo);
				KillerState->AbilitySystemComponent->ServerEndAbility(AbilitySpec.Handle, AbilitySpec.ActivationInfo, AbilitySpec.ActivationInfo.PredictionKeyWhenActivated);
				//KillerPC->TransientQuestsComponent->ClientBroadcastOnUrgentQuestEnded(KillerPC->TransientQuestsComponent->ActiveUrgentQuests[0].EventTag);
				KillerPC->TransientQuestsComponent->ClientRemoveTransientQuest(HunterQuest);
				KillerPC->TransientQuestsComponent->ActiveUrgentQuests.Remove(0);
				break;
			}
		}
	}
}

EConversationRequirementResult Misc::HasService(UFortConversationRequirement_HasService* Requirement, FConversationContext& InContext)
{
	HasServiceOG(Requirement, InContext);

	UFortNPCConversationParticipantComponent* NpcComp = (UFortNPCConversationParticipantComponent*)InContext.ActiveConversation->Participants.List[0].Actor->GetComponentByClass(UFortNPCConversationParticipantComponent::StaticClass());
	if (!NpcComp)
	{
		return EConversationRequirementResult::FailedButVisible;
	}

	for (auto Tag : NpcComp->SupportedServices.GameplayTags)
	{
		if (Tag.TagName.ComparisonIndex == Requirement->ServiceTag.TagName.ComparisonIndex)
		{
			return EConversationRequirementResult::Passed;
		}
	}

	return EConversationRequirementResult::FailedAndHidden;
}

EConversationRequirementResult Misc::HasNoActiveQuests(UFortConversationRequirement_HasNoActiveQuests* Requirement, FConversationContext& InContext)
{
	auto Res = HasNoActiveQuestsOG(Requirement, InContext);
	
	AFortPlayerControllerAthena* PC = Utils::Cast<AFortPlayerControllerAthena>(InContext.ActiveConversation->Participants.List[1].Actor);
	if (!PC)
		return Res;

	if (PC->TransientQuestsComponent->ActiveUrgentQuests.Num() > 0)
	{
		return EConversationRequirementResult::FailedAndHidden;
	}
		
	Res = EConversationRequirementResult::Passed;
	return Res;
}

EConversationRequirementResult Misc::AllSlottedQuestPrerequisitesCompleted(UFortConversationRequirement_AllSlottedQuestPrerequisitesCompleted* Requirement, FConversationContext& InContext)//idk
{
	auto Res = AllSlottedQuestPrerequisitesCompletedOG(Requirement, InContext);
	//Res = EConversationRequirementResult::Passed;
	AFortPlayerControllerAthena* PC = Utils::Cast<AFortPlayerControllerAthena>(InContext.ActiveConversation->Participants.List[1].Actor);
	if (!PC)
		return Res;

	auto QuestManager = PC->GetQuestManager(ESubGame::Athena);

	if (PC->TransientQuestsComponent->ActiveUrgentQuests.Num() > 0)
		Res = EConversationRequirementResult::FailedAndHidden;
	
	return Res;
}

EConversationRequirementResult Misc::SlottedQuestNotCompletedThisMatch(UFortConversationRequirement_SlottedQuestNotCompletedThisMatch* Requirement, FConversationContext& InContext)
{
	auto Res = SlottedQuestNotCompletedThisMatchOG(Requirement, InContext);
	//Res = EConversationRequirementResult::Passed;
	AFortPlayerControllerAthena* PC = Utils::Cast<AFortPlayerControllerAthena>(InContext.ActiveConversation->Participants.List[1].Actor);
	if (!PC)
		return Res;
	auto QuestManager = PC->GetQuestManager(ESubGame::Athena);
	
	if (PC->TransientQuestsComponent->ActiveUrgentQuests.Num() > 0)
		Res = EConversationRequirementResult::FailedAndHidden;

	return Res;
}

EConversationRequirementResult Misc::ChildRequirements(UFortConversationRequirement_ChildRequirements* Requirement, FConversationContext& InContext)
{
	auto Res = ChildRequirementsOG(Requirement, InContext);
	Res = EConversationRequirementResult::Passed;
	return Res;
}

void Misc::RequestServerAbortConversation(UFortPlayerConversationComponent* Comp)
{
	AIs::ServerAbortConversation(Comp->Auth_CurrentConversation);
}

void Misc::InventoryBaseOnSpawned(UFortAthenaAISpawnerDataComponent_InventoryBase* a1, APawn* Pawn)
{
	if (!Pawn || !Pawn->Controller)
		return;
	auto PC = (AFortAthenaAIBotController*)Pawn->Controller;

	if (!PC->Inventory)
		PC->Inventory = Utils::SpawnActor<AFortInventory>({}, {}, PC);
	static auto ItemsOffset = GetOffset(a1, "Items");
	PC->StartupInventory->Items = *(TArray<FItemAndCount>*)(__int64(a1) + ItemsOffset);
	InventoryBaseOnSpawnedOG(a1, Pawn);
}

void Misc::OnPossesedPawnDiedHook(AFortAthenaAIBotController* Controller, AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector& HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector& Momentum)
{
	OnPossesedPawnDiedOG(Controller, DamagedActor, Damage, InstigatedBy, DamageCauser, HitLocation, FHitComponent, BoneName, Momentum);
	if (Controller)
	{
		auto PlayerState = Utils::Cast<AFortPlayerStateAthena>(Controller->PlayerState);
		if (PlayerState)
		{
			if (DamageCauser != nullptr)
			{
				auto KillerPC = Utils::Cast<AFortPlayerControllerAthena>(InstigatedBy);
				if (!KillerPC)
					return;
				auto KillerPlayerState = Utils::Cast<AFortPlayerStateAthena>(KillerPC->PlayerState);
				if (KillerPC && KillerPlayerState)
				{
					PlayerState->DeathInfo.bInitialized = true;
					PlayerState->DeathInfo.DeathCause = EDeathCause::Unspecified;
					PlayerState->DeathInfo.DeathClassSlot = (uint8)PlayerState->DeathInfo.DeathCause;
					PlayerState->DeathInfo.DeathLocation = Controller->PlayerBotPawn->K2_GetActorLocation();
					PlayerState->DeathInfo.Downer = KillerPlayerState;
					PlayerState->DeathInfo.FinisherOrDowner = KillerPlayerState;
					PlayerState->OnRep_DeathInfo();
					KillerPC->ClientReceiveKillNotification(KillerPlayerState, PlayerState);
					if (Controller->IsA(ABP_PhoebePlayerController_C::StaticClass()))
					{
						
						((AFortPlayerStateAthena*)KillerPlayerState)->ClientReportKill(PlayerState);
						((AFortPlayerStateAthena*)KillerPlayerState)->KillScore++;
						for (auto Member : ((AFortPlayerStateAthena*)KillerPlayerState)->PlayerTeam->TeamMembers)
						{
							((AFortPlayerStateAthena*)Member->PlayerState)->TeamKillScore++;
							((AFortPlayerStateAthena*)Member->PlayerState)->OnRep_TeamKillScore();
							((AFortPlayerStateAthena*)Member->PlayerState)->ClientReportTeamKill(((AFortPlayerStateAthena*)Member->PlayerState)->TeamKillScore);
						}
						((AFortPlayerStateAthena*)KillerPlayerState)->OnRep_Kills();
					}
				}
			}
		}
	}	
}

bool Misc::FreeFallingEvalHook(UFortAthenaAIBotEvaluator_FreeFalling* eval, __int64 a2, __int64 a3, char a4)
{
	//static auto BotPC = eval->CachedBotController;
	//static auto Name11 = UKismetStringLibrary::Conv_StringToName(TEXT("AIEvaluator_Dive_Destination"));
	//auto DropLoc = PoiLocs[UKismetMathLibrary::RandomIntegerInRange(0, PoiLocs.size() - 1)];
	//static auto Name20 = UKismetStringLibrary::Conv_StringToName(TEXT("AIEvaluator_JumpOffBus_Destination"));
	//static auto Name12 = UKismetStringLibrary::Conv_StringToName(TEXT("AIEvaluator_Glide_Destination"));
	//BotPC->Blackboard->SetValueAsVector(Name11, DropLoc);
	//BotPC->Blackboard->SetValueAsVector(Name12, DropLoc);
	//BotPC->Blackboard->SetValueAsVector(Name20, DropLoc);
	return 1;
}

void Bounties::OnTargeted(AFortPlayerControllerAthena* HunterPC, AFortPlayerControllerAthena* TargetPC)
{
	auto HunterState = (AFortPlayerStateAthena*)HunterPC->PlayerState;
	auto TargetState = (AFortPlayerStateAthena*)TargetPC->PlayerState;
	if (!HunterPC || !HunterState || !TargetState)
		return;
	auto Comp = TargetPC->TransientQuestsComponent;
	static auto TargetQuest = StaticLoadObject<UFortUrgentQuestItemDefinition>("/Bounties/HuntingPlayer/Quests/Items/quest_bounty_target_ind.quest_bounty_target_ind");
	static auto TargetAbility = StaticLoadObject<UClass>("/Bounties/HuntingPlayer/Abilities/Target/GA_QuestBountyTarget.GA_QuestBountyTarget_C");
	static FText EmptyText = UKismetTextLibrary::Conv_StringToText(TEXT(""));

	FDateTime NowDateTime;
	SYSTEMTIME Time;
	GetLocalTime(&Time);
	MakeFDateTime(&NowDateTime, Time.wYear, Time.wMonth, Time.wDay, Time.wHour, Time.wMinute, Time.wSecond, Time.wMilliseconds);

	auto UrgentData = TargetQuest->GetUrgentQuestData();
	UrgentData.EventSubtitleSecondary = EmptyText;
	UrgentData.AcceptingPlayer = HunterState;
	UrgentData.DisplayPlayer = TargetState;
	UrgentData.EventStartTime = NowDateTime;
	UrgentData.SocialAvatarBrushPtr = TargetState->GetSocialAvatarBrush(true);
	UrgentData.TotalEventTime = 360;

	Comp->TrackedBountyHunters.Add(HunterState);
	Comp->TrackedHunterBountyTarget = HunterState;
	Comp->TrackedHunterBountyTargetDistance = TargetPC->Pawn->GetDistanceTo(HunterPC->Pawn);
	Comp->TrackedHunterBountyTargetPrice = 200;
	Comp->TrackedPrimaryHunter = HunterState;
	Comp->OnRep_TrackedHunterBountyTargetDistance();

	Comp->ActiveUrgentQuests.Add(UrgentData);
	Comp->ClientGrantTransientQuest(TargetQuest);
	
	auto Handle = PlayerController::Abilities::GiveAbility(TargetState->AbilitySystemComponent, TargetAbility, HunterPC, true);
	auto Spec = PlayerController::Abilities::FindAbilityFromSpecHandle(TargetState->AbilitySystemComponent, Handle);
	if (!Spec)
		return;
	
	TargetState->AbilitySystemComponent->ServerTryActivateAbility(Spec->Handle, true, Spec->ActivationInfo.PredictionKeyWhenActivated);
	((UFortPlayerBountyGameplayAbility*)Spec->ReplicatedInstances[0])->StartUrgentQuestEvent(UrgentData);

	Comp->ClientBroadcastOnUrgentQuestStarted(UrgentData, 360);
	//Comp->ClientBroadcastOnPlayerBountyThreatLevelUpdated(EPlayerBountyThreatLevel::Low);
}

void Bounties::StartHunt(AFortPlayerControllerAthena* HunterPC, AFortPlayerControllerAthena* TargetPC)
{
	if (!HunterPC || !TargetPC)
		return;
	auto HunterState = (AFortPlayerStateAthena*)HunterPC->PlayerState;
	auto TargetState = (AFortPlayerStateAthena*)TargetPC->PlayerState;
	if (!HunterPC || !HunterState || !TargetState)
		return;
	auto Comp = HunterPC->TransientQuestsComponent;
	static auto HunterQuest = StaticLoadObject<UFortUrgentQuestItemDefinition>("/Bounties/HuntingPlayer/Quests/Items/quest_bounty_hunter_ind.quest_bounty_hunter_ind");
	static auto HunterAbility = StaticLoadObject<UClass>("/Bounties/HuntingPlayer/Abilities/Hunter/GA_QuestBountyHunter.GA_QuestBountyHunter_C");
	static FText EmptyText = UKismetTextLibrary::Conv_StringToText(TEXT(""));

	FDateTime NowDateTime;
	SYSTEMTIME Time;
	GetLocalTime(&Time);
	MakeFDateTime(&NowDateTime, Time.wYear, Time.wMonth, Time.wDay, Time.wHour, Time.wMinute, Time.wSecond, Time.wMilliseconds);

	auto UrgentData = HunterQuest->GetUrgentQuestData();
	UrgentData.EventSubtitleSecondary = EmptyText;
	UrgentData.AcceptingPlayer = HunterState;
	UrgentData.DisplayPlayer = TargetState;
	UrgentData.EventStartTime = NowDateTime;
	UrgentData.SocialAvatarBrushPtr = TargetState->GetSocialAvatarBrush(true);
	UrgentData.TotalEventTime = 360;

	Comp->TrackedBountyHunters.Add(HunterState);
	Comp->TrackedHunterBountyTarget = TargetState;
	Comp->TrackedHunterBountyTargetDistance = TargetPC->Pawn->GetDistanceTo(HunterPC->Pawn);
	Comp->TrackedHunterBountyTargetPrice = 200;
	Comp->TrackedPrimaryHunter = HunterState;
	Comp->OnRep_TrackedHunterBountyTargetDistance();

	Comp->ActiveUrgentQuests.Add(UrgentData);
	Comp->ClientGrantTransientQuest(HunterQuest);
	
	auto Handle = PlayerController::Abilities::GiveAbility(HunterState->AbilitySystemComponent, HunterAbility, TargetPC, true);
	auto Spec = PlayerController::Abilities::FindAbilityFromSpecHandle(HunterState->AbilitySystemComponent, Handle);
	if (!Spec)
		return;
	
	HunterState->AbilitySystemComponent->ServerTryActivateAbility(Spec->Handle, true, Spec->ActivationInfo.PredictionKeyWhenActivated);
	((UFortPlayerBountyGameplayAbility*)Spec->ReplicatedInstances[0])->StartUrgentQuestEvent(UrgentData);
	Comp->ClientBroadcastOnUrgentQuestStarted(UrgentData, 360);
	OnTargeted(HunterPC, TargetPC);
}

void Misc::ServerOnExitVehicle(AFortPlayerPawnAthena* Pawn, ETryExitVehicleBehavior Behavior)
{
	auto Vehicle = Pawn->GetVehicle();
	if (!Vehicle)
		return ServerOnExitVehicleOG(Pawn, Behavior);

	auto PC = (AFortPlayerControllerAthena*)Pawn->Controller;
	if (!Pawn->CurrentWeapon || !Pawn->CurrentWeapon->IsA(AFortWeaponRangedForVehicle::StaticClass()))
		return ServerOnExitVehicleOG(Pawn, Behavior);
	auto Entry = Inventory::FindEntry(PC, Pawn->CurrentWeapon->ItemEntryGuid);
	Inventory::RemoveItem(PC, Entry->ItemGuid);
	Entry = Inventory::FindEntry(PC, PC->SwappingItemDefinition);
	Pawn->EquipWeaponDefinition((UFortWeaponItemDefinition*)Entry->ItemDefinition, Entry->ItemGuid, Entry->TrackerGuid);

	ServerOnExitVehicleOG(Pawn, Behavior);
}