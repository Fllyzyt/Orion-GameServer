#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VoiceChannelHeaderButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass VoiceChannelHeaderButton.VoiceChannelHeaderButton_C
// 0x0060 (0x0C28 - 0x0BC8)
class UVoiceChannelHeaderButton_C final  : public UFortVoiceChannelHeaderButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BC8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnExpansion;                                       // 0x0BD0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       JoinSlideOut;                                      // 0x0BD8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ScaleUp;                                           // 0x0BE0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFortMobileImage*                       ExpandDirectionTick;                               // 0x0BE8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   JoinText;                                          // 0x0BF0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NotTransmitting;                                   // 0x0BF8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_1;                                         // 0x0C00(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SelectionBackplate;                                // 0x0C08(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switch_Transmitting;                               // 0x0C10(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_ChannelButtonState;                       // 0x0C18(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Transmitting;                                      // 0x0C20(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_VoiceChannelHeaderButton(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, EUMGSequencePlayMode Temp_byte_Variable_2, EUMGSequencePlayMode Temp_byte_Variable_3, bool Temp_bool_Variable_1, bool K2Node_Event_bIsActive, bool K2Node_Event_bRepresentingPlatformChat, bool K2Node_Event_bChannelAvailable, bool K2Node_Event_bTransmitting, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility K2Node_Select_Default, int32 CallFunc_SelectInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_CanJoinChannel_ReturnValue, bool CallFunc_CanJoinChannel_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, bool CallFunc_IsActiveChannel_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsActiveChannel_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, ESlateVisibility K2Node_Select_Default_1, bool K2Node_Event_bIsExpanded, EUMGSequencePlayMode K2Node_Select_Default_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnExpansionChanged(bool bIsExpanded);
	void BP_OnEnabled();
	void BP_OnDisabled();
	void BP_OnUnhovered();
	void BP_OnHovered();
	void OnUpdateVisuals(bool bIsActive, bool bRepresentingPlatformChat, bool bChannelAvailable, bool bTransmitting);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VoiceChannelHeaderButton_C">();
	}
	static class UVoiceChannelHeaderButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoiceChannelHeaderButton_C>();
	}
};
static_assert(alignof(UVoiceChannelHeaderButton_C) == 0x000008, "Wrong alinment on UVoiceChannelHeaderButton_C");
static_assert(sizeof(UVoiceChannelHeaderButton_C) == 0x000C28, "Wrong size on UVoiceChannelHeaderButton_C");
static_assert(offsetof(UVoiceChannelHeaderButton_C, UberGraphFrame) == 0x000BC8, "Member 'UVoiceChannelHeaderButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, OnExpansion) == 0x000BD0, "Member 'UVoiceChannelHeaderButton_C::OnExpansion' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, JoinSlideOut) == 0x000BD8, "Member 'UVoiceChannelHeaderButton_C::JoinSlideOut' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, ScaleUp) == 0x000BE0, "Member 'UVoiceChannelHeaderButton_C::ScaleUp' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, ExpandDirectionTick) == 0x000BE8, "Member 'UVoiceChannelHeaderButton_C::ExpandDirectionTick' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, JoinText) == 0x000BF0, "Member 'UVoiceChannelHeaderButton_C::JoinText' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, NotTransmitting) == 0x000BF8, "Member 'UVoiceChannelHeaderButton_C::NotTransmitting' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, Overlay_1) == 0x000C00, "Member 'UVoiceChannelHeaderButton_C::Overlay_1' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, SelectionBackplate) == 0x000C08, "Member 'UVoiceChannelHeaderButton_C::SelectionBackplate' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, Switch_Transmitting) == 0x000C10, "Member 'UVoiceChannelHeaderButton_C::Switch_Transmitting' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, Switcher_ChannelButtonState) == 0x000C18, "Member 'UVoiceChannelHeaderButton_C::Switcher_ChannelButtonState' has a wrong offset!");
static_assert(offsetof(UVoiceChannelHeaderButton_C, Transmitting) == 0x000C20, "Member 'UVoiceChannelHeaderButton_C::Transmitting' has a wrong offset!");

}

