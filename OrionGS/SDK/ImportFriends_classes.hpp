#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImportFriends

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImportFriends.ImportFriends_C
// 0x0158 (0x0658 - 0x0500)
class UImportFriends_C final  : public UFortSocialImportPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0500(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro_V2;                                          // 0x0508(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ArrowPulse;                                        // 0x0510(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0518(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       AddFriendsDescription;                             // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_0;                                 // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CT_AddFriendsDescription;                          // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CT_ChangeInSettingsText;                           // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CT_LimitedTimeHeader;                              // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CT_TakenToLauncher;                                // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInfoWidget_C*                      ItemInfoWidget;                                    // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              SBox_AddFriendButtonScaleBox;                      // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBoxDescription;                               // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBoxHeader;                                    // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemDefinition*                    PreviewItemDef;                                    // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeartbeatDelayIntroAnimation;                      // 0x0588(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasReward;                                        // 0x058C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7731[0x3];                                     // 0x058D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   FacebookHeader;                                    // 0x0590(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   VKHeader;                                          // 0x05A8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   SteamHeader;                                       // 0x05C0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PlaystationHeader;                                 // 0x05D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   XboxHeader;                                        // 0x05F0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESocialImportPanelPlatform                    SocialPlatform;                                    // 0x0608(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7732[0x3];                                     // 0x0609(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WrapHeaderAt;                                      // 0x060C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   XboxDescriptionText;                               // 0x0610(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PSNDescriptionText;                                // 0x0628(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   SwitchDescriptionText;                             // 0x0640(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ScaleTextButton(int32 CharThreshold, class UScaleBox* ContainingScaleBox, class UIconTextButton_C* Button, float CallFunc_Conv_IntToFloat_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue);
	void ScaleTextboxWithWrappingWorkaround(class UScaleBox* ContainingScaleBox, int32 CharLimitThreshold, class UCommonTextBlock* TargetText, int32 WrapAtHorrizontal, float ScaleCharThreshold, float CallFunc_Conv_IntToFloat_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Len_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void HandleHeaderText();
	void HandleDescriptionText();
	void OnPanelTypeSet(ESocialImportPanelType NewType);
	void BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BP_OnActivated();
	void OnIncentivizedSet(bool bIncentivized);
	void ExecuteUbergraph_ImportFriends(int32 EntryPoint, class FText Temp_text_Variable, class FText Temp_text_Variable_1, ESocialImportPanelPlatform Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, ESlateVisibility Temp_byte_Variable_6, ESlateVisibility Temp_byte_Variable_7, ESocialImportPanelPlatform Temp_byte_Variable_8, ESlateVisibility Temp_byte_Variable_9, ESlateVisibility Temp_byte_Variable_10, ESlateVisibility Temp_byte_Variable_11, ESlateVisibility Temp_byte_Variable_12, ESlateVisibility Temp_byte_Variable_13, ESlateVisibility Temp_byte_Variable_14, ESlateVisibility Temp_byte_Variable_15, ESocialImportPanelPlatform Temp_byte_Variable_16, class FText Temp_text_Variable_2, bool K2Node_Event_IsDesignTime, ESocialImportPanelType K2Node_Event_NewType, ESocialImportPanelPlatform Temp_byte_Variable_17, class UCommonButton* K2Node_ComponentBoundEvent_Button, ESocialImportPanelPlatform CallFunc_GetSocialPlatform_OutPlatform, bool CallFunc_GetSocialPlatform_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool K2Node_Event_bIncentivized, class FText K2Node_Select_Default, class FText CallFunc_MakeLiteralText_ReturnValue, ESlateVisibility K2Node_Select_Default_1, class FText CallFunc_TextToUpper_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button_1, bool K2Node_DynamicCast_bSuccess_1, ESlateVisibility K2Node_Select_Default_2, class FText K2Node_Select_Default_3);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImportFriends_C">();
	}
	static class UImportFriends_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImportFriends_C>();
	}
};
static_assert(alignof(UImportFriends_C) == 0x000008, "Wrong alinment on UImportFriends_C");
static_assert(sizeof(UImportFriends_C) == 0x000658, "Wrong size on UImportFriends_C");
static_assert(offsetof(UImportFriends_C, UberGraphFrame) == 0x000500, "Member 'UImportFriends_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, Intro_V2) == 0x000508, "Member 'UImportFriends_C::Intro_V2' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, ArrowPulse) == 0x000510, "Member 'UImportFriends_C::ArrowPulse' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, Intro) == 0x000518, "Member 'UImportFriends_C::Intro' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, AddFriendsDescription) == 0x000520, "Member 'UImportFriends_C::AddFriendsDescription' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, CommonTextBlock_0) == 0x000528, "Member 'UImportFriends_C::CommonTextBlock_0' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, CT_AddFriendsDescription) == 0x000530, "Member 'UImportFriends_C::CT_AddFriendsDescription' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, CT_ChangeInSettingsText) == 0x000538, "Member 'UImportFriends_C::CT_ChangeInSettingsText' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, CT_LimitedTimeHeader) == 0x000540, "Member 'UImportFriends_C::CT_LimitedTimeHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, CT_TakenToLauncher) == 0x000548, "Member 'UImportFriends_C::CT_TakenToLauncher' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, Image_1) == 0x000550, "Member 'UImportFriends_C::Image_1' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, ItemInfoWidget) == 0x000558, "Member 'UImportFriends_C::ItemInfoWidget' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, SafeZone_0) == 0x000560, "Member 'UImportFriends_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, SBox_AddFriendButtonScaleBox) == 0x000568, "Member 'UImportFriends_C::SBox_AddFriendButtonScaleBox' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, ScaleBoxDescription) == 0x000570, "Member 'UImportFriends_C::ScaleBoxDescription' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, ScaleBoxHeader) == 0x000578, "Member 'UImportFriends_C::ScaleBoxHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, PreviewItemDef) == 0x000580, "Member 'UImportFriends_C::PreviewItemDef' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, HeartbeatDelayIntroAnimation) == 0x000588, "Member 'UImportFriends_C::HeartbeatDelayIntroAnimation' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, bHasReward) == 0x00058C, "Member 'UImportFriends_C::bHasReward' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, FacebookHeader) == 0x000590, "Member 'UImportFriends_C::FacebookHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, VKHeader) == 0x0005A8, "Member 'UImportFriends_C::VKHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, SteamHeader) == 0x0005C0, "Member 'UImportFriends_C::SteamHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, PlaystationHeader) == 0x0005D8, "Member 'UImportFriends_C::PlaystationHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, XboxHeader) == 0x0005F0, "Member 'UImportFriends_C::XboxHeader' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, SocialPlatform) == 0x000608, "Member 'UImportFriends_C::SocialPlatform' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, WrapHeaderAt) == 0x00060C, "Member 'UImportFriends_C::WrapHeaderAt' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, XboxDescriptionText) == 0x000610, "Member 'UImportFriends_C::XboxDescriptionText' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, PSNDescriptionText) == 0x000628, "Member 'UImportFriends_C::PSNDescriptionText' has a wrong offset!");
static_assert(offsetof(UImportFriends_C, SwitchDescriptionText) == 0x000640, "Member 'UImportFriends_C::SwitchDescriptionText' has a wrong offset!");

}

