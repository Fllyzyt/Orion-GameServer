#include "Inventory.h"
#include <numeric>
#include "settings.h"
#include "Misc.h"
#include "XP.h"

using namespace std;

int Inventory::GetMagSize(UFortWeaponItemDefinition* Def)
{
	if(!Def)
		return 0;

	UDataTable* Table = Def->WeaponStatHandle.DataTable;
	if(!Table)
		return 0;

	auto& RowMap = *(MTMap<FName, void*>*)(__int64(Table) + 0x30);
	for (auto& Pair : RowMap)
	{
		if(Pair.Key().ToString() == Def->WeaponStatHandle.RowName.ToString())
		{
			return ((FFortRangedWeaponStats*)Pair.Value())->ClipSize;
		}
	}

	return 0;
}

int GetSpread(UFortWeaponItemDefinition* Def)
{
	if (!Def)
		return 0;

	UDataTable* Table = Def->WeaponStatHandle.DataTable;
	if (!Table)
		return 0;

	auto& RowMap = *(MTMap<FName, void*>*)(__int64(Table) + 0x30);
	for (auto& Pair : RowMap)
	{
		if (Pair.Key().ToString() == Def->WeaponStatHandle.RowName.ToString())
		{
			return ((FFortRangedWeaponStats*)Pair.Value())->Spread;
		}
	}
	return 0;
}

int GetMaxStackSize(UFortItemDefinition* Def)
{
	float Value = Def->MaxStackSize.Value;
	auto Table = Def->MaxStackSize.Curve.CurveTable;
	EEvaluateCurveTableResult Res;
	float Out;
	UDataTableFunctionLibrary::EvaluateCurveTableRow(Table, Def->MaxStackSize.Curve.RowName, 0, &Res, &Out, FString());
	if(!Table || Out <= 0)
		Out = Value;
	return Out;
}

void Inventory::UpdateInventory(AFortPlayerController* PC, FFortItemEntry& Entry)
{
	for (size_t i = 0; i < PC->WorldInventory->Inventory.ItemInstances.Num(); i++)
	{
		if (PC->WorldInventory->Inventory.ItemInstances[i]->ItemEntry.ItemGuid == Entry.ItemGuid)
		{
			PC->WorldInventory->Inventory.ItemInstances[i]->ItemEntry = Entry;
			break;
		}
	}
}

void Inventory::GiveItem(AFortPlayerController* PC, UFortItemDefinition* Def, int Count, int LoadedAmmo)
{
	if (!Def || Count < 1)
		return;

	UFortWorldItem* Item = Utils::Cast<UFortWorldItem>(Def->CreateTemporaryItemInstanceBP(Count, 0));
	Item->SetOwningControllerForTemporaryItem(PC);
	Item->OwnerInventory = PC->WorldInventory;
	Item->ItemEntry.LoadedAmmo = LoadedAmmo;
	FFortItemEntryStateValue Value{};
	Value.StateType = EFortItemEntryState::ShouldShowItemToast;
	Item->ItemEntry.StateValues.Add(Value);

	PC->WorldInventory->Inventory.ReplicatedEntries.Add(Item->ItemEntry);
	PC->WorldInventory->Inventory.ItemInstances.Add(Item);

	//Gadgets
	//if (Def->IsA(UFortGadgetItemDefinition::StaticClass())) {
	//	UFortGadgetItemDefinition* GadgetDef = (UFortGadgetItemDefinition*)Def;
	//	reinterpret_cast<bool(*)(UFortGadgetItemDefinition*, IFortInventoryOwnerInterface*,UFortItem*,char)>(__int64(GetModuleHandleW(0)) + 0x2AEFFD5)(GadgetDef,reinterpret_cast<IFortInventoryOwnerInterface*(*)(AFortPlayerController*, UClass*)>(__int64(GetModuleHandleW(0)) + 0x3AD9490)(PC, IFortInventoryOwnerInterface::StaticClass()), Item, true);
	//}

	PC->WorldInventory->Inventory.MarkItemDirty(Item->ItemEntry);
	PC->WorldInventory->HandleInventoryLocalUpdate();

	//I hate Fortnite
	//if (((UFortWorldItemDefinition*)Def)->bForceFocusWhenAdded) PC->ServerExecuteInventoryItem(Item->ItemEntry.ItemGuid);
}

void Inventory::GiveItemStack(AFortPlayerController* PC, UFortItemDefinition* Def, int Count, int LoadedAmmo)
{
	EEvaluateCurveTableResult Result;
	float OutXY = 0;
	UDataTableFunctionLibrary::EvaluateCurveTableRow(Def->MaxStackSize.Curve.CurveTable, Def->MaxStackSize.Curve.RowName, 0, &Result, &OutXY, FString());
	if (!Def->MaxStackSize.Curve.CurveTable || OutXY <= 0)
		OutXY = Def->MaxStackSize.Value;;
	FFortItemEntry* Found = nullptr;
	for (size_t i = 0; i < PC->WorldInventory->Inventory.ReplicatedEntries.Num(); i++)
	{
		if (PC->WorldInventory->Inventory.ReplicatedEntries[i].ItemDefinition == Def)
		{
			Found = &PC->WorldInventory->Inventory.ReplicatedEntries[i];
			PC->WorldInventory->Inventory.ReplicatedEntries[i].Count += Count;
			if (PC->WorldInventory->Inventory.ReplicatedEntries[i].Count > OutXY)
			{
				PC->WorldInventory->Inventory.ReplicatedEntries[i].Count = OutXY;
			}
			if (PC->WorldInventory->Inventory.ReplicatedEntries[i].StateValues[0].IntValue)
				PC->WorldInventory->Inventory.ReplicatedEntries[i].StateValues[0].IntValue = false;
			PC->WorldInventory->Inventory.MarkItemDirty(PC->WorldInventory->Inventory.ReplicatedEntries[i]);
			UpdateInventory(PC, PC->WorldInventory->Inventory.ReplicatedEntries[i]);
			PC->WorldInventory->HandleInventoryLocalUpdate();
			return;
		}
	}

	if (!Found)
	{
		GiveItem(PC, Def, Count, LoadedAmmo);
	}
}

