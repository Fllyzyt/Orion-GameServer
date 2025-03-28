#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortniteConversationUI

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "FortniteConversationUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteConversationRuntime_structs.hpp"
#include "UMG_classes.hpp"
#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// Class FortniteConversationUI.FortBasicBrief
// 0x0000 (0x0288 - 0x0288)
class UFortBasicBrief final  : public UCommonUserWidget
{
public:
	void OnChoiceTextReceived(class FText& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortBasicBrief">();
	}
	static class UFortBasicBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBasicBrief>();
	}
};
static_assert(alignof(UFortBasicBrief) == 0x000008, "Wrong alinment on UFortBasicBrief");
static_assert(sizeof(UFortBasicBrief) == 0x000288, "Wrong size on UFortBasicBrief");

// Class FortniteConversationUI.FortItemTransactionBrief
// 0x0018 (0x02A0 - 0x0288)
class UFortItemTransactionBrief : public UCommonUserWidget
{
public:
	uint8                                         Pad_E94[0x8];                                      // 0x0288(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortTransactionStrip*                  TransactionStrip_Main;                             // 0x0290(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortItem*                              DisplayItem;                                       // 0x0298(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void OnTransactionInfoReceived(class UFortItem* Item);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortItemTransactionBrief">();
	}
	static class UFortItemTransactionBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortItemTransactionBrief>();
	}
};
static_assert(alignof(UFortItemTransactionBrief) == 0x000008, "Wrong alinment on UFortItemTransactionBrief");
static_assert(sizeof(UFortItemTransactionBrief) == 0x0002A0, "Wrong size on UFortItemTransactionBrief");
static_assert(offsetof(UFortItemTransactionBrief, TransactionStrip_Main) == 0x000290, "Member 'UFortItemTransactionBrief::TransactionStrip_Main' has a wrong offset!");
static_assert(offsetof(UFortItemTransactionBrief, DisplayItem) == 0x000298, "Member 'UFortItemTransactionBrief::DisplayItem' has a wrong offset!");

// Class FortniteConversationUI.FortBuyBrief
// 0x0000 (0x02A0 - 0x02A0)
class UFortBuyBrief final  : public UFortItemTransactionBrief
{
public:
	void OnDisplayUnavailability(ECannotBuyReason CannotBuyReason);
	void OnPurchaseDataReceived(int32 StackSize, int32 RemainingForSale);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortBuyBrief">();
	}
	static class UFortBuyBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortBuyBrief>();
	}
};
static_assert(alignof(UFortBuyBrief) == 0x000008, "Wrong alinment on UFortBuyBrief");
static_assert(sizeof(UFortBuyBrief) == 0x0002A0, "Wrong size on UFortBuyBrief");

