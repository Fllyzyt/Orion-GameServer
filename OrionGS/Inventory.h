#pragma once
#include "Utils.h"
#include <vector>
#include <map>
#include <functional>

using namespace std;

namespace Inventory
{
	inline bool(*SpawnLootOG)(ABuildingSMActor*);
	inline void (*DestroyPickupOG)(AFortPickup*);
	inline void (*ABuildingSMActor_PostUpdateOG)(ABuildingSMActor*);
	inline void (*NetMulticastDamageCuesOG)(AFortPlayerPawnAthena* Pawn, FAthenaBatchedDamageGameplayCues_Shared SharedData, FAthenaBatchedDamageGameplayCues_NonShared NonSharedData);
	inline void (*ServerAttemptInteractOG)(UFortControllerComponent_Interaction* Comp, AActor* ReceivingActor, UPrimitiveComponent* InteractComponent, ETInteractionType InteractType, UObject* OptionalData, EInteractionBeingAttempted InteractionBeingAttempted);
	
	void GiveItem(AFortPlayerController* PC, UFortItemDefinition* Def, int Count = 1, int LoadedAmmo = 0);
	void GiveItemStack(AFortPlayerController* PC, UFortItemDefinition* Def, int Count = 1, int LoadedAmmo = 0);
	void RemoveItem(AFortPlayerController* PC, UFortItemDefinition* Def, int Count);
	bool SpawnLoot(ABuildingContainer*);
	void ABuildingSMActor_PostUpdate(ABuildingSMActor* Actor);
	bool PickRowsFromDataTables(std::map<FName, void*>* OutMap, const std::vector<UDataTable*>& DataTables, const std::function<bool(FName, void*)> CheckFunction);
	FFortLootTierData* PickWeightedLootTierData(const std::map<FName, FFortLootTierData*> LootTierDatas, int Multiplier = 1);
	FFortLootTierData* PickLootTierData(const std::vector<UDataTable*>& LootTierDataTables, FName LootTierGroup, int32 LootTier = -1);
	FFortLootPackageData* PickWeightedLootPackageData(const std::map<FName, FFortLootPackageData*> LootPackages);
	void PickLootDropsFromPackage(const std::vector<UDataTable*>& LootPackagesTables, std::vector<FFortItemEntry>* OutItemEntries, FName& LootPackageName, int LootPackageCategory = -1, int WorldLevel = 0);
	std::vector<FFortItemEntry> PickLootDrops(FName TierGroupName, int32 WorldLevel, int32 ForcedLootTier);
	void ServerHandlePickup(AFortPlayerPawnAthena* Pawn, AFortPickup* Pickup, FFortPickupRequestInfo Info);
	void DestroyPickup(AFortPickup* Pickup);
	void NetMulticastDamageCues(AFortPlayerPawnAthena* Pawn, FAthenaBatchedDamageGameplayCues_Shared SharedData, FAthenaBatchedDamageGameplayCues_NonShared NonSharedData);
	void RemoveItem(AFortPlayerController* PC, FGuid Guid, int Count = 1);
	FFortItemEntry* FindEntry(AFortPlayerController* PC, FGuid Guid);
	void ServerAttemptInteractHook(UFortControllerComponent_Interaction* Comp, AActor* ReceivingActor, UPrimitiveComponent* InteractComponent, ETInteractionType InteractType, UObject* OptionalData, EInteractionBeingAttempted InteractionBeingAttempted);
	void UpdateInventory(AFortPlayerController* PC, FFortItemEntry& Entry);
	int GetMagSize(UFortWeaponItemDefinition* Def);
	FFortItemEntry* FindEntry(AFortPlayerController* PC, UFortItemDefinition* Def);
	

}