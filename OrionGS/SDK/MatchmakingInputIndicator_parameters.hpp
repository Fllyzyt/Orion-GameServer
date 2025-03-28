#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MatchmakingInputIndicator

#include "Basic.hpp"

#include "CommonInput_structs.hpp"


namespace SDK::Params
{

// Function MatchmakingInputIndicator.MatchmakingInputIndicator_C.OnInputSourceTypeChanged
// 0x0001 (0x0001 - 0x0000)
struct MatchmakingInputIndicator_C_OnInputSourceTypeChanged final 
{
public:
	ECommonInputType                              InputType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MatchmakingInputIndicator_C_OnInputSourceTypeChanged) == 0x000001, "Wrong alinment on MatchmakingInputIndicator_C_OnInputSourceTypeChanged");
static_assert(sizeof(MatchmakingInputIndicator_C_OnInputSourceTypeChanged) == 0x000001, "Wrong size on MatchmakingInputIndicator_C_OnInputSourceTypeChanged");
static_assert(offsetof(MatchmakingInputIndicator_C_OnInputSourceTypeChanged, InputType) == 0x000000, "Member 'MatchmakingInputIndicator_C_OnInputSourceTypeChanged::InputType' has a wrong offset!");

// Function MatchmakingInputIndicator.MatchmakingInputIndicator_C.ExecuteUbergraph_MatchmakingInputIndicator
// 0x0028 (0x0028 - 0x0000)
struct MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78A2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortGlobalUIContext*                   CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              K2Node_Event_InputType;                            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78A3[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetInputTypeIcon_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator) == 0x000008, "Wrong alinment on MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator");
static_assert(sizeof(MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator) == 0x000028, "Wrong size on MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator");
static_assert(offsetof(MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator, EntryPoint) == 0x000000, "Member 'MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator::EntryPoint' has a wrong offset!");
static_assert(offsetof(MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator, K2Node_Event_InputType) == 0x000010, "Member 'MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator::K2Node_Event_InputType' has a wrong offset!");
static_assert(offsetof(MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator, CallFunc_GetInputTypeIcon_ReturnValue) == 0x000018, "Member 'MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator::CallFunc_GetInputTypeIcon_ReturnValue' has a wrong offset!");
static_assert(offsetof(MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

