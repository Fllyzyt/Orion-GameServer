#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LeavePartyListEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LeavePartyListEntry.LeavePartyListEntry_C
// 0x0048 (0x0C10 - 0x0BC8)
class ULeavePartyListEntry_C final  : public UFortLeavePartyListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BC8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Selected;                                          // 0x0BD0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hovered;                                           // 0x0BD8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                AnimatedInputBorder;                               // 0x0BE0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow;                                             // 0x0BE8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;                   // 0x0BF0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                EntryBorder;                                       // 0x0BF8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   Text_LeavePartyText;                               // 0x0C00(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;                         // 0x0C08(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LeavePartyListEntry(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bIsOpen, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3);
	void BP_OnHovered();
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnUnhovered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LeavePartyListEntry_C">();
	}
	static class ULeavePartyListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULeavePartyListEntry_C>();
	}
};
static_assert(alignof(ULeavePartyListEntry_C) == 0x000008, "Wrong alinment on ULeavePartyListEntry_C");
static_assert(sizeof(ULeavePartyListEntry_C) == 0x000C10, "Wrong size on ULeavePartyListEntry_C");
static_assert(offsetof(ULeavePartyListEntry_C, UberGraphFrame) == 0x000BC8, "Member 'ULeavePartyListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULeavePartyListEntry_C, Selected) == 0x000BD0, "Member 'ULeavePartyListEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(ULeavePartyListEntry_C, Hovered) == 0x000BD8, "Member 'ULeavePartyListEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(ULeavePartyListEntry_C, AnimatedInputBorder) == 0x000BE0, "Member 'ULeavePartyListEntry_C::AnimatedInputBorder' has a wrong offset!");
static_assert(offsetof(ULeavePartyListEntry_C, Arrow) == 0x000BE8, "Member 'ULeavePartyListEntry_C::Arrow' has a wrong offset!");
static_assert(offsetof(ULeavePartyListEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x000BF0, "Member 'ULeavePartyListEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(ULeavePartyListEntry_C, EntryBorder) == 0x000BF8, "Member 'ULeavePartyListEntry_C::EntryBorder' has a wrong offset!");
static_assert(offsetof(ULeavePartyListEntry_C, Text_LeavePartyText) == 0x000C00, "Member 'ULeavePartyListEntry_C::Text_LeavePartyText' has a wrong offset!");
static_assert(offsetof(ULeavePartyListEntry_C, UserActionMenuInputButton) == 0x000C08, "Member 'ULeavePartyListEntry_C::UserActionMenuInputButton' has a wrong offset!");

}