// Class FortniteConversationUI.FortConversationMarker
// 0x0088 (0x0388 - 0x0300)
class UFortConversationMarker final  : public UFortActorIndicatorWidget
{
public:
	uint8                                         Pad_E95[0x38];                                     // 0x0300(0x0038)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InitialZOffset;                                    // 0x0338(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         MessageBubbleDuration;                             // 0x033C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         LastTextBubbleDuration;                            // 0x0340(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_E96[0x4];                                      // 0x0344(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonVisibilitySwitcher*              Switcher_States;                                   // 0x0348(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                                Overlay_PreviewState;                              // 0x0350(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_E97[0x8];                                      // 0x0358(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortConversationMessageWidget*         ConversationMessage_Main;                          // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_E98[0x8];                                      // 0x0368(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonTextBlock*                       Text_ParticipantName;                              // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_E99[0x8];                                      // 0x0378(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortKeybindWidget*                     Keybind_Nameplate;                                 // 0x0380(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void OnCanInteract(bool bCanInteract);
	void OnInteractionRangeChanged(EInteractionRange TargetInteractionRange);
	void OnMessageShownOverActor(class AActor* OverActor);
	void OnSetIndicatedActor(class AActor* NewIndicatorActor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortConversationMarker">();
	}
	static class UFortConversationMarker* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortConversationMarker>();
	}
};
static_assert(alignof(UFortConversationMarker) == 0x000008, "Wrong alinment on UFortConversationMarker");
static_assert(sizeof(UFortConversationMarker) == 0x000388, "Wrong size on UFortConversationMarker");
static_assert(offsetof(UFortConversationMarker, InitialZOffset) == 0x000338, "Member 'UFortConversationMarker::InitialZOffset' has a wrong offset!");
static_assert(offsetof(UFortConversationMarker, MessageBubbleDuration) == 0x00033C, "Member 'UFortConversationMarker::MessageBubbleDuration' has a wrong offset!");
static_assert(offsetof(UFortConversationMarker, LastTextBubbleDuration) == 0x000340, "Member 'UFortConversationMarker::LastTextBubbleDuration' has a wrong offset!");
static_assert(offsetof(UFortConversationMarker, Switcher_States) == 0x000348, "Member 'UFortConversationMarker::Switcher_States' has a wrong offset!");
static_assert(offsetof(UFortConversationMarker, Overlay_PreviewState) == 0x000350, "Member 'UFortConversationMarker::Overlay_PreviewState' has a wrong offset!");
static_assert(offsetof(UFortConversationMarker, ConversationMessage_Main) == 0x000360, "Member 'UFortConversationMarker::ConversationMessage_Main' has a wrong offset!");
static_assert(offsetof(UFortConversationMarker, Text_ParticipantName) == 0x000370, "Member 'UFortConversationMarker::Text_ParticipantName' has a wrong offset!");
static_assert(offsetof(UFortConversationMarker, Keybind_Nameplate) == 0x000380, "Member 'UFortConversationMarker::Keybind_Nameplate' has a wrong offset!");

