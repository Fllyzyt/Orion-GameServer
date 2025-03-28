#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AccountPinLinkingWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AccountPinLinkingWindow.AccountPinLinkingWindow_C
// 0x0018 (0x05E8 - 0x05D0)
class UAccountPinLinkingWindow_C final  : public UFortAccountPinLinkingWindow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_83;                                          // 0x05D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_255;                                         // 0x05E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__Switcher_Main_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void ExecuteUbergraph_AccountPinLinkingWindow(int32 EntryPoint, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, bool K2Node_SwitchInteger_CmpSuccess);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AccountPinLinkingWindow_C">();
	}
	static class UAccountPinLinkingWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAccountPinLinkingWindow_C>();
	}
};
static_assert(alignof(UAccountPinLinkingWindow_C) == 0x000008, "Wrong alinment on UAccountPinLinkingWindow_C");
static_assert(sizeof(UAccountPinLinkingWindow_C) == 0x0005E8, "Wrong size on UAccountPinLinkingWindow_C");
static_assert(offsetof(UAccountPinLinkingWindow_C, UberGraphFrame) == 0x0005D0, "Member 'UAccountPinLinkingWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAccountPinLinkingWindow_C, Image_83) == 0x0005D8, "Member 'UAccountPinLinkingWindow_C::Image_83' has a wrong offset!");
static_assert(offsetof(UAccountPinLinkingWindow_C, Image_255) == 0x0005E0, "Member 'UAccountPinLinkingWindow_C::Image_255' has a wrong offset!");

}

