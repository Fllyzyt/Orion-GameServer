#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Pickups_Default

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function B_Pickups_Default.B_Pickups_Default_C.ExecuteUbergraph_B_Pickups_Default
// 0x00D0 (0x00D0 - 0x0000)
struct B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AE5[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              K2Node_Event_PickupTarget;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AE6[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0024(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AE7[0x2];                                     // 0x00B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPickupRarityMID_bNeedsToBeInitialized; // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AE8[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_GetPickupRarityMID_ReturnValue;           // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default) == 0x000008, "Wrong alinment on B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default");
static_assert(sizeof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default) == 0x0000D0, "Wrong size on B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, EntryPoint) == 0x000000, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, K2Node_Event_PickupTarget) == 0x000008, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::K2Node_Event_PickupTarget' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_IsValid_ReturnValue_1) == 0x000010, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000014, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_MakeRotator_ReturnValue) == 0x000018, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000024, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_IsValid_ReturnValue_2) == 0x0000B0, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000B1, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_Conv_LinearColorToVector_ReturnValue) == 0x0000B4, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_Conv_LinearColorToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_GetPickupRarityMID_bNeedsToBeInitialized) == 0x0000C0, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_GetPickupRarityMID_bNeedsToBeInitialized' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default, CallFunc_GetPickupRarityMID_ReturnValue) == 0x0000C8, "Member 'B_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default::CallFunc_GetPickupRarityMID_ReturnValue' has a wrong offset!");

// Function B_Pickups_Default.B_Pickups_Default_C.OnPickedUp
// 0x0008 (0x0008 - 0x0000)
struct B_Pickups_Default_C_OnPickedUp final 
{
public:
	class AFortPawn*                              PickupTarget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Pickups_Default_C_OnPickedUp) == 0x000008, "Wrong alinment on B_Pickups_Default_C_OnPickedUp");
static_assert(sizeof(B_Pickups_Default_C_OnPickedUp) == 0x000008, "Wrong size on B_Pickups_Default_C_OnPickedUp");
static_assert(offsetof(B_Pickups_Default_C_OnPickedUp, PickupTarget) == 0x000000, "Member 'B_Pickups_Default_C_OnPickedUp::PickupTarget' has a wrong offset!");

// Function B_Pickups_Default.B_Pickups_Default_C.Setup Light
// 0x0018 (0x0018 - 0x0000)
struct B_Pickups_Default_C_Setup_Light final 
{
public:
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMobilePlatform_ReturnValue;             // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AE9[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameUserSettings*                      CallFunc_GetGameUserSettings_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetVisualEffectQuality_ReturnValue;       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_Pickups_Default_C_Setup_Light) == 0x000008, "Wrong alinment on B_Pickups_Default_C_Setup_Light");
static_assert(sizeof(B_Pickups_Default_C_Setup_Light) == 0x000018, "Wrong size on B_Pickups_Default_C_Setup_Light");
static_assert(offsetof(B_Pickups_Default_C_Setup_Light, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000000, "Member 'B_Pickups_Default_C_Setup_Light::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_Light, CallFunc_IsMobilePlatform_ReturnValue) == 0x000001, "Member 'B_Pickups_Default_C_Setup_Light::CallFunc_IsMobilePlatform_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_Light, CallFunc_BooleanOR_ReturnValue) == 0x000002, "Member 'B_Pickups_Default_C_Setup_Light::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_Light, CallFunc_GetGameUserSettings_ReturnValue) == 0x000008, "Member 'B_Pickups_Default_C_Setup_Light::CallFunc_GetGameUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_Light, CallFunc_GetVisualEffectQuality_ReturnValue) == 0x000010, "Member 'B_Pickups_Default_C_Setup_Light::CallFunc_GetVisualEffectQuality_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Setup_Light, K2Node_SwitchInteger_CmpSuccess) == 0x000014, "Member 'B_Pickups_Default_C_Setup_Light::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function B_Pickups_Default.B_Pickups_Default_C.Set Initial BKGD Param
// 0x0018 (0x0018 - 0x0000)
struct B_Pickups_Default_C_Set_Initial_BKGD_Param final 
{
public:
	class UMaterialInstanceDynamic*               Mid;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5AEA[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Pickups_Default_C_Set_Initial_BKGD_Param) == 0x000008, "Wrong alinment on B_Pickups_Default_C_Set_Initial_BKGD_Param");
static_assert(sizeof(B_Pickups_Default_C_Set_Initial_BKGD_Param) == 0x000018, "Wrong size on B_Pickups_Default_C_Set_Initial_BKGD_Param");
static_assert(offsetof(B_Pickups_Default_C_Set_Initial_BKGD_Param, Mid) == 0x000000, "Member 'B_Pickups_Default_C_Set_Initial_BKGD_Param::Mid' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Set_Initial_BKGD_Param, CallFunc_RandomFloatInRange_ReturnValue) == 0x000008, "Member 'B_Pickups_Default_C_Set_Initial_BKGD_Param::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Set_Initial_BKGD_Param, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00000C, "Member 'B_Pickups_Default_C_Set_Initial_BKGD_Param::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Pickups_Default_C_Set_Initial_BKGD_Param, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000010, "Member 'B_Pickups_Default_C_Set_Initial_BKGD_Param::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");

}