void Inventory::RemoveItem(AFortPlayerController* PC, UFortItemDefinition* Def, int Count)
{
	bool Remove = false;
	FGuid guid;
	for (size_t i = 0; i < PC->WorldInventory->Inventory.ReplicatedEntries.Num(); i++)
	{
		auto& Entry = PC->WorldInventory->Inventory.ReplicatedEntries[i];
		if (Entry.ItemDefinition == Def)
		{
			Entry.Count -= Count;
			if (Entry.Count <= 0)
			{
				//if (Def->IsA(UFortGadgetItemDefinition::StaticClass())) reinterpret_cast<bool(*)(UFortGadgetItemDefinition*, IFortInventoryOwnerInterface*, UFortItem*)>(__int64(GetModuleHandleW(0)) + 0x2AF2EA0)((UFortGadgetItemDefinition*)Def, reinterpret_cast<IFortInventoryOwnerInterface * (*)(AFortPlayerController*, UClass*)>(__int64(GetModuleHandleW(0)) + 0x3AD9490)(PC, IFortInventoryOwnerInterface::StaticClass()), PC->WorldInventory->Inventory.ItemInstances[i]);
				PC->WorldInventory->Inventory.ReplicatedEntries[i].StateValues.Free();
				PC->WorldInventory->Inventory.ReplicatedEntries.Remove(i);
				Remove = true;
				guid = Entry.ItemGuid;
			}
			else
			{
				PC->WorldInventory->Inventory.MarkItemDirty(PC->WorldInventory->Inventory.ReplicatedEntries[i]);
				UpdateInventory(PC, Entry);
				PC->WorldInventory->HandleInventoryLocalUpdate();
				return;
			}
			break;
		}
	}

	if (Remove)
	{
		for (size_t i = 0; i < PC->WorldInventory->Inventory.ItemInstances.Num(); i++)
		{
			if (PC->WorldInventory->Inventory.ItemInstances[i]->GetItemGuid() == guid)
			{
				PC->WorldInventory->Inventory.ItemInstances.Remove(i);
				break;
			}
		}
	}

	PC->WorldInventory->Inventory.MarkArrayDirty();
	PC->WorldInventory->HandleInventoryLocalUpdate();
}

void Inventory::RemoveItem(AFortPlayerController* PC, FGuid Guid, int Count)
{
	for (auto& Entry : PC->WorldInventory->Inventory.ReplicatedEntries)
	{
		if (Entry.ItemGuid == Guid)
		{
			Inventory::RemoveItem(PC, Entry.ItemDefinition, Count);
			break;
		}
	}
}

FFortItemEntry* Inventory::FindEntry(AFortPlayerController* PC, FGuid Guid)
{
	for (auto& Entry : PC->WorldInventory->Inventory.ReplicatedEntries)
	{
		if (Entry.ItemGuid == Guid)
		{
			return &Entry;
		}
	}
	return nullptr;
}

FFortItemEntry* Inventory::FindEntry(AFortPlayerController* PC, UFortItemDefinition* Def)
{
	for (auto& Entry : PC->WorldInventory->Inventory.ReplicatedEntries)
	{
		if (Entry.ItemDefinition == Def)
		{
			return &Entry;
		}
	}
	return nullptr;
}

bool Inventory::SpawnLoot(ABuildingContainer* Object)
{
	FName& MatchState = ((AFortGameModeAthena*)UWorld::GetWorld()->AuthorityGameMode)->MatchState;

	if (!Object || MatchState.ComparisonIndex == LeavingMapName.ComparisonIndex || MatchState.ComparisonIndex == WaitingToStartName.ComparisonIndex)
		return false;

    if (Object->bAlreadySearched == 1)
        return false;

    auto LootDrops = Inventory::PickLootDrops(Object->SearchLootTierGroup, Utils::Cast<AFortGameStateAthena>(UWorld::GetWorld()->GameState)->WorldLevel, -1);
    if (LootDrops.size() <= 0)
        return false;

    Object->bAlreadySearched = true;
    Object->SearchBounceData.SearchAnimationCount++;

    FVector Loc = Object->K2_GetActorLocation() + (Object->GetActorForwardVector() * Object->LootSpawnLocation_Athena.X) + (Object->GetActorRightVector() * Object->LootSpawnLocation_Athena.Y) + (Object->GetActorUpVector() * Object->LootSpawnLocation_Athena.Z);
    Object->BounceContainer();
    Object->OnRep_bAlreadySearched();

    for (auto& Drop : LootDrops)
    {
        if (!Drop.ItemDefinition || Drop.Count <= 0)
            continue;

        Utils::SpawnPickup(Loc, Drop.ItemDefinition, EFortPickupSourceTypeFlag::Container, EFortPickupSpawnSource::Chest, Drop.Count, Drop.LoadedAmmo);
    }

    return true;
}

