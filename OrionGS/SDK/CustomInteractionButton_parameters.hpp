#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomInteractionButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function CustomInteractionButton.CustomInteractionButton_C.ExecuteUbergraph_CustomInteractionButton
// 0x0018 (0x0018 - 0x0000)
struct CustomInteractionButton_C_ExecuteUbergraph_CustomInteractionButton final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67D6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CustomInteractionButton_C_ExecuteUbergraph_CustomInteractionButton) == 0x000008, "Wrong alinment on CustomInteractionButton_C_ExecuteUbergraph_CustomInteractionButton");
static_assert(sizeof(CustomInteractionButton_C_ExecuteUbergraph_CustomInteractionButton) == 0x000018, "Wrong size on CustomInteractionButton_C_ExecuteUbergraph_CustomInteractionButton");
static_assert(offsetof(CustomInteractionButton_C_ExecuteUbergraph_CustomInteractionButton, EntryPoint) == 0x000000, "Member 'CustomInteractionButton_C_ExecuteUbergraph_CustomInteractionButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(CustomInteractionButton_C_ExecuteUbergraph_CustomInteractionButton, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'CustomInteractionButton_C_ExecuteUbergraph_CustomInteractionButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomInteractionButton_C_ExecuteUbergraph_CustomInteractionButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'CustomInteractionButton_C_ExecuteUbergraph_CustomInteractionButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}

