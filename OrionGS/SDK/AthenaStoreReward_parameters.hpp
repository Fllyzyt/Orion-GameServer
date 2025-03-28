#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaStoreReward

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function AthenaStoreReward.AthenaStoreReward_C.OnRepresentedItemSet
// 0x0008 (0x0008 - 0x0000)
struct AthenaStoreReward_C_OnRepresentedItemSet final 
{
public:
	class UFortItem*                              RepresentedItem;                                   // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaStoreReward_C_OnRepresentedItemSet) == 0x000008, "Wrong alinment on AthenaStoreReward_C_OnRepresentedItemSet");
static_assert(sizeof(AthenaStoreReward_C_OnRepresentedItemSet) == 0x000008, "Wrong size on AthenaStoreReward_C_OnRepresentedItemSet");
static_assert(offsetof(AthenaStoreReward_C_OnRepresentedItemSet, RepresentedItem) == 0x000000, "Member 'AthenaStoreReward_C_OnRepresentedItemSet::RepresentedItem' has a wrong offset!");

// Function AthenaStoreReward.AthenaStoreReward_C.ExecuteUbergraph_AthenaStoreReward
// 0x00B0 (0x00B0 - 0x0000)
struct AthenaStoreReward_C_ExecuteUbergraph_AthenaStoreReward final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7345[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItem*                              K2Node_Event_RepresentedItem;                      // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortRarity                                   CallFunc_GetRarity_ReturnValue;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7346[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortRarityItemData                    CallFunc_BPGetRarityData_ReturnValue;              // 0x0020(0x0080)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaStoreReward_C_ExecuteUbergraph_AthenaStoreReward) == 0x000008, "Wrong alinment on AthenaStoreReward_C_ExecuteUbergraph_AthenaStoreReward");
static_assert(sizeof(AthenaStoreReward_C_ExecuteUbergraph_AthenaStoreReward) == 0x0000B0, "Wrong size on AthenaStoreReward_C_ExecuteUbergraph_AthenaStoreReward");
static_assert(offsetof(AthenaStoreReward_C_ExecuteUbergraph_AthenaStoreReward, EntryPoint) == 0x000000, "Member 'AthenaStoreReward_C_ExecuteUbergraph_AthenaStoreReward::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaStoreReward_C_ExecuteUbergraph_AthenaStoreReward, K2Node_Event_RepresentedItem) == 0x000008, "Member 'AthenaStoreReward_C_ExecuteUbergraph_AthenaStoreReward::K2Node_Event_RepresentedItem' has a wrong offset!");
static_assert(offsetof(AthenaStoreReward_C_ExecuteUbergraph_AthenaStoreReward, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000010, "Member 'AthenaStoreReward_C_ExecuteUbergraph_AthenaStoreReward::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStoreReward_C_ExecuteUbergraph_AthenaStoreReward, CallFunc_GetRarity_ReturnValue) == 0x000018, "Member 'AthenaStoreReward_C_ExecuteUbergraph_AthenaStoreReward::CallFunc_GetRarity_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStoreReward_C_ExecuteUbergraph_AthenaStoreReward, CallFunc_BPGetRarityData_ReturnValue) == 0x000020, "Member 'AthenaStoreReward_C_ExecuteUbergraph_AthenaStoreReward::CallFunc_BPGetRarityData_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStoreReward_C_ExecuteUbergraph_AthenaStoreReward, CallFunc_PlayAnimation_ReturnValue) == 0x0000A0, "Member 'AthenaStoreReward_C_ExecuteUbergraph_AthenaStoreReward::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaStoreReward_C_ExecuteUbergraph_AthenaStoreReward, CallFunc_GetDynamicMaterial_ReturnValue_1) == 0x0000A8, "Member 'AthenaStoreReward_C_ExecuteUbergraph_AthenaStoreReward::CallFunc_GetDynamicMaterial_ReturnValue_1' has a wrong offset!");

}

