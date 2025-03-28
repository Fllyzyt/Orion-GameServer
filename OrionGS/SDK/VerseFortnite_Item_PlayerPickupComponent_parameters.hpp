#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VerseFortnite_Item_PlayerPickupComponent

#include "Basic.hpp"


namespace SDK::Params
{

// Function VerseFortnite_Item_PlayerPickupComponent.PlayerPickupComponent.createPickup
// 0x0028 (0x0028 - 0x0000)
struct PlayerPickupComponent_CreatePickup final 
{
public:
	class UObject*                                __verse_0x9866B8E7_contextObject;                  // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    __verse_0x555FC35C_itemDefinition;                 // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __verse_0x41BF06A5_count;                          // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A6D[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVector3*                               __verse_0x621FCC30_location;                       // 0x0018(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerPickupComponent*                 RetVal;                                            // 0x0020(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerPickupComponent_CreatePickup) == 0x000008, "Wrong alinment on PlayerPickupComponent_CreatePickup");
static_assert(sizeof(PlayerPickupComponent_CreatePickup) == 0x000028, "Wrong size on PlayerPickupComponent_CreatePickup");
static_assert(offsetof(PlayerPickupComponent_CreatePickup, __verse_0x9866B8E7_contextObject) == 0x000000, "Member 'PlayerPickupComponent_CreatePickup::__verse_0x9866B8E7_contextObject' has a wrong offset!");
static_assert(offsetof(PlayerPickupComponent_CreatePickup, __verse_0x555FC35C_itemDefinition) == 0x000008, "Member 'PlayerPickupComponent_CreatePickup::__verse_0x555FC35C_itemDefinition' has a wrong offset!");
static_assert(offsetof(PlayerPickupComponent_CreatePickup, __verse_0x41BF06A5_count) == 0x000010, "Member 'PlayerPickupComponent_CreatePickup::__verse_0x41BF06A5_count' has a wrong offset!");
static_assert(offsetof(PlayerPickupComponent_CreatePickup, __verse_0x621FCC30_location) == 0x000018, "Member 'PlayerPickupComponent_CreatePickup::__verse_0x621FCC30_location' has a wrong offset!");
static_assert(offsetof(PlayerPickupComponent_CreatePickup, RetVal) == 0x000020, "Member 'PlayerPickupComponent_CreatePickup::RetVal' has a wrong offset!");

// Function VerseFortnite_Item_PlayerPickupComponent.PlayerPickupComponent.attemptPartialCollect
// 0x0018 (0x0018 - 0x0000)
struct PlayerPickupComponent_AttemptPartialCollect final 
{
public:
	class UItemType*                              __verse_0x0F99A7FE_type;                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __verse_0x41BF06A5_count;                          // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A6E[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerComponent*                       __verse_0x9F1D658F_player;                         // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerPickupComponent_AttemptPartialCollect) == 0x000008, "Wrong alinment on PlayerPickupComponent_AttemptPartialCollect");
static_assert(sizeof(PlayerPickupComponent_AttemptPartialCollect) == 0x000018, "Wrong size on PlayerPickupComponent_AttemptPartialCollect");
static_assert(offsetof(PlayerPickupComponent_AttemptPartialCollect, __verse_0x0F99A7FE_type) == 0x000000, "Member 'PlayerPickupComponent_AttemptPartialCollect::__verse_0x0F99A7FE_type' has a wrong offset!");
static_assert(offsetof(PlayerPickupComponent_AttemptPartialCollect, __verse_0x41BF06A5_count) == 0x000008, "Member 'PlayerPickupComponent_AttemptPartialCollect::__verse_0x41BF06A5_count' has a wrong offset!");
static_assert(offsetof(PlayerPickupComponent_AttemptPartialCollect, __verse_0x9F1D658F_player) == 0x000010, "Member 'PlayerPickupComponent_AttemptPartialCollect::__verse_0x9F1D658F_player' has a wrong offset!");

// Function VerseFortnite_Item_PlayerPickupComponent.PlayerPickupComponent.getNumOfItemType
// 0x0010 (0x0010 - 0x0000)
struct PlayerPickupComponent_GetNumOfItemType final 
{
public:
	class UItemType*                              __verse_0x0F99A7FE_type;                           // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RetVal;                                            // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerPickupComponent_GetNumOfItemType) == 0x000008, "Wrong alinment on PlayerPickupComponent_GetNumOfItemType");
static_assert(sizeof(PlayerPickupComponent_GetNumOfItemType) == 0x000010, "Wrong size on PlayerPickupComponent_GetNumOfItemType");
static_assert(offsetof(PlayerPickupComponent_GetNumOfItemType, __verse_0x0F99A7FE_type) == 0x000000, "Member 'PlayerPickupComponent_GetNumOfItemType::__verse_0x0F99A7FE_type' has a wrong offset!");
static_assert(offsetof(PlayerPickupComponent_GetNumOfItemType, RetVal) == 0x000008, "Member 'PlayerPickupComponent_GetNumOfItemType::RetVal' has a wrong offset!");

// Function VerseFortnite_Item_PlayerPickupComponent.PlayerPickupComponent.getPrimaryItemType
// 0x0008 (0x0008 - 0x0000)
struct PlayerPickupComponent_GetPrimaryItemType final 
{
public:
	class UItemType*                              RetVal;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerPickupComponent_GetPrimaryItemType) == 0x000008, "Wrong alinment on PlayerPickupComponent_GetPrimaryItemType");
static_assert(sizeof(PlayerPickupComponent_GetPrimaryItemType) == 0x000008, "Wrong size on PlayerPickupComponent_GetPrimaryItemType");
static_assert(offsetof(PlayerPickupComponent_GetPrimaryItemType, RetVal) == 0x000000, "Member 'PlayerPickupComponent_GetPrimaryItemType::RetVal' has a wrong offset!");

// Function VerseFortnite_Item_PlayerPickupComponent.PlayerPickupComponent.givePickupTo
// 0x0008 (0x0008 - 0x0000)
struct PlayerPickupComponent_GivePickupTo final 
{
public:
	class UPlayerComponent*                       __verse_0x9F1D658F_player;                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerPickupComponent_GivePickupTo) == 0x000008, "Wrong alinment on PlayerPickupComponent_GivePickupTo");
static_assert(sizeof(PlayerPickupComponent_GivePickupTo) == 0x000008, "Wrong size on PlayerPickupComponent_GivePickupTo");
static_assert(offsetof(PlayerPickupComponent_GivePickupTo, __verse_0x9F1D658F_player) == 0x000000, "Member 'PlayerPickupComponent_GivePickupTo::__verse_0x9F1D658F_player' has a wrong offset!");

// Function VerseFortnite_Item_PlayerPickupComponent.PlayerPickupComponent.TossPickup
// 0x0010 (0x0010 - 0x0000)
struct PlayerPickupComponent_TossPickup final 
{
public:
	class UVector3*                               __verse_0xAA10FF12_finalLocation;                  // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerComponent*                       __verse_0x03298FE6_owner;                          // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlayerPickupComponent_TossPickup) == 0x000008, "Wrong alinment on PlayerPickupComponent_TossPickup");
static_assert(sizeof(PlayerPickupComponent_TossPickup) == 0x000010, "Wrong size on PlayerPickupComponent_TossPickup");
static_assert(offsetof(PlayerPickupComponent_TossPickup, __verse_0xAA10FF12_finalLocation) == 0x000000, "Member 'PlayerPickupComponent_TossPickup::__verse_0xAA10FF12_finalLocation' has a wrong offset!");
static_assert(offsetof(PlayerPickupComponent_TossPickup, __verse_0x03298FE6_owner) == 0x000008, "Member 'PlayerPickupComponent_TossPickup::__verse_0x03298FE6_owner' has a wrong offset!");

}