void __fastcall Inventory::ABuildingSMActor_PostUpdate(ABuildingSMActor* Actor)
{
    if (!Actor)
        return;
    ABuildingSMActor_PostUpdateOG(Actor);

    if (Actor->IsA(ABuildingContainer::StaticClass()))
    {
		AFortGameModeAthena* GM = Utils::Cast<AFortGameModeAthena>(UWorld::GetWorld()->AuthorityGameMode);
		auto& Redirect = *(MTMap<FName, FName>*)(__int64(GM) + 0x14B0);
		for (auto& Pair : Redirect)
		{
			if (Pair.Key() == ((ABuildingContainer*)Actor)->SearchLootTierGroup)
			{
				((ABuildingContainer*)Actor)->SearchLootTierGroup = Pair.Value();
				break;
			}
		}
    }
}

bool Inventory::PickRowsFromDataTables(std::map<FName, void*>* OutMap, const std::vector<UDataTable*>& DataTables, const std::function<bool(FName, void*)> CheckFunction)
{
	static auto Offset = 0x30;
	if (!OutMap || DataTables.empty())
		return false;

	std::vector<UDataTable*> Tables;
	for (auto& DataTable : DataTables)
	{
		if (!DataTable)
			continue;

		if (auto CompositeDT = Utils::Cast<UCompositeDataTable>(DataTable))
		{
			for (auto& ParentTable : CompositeDT->ParentTables)
			{
				if (ParentTable)
					Tables.push_back(ParentTable);
			}
		}

		Tables.push_back(DataTable);
	}

	if (Tables.empty())
		return false;

	for (auto DT : Tables)
	{
		if (DT)
		{
			auto& RowMap = *(MTMap<FName, void*>*)(__int64(DT) + Offset);
			for (auto& Pair : RowMap)
			{
				if (CheckFunction(Pair.Key(), Pair.Value()))
					((*OutMap)[Pair.Key()]) = Pair.Value();
			}
		}
	}

	return true;
}

FFortLootTierData* Inventory::PickWeightedLootTierData(const std::map<FName, FFortLootTierData*> LootTierDatas, int Multiplier)
{
	float TotalWeight = std::accumulate(LootTierDatas.begin(), LootTierDatas.end(), 0.0f, [&](float acc, const std::pair<FName, FFortLootTierData*>& pair)
	{
		return acc + pair.second->Weight;
	});

	float PickedWeight = Multiplier * ((rand() * 0.000030518509f) * TotalWeight);

	for (auto& Pairs : LootTierDatas)
	{
		if (Pairs.second->Weight == 0)
			continue;

		if (PickedWeight <= Pairs.second->Weight)
			return Pairs.second;

		PickedWeight -= Pairs.second->Weight;
	}

	return nullptr;
}

FFortLootTierData* Inventory::PickLootTierData(const std::vector<UDataTable*>& LootTierDataTables, FName LootTierGroup, int32 LootTier)
{
	std::map<FName, FFortLootTierData*> LootTiers;

	auto Check = [&](FName RowName, void* LootTierData) {
		if (((FFortLootTierData*)LootTierData)->TierGroup.ComparisonIndex == LootTierGroup.ComparisonIndex)
		{
			if (LootTier == -1 || LootTier == ((FFortLootTierData*)LootTierData)->LootTier)
				return true;
		}
		return false;
		};
	PickRowsFromDataTables((std::map<FName, void*>*) & LootTiers, LootTierDataTables, Check);
	return PickWeightedLootTierData(LootTiers, LootTier == -1 ? 1 : LootTier);
}

FFortLootPackageData* Inventory::PickWeightedLootPackageData(const std::map<FName, FFortLootPackageData*> LootPackages)
{
	float TotalWeight = std::accumulate(LootPackages.begin(), LootPackages.end(), 0.f, [&](float acc, const std::pair<FName, FFortLootPackageData*>& pair) { return acc + pair.second->Weight; });
	float PickedWeight = (rand() * 0.000030518509f) * TotalWeight;

	for (auto& Pairs : LootPackages)
	{
		if (Pairs.second->Weight == 0)
			continue;

		if (PickedWeight <= Pairs.second->Weight)
			return Pairs.second;

		PickedWeight -= Pairs.second->Weight;
	}

	return nullptr;
}

void Inventory::PickLootDropsFromPackage(const std::vector<UDataTable*>& LootPackagesTables, std::vector<FFortItemEntry>* OutItemEntries, FName& LootPackageName, int LootPackageCategory, int WorldLevel)
{
	std::map<FName, FFortLootPackageData*> LootPackagesMap;
	PickRowsFromDataTables((std::map<FName, void*>*) & LootPackagesMap, LootPackagesTables, [&](FName RowName, void* LootPackageData)
		{
			if (((FFortLootPackageData*)LootPackageData)->LootPackageID.ComparisonIndex != LootPackageName.ComparisonIndex)
				return false;
			if (((FFortLootPackageData*)LootPackageData)->LootPackageCategory != LootPackageCategory && LootPackageCategory != -1)
				return false;
			if (WorldLevel >= 0)
			{
				if (((FFortLootPackageData*)LootPackageData)->MaxWorldLevel >= 0 && WorldLevel > ((FFortLootPackageData*)LootPackageData)->MaxWorldLevel)
					return false;

				if (((FFortLootPackageData*)LootPackageData)->MinWorldLevel >= 0 && WorldLevel < ((FFortLootPackageData*)LootPackageData)->MinWorldLevel)
					return false;
			}

			return true;
		});

	if (!LootPackagesMap.size())
	{
		//printf("Can't find valid lootpackages with valid weight\n");
		return;
	}

	auto LootPackage = PickWeightedLootPackageData(LootPackagesMap);
	if (!LootPackage)
		return;

	if (LootPackage->LootPackageCall.Num() > 1)
	{
		if (LootPackage->Count > 0)
		{
			for (int i = 0; i < LootPackage->Count; ++i)
				PickLootDropsFromPackage(LootPackagesTables, OutItemEntries, (FName&)UKismetStringLibrary::Conv_StringToName(LootPackage->LootPackageCall), 0, WorldLevel);
		}
		return;
	}

	FString nameStr = UKismetStringLibrary::Conv_NameToString(LootPackage->ItemDefinition.ObjectID.AssetPathName);
	auto ItemDef = Utils::Cast<UFortWorldItemDefinition>(StaticLoadObject<UFortItemDefinition>(nameStr.ToString()));
	nameStr.Free();
	if (!ItemDef)
		return;

	int ItemLevel = 0;//cba rn

	bool IsWeapon = Utils::Cast<UFortWeaponItemDefinition>(ItemDef) && LootPackage->LootPackageID.ToString().contains(".Weapon.");
	int LoadedAmmo = IsWeapon ? GetMagSize(Utils::Cast<UFortWeaponItemDefinition>(ItemDef)) : 0;
	int Count = LootPackage->Count;

	if (Count > 0)
	{
		int PreferredLevel = 0;
		if (ItemLevel >= 0)
			PreferredLevel = ItemLevel;
		while (Count > 0)
		{
			float Value = ItemDef->MaxStackSize.Value;
			float OutXY;
			EEvaluateCurveTableResult Res;
			UDataTableFunctionLibrary::EvaluateCurveTableRow(ItemDef->MaxStackSize.Curve.CurveTable, ItemDef->MaxStackSize.Curve.RowName, 0, &Res, &OutXY, FString());
			if (OutXY <= 0)
				OutXY = Value;
			int MaxStackSize = OutXY;
			int CurrentCount = MaxStackSize;
			if (Count <= MaxStackSize)
				CurrentCount = Count;
			if (CurrentCount <= 0)
				CurrentCount = 0;

			int Level = 0;

			bool bShouldMakeNewEntry = true;

			for (auto& ItemEntry : *OutItemEntries)
			{
				if (ItemEntry.ItemDefinition == ItemDef)
				{
					if ((ItemEntry.Count + CurrentCount) <= MaxStackSize)
					{
						ItemEntry.Count = ItemEntry.Count + CurrentCount;
						bShouldMakeNewEntry = false;
					}
				}
			}

			if (bShouldMakeNewEntry)
			{
				FFortItemEntry Entry{};
				Entry.ItemDefinition = ItemDef;
				Entry.Level = Level;
				Entry.Count = CurrentCount;
				Entry.LoadedAmmo = LoadedAmmo;
				OutItemEntries->push_back(Entry);

				if (IsWeapon && ItemDef->GetAmmoWorldItemDefinition_BP() && ItemDef->GetAmmoWorldItemDefinition_BP() != ItemDef)
				{
					FFortItemEntry Entry2{};
					Entry2.ItemDefinition = ItemDef->GetAmmoWorldItemDefinition_BP();
					Entry2.Count = ((UFortAmmoItemDefinition*)ItemDef->GetAmmoWorldItemDefinition_BP())->DropCount;
					OutItemEntries->push_back(Entry2);
				}
			}

			Count -= CurrentCount;
		}
	}
}

