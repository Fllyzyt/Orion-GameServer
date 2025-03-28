#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissedInvitesEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MissedInvitesEntry.MissedInvitesEntry_C
// 0x0050 (0x0C18 - 0x0BC8)
class UMissedInvitesEntry_C final  : public UFortMissedInvitesListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BC8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Selected;                                          // 0x0BD0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hovered;                                           // 0x0BD8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                AnimatedInputBorder;                               // 0x0BE0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow;                                             // 0x0BE8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;                   // 0x0BF0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                EntryBorder;                                       // 0x0BF8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Exclamation;                                       // 0x0C00(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   Text_MissedInvitesText;                            // 0x0C08(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;                         // 0x0C10(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MissedInvitesEntry(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bIsOpen, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3);
	void BP_OnHovered();
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnUnhovered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissedInvitesEntry_C">();
	}
	static class UMissedInvitesEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissedInvitesEntry_C>();
	}
};
static_assert(alignof(UMissedInvitesEntry_C) == 0x000008, "Wrong alinment on UMissedInvitesEntry_C");
static_assert(sizeof(UMissedInvitesEntry_C) == 0x000C18, "Wrong size on UMissedInvitesEntry_C");
static_assert(offsetof(UMissedInvitesEntry_C, UberGraphFrame) == 0x000BC8, "Member 'UMissedInvitesEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMissedInvitesEntry_C, Selected) == 0x000BD0, "Member 'UMissedInvitesEntry_C::Selected' has a wrong offset!");
static_assert(offsetof(UMissedInvitesEntry_C, Hovered) == 0x000BD8, "Member 'UMissedInvitesEntry_C::Hovered' has a wrong offset!");
static_assert(offsetof(UMissedInvitesEntry_C, AnimatedInputBorder) == 0x000BE0, "Member 'UMissedInvitesEntry_C::AnimatedInputBorder' has a wrong offset!");
static_assert(offsetof(UMissedInvitesEntry_C, Arrow) == 0x000BE8, "Member 'UMissedInvitesEntry_C::Arrow' has a wrong offset!");
static_assert(offsetof(UMissedInvitesEntry_C, EmptyButtonToEatOneMouseUpEvent) == 0x000BF0, "Member 'UMissedInvitesEntry_C::EmptyButtonToEatOneMouseUpEvent' has a wrong offset!");
static_assert(offsetof(UMissedInvitesEntry_C, EntryBorder) == 0x000BF8, "Member 'UMissedInvitesEntry_C::EntryBorder' has a wrong offset!");
static_assert(offsetof(UMissedInvitesEntry_C, Exclamation) == 0x000C00, "Member 'UMissedInvitesEntry_C::Exclamation' has a wrong offset!");
static_assert(offsetof(UMissedInvitesEntry_C, Text_MissedInvitesText) == 0x000C08, "Member 'UMissedInvitesEntry_C::Text_MissedInvitesText' has a wrong offset!");
static_assert(offsetof(UMissedInvitesEntry_C, UserActionMenuInputButton) == 0x000C10, "Member 'UMissedInvitesEntry_C::UserActionMenuInputButton' has a wrong offset!");

}

