#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScrollingTextButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ScrollingTextButton.ScrollingTextButton_C
// 0x00D8 (0x0C78 - 0x0BA0)
class UScrollingTextButton_C final  : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BA0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       CenterButtonTextWidget;                            // 0x0BA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ContentBorder;                                     // 0x0BB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeftSideImage;                                     // 0x0BB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   ButtonText;                                        // 0x0BC0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateBrush                            IconBrush;                                         // 0x0BD8(0x0088)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UClass*                                 ControllerInputStyle;                              // 0x0C60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                 MouseKeyboardStyle;                                // 0x0C68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHorizontalAlignment                          ContentAlignment;                                  // 0x0C70(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bMouseKeyboardStyleSet;                            // 0x0C71(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ScrollingTextButton(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_Event_IsDesignTime, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_ComponentBoundEvent_bUsingGamepad, struct FDataTableRowHandle& K2Node_Event_NewTriggeredAction, float K2Node_Event_HeldPercent, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue_1, bool CallFunc_EqualEqual_SlateBrush_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
	void Construct();
	void OnActionComplete();
	void OnActionProgress(float HeldPercent);
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction);
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo);
	void PreConstruct(bool IsDesignTime);
	void OnCurrentTextStyleChanged();
	void Set_Text(class FText Param_ButtonText, ESlateVisibility Temp_byte_Variable, bool CallFunc_TextIsEmpty_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
	void Set_Icon(const struct FSlateBrush& Param_IconBrush);
	void InitializeButton(class UObject* CallFunc_GetBrushResource_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateTextAndStyle(bool bUsingGamepad);
	void SetControllerStyle(class UClass* Param_ControllerInputStyle, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdateText(bool Temp_bool_Variable, class FText CallFunc_GetDisplayText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default);
	void UpdateStyle(bool UsingGamepad);
	void SetMouseKeyboardStyle(class UClass* Param_ControllerInputStyle, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdateContentAlignment(class UPanelSlot* CallFunc_GetContentSlot_ReturnValue, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot, bool K2Node_DynamicCast_bSuccess);
	void SetContentAlignment(EHorizontalAlignment Param_ContentAlignment);
	void UpdateTextStyle(class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue);
	void SetInitialMouseKeyboardStyle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ScrollingTextButton_C">();
	}
	static class UScrollingTextButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScrollingTextButton_C>();
	}
};
static_assert(alignof(UScrollingTextButton_C) == 0x000008, "Wrong alinment on UScrollingTextButton_C");
static_assert(sizeof(UScrollingTextButton_C) == 0x000C78, "Wrong size on UScrollingTextButton_C");
static_assert(offsetof(UScrollingTextButton_C, UberGraphFrame) == 0x000BA0, "Member 'UScrollingTextButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UScrollingTextButton_C, CenterButtonTextWidget) == 0x000BA8, "Member 'UScrollingTextButton_C::CenterButtonTextWidget' has a wrong offset!");
static_assert(offsetof(UScrollingTextButton_C, ContentBorder) == 0x000BB0, "Member 'UScrollingTextButton_C::ContentBorder' has a wrong offset!");
static_assert(offsetof(UScrollingTextButton_C, LeftSideImage) == 0x000BB8, "Member 'UScrollingTextButton_C::LeftSideImage' has a wrong offset!");
static_assert(offsetof(UScrollingTextButton_C, ButtonText) == 0x000BC0, "Member 'UScrollingTextButton_C::ButtonText' has a wrong offset!");
static_assert(offsetof(UScrollingTextButton_C, IconBrush) == 0x000BD8, "Member 'UScrollingTextButton_C::IconBrush' has a wrong offset!");
static_assert(offsetof(UScrollingTextButton_C, ControllerInputStyle) == 0x000C60, "Member 'UScrollingTextButton_C::ControllerInputStyle' has a wrong offset!");
static_assert(offsetof(UScrollingTextButton_C, MouseKeyboardStyle) == 0x000C68, "Member 'UScrollingTextButton_C::MouseKeyboardStyle' has a wrong offset!");
static_assert(offsetof(UScrollingTextButton_C, ContentAlignment) == 0x000C70, "Member 'UScrollingTextButton_C::ContentAlignment' has a wrong offset!");
static_assert(offsetof(UScrollingTextButton_C, bMouseKeyboardStyleSet) == 0x000C71, "Member 'UScrollingTextButton_C::bMouseKeyboardStyleSet' has a wrong offset!");

}