// Class FortniteConversationUI.FortConversationScreen
// 0x0178 (0x0498 - 0x0320)
class UFortConversationScreen : public UCommonActivatableWidget
{
public:
	uint8                                         Pad_E9A[0x30];                                     // 0x0320(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	class Engine::UInputComponent*                ConversationInputComp;                             // 0x0350(0x0008)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         CurrentlySelectedIndex;                            // 0x0358(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                   RadialSelectionMaterialParameterName;              // 0x035C(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_E9B[0x4];                                      // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGameplayTag>                   TagPriorities;                                     // 0x0368(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                   InteractActionNameKBM;                             // 0x0378(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                   ADSInputAction;                                    // 0x0380(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                   InteractActionNameGamepad;                         // 0x0388(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                    ConfirmBinding;                                    // 0x0390(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                    MakeSelectionBinding;                              // 0x03A0(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                    ADSMouseBinding;                                   // 0x03B0(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                    CancelActionBinding;                               // 0x03C0(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct FDataTableRowHandle                    RightTriggerBinding;                               // 0x03D0(0x0010)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	float                                         MobileRadialMenuSizeOverride;                      // 0x03E0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMargin                                MobileRadialMenuPaddingOverride;                   // 0x03E4(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FMargin                                MobileDetailsPaddingOverride;                      // 0x03F4(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_E9C[0x4];                                      // 0x0404(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortSlottedRadialMenu*                 RadialMenu_DialogOptions;                          // 0x0408(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                 Image_RadialHighlight;                             // 0x0410(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortKeybindWidget*                     Keybind_Confirm;                                   // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortQuestBrief*                        QuestBrief_Main;                                   // 0x0420(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBuyBrief*                          BuyBrief_Main;                                     // 0x0428(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortUpgradeBrief*                      UpgradeBrief_Main;                                 // 0x0430(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortHireBrief*                         HireBrief_Main;                                    // 0x0438(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortDuelBrief*                         DuelBrief_Main;                                    // 0x0440(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortIntelBrief*                        IntelBrief_Main;                                   // 0x0448(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBasicBrief*                        ChatBrief_Main;                                    // 0x0450(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortBasicBrief*                        BasicBrief_Main;                                   // 0x0458(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonVisibilitySwitcher*              Switcher_Details;                                  // 0x0460(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USizeBox*                               SizeBox_RadialMenu;                                // 0x0468(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                                Overlay_Details;                                   // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidget*                                Overlay_WheelContainer;                            // 0x0478(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                 Image_Background;                                  // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UImage*                                 Image_LoadingSpinner;                              // 0x0488(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_E9D[0x8];                                      // 0x0490(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void EndConversation();
	void OnConversationOptionUnavailable(class UFortRadialSlot* SelectedEntry);
	void OnConversationStarted();
	void OnItemSelected(int32 OriginalIndex);
	void OnOptionsPopulated();
	void OnSelectedItemAvailabilityChanged(bool bIsAvailable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortConversationScreen">();
	}
	static class UFortConversationScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortConversationScreen>();
	}
};
static_assert(alignof(UFortConversationScreen) == 0x000008, "Wrong alinment on UFortConversationScreen");
static_assert(sizeof(UFortConversationScreen) == 0x000498, "Wrong size on UFortConversationScreen");
static_assert(offsetof(UFortConversationScreen, ConversationInputComp) == 0x000350, "Member 'UFortConversationScreen::ConversationInputComp' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, CurrentlySelectedIndex) == 0x000358, "Member 'UFortConversationScreen::CurrentlySelectedIndex' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, RadialSelectionMaterialParameterName) == 0x00035C, "Member 'UFortConversationScreen::RadialSelectionMaterialParameterName' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, TagPriorities) == 0x000368, "Member 'UFortConversationScreen::TagPriorities' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, InteractActionNameKBM) == 0x000378, "Member 'UFortConversationScreen::InteractActionNameKBM' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, ADSInputAction) == 0x000380, "Member 'UFortConversationScreen::ADSInputAction' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, InteractActionNameGamepad) == 0x000388, "Member 'UFortConversationScreen::InteractActionNameGamepad' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, ConfirmBinding) == 0x000390, "Member 'UFortConversationScreen::ConfirmBinding' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, MakeSelectionBinding) == 0x0003A0, "Member 'UFortConversationScreen::MakeSelectionBinding' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, ADSMouseBinding) == 0x0003B0, "Member 'UFortConversationScreen::ADSMouseBinding' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, CancelActionBinding) == 0x0003C0, "Member 'UFortConversationScreen::CancelActionBinding' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, RightTriggerBinding) == 0x0003D0, "Member 'UFortConversationScreen::RightTriggerBinding' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, MobileRadialMenuSizeOverride) == 0x0003E0, "Member 'UFortConversationScreen::MobileRadialMenuSizeOverride' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, MobileRadialMenuPaddingOverride) == 0x0003E4, "Member 'UFortConversationScreen::MobileRadialMenuPaddingOverride' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, MobileDetailsPaddingOverride) == 0x0003F4, "Member 'UFortConversationScreen::MobileDetailsPaddingOverride' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, RadialMenu_DialogOptions) == 0x000408, "Member 'UFortConversationScreen::RadialMenu_DialogOptions' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, Image_RadialHighlight) == 0x000410, "Member 'UFortConversationScreen::Image_RadialHighlight' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, Keybind_Confirm) == 0x000418, "Member 'UFortConversationScreen::Keybind_Confirm' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, QuestBrief_Main) == 0x000420, "Member 'UFortConversationScreen::QuestBrief_Main' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, BuyBrief_Main) == 0x000428, "Member 'UFortConversationScreen::BuyBrief_Main' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, UpgradeBrief_Main) == 0x000430, "Member 'UFortConversationScreen::UpgradeBrief_Main' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, HireBrief_Main) == 0x000438, "Member 'UFortConversationScreen::HireBrief_Main' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, DuelBrief_Main) == 0x000440, "Member 'UFortConversationScreen::DuelBrief_Main' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, IntelBrief_Main) == 0x000448, "Member 'UFortConversationScreen::IntelBrief_Main' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, ChatBrief_Main) == 0x000450, "Member 'UFortConversationScreen::ChatBrief_Main' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, BasicBrief_Main) == 0x000458, "Member 'UFortConversationScreen::BasicBrief_Main' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, Switcher_Details) == 0x000460, "Member 'UFortConversationScreen::Switcher_Details' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, SizeBox_RadialMenu) == 0x000468, "Member 'UFortConversationScreen::SizeBox_RadialMenu' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, Overlay_Details) == 0x000470, "Member 'UFortConversationScreen::Overlay_Details' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, Overlay_WheelContainer) == 0x000478, "Member 'UFortConversationScreen::Overlay_WheelContainer' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, Image_Background) == 0x000480, "Member 'UFortConversationScreen::Image_Background' has a wrong offset!");
static_assert(offsetof(UFortConversationScreen, Image_LoadingSpinner) == 0x000488, "Member 'UFortConversationScreen::Image_LoadingSpinner' has a wrong offset!");

