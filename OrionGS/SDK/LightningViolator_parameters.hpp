#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LightningViolator

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function LightningViolator.LightningViolator_C.ExecuteUbergraph_LightningViolator
// 0x0038 (0x0038 - 0x0000)
struct LightningViolator_C_ExecuteUbergraph_LightningViolator final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D72[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_NewText;                        // 0x0008(0x0018)()
	struct FLinearColor                           K2Node_CustomEvent_NewColor;                       // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LightningViolator_C_ExecuteUbergraph_LightningViolator) == 0x000008, "Wrong alinment on LightningViolator_C_ExecuteUbergraph_LightningViolator");
static_assert(sizeof(LightningViolator_C_ExecuteUbergraph_LightningViolator) == 0x000038, "Wrong size on LightningViolator_C_ExecuteUbergraph_LightningViolator");
static_assert(offsetof(LightningViolator_C_ExecuteUbergraph_LightningViolator, EntryPoint) == 0x000000, "Member 'LightningViolator_C_ExecuteUbergraph_LightningViolator::EntryPoint' has a wrong offset!");
static_assert(offsetof(LightningViolator_C_ExecuteUbergraph_LightningViolator, K2Node_CustomEvent_NewText) == 0x000008, "Member 'LightningViolator_C_ExecuteUbergraph_LightningViolator::K2Node_CustomEvent_NewText' has a wrong offset!");
static_assert(offsetof(LightningViolator_C_ExecuteUbergraph_LightningViolator, K2Node_CustomEvent_NewColor) == 0x000020, "Member 'LightningViolator_C_ExecuteUbergraph_LightningViolator::K2Node_CustomEvent_NewColor' has a wrong offset!");
static_assert(offsetof(LightningViolator_C_ExecuteUbergraph_LightningViolator, K2Node_Event_IsDesignTime) == 0x000030, "Member 'LightningViolator_C_ExecuteUbergraph_LightningViolator::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function LightningViolator.LightningViolator_C.EventSetText
// 0x0018 (0x0018 - 0x0000)
struct LightningViolator_C_EventSetText final 
{
public:
	class FText                                   NewText;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(LightningViolator_C_EventSetText) == 0x000008, "Wrong alinment on LightningViolator_C_EventSetText");
static_assert(sizeof(LightningViolator_C_EventSetText) == 0x000018, "Wrong size on LightningViolator_C_EventSetText");
static_assert(offsetof(LightningViolator_C_EventSetText, NewText) == 0x000000, "Member 'LightningViolator_C_EventSetText::NewText' has a wrong offset!");

// Function LightningViolator.LightningViolator_C.EventColorBG
// 0x0010 (0x0010 - 0x0000)
struct LightningViolator_C_EventColorBG final 
{
public:
	struct FLinearColor                           NewColor;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LightningViolator_C_EventColorBG) == 0x000004, "Wrong alinment on LightningViolator_C_EventColorBG");
static_assert(sizeof(LightningViolator_C_EventColorBG) == 0x000010, "Wrong size on LightningViolator_C_EventColorBG");
static_assert(offsetof(LightningViolator_C_EventColorBG, NewColor) == 0x000000, "Member 'LightningViolator_C_EventColorBG::NewColor' has a wrong offset!");

// Function LightningViolator.LightningViolator_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct LightningViolator_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LightningViolator_C_PreConstruct) == 0x000001, "Wrong alinment on LightningViolator_C_PreConstruct");
static_assert(sizeof(LightningViolator_C_PreConstruct) == 0x000001, "Wrong size on LightningViolator_C_PreConstruct");
static_assert(offsetof(LightningViolator_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'LightningViolator_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function LightningViolator.LightningViolator_C.TailPosition
// 0x0040 (0x0040 - 0x0000)
struct LightningViolator_C_TailPosition final 
{
public:
	bool                                          ShowTail;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EHorizontalAlignment                          HPosition;                                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnTop;                                             // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                              Temp_struct_Variable;                              // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Temp_struct_Variable_1;                            // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              K2Node_Select_Default;                             // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWidgetTransform                       K2Node_MakeStruct_WidgetTransform;                 // 0x001C(0x001C)(NoDestructor)
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LightningViolator_C_TailPosition) == 0x000008, "Wrong alinment on LightningViolator_C_TailPosition");
static_assert(sizeof(LightningViolator_C_TailPosition) == 0x000040, "Wrong size on LightningViolator_C_TailPosition");
static_assert(offsetof(LightningViolator_C_TailPosition, ShowTail) == 0x000000, "Member 'LightningViolator_C_TailPosition::ShowTail' has a wrong offset!");
static_assert(offsetof(LightningViolator_C_TailPosition, HPosition) == 0x000001, "Member 'LightningViolator_C_TailPosition::HPosition' has a wrong offset!");
static_assert(offsetof(LightningViolator_C_TailPosition, OnTop) == 0x000002, "Member 'LightningViolator_C_TailPosition::OnTop' has a wrong offset!");
static_assert(offsetof(LightningViolator_C_TailPosition, Temp_bool_Variable) == 0x000003, "Member 'LightningViolator_C_TailPosition::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LightningViolator_C_TailPosition, Temp_struct_Variable) == 0x000004, "Member 'LightningViolator_C_TailPosition::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(LightningViolator_C_TailPosition, Temp_struct_Variable_1) == 0x00000C, "Member 'LightningViolator_C_TailPosition::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(LightningViolator_C_TailPosition, K2Node_Select_Default) == 0x000014, "Member 'LightningViolator_C_TailPosition::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LightningViolator_C_TailPosition, K2Node_MakeStruct_WidgetTransform) == 0x00001C, "Member 'LightningViolator_C_TailPosition::K2Node_MakeStruct_WidgetTransform' has a wrong offset!");
static_assert(offsetof(LightningViolator_C_TailPosition, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000038, "Member 'LightningViolator_C_TailPosition::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");

}