std::vector<FFortItemEntry> Inventory::PickLootDrops(FName TierGroupName, int32 WorldLevel, int32 ForcedLootTier)
{
	std::vector<FFortItemEntry> LootDrops{};

	if (!IsLootingEnabled)
		return LootDrops;

	static std::vector<UDataTable*> LootPackage_Tables;
	static std::vector<UDataTable*> LootTierData_Tables;

	static bool bSetup = false;
	if (!bSetup)
	{
		bSetup = true;
		LootPackage_Tables.clear();
		LootTierData_Tables.clear();

		auto Playlist = Utils::Cast<AFortGameStateAthena>(UWorld::GetWorld()->GameState)->CurrentPlaylistInfo.BasePlaylist;

		//auto Playlist_LootPackages = StaticLoadObject<UDataTable>("/Game/Items/Datatables/AthenaLootPackages_Client.AthenaLootPackages_Client");
		//auto Playlist_LootTierData = StaticLoadObject<UDataTable>("/Game/Items/Datatables/AthenaLootTierData_Client.AthenaLootTierData_Client");
		string LootPackagesName = UKismetStringLibrary::Conv_NameToString(Playlist->LootPackages.ObjectID.AssetPathName).ToString();
		string TierDataName = UKismetStringLibrary::Conv_NameToString(Playlist->LootTierData.ObjectID.AssetPathName).ToString();
		auto Playlist_LootPackages = StaticLoadObject<UDataTable>(LootPackagesName);
		Playlist_LootPackages = StaticLoadObject<UDataTable>(LootPackagesName);
		Playlist_LootPackages = StaticLoadObject<UDataTable>(LootPackagesName);
		Playlist_LootPackages = StaticLoadObject<UDataTable>(LootPackagesName);
		Playlist_LootPackages = StaticLoadObject<UDataTable>(LootPackagesName);
		Playlist_LootPackages = StaticLoadObject<UDataTable>(LootPackagesName);
		Playlist_LootPackages = StaticLoadObject<UDataTable>(LootPackagesName);
		Playlist_LootPackages = StaticLoadObject<UDataTable>(LootPackagesName);
		Playlist_LootPackages = StaticLoadObject<UDataTable>(LootPackagesName);
		Playlist_LootPackages = StaticLoadObject<UDataTable>(LootPackagesName);
		Playlist_LootPackages = StaticLoadObject<UDataTable>(LootPackagesName);
		Playlist_LootPackages = StaticLoadObject<UDataTable>(LootPackagesName);
		Playlist_LootPackages = StaticLoadObject<UDataTable>(LootPackagesName);
		Playlist_LootPackages = StaticLoadObject<UDataTable>(LootPackagesName);
		Playlist_LootPackages = StaticLoadObject<UDataTable>(LootPackagesName);
		Playlist_LootPackages = StaticLoadObject<UDataTable>(LootPackagesName);
		auto Playlist_LootTierData = StaticLoadObject<UDataTable>(TierDataName);
		Playlist_LootTierData = StaticLoadObject<UDataTable>(TierDataName);
		Playlist_LootTierData = StaticLoadObject<UDataTable>(TierDataName);
		Playlist_LootTierData = StaticLoadObject<UDataTable>(TierDataName);
		Playlist_LootTierData = StaticLoadObject<UDataTable>(TierDataName);
		Playlist_LootTierData = StaticLoadObject<UDataTable>(TierDataName);
		Playlist_LootTierData = StaticLoadObject<UDataTable>(TierDataName);
		Playlist_LootTierData = StaticLoadObject<UDataTable>(TierDataName);
		Playlist_LootTierData = StaticLoadObject<UDataTable>(TierDataName);
		Playlist_LootTierData = StaticLoadObject<UDataTable>(TierDataName);
		Playlist_LootTierData = StaticLoadObject<UDataTable>(TierDataName);
		Playlist_LootTierData = StaticLoadObject<UDataTable>(TierDataName);
		Playlist_LootTierData = StaticLoadObject<UDataTable>(TierDataName);
		Playlist_LootTierData = StaticLoadObject<UDataTable>(TierDataName);
		Playlist_LootTierData = StaticLoadObject<UDataTable>(TierDataName);

		LootPackage_Tables.push_back(Playlist_LootPackages);
		LootTierData_Tables.push_back(Playlist_LootTierData);
	}

	if (LootPackage_Tables.size() <= 0 || LootTierData_Tables.size() <= 0)
	{
		//printf("Empty Loot Tables\n");
		return LootDrops;
	}

	auto LootTierData = PickLootTierData(LootTierData_Tables, TierGroupName, ForcedLootTier);

	if (!LootTierData)
	{
		//printf("Cannot find LootTierData for %s", TierGroupName.ToString().c_str());
		return LootDrops;
	}
	
	if (LootTierData->LootPackageCategoryMinArray.Num() != LootTierData->LootPackageCategoryWeightArray.Num() || LootTierData->LootPackageCategoryMinArray.Num() != LootTierData->LootPackageCategoryMaxArray.Num())
		return LootDrops;

	int NumLootDrops = 0;
	if (LootTierData->LootPackageCategoryMinArray.Num())
	{
		for (int i = 0; i < LootTierData->LootPackageCategoryMinArray.Num(); ++i)
		{
			if (LootTierData->LootPackageCategoryMinArray.At(i) > 0)
				NumLootDrops += LootTierData->LootPackageCategoryMinArray.At(i);
		}
	}

	LootDrops.reserve(NumLootDrops);
	if (NumLootDrops > 0)
	{
		for (int i = 0; i < NumLootDrops; ++i)
		{
			if (i >= LootTierData->LootPackageCategoryMinArray.Num())
				break;

			for (int j = 0; j < LootTierData->LootPackageCategoryMinArray.At(i); ++j)
			{
				if (LootTierData->LootPackageCategoryMinArray.At(i) < 1)
					break;
				PickLootDropsFromPackage(LootPackage_Tables, &LootDrops, LootTierData->LootPackage, i, WorldLevel);
			}
		}
	}

	return LootDrops;
}