// Class FortniteConversationUI.FortConversationMessageWidget
// 0x0000 (0x0260 - 0x0260)
class UFortConversationMessageWidget final  : public UUserWidget
{
public:
	void OnMainMessageSet(class FText& NPCName, class FText& MessageBody);
	void OnMessageHidden();
	void OnMessageShown();
	void OnPreviewMessageSet(class FText& PreviewText);
	void SetPreviewMessage(class FText& MessageToSet);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortConversationMessageWidget">();
	}
	static class UFortConversationMessageWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortConversationMessageWidget>();
	}
};
static_assert(alignof(UFortConversationMessageWidget) == 0x000008, "Wrong alinment on UFortConversationMessageWidget");
static_assert(sizeof(UFortConversationMessageWidget) == 0x000260, "Wrong size on UFortConversationMessageWidget");

// Class FortniteConversationUI.FortConversationOption
// 0x0020 (0x0C10 - 0x0BF0)
class UFortConversationOption final  : public UFortRadialPickerEntry
{
public:
	uint8                                         Pad_E9E[0x8];                                      // 0x0BF0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             OnOptionConfirmedSound;                            // 0x0BF8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USoundBase*                             OnOptionHoveredSound;                              // 0x0C00(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonVisibilitySwitcher*              Switcher_DisplayAsset;                             // 0x0C08(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void OnOptionConfirmed();
	void OnSetupFromDisplayAsset(class UObject* DisplayAsset);
	void OnSetupFromItemDef(class UFortItem* Item);
	void OnSetupPivotFromRadialInformation(int32 NumElements, int32 ItemIndex);

	bool IsAvailable() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortConversationOption">();
	}
	static class UFortConversationOption* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortConversationOption>();
	}
};
static_assert(alignof(UFortConversationOption) == 0x000008, "Wrong alinment on UFortConversationOption");
static_assert(sizeof(UFortConversationOption) == 0x000C10, "Wrong size on UFortConversationOption");
static_assert(offsetof(UFortConversationOption, OnOptionConfirmedSound) == 0x000BF8, "Member 'UFortConversationOption::OnOptionConfirmedSound' has a wrong offset!");
static_assert(offsetof(UFortConversationOption, OnOptionHoveredSound) == 0x000C00, "Member 'UFortConversationOption::OnOptionHoveredSound' has a wrong offset!");
static_assert(offsetof(UFortConversationOption, Switcher_DisplayAsset) == 0x000C08, "Member 'UFortConversationOption::Switcher_DisplayAsset' has a wrong offset!");

// Class FortniteConversationUI.FortConversationOptionsPanel
// 0x0018 (0x0138 - 0x0120)
class UFortConversationOptionsPanel final  : public UPanelWidget
{
public:
	uint8                                         Pad_E9F[0x10];                                     // 0x0120(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxRows;                                           // 0x0130(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         MiddleColumnWidth;                                 // 0x0134(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	class UPanelSlot* AddChildToDynamicPanel(class UWidget* Content);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortConversationOptionsPanel">();
	}
	static class UFortConversationOptionsPanel* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortConversationOptionsPanel>();
	}
};
static_assert(alignof(UFortConversationOptionsPanel) == 0x000008, "Wrong alinment on UFortConversationOptionsPanel");
static_assert(sizeof(UFortConversationOptionsPanel) == 0x000138, "Wrong size on UFortConversationOptionsPanel");
static_assert(offsetof(UFortConversationOptionsPanel, MaxRows) == 0x000130, "Member 'UFortConversationOptionsPanel::MaxRows' has a wrong offset!");
static_assert(offsetof(UFortConversationOptionsPanel, MiddleColumnWidth) == 0x000134, "Member 'UFortConversationOptionsPanel::MiddleColumnWidth' has a wrong offset!");

