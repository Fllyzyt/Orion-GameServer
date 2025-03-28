#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadingSubGameContentModal

#include "Basic.hpp"


namespace SDK::Params
{

// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnUpdatedProgress
// 0x0004 (0x0004 - 0x0000)
struct LoadingSubGameContentModal_C_OnUpdatedProgress final 
{
public:
	float                                         Percent;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoadingSubGameContentModal_C_OnUpdatedProgress) == 0x000004, "Wrong alinment on LoadingSubGameContentModal_C_OnUpdatedProgress");
static_assert(sizeof(LoadingSubGameContentModal_C_OnUpdatedProgress) == 0x000004, "Wrong size on LoadingSubGameContentModal_C_OnUpdatedProgress");
static_assert(offsetof(LoadingSubGameContentModal_C_OnUpdatedProgress, Percent) == 0x000000, "Member 'LoadingSubGameContentModal_C_OnUpdatedProgress::Percent' has a wrong offset!");

// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.SetCancelButtonText
// 0x0018 (0x0018 - 0x0000)
struct LoadingSubGameContentModal_C_SetCancelButtonText final 
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(LoadingSubGameContentModal_C_SetCancelButtonText) == 0x000008, "Wrong alinment on LoadingSubGameContentModal_C_SetCancelButtonText");
static_assert(sizeof(LoadingSubGameContentModal_C_SetCancelButtonText) == 0x000018, "Wrong size on LoadingSubGameContentModal_C_SetCancelButtonText");
static_assert(offsetof(LoadingSubGameContentModal_C_SetCancelButtonText, InText) == 0x000000, "Member 'LoadingSubGameContentModal_C_SetCancelButtonText::InText' has a wrong offset!");

// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct LoadingSubGameContentModal_C_OnAnimationFinished final 
{
public:
	class UWidgetAnimation*                       Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LoadingSubGameContentModal_C_OnAnimationFinished) == 0x000008, "Wrong alinment on LoadingSubGameContentModal_C_OnAnimationFinished");
static_assert(sizeof(LoadingSubGameContentModal_C_OnAnimationFinished) == 0x000008, "Wrong size on LoadingSubGameContentModal_C_OnAnimationFinished");
static_assert(offsetof(LoadingSubGameContentModal_C_OnAnimationFinished, Animation) == 0x000000, "Member 'LoadingSubGameContentModal_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.ExecuteUbergraph_LoadingSubGameContentModal
// 0x0068 (0x0068 - 0x0000)
struct LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7880[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_InText;                               // 0x0008(0x0018)(ConstParm)
	class UIconTextButton_C*                      K2Node_DynamicCast_AsIcon_Text_Button;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7881[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Percent;                              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7882[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       K2Node_Event_Animation;                            // 0x0040(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_AsPercent_Float_ReturnValue;              // 0x0048(0x0018)()
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal) == 0x000008, "Wrong alinment on LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal");
static_assert(sizeof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal) == 0x000068, "Wrong size on LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, EntryPoint) == 0x000000, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, K2Node_Event_InText) == 0x000008, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::K2Node_Event_InText' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, K2Node_DynamicCast_AsIcon_Text_Button) == 0x000020, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::K2Node_DynamicCast_AsIcon_Text_Button' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, K2Node_Event_Percent) == 0x000038, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::K2Node_Event_Percent' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, K2Node_Event_Animation) == 0x000040, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, CallFunc_AsPercent_Float_ReturnValue) == 0x000048, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::CallFunc_AsPercent_Float_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000060, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000061, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, CallFunc_BooleanAND_ReturnValue) == 0x000062, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000063, "Member 'LoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

}