void Inventory::ServerHandlePickup(AFortPlayerPawnAthena* Pawn, AFortPickup* Pickup, FFortPickupRequestInfo Info)
{
	if (!Pickup || !Pawn || !Pawn->Controller || Pickup->bPickedUp)
		return;

	Pickup->bPickedUp = true;

	AFortPlayerControllerAthena* PC = (AFortPlayerControllerAthena*)Pawn->Controller;

	Pickup->PickupLocationData.bPlayPickupSound = Info.bPlayPickupSound;
	Pickup->PickupLocationData.FlyTime = 0.4f;
	Pickup->PickupLocationData.ItemOwner = Pawn;
	Pickup->PickupLocationData.PickupGuid = Pickup->PrimaryPickupItemEntry.ItemGuid;
	Pickup->PickupLocationData.PickupTarget = Pawn;
	Pickup->OnRep_PickupLocationData();
	//cout << "bTrySwapWithWeapon" << to_string(Info.bTrySwapWithWeapon) << endl;
	//cout << "bUseRequestedSwap" << to_string(Info.bUseRequestedSwap) << endl;
	//PC->SwappingItemDefinition = PC->MyFortPawn->CurrentWeapon->WeaponData;
	
	Pickup->OnRep_bPickedUp();
}

bool IsInQuickbar(UFortItemDefinition* Def)
{
	return Def->IsA(UFortWeaponRangedItemDefinition::StaticClass()) || Def->IsA(UFortConsumableItemDefinition::StaticClass());
}

int GetFreeSlots(AFortPlayerController* PC)
{
	static int Slots = 5;
	int SlotsOccupied = 0;
	int Ret = 0;
	for (auto& Entry : PC->WorldInventory->Inventory.ReplicatedEntries)
	{
		if (IsInQuickbar(Entry.ItemDefinition))
			SlotsOccupied++;
		Ret = Slots - SlotsOccupied;
		if (Ret <= 0)
			return 0;
	}
	return Ret;
}

void Inventory::DestroyPickup(AFortPickup* Pickup)
{
	if (!Pickup->PickupLocationData.PickupTarget)
		return DestroyPickupOG(Pickup);
	AFortPlayerControllerAthena* PC = (AFortPlayerControllerAthena*)Pickup->PickupLocationData.PickupTarget->Controller;
	FFortItemEntry& PickupEntry = Pickup->PrimaryPickupItemEntry;
	if (!PC || PC->IsA(AFortAthenaAIBotController::StaticClass()))
	{
		auto BotPC = (AFortAthenaAIBotController*)PC;
		if (PickupEntry.ItemDefinition)
		{
			UFortWorldItem* Bro = Utils::Cast<UFortWorldItem>(PickupEntry.ItemDefinition->CreateTemporaryItemInstanceBP(PickupEntry.Count, 0));
			Bro->OwnerInventory = BotPC->Inventory;
			FFortItemEntry& Entry = Bro->ItemEntry;
			BotPC->Inventory->Inventory.ReplicatedEntries.Add(Entry);
			BotPC->Inventory->Inventory.ItemInstances.Add(Bro);
			BotPC->Inventory->Inventory.MarkItemDirty(Entry);
			BotPC->Inventory->HandleInventoryLocalUpdate();
			if (auto WeaponDef = Utils::Cast<UFortWeaponRangedItemDefinition>(Entry.ItemDefinition))
			{
				BotPC->PendingEquipWeapon = Bro;
			}
			return DestroyPickupOG(Pickup);
		}
	}
	bool Found = false;
	int FreeSlots = IsInQuickbar(PickupEntry.ItemDefinition) ? GetFreeSlots(PC) : 5;

	printf("Free slots: %d\n", FreeSlots);

	if (FreeSlots <= 0)
	{
		auto Entry = FindEntry(PC, PC->MyFortPawn->CurrentWeapon->ItemEntryGuid);
		if (!Entry || Entry->ItemDefinition->IsA(UFortWeaponMeleeItemDefinition::StaticClass()))
		{
			Utils::SpawnPickup(PC->Pawn->K2_GetActorLocation(), PickupEntry.ItemDefinition, EFortPickupSourceTypeFlag::Tossed, EFortPickupSpawnSource::Unset, PickupEntry.Count, PickupEntry.LoadedAmmo);
			return DestroyPickupOG(Pickup);
		}
		Inventory::RemoveItem(PC, Entry->ItemGuid, Entry->Count);
		Utils::SpawnPickup(PC->Pawn->K2_GetActorLocation(), Entry->ItemDefinition, EFortPickupSourceTypeFlag::Tossed, EFortPickupSpawnSource::Unset, Entry->Count, Entry->LoadedAmmo);
	}

	if (PickupEntry.ItemDefinition->IsStackable())
	{
		for (size_t i = 0; i < PC->WorldInventory->Inventory.ReplicatedEntries.Num(); i++)
		{
			auto& Entry = PC->WorldInventory->Inventory.ReplicatedEntries[i];
			if (Entry.ItemDefinition == PickupEntry.ItemDefinition && Entry.Count < GetMaxStackSize((UFortWeaponItemDefinition*)Entry.ItemDefinition))
			{
				Found = true;
				Entry.Count += PickupEntry.Count;
				if (Entry.StateValues[0].IntValue == false)
					Entry.StateValues[0].IntValue = true;
				UpdateInventory(PC, Entry);

				PC->WorldInventory->Inventory.MarkItemDirty(Entry);
				PC->WorldInventory->HandleInventoryLocalUpdate();
				if (Entry.Count > GetMaxStackSize((UFortWeaponItemDefinition*)Entry.ItemDefinition))
				{
					if (Entry.ItemDefinition->bAllowMultipleStacks)
					{
						Inventory::GiveItem(PC, Entry.ItemDefinition, Entry.Count - GetMaxStackSize((UFortWeaponItemDefinition*)Entry.ItemDefinition), 0);
					}
					else
					{
						Utils::SpawnPickup(PC->Pawn->K2_GetActorLocation(), Entry.ItemDefinition, EFortPickupSourceTypeFlag::Tossed, EFortPickupSpawnSource::Unset, Entry.Count - GetMaxStackSize((UFortWeaponItemDefinition*)Entry.ItemDefinition), 0);
					}
					Entry.Count = GetMaxStackSize((UFortWeaponItemDefinition*)Entry.ItemDefinition);
					UpdateInventory(PC, Entry);
					PC->WorldInventory->Inventory.MarkItemDirty(Entry);
					PC->WorldInventory->HandleInventoryLocalUpdate();
					break;
				}
			}
		}
		if (!Found)
		{
			Inventory::GiveItem(PC, PickupEntry.ItemDefinition, PickupEntry.Count, PickupEntry.LoadedAmmo);
		}
	}
	else
	{
		Inventory::GiveItem(PC, PickupEntry.ItemDefinition, PickupEntry.Count, PickupEntry.LoadedAmmo);
	}

	if (PickupEntry.ItemDefinition->IsA(UFortAmmoItemDefinition::StaticClass()) || PickupEntry.ItemDefinition->IsA(UFortResourceItemDefinition::StaticClass()))
	{
		auto entry = FindEntry(PC, PickupEntry.ItemDefinition);
		if(!entry)
			return DestroyPickupOG(Pickup);
		entry->StateValues[0].IntValue = true;
		PC->WorldInventory->Inventory.MarkItemDirty(*entry);
	}
	
	return DestroyPickupOG(Pickup);
}