// Class FortniteConversationUI.FortDuelBrief
// 0x0028 (0x02C8 - 0x02A0)
class UFortDuelBrief final  : public UFortItemTransactionBrief
{
public:
	class FText                                   TextTemplate;                                      // 0x02A0(0x0018)(Edit, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                   Text_Objective;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTileView*                        TileView;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void DisplayLootItems(TArray<class UFortItem*>& Items);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortDuelBrief">();
	}
	static class UFortDuelBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortDuelBrief>();
	}
};
static_assert(alignof(UFortDuelBrief) == 0x000008, "Wrong alinment on UFortDuelBrief");
static_assert(sizeof(UFortDuelBrief) == 0x0002C8, "Wrong size on UFortDuelBrief");
static_assert(offsetof(UFortDuelBrief, TextTemplate) == 0x0002A0, "Member 'UFortDuelBrief::TextTemplate' has a wrong offset!");
static_assert(offsetof(UFortDuelBrief, Text_Objective) == 0x0002B8, "Member 'UFortDuelBrief::Text_Objective' has a wrong offset!");
static_assert(offsetof(UFortDuelBrief, TileView) == 0x0002C0, "Member 'UFortDuelBrief::TileView' has a wrong offset!");

// Class FortniteConversationUI.FortHireBrief
// 0x0020 (0x02C0 - 0x02A0)
class UFortHireBrief final  : public UFortItemTransactionBrief
{
public:
	class FText                                   TextTemplate;                                      // 0x02A0(0x0018)(Edit, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                   Text_Objective;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortHireBrief">();
	}
	static class UFortHireBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortHireBrief>();
	}
};
static_assert(alignof(UFortHireBrief) == 0x000008, "Wrong alinment on UFortHireBrief");
static_assert(sizeof(UFortHireBrief) == 0x0002C0, "Wrong size on UFortHireBrief");
static_assert(offsetof(UFortHireBrief, TextTemplate) == 0x0002A0, "Member 'UFortHireBrief::TextTemplate' has a wrong offset!");
static_assert(offsetof(UFortHireBrief, Text_Objective) == 0x0002B8, "Member 'UFortHireBrief::Text_Objective' has a wrong offset!");

// Class FortniteConversationUI.FortIntelBrief
// 0x0020 (0x02C0 - 0x02A0)
class UFortIntelBrief final  : public UFortItemTransactionBrief
{
public:
	class FText                                   TextTemplate;                                      // 0x02A0(0x0018)(Edit, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                   Text_Objective;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortIntelBrief">();
	}
	static class UFortIntelBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortIntelBrief>();
	}
};
static_assert(alignof(UFortIntelBrief) == 0x000008, "Wrong alinment on UFortIntelBrief");
static_assert(sizeof(UFortIntelBrief) == 0x0002C0, "Wrong size on UFortIntelBrief");
static_assert(offsetof(UFortIntelBrief, TextTemplate) == 0x0002A0, "Member 'UFortIntelBrief::TextTemplate' has a wrong offset!");
static_assert(offsetof(UFortIntelBrief, Text_Objective) == 0x0002B8, "Member 'UFortIntelBrief::Text_Objective' has a wrong offset!");

