#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_SlamDoorOpen_Victim

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_SlamDoorOpen_Victim.GA_SlamDoorOpen_Victim_C.ExecuteUbergraph_GA_SlamDoorOpen_Victim
// 0x0130 (0x0130 - 0x0000)
struct GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F43[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0008(0x00B0)(ConstParm)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F44[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABuildingWall*                          K2Node_DynamicCast_AsBuilding_Wall;                // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F45[0x3];                                     // 0x00D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0100(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x010C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0124(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim) == 0x000008, "Wrong alinment on GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim");
static_assert(sizeof(GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim) == 0x000130, "Wrong size on GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim");
static_assert(offsetof(GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim, EntryPoint) == 0x000000, "Member 'GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim, K2Node_Event_EventData) == 0x000008, "Member 'GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x0000B8, "Member 'GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0000C0, "Member 'GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim, K2Node_DynamicCast_AsBuilding_Wall) == 0x0000D0, "Member 'GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim::K2Node_DynamicCast_AsBuilding_Wall' has a wrong offset!");
static_assert(offsetof(GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim, K2Node_DynamicCast_bSuccess_1) == 0x0000D8, "Member 'GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000DC, "Member 'GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000E8, "Member 'GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000F4, "Member 'GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim, CallFunc_Normal_ReturnValue) == 0x000100, "Member 'GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x00010C, "Member 'GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim, CallFunc_BreakVector_X) == 0x000118, "Member 'GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim, CallFunc_BreakVector_Y) == 0x00011C, "Member 'GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim, CallFunc_BreakVector_Z) == 0x000120, "Member 'GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim, CallFunc_MakeVector_ReturnValue) == 0x000124, "Member 'GA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

// Function GA_SlamDoorOpen_Victim.GA_SlamDoorOpen_Victim_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_SlamDoorOpen_Victim_C_K2_ActivateAbilityFromEvent final 
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_SlamDoorOpen_Victim_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alinment on GA_SlamDoorOpen_Victim_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_SlamDoorOpen_Victim_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_SlamDoorOpen_Victim_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_SlamDoorOpen_Victim_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_SlamDoorOpen_Victim_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}