void Inventory::NetMulticastDamageCues(AFortPlayerPawnAthena* Pawn, FAthenaBatchedDamageGameplayCues_Shared SharedData, FAthenaBatchedDamageGameplayCues_NonShared NonSharedData)
{
	if (!Pawn || !Pawn->Controller || Pawn->Controller->Class != AAthena_PlayerController_C::StaticClass())
		return NetMulticastDamageCuesOG(Pawn, SharedData, NonSharedData);
	// First thing we should get to make sure its accurate
	auto currentTime = UGameplayStatics::GetTimeSeconds(UWorld::GetWorld());

	if (Pawn && Pawn->CurrentWeapon)
	{
		AFortPlayerControllerAthena* PC = Utils::Cast<AFortPlayerControllerAthena>(Pawn->Controller);
		bool bruh;
		//if (NonSharedData.NonPlayerHitActor)
		//{
		//	//XP::Challanges::SendStatEvent(PC->GetQuestManager(ESubGame::Athena), NonSharedData.NonPlayerHitActor, Pawn->CurrentWeapon->WeaponData->GameplayTags, FGameplayTagContainer(), &bruh, &bruh, SharedData.NonPlayerMagnitude, EFortQuestObjectiveStatEvent::Damage);
		//}
		//else if(NonSharedData.HitActor && NonSharedData.HitActor->IsA(AFortPlayerPawnAthena::StaticClass()))
		//{
		//	XP::Challanges::SendStatEvent(PC->GetQuestManager(ESubGame::Athena), NonSharedData.HitActor, Pawn->CurrentWeapon->WeaponData->GameplayTags, FGameplayTagContainer(), &bruh, &bruh, SharedData.Magnitude, EFortQuestObjectiveStatEvent::Damage);
		//}
		FGameplayTagContainer Empty{};
		XP::Challanges::SendStatEvent(PC->GetQuestManager(ESubGame::Athena), NonSharedData.HitActor, Pawn->CurrentWeapon->WeaponData->GameplayTags, Empty, &bruh, &bruh, SharedData.Magnitude, EFortQuestObjectiveStatEvent::Damage);
		auto WeaponData = PC->MyFortPawn->CurrentWeapon->WeaponData;
		
		//PC->StatEventManager

		if (PC)
		{
			for (auto& Entry : PC->WorldInventory->Inventory.ReplicatedEntries)
			{
				if (Entry.ItemGuid == Pawn->CurrentWeapon->GetInventoryGUID())
				{
					
					// If is there to make performance btter, but honestly wont really matter..
					#ifdef USING_EZAntiCheat
						if (Pawn->CurrentWeapon->LastFireTime > 0) {
							auto FiringRate = Pawn->CurrentWeapon->GetFiringRate();
							
						}

						Pawn->CurrentWeapon->LastFireTime = currentTime;
					#endif

					Entry.LoadedAmmo = Pawn->CurrentWeapon->AmmoCount;
					PC->WorldInventory->Inventory.MarkItemDirty(Entry);
					UpdateInventory(PC, Entry);
					PC->WorldInventory->HandleInventoryLocalUpdate();
					break;
				}
			}
		}
	}
	return NetMulticastDamageCuesOG(Pawn, SharedData, NonSharedData);
}