// Class FortniteConversationUI.FortQuestBrief
// 0x0040 (0x02C8 - 0x0288)
class UFortQuestBrief final  : public UCommonUserWidget
{
public:
	uint8                                         Pad_EA0[0x8];                                      // 0x0288(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   ThisMatchOnlyQuestText;                            // 0x0290(0x0018)(Edit, Protected, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                   Text_Objective;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       Text_MoneyReward;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       Text_XpReward;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       Text_ExpirationTime;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void OnQuestExpirationTimeSet(bool bDisplayExpirationTime);
	void OnQuestInformationRecieved(class FText& Objective, struct FFortRarityItemData& RarityData, struct FGameplayTag& CategoryTag, int32 XPReward, int32 MoneyReward);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortQuestBrief">();
	}
	static class UFortQuestBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortQuestBrief>();
	}
};
static_assert(alignof(UFortQuestBrief) == 0x000008, "Wrong alinment on UFortQuestBrief");
static_assert(sizeof(UFortQuestBrief) == 0x0002C8, "Wrong size on UFortQuestBrief");
static_assert(offsetof(UFortQuestBrief, ThisMatchOnlyQuestText) == 0x000290, "Member 'UFortQuestBrief::ThisMatchOnlyQuestText' has a wrong offset!");
static_assert(offsetof(UFortQuestBrief, Text_Objective) == 0x0002A8, "Member 'UFortQuestBrief::Text_Objective' has a wrong offset!");
static_assert(offsetof(UFortQuestBrief, Text_MoneyReward) == 0x0002B0, "Member 'UFortQuestBrief::Text_MoneyReward' has a wrong offset!");
static_assert(offsetof(UFortQuestBrief, Text_XpReward) == 0x0002B8, "Member 'UFortQuestBrief::Text_XpReward' has a wrong offset!");
static_assert(offsetof(UFortQuestBrief, Text_ExpirationTime) == 0x0002C0, "Member 'UFortQuestBrief::Text_ExpirationTime' has a wrong offset!");

// Class FortniteConversationUI.FortTransactionStrip
// 0x0008 (0x0268 - 0x0260)
class UFortTransactionStrip final  : public UUserWidget
{
public:
	class UFortWorldItemDefinition*               ResourceCurrency;                                  // 0x0260(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void OnTransactionInfoReceived(int32 TransactionCost, int32 OwnedCurrency);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortTransactionStrip">();
	}
	static class UFortTransactionStrip* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortTransactionStrip>();
	}
};
static_assert(alignof(UFortTransactionStrip) == 0x000008, "Wrong alinment on UFortTransactionStrip");
static_assert(sizeof(UFortTransactionStrip) == 0x000268, "Wrong size on UFortTransactionStrip");
static_assert(offsetof(UFortTransactionStrip, ResourceCurrency) == 0x000260, "Member 'UFortTransactionStrip::ResourceCurrency' has a wrong offset!");

// Class FortniteConversationUI.FortUpgradeBrief
// 0x0000 (0x02A0 - 0x02A0)
class UFortUpgradeBrief final  : public UFortItemTransactionBrief
{
public:
	void OnUnableToUpgrade(EFortWeaponUpgradeInteractionResult CannotUpgradeCause);
	void OnUpgradeInfoReceived(class UFortItem* CurrentWeapon);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortUpgradeBrief">();
	}
	static class UFortUpgradeBrief* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortUpgradeBrief>();
	}
};
static_assert(alignof(UFortUpgradeBrief) == 0x000008, "Wrong alinment on UFortUpgradeBrief");
static_assert(sizeof(UFortUpgradeBrief) == 0x0002A0, "Wrong size on UFortUpgradeBrief");

// Class FortniteConversationUI.MobileConversationScreen
// 0x0018 (0x04B0 - 0x0498)
class UMobileConversationScreen final  : public UFortConversationScreen
{
public:
	class UButton*                                MobileButtonConfirm;                               // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UButton*                                MobileButtonTouchInformation;                      // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_EA1[0x8];                                      // 0x04A8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnHandleConfirmClicked();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MobileConversationScreen">();
	}
	static class UMobileConversationScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMobileConversationScreen>();
	}
};
static_assert(alignof(UMobileConversationScreen) == 0x000008, "Wrong alinment on UMobileConversationScreen");
static_assert(sizeof(UMobileConversationScreen) == 0x0004B0, "Wrong size on UMobileConversationScreen");
static_assert(offsetof(UMobileConversationScreen, MobileButtonConfirm) == 0x000498, "Member 'UMobileConversationScreen::MobileButtonConfirm' has a wrong offset!");
static_assert(offsetof(UMobileConversationScreen, MobileButtonTouchInformation) == 0x0004A0, "Member 'UMobileConversationScreen::MobileButtonTouchInformation' has a wrong offset!");

}

