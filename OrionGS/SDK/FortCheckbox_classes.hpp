#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortCheckbox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FortCheckbox.FortCheckbox_C
// 0x0040 (0x02C8 - 0x0288)
class UFortCheckbox_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                CheckButton;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Checked;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Unchecked;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_CheckBox;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Selected;                                          // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_696B[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClicked__DelegateSignature();
	void ExecuteUbergraph_FortCheckbox(int32 EntryPoint);
	void BndEvt__CheckButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ToggleCheckbox(bool CallFunc_Not_PreBool_ReturnValue);
	void SetSelected(bool NewSelected);
	void Refresh(bool Temp_bool_Variable, class UWidget* K2Node_Select_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortCheckbox_C">();
	}
	static class UFortCheckbox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCheckbox_C>();
	}
};
static_assert(alignof(UFortCheckbox_C) == 0x000008, "Wrong alinment on UFortCheckbox_C");
static_assert(sizeof(UFortCheckbox_C) == 0x0002C8, "Wrong size on UFortCheckbox_C");
static_assert(offsetof(UFortCheckbox_C, UberGraphFrame) == 0x000288, "Member 'UFortCheckbox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFortCheckbox_C, CheckButton) == 0x000290, "Member 'UFortCheckbox_C::CheckButton' has a wrong offset!");
static_assert(offsetof(UFortCheckbox_C, Image_Checked) == 0x000298, "Member 'UFortCheckbox_C::Image_Checked' has a wrong offset!");
static_assert(offsetof(UFortCheckbox_C, Image_Unchecked) == 0x0002A0, "Member 'UFortCheckbox_C::Image_Unchecked' has a wrong offset!");
static_assert(offsetof(UFortCheckbox_C, Switcher_CheckBox) == 0x0002A8, "Member 'UFortCheckbox_C::Switcher_CheckBox' has a wrong offset!");
static_assert(offsetof(UFortCheckbox_C, Selected) == 0x0002B0, "Member 'UFortCheckbox_C::Selected' has a wrong offset!");
static_assert(offsetof(UFortCheckbox_C, OnClicked) == 0x0002B8, "Member 'UFortCheckbox_C::OnClicked' has a wrong offset!");

}

