#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VoiceChannelSettings

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass VoiceChannelSettings.VoiceChannelSettings_C
// 0x0088 (0x0390 - 0x0308)
class UVoiceChannelSettings_C final  : public UFortVoiceSettingsDisplay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       GearHover;                                         // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonActionWidget*                    ActionWidget_EnableVoice;                          // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                    ActionWidget_InputDisplay;                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Button_NextInputDevice;                            // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Button_NextOutputDevice;                           // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      Button_TogglePTT;                                  // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GearIcon;                                          // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMobileImage*                       Image_TitleIcon;                                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   InputDevice;                                       // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   OutputDevice;                                      // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                       PTTKeybindWidget;                                  // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   PushToTalk;                                        // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   Text_EnableVoiceChat;                              // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_LowPowerMode;                                 // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VoiceDisabledIcon;                                 // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   VoiceDisabledText;                                 // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_VoiceChannelSettings(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_OpenSettings_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VoiceChannelSettings_C">();
	}
	static class UVoiceChannelSettings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVoiceChannelSettings_C>();
	}
};
static_assert(alignof(UVoiceChannelSettings_C) == 0x000008, "Wrong alinment on UVoiceChannelSettings_C");
static_assert(sizeof(UVoiceChannelSettings_C) == 0x000390, "Wrong size on UVoiceChannelSettings_C");
static_assert(offsetof(UVoiceChannelSettings_C, UberGraphFrame) == 0x000308, "Member 'UVoiceChannelSettings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, GearHover) == 0x000310, "Member 'UVoiceChannelSettings_C::GearHover' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, ActionWidget_EnableVoice) == 0x000318, "Member 'UVoiceChannelSettings_C::ActionWidget_EnableVoice' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, ActionWidget_InputDisplay) == 0x000320, "Member 'UVoiceChannelSettings_C::ActionWidget_InputDisplay' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, Button_NextInputDevice) == 0x000328, "Member 'UVoiceChannelSettings_C::Button_NextInputDevice' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, Button_NextOutputDevice) == 0x000330, "Member 'UVoiceChannelSettings_C::Button_NextOutputDevice' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, Button_TogglePTT) == 0x000338, "Member 'UVoiceChannelSettings_C::Button_TogglePTT' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, GearIcon) == 0x000340, "Member 'UVoiceChannelSettings_C::GearIcon' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, Image_TitleIcon) == 0x000348, "Member 'UVoiceChannelSettings_C::Image_TitleIcon' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, InputDevice) == 0x000350, "Member 'UVoiceChannelSettings_C::InputDevice' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, OutputDevice) == 0x000358, "Member 'UVoiceChannelSettings_C::OutputDevice' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, PTTKeybindWidget) == 0x000360, "Member 'UVoiceChannelSettings_C::PTTKeybindWidget' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, PushToTalk) == 0x000368, "Member 'UVoiceChannelSettings_C::PushToTalk' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, Text_EnableVoiceChat) == 0x000370, "Member 'UVoiceChannelSettings_C::Text_EnableVoiceChat' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, Text_LowPowerMode) == 0x000378, "Member 'UVoiceChannelSettings_C::Text_LowPowerMode' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, VoiceDisabledIcon) == 0x000380, "Member 'UVoiceChannelSettings_C::VoiceDisabledIcon' has a wrong offset!");
static_assert(offsetof(UVoiceChannelSettings_C, VoiceDisabledText) == 0x000388, "Member 'UVoiceChannelSettings_C::VoiceDisabledText' has a wrong offset!");

}

