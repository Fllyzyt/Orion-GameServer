#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HorizontalTabList

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CommonInput_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function HorizontalTabList.HorizontalTabList_C.SetVerticalAlignment
// 0x0010 (0x0010 - 0x0000)
struct HorizontalTabList_C_SetVerticalAlignment final 
{
public:
	EVerticalAlignment                            FillVertically;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7839[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HorizontalTabList_C_SetVerticalAlignment) == 0x000008, "Wrong alinment on HorizontalTabList_C_SetVerticalAlignment");
static_assert(sizeof(HorizontalTabList_C_SetVerticalAlignment) == 0x000010, "Wrong size on HorizontalTabList_C_SetVerticalAlignment");
static_assert(offsetof(HorizontalTabList_C_SetVerticalAlignment, FillVertically) == 0x000000, "Member 'HorizontalTabList_C_SetVerticalAlignment::FillVertically' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_SetVerticalAlignment, CallFunc_SlotAsHorizontalBoxSlot_ReturnValue) == 0x000008, "Member 'HorizontalTabList_C_SetVerticalAlignment::CallFunc_SlotAsHorizontalBoxSlot_ReturnValue' has a wrong offset!");

// Function HorizontalTabList.HorizontalTabList_C.UpdateGamepadKeyVisibility
// 0x0028 (0x0028 - 0x0000)
struct HorizontalTabList_C_UpdateGamepadKeyVisibility final 
{
public:
	int32                                         NumVisibleTabs;                                    // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_783A[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetVisibleTabCount_ReturnValue;           // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_783B[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonInputSubsystem*                  CallFunc_GetContext_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              CallFunc_GetCurrentInputType_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HorizontalTabList_C_UpdateGamepadKeyVisibility) == 0x000008, "Wrong alinment on HorizontalTabList_C_UpdateGamepadKeyVisibility");
static_assert(sizeof(HorizontalTabList_C_UpdateGamepadKeyVisibility) == 0x000028, "Wrong size on HorizontalTabList_C_UpdateGamepadKeyVisibility");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, NumVisibleTabs) == 0x000000, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::NumVisibleTabs' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, Temp_bool_Variable) == 0x000004, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, Temp_byte_Variable) == 0x000005, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, Temp_byte_Variable_1) == 0x000006, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, Temp_bool_Variable_1) == 0x000007, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, Temp_byte_Variable_2) == 0x000008, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, CallFunc_GetVisibleTabCount_ReturnValue) == 0x00000C, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::CallFunc_GetVisibleTabCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, CallFunc_Greater_IntInt_ReturnValue) == 0x000010, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, CallFunc_GetCurrentInputType_ReturnValue) == 0x000020, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::CallFunc_GetCurrentInputType_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000021, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, CallFunc_BooleanAND_ReturnValue) == 0x000022, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, K2Node_Select_Default) == 0x000023, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_UpdateGamepadKeyVisibility, K2Node_Select_Default_1) == 0x000024, "Member 'HorizontalTabList_C_UpdateGamepadKeyVisibility::K2Node_Select_Default_1' has a wrong offset!");

// Function HorizontalTabList.HorizontalTabList_C.Get Tab From Id
// 0x0018 (0x0018 - 0x0000)
struct HorizontalTabList_C_Get_Tab_From_Id final 
{
public:
	class FName                                   TabNameID;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          CallFunc_GetTabButtonByID_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HorizontalTabList_C_Get_Tab_From_Id) == 0x000008, "Wrong alinment on HorizontalTabList_C_Get_Tab_From_Id");