void Inventory::ServerAttemptInteractHook(UFortControllerComponent_Interaction* Comp, AActor* ReceivingActor, UPrimitiveComponent* InteractComponent, ETInteractionType InteractType, UObject* OptionalData, EInteractionBeingAttempted InteractionBeingAttempted)
{
	auto PC = ((AFortPlayerControllerAthena*)Comp->GetOwner());

	ServerAttemptInteractOG(Comp, ReceivingActor, InteractComponent, InteractType, OptionalData, InteractionBeingAttempted);

	bool bruh;

	FGameplayTagContainer TargetTags{};
	FGameplayTagContainer Empty{};

	if (auto Cont = Utils::Cast<ABuildingActor>(ReceivingActor))
		TargetTags = Cont->StaticGameplayTags;

	XP::Challanges::SendStatEvent(((AFortPlayerControllerAthena*)Comp->GetOwner())->GetQuestManager(ESubGame::Athena), ReceivingActor, /*((AFortPlayerControllerAthena*)Comp->GetOwner())->MyFortPawn->GameplayTags*/Empty, TargetTags, &bruh, &bruh, 1, EFortQuestObjectiveStatEvent::Interact);

	if (auto ConvComp = Utils::Cast<UFortNonPlayerConversationParticipantComponent>(ReceivingActor->GetComponentByClass(UFortNonPlayerConversationParticipantComponent::StaticClass())))
	{
		UFortPlayerConversationComponent_C* PlayerComp = (UFortPlayerConversationComponent_C*)Comp->GetOwner()->GetComponentByClass(UFortPlayerConversationComponent_C::StaticClass());
		if (!PlayerComp)
			PlayerComp = (UFortPlayerConversationComponent_C*)((AFortPlayerControllerAthena*)Comp->GetOwner())->Pawn->GetComponentByClass(UFortPlayerConversationComponent_C::StaticClass());
		
		if (ConvComp && PlayerComp && ConvComp->ConversationsActive == 0)
		{
			AIs::StartConversation(ConvComp->ConversationEntryTag, PlayerComp->GetOwner(), ConvComp->InteractorParticipantTag, ReceivingActor, ConvComp->SelfParticipantTag);
		}
	}
	
	if (ReceivingActor->IsA(AFortAthenaSupplyDrop::StaticClass()) && !ReceivingActor->GetName().contains("Llama"))
	{
		static auto Name = UKismetStringLibrary::Conv_StringToName(TEXT("Loot_AthenaSupplyDrop"));
		auto Drops = Inventory::PickLootDrops(Name, Utils::Cast<AFortGameStateAthena>(UWorld::GetWorld()->GameState)->WorldLevel, -1);

		if (Drops.size() <= 0)
			return;
		for (auto& Drop : Drops)
		{
			if (!Drop.ItemDefinition || Drop.Count <= 0)
				continue;
			Utils::SpawnPickup(ReceivingActor->K2_GetActorLocation(), Drop.ItemDefinition, EFortPickupSourceTypeFlag::Container, EFortPickupSpawnSource::SupplyDrop, Drop.Count, Drop.LoadedAmmo);
		}
	}
	else if (ReceivingActor->IsA(ABGA_Petrol_Pickup_C::StaticClass()))
	{
		auto petrolpikcup = (ABGA_Petrol_Pickup_C*)ReceivingActor;
		Inventory::GiveItem(PC, petrolpikcup->WeaponItemDefinition, 1, 100);
	}
	else if (auto Vehicle = Utils::Cast<AFortAthenaVehicle>(ReceivingActor))
	{
		if (!Vehicle || !PC->MyFortPawn || !PC || !PC->MyFortPawn->IsInVehicle())
			return;
		PC->SwappingItemDefinition = PC->MyFortPawn->CurrentWeapon->WeaponData;
		int SeatIdx = PC->MyFortPawn->GetVehicleSeatIndex();
		auto WeaponComp = Vehicle->GetSeatWeaponComponent(SeatIdx);
		if (!WeaponComp || !WeaponComp->WeaponSeatDefinitions.IsValidIndex(SeatIdx))
			return;
		auto& WeaponDef = WeaponComp->WeaponSeatDefinitions[SeatIdx];
		Inventory::GiveItem(PC, WeaponDef.VehicleWeapon, 1, 999999);
		auto Entry = Inventory::FindEntry(PC, WeaponDef.VehicleWeapon);
		if (!Entry)
			return;
		PC->MyFortPawn->EquipWeaponDefinition(WeaponDef.VehicleWeapon, Entry->ItemGuid, Entry->TrackerGuid);
		AFortWeaponRangedForVehicle* Weapon = Utils::Cast<AFortWeaponRangedForVehicle>(PC->MyFortPawn->CurrentWeapon);
		if (!Weapon)
			return;
		Weapon->MountedWeaponInfo.bNeedsVehicleAttachment = true;
		Weapon->MountedWeaponInfo.bTargetSourceFromVehicleMuzzle = true;
		Weapon->MountedWeaponInfoRepped.HostVehicleCachedActor = Vehicle;
		Weapon->MountedWeaponInfoRepped.HostVehicleSeatIndexCached = SeatIdx;
		Weapon->CachedWeaponMeshCompOnVehicle = WeaponComp->WeaponSklMeshComponent;
		Weapon->OnRep_MountedWeaponInfoRepped();
		Weapon->OnHostVehicleSetup();
		
		WeaponComp->CachedWeapon = Weapon;
		WeaponComp->CachedWeaponDef = (UFortWeaponRangedItemDefinition*)WeaponDef.VehicleWeapon;
		WeaponComp->CachedWeaponState.AmmoInClip = 999999;
		WeaponComp->EquipVehicleWeapon(PC->MyFortPawn, &WeaponDef, 0);
	}
}
