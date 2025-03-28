#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PrimarySkewButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PrimarySkewButton.PrimarySkewButton_C
// 0x0050 (0x0BF0 - 0x0BA0)
class UPrimarySkewButton_C final  : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BA0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Pressed;                                           // 0x0BA8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hover;                                             // 0x0BB0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       CenterButtonTextWidget;                            // 0x0BB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ButtonTop;                                   // 0x0BC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Shadow;                                      // 0x0BC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ToUpper;                                           // 0x0BD0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          XL;                                                // 0x0BD1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78E5[0x6];                                     // 0x0BD2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ButtonNameText;                                    // 0x0BD8(0x0018)(Edit, BlueprintVisible)

public:
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, float Temp_float_Variable, bool Temp_bool_Variable, const struct FEventReply& CallFunc_Unhandled_ReturnValue, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, float Temp_float_Variable, bool Temp_bool_Variable, const struct FEventReply& CallFunc_Unhandled_ReturnValue, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void Construct();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnClicked();
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_PrimarySkewButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, float Temp_float_Variable, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, bool Temp_bool_Variable_3, const struct FSlateFontInfo& K2Node_Select_Default, float CallFunc_GetStartTime_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetStartTime_ReturnValue_1, float CallFunc_GetEndTime_ReturnValue_1, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_2, float K2Node_Select_Default_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_PauseAnimation_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool K2Node_ComponentBoundEvent_bUsingGamepad, class FText CallFunc_TextToUpper_ReturnValue, float Temp_float_Variable_1, class FText K2Node_Select_Default_2, float K2Node_Select_Default_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PrimarySkewButton_C">();
	}
	static class UPrimarySkewButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPrimarySkewButton_C>();
	}
};
static_assert(alignof(UPrimarySkewButton_C) == 0x000008, "Wrong alinment on UPrimarySkewButton_C");
static_assert(sizeof(UPrimarySkewButton_C) == 0x000BF0, "Wrong size on UPrimarySkewButton_C");
static_assert(offsetof(UPrimarySkewButton_C, UberGraphFrame) == 0x000BA0, "Member 'UPrimarySkewButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPrimarySkewButton_C, Pressed) == 0x000BA8, "Member 'UPrimarySkewButton_C::Pressed' has a wrong offset!");
static_assert(offsetof(UPrimarySkewButton_C, Hover) == 0x000BB0, "Member 'UPrimarySkewButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UPrimarySkewButton_C, CenterButtonTextWidget) == 0x000BB8, "Member 'UPrimarySkewButton_C::CenterButtonTextWidget' has a wrong offset!");
static_assert(offsetof(UPrimarySkewButton_C, Image_ButtonTop) == 0x000BC0, "Member 'UPrimarySkewButton_C::Image_ButtonTop' has a wrong offset!");
static_assert(offsetof(UPrimarySkewButton_C, Image_Shadow) == 0x000BC8, "Member 'UPrimarySkewButton_C::Image_Shadow' has a wrong offset!");
static_assert(offsetof(UPrimarySkewButton_C, ToUpper) == 0x000BD0, "Member 'UPrimarySkewButton_C::ToUpper' has a wrong offset!");
static_assert(offsetof(UPrimarySkewButton_C, XL) == 0x000BD1, "Member 'UPrimarySkewButton_C::XL' has a wrong offset!");
static_assert(offsetof(UPrimarySkewButton_C, ButtonNameText) == 0x000BD8, "Member 'UPrimarySkewButton_C::ButtonNameText' has a wrong offset!");

}