static_assert(sizeof(HorizontalTabList_C_Get_Tab_From_Id) == 0x000018, "Wrong size on HorizontalTabList_C_Get_Tab_From_Id");
static_assert(offsetof(HorizontalTabList_C_Get_Tab_From_Id, TabNameID) == 0x000000, "Member 'HorizontalTabList_C_Get_Tab_From_Id::TabNameID' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_Get_Tab_From_Id, ReturnValue) == 0x000008, "Member 'HorizontalTabList_C_Get_Tab_From_Id::ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_Get_Tab_From_Id, CallFunc_GetTabButtonByID_ReturnValue) == 0x000010, "Member 'HorizontalTabList_C_Get_Tab_From_Id::CallFunc_GetTabButtonByID_ReturnValue' has a wrong offset!");

// Function HorizontalTabList.HorizontalTabList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct HorizontalTabList_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(HorizontalTabList_C_PreConstruct) == 0x000001, "Wrong alinment on HorizontalTabList_C_PreConstruct");
static_assert(sizeof(HorizontalTabList_C_PreConstruct) == 0x000001, "Wrong size on HorizontalTabList_C_PreConstruct");
static_assert(offsetof(HorizontalTabList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'HorizontalTabList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function HorizontalTabList.HorizontalTabList_C.CustomEvent_0
// 0x0008 (0x0008 - 0x0000)
struct HorizontalTabList_C_CustomEvent_0 final 
{
public:
	class FName                                   TabId;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HorizontalTabList_C_CustomEvent_0) == 0x000004, "Wrong alinment on HorizontalTabList_C_CustomEvent_0");
static_assert(sizeof(HorizontalTabList_C_CustomEvent_0) == 0x000008, "Wrong size on HorizontalTabList_C_CustomEvent_0");
static_assert(offsetof(HorizontalTabList_C_CustomEvent_0, TabId) == 0x000000, "Member 'HorizontalTabList_C_CustomEvent_0::TabId' has a wrong offset!");

// Function HorizontalTabList.HorizontalTabList_C.HandleTabCreated
// 0x0010 (0x0010 - 0x0000)
struct HorizontalTabList_C_HandleTabCreated final 
{
public:
	class FName                                   TabNameID;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          TabButton;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HorizontalTabList_C_HandleTabCreated) == 0x000008, "Wrong alinment on HorizontalTabList_C_HandleTabCreated");
static_assert(sizeof(HorizontalTabList_C_HandleTabCreated) == 0x000010, "Wrong size on HorizontalTabList_C_HandleTabCreated");
static_assert(offsetof(HorizontalTabList_C_HandleTabCreated, TabNameID) == 0x000000, "Member 'HorizontalTabList_C_HandleTabCreated::TabNameID' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_HandleTabCreated, TabButton) == 0x000008, "Member 'HorizontalTabList_C_HandleTabCreated::TabButton' has a wrong offset!");

// Function HorizontalTabList.HorizontalTabList_C.HandleTabRemoved
// 0x0010 (0x0010 - 0x0000)
struct HorizontalTabList_C_HandleTabRemoved final 
{
public:
	class FName                                   TabNameID;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          TabButton;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HorizontalTabList_C_HandleTabRemoved) == 0x000008, "Wrong alinment on HorizontalTabList_C_HandleTabRemoved");
static_assert(sizeof(HorizontalTabList_C_HandleTabRemoved) == 0x000010, "Wrong size on HorizontalTabList_C_HandleTabRemoved");
static_assert(offsetof(HorizontalTabList_C_HandleTabRemoved, TabNameID) == 0x000000, "Member 'HorizontalTabList_C_HandleTabRemoved::TabNameID' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_HandleTabRemoved, TabButton) == 0x000008, "Member 'HorizontalTabList_C_HandleTabRemoved::TabButton' has a wrong offset!");

// Function HorizontalTabList.HorizontalTabList_C.HandleOnInputMethodChanged
// 0x0001 (0x0001 - 0x0000)
struct HorizontalTabList_C_HandleOnInputMethodChanged final 
{
public:
	ECommonInputType                              bNewInputType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HorizontalTabList_C_HandleOnInputMethodChanged) == 0x000001, "Wrong alinment on HorizontalTabList_C_HandleOnInputMethodChanged");
static_assert(sizeof(HorizontalTabList_C_HandleOnInputMethodChanged) == 0x000001, "Wrong size on HorizontalTabList_C_HandleOnInputMethodChanged");
static_assert(offsetof(HorizontalTabList_C_HandleOnInputMethodChanged, bNewInputType) == 0x000000, "Member 'HorizontalTabList_C_HandleOnInputMethodChanged::bNewInputType' has a wrong offset!");

// Function HorizontalTabList.HorizontalTabList_C.ExecuteUbergraph_HorizontalTabList
// 0x00B8 (0x00B8 - 0x0000)
struct HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECommonInputType                              K2Node_CustomEvent_bNewInputType;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_783C[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FName TabId)>            K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_783D[0x1];                                     // 0x0033(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTabCount_ReturnValue;                  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_783E[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTabCount_ReturnValue_1;                // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_783F[0x1];                                     // 0x0043(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_TabId;                          // 0x0044(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7840[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetEmptyText_ReturnValue;                 // 0x0050(0x0018)()
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7841[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_TabNameID_1;                          // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7842[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_Event_TabButton_1;                          // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTabButton_C*                       K2Node_DynamicCast_AsIcon_Tab_Button;              // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7843[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTabButton_C*                       K2Node_DynamicCast_AsIcon_Tab_Button_1;            // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x00A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x00A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x00A7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_TabNameID;                            // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_Event_TabButton;                            // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList) == 0x000008, "Wrong alinment on HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList");
static_assert(sizeof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList) == 0x0000B8, "Wrong size on HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, EntryPoint) == 0x000000, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::EntryPoint' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_CustomEvent_bNewInputType) == 0x000004, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_CustomEvent_bNewInputType' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000008, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, Temp_byte_Variable) == 0x000030, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, Temp_byte_Variable_1) == 0x000031, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_Event_IsDesignTime) == 0x000032, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, CallFunc_GetTabCount_ReturnValue) == 0x000034, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::CallFunc_GetTabCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000038, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, CallFunc_GetTabCount_ReturnValue_1) == 0x00003C, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::CallFunc_GetTabCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000040, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, Temp_bool_Variable) == 0x000041, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_Select_Default) == 0x000042, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_CustomEvent_TabId) == 0x000044, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_CustomEvent_TabId' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, CallFunc_GetEmptyText_ReturnValue) == 0x000050, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::CallFunc_GetEmptyText_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, Temp_byte_Variable_2) == 0x000068, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_Event_TabNameID_1) == 0x00006C, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_Event_TabNameID_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_Event_TabButton_1) == 0x000078, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_Event_TabButton_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_DynamicCast_AsIcon_Tab_Button) == 0x000080, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_DynamicCast_AsIcon_Tab_Button' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000090, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_DynamicCast_AsIcon_Tab_Button_1) == 0x000098, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_DynamicCast_AsIcon_Tab_Button_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, Temp_byte_Variable_3) == 0x0000A1, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, Temp_bool_Variable_1) == 0x0000A2, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, Temp_byte_Variable_4) == 0x0000A3, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_Select_Default_1) == 0x0000A4, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, Temp_byte_Variable_5) == 0x0000A5, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, Temp_bool_Variable_2) == 0x0000A6, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_Select_Default_2) == 0x0000A7, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_Event_TabNameID) == 0x0000A8, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_Event_TabNameID' has a wrong offset!");
static_assert(offsetof(HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList, K2Node_Event_TabButton) == 0x0000B0, "Member 'HorizontalTabList_C_ExecuteUbergraph_HorizontalTabList::K2Node_Event_TabButton' has a wrong offset!");

}

