#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreMain_Root

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StoreMain_Root.StoreMain_Root_C
// 0x00C8 (0x05E0 - 0x0518)
class UStoreMain_Root_C final  : public UFortMtxStoreRootBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0518(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Intro;                                             // 0x0520(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_0;                                    // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_3;                                 // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          Container_AvailableAmount;                         // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CurrencyNotificationBorder;                        // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CurrencyNotificationText;                          // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_0;                                   // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_142;                                         // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             NewLTMGrid;                                        // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           NEWLTMOfferSection;                                // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          NewNoOffersBox;                                    // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          NewPurchasingDisabledBox;                          // 0x0578(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NewSpinner;                                        // 0x0580(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  NewSwitcherItemsProgress;                          // 0x0588(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             NewVBuckGrid;                                      // 0x0590(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           NewVbuckOffers;                                    // 0x0598(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           NewVBuckSection;                                   // 0x05A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              OfferScaleBoxRoot;                                 // 0x05A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_0;                                         // 0x05B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleMTXDisplay_C*                    SimpleMTXDisplay;                                  // 0x05B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStore_BannerMessage_C*                 StoreBannerMessage;                                // 0x05C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAudioComponent*                        Ambient_Sound;                                     // 0x05C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                InitiallyFocusedOffer;                             // 0x05D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bShowingCampaignUpsell;                            // 0x05D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_StoreMain_Root(int32 EntryPoint, EFrontEndCamera Temp_byte_Variable, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, class UFortFrontEndContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, TDelegate<void(class FName TabName)> K2Node_CreateDelegate_OutputDelegate, EFrontEndCamera Temp_byte_Variable_3, bool K2Node_Event_HasOtherPlatformCurrency, class FText K2Node_Event_CurrencyMessageLocText, class UFortStoreFrontOfferInfo* K2Node_Event_OfferData, bool CallFunc_IsActivated_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool Temp_bool_Variable_1, EFrontEndCamera K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, class UFortStoreContext* CallFunc_GetContext_ReturnValue_1, class FName K2Node_CustomEvent_TabName, bool CallFunc_EqualEqual_NameName_ReturnValue, ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue_2);
	void Destruct();
	void OnMainTabSelected(class FName TabName);
	void Construct();
	void OnStartReadingOffers();
	void OnTransitionedBySwitcher();
	void OnPurchasingDisabled();
	void GenerateOfferWidget(class UFortStoreFrontOfferInfo* OfferData);
	void OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, class FText& CurrencyMessageLocText);
	void OnRemovedFromActivationStack();
	void OnAddedToActivationStack();
	void ClearOfferWidgets();
	void BP_OnActivated();
	void OnOffersGenerated();
	void NoOffersAvailable();
	void Focus();
	void UpdateCurrencyNotification(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, const struct FMtxBreakdown& CallFunc_GetMtxBreakdown_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, ESlateVisibility K2Node_Select_Default);
	void Start_Ambient_Sound(bool Condition, ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void LayoutVBuckTiles(class UWidget* Child, int32 Param_Index, int32 CallFunc_Divide_IntInt_ReturnValue, class UStoreMain_MTXOffer_C* K2Node_DynamicCast_AsStore_Main_MTXOffer, bool K2Node_DynamicCast_bSuccess, class UGridSlot* CallFunc_SlotAsGridSlot_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetupFirstFocusableTile(class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void SetupForCampaignUpsell(class UFortRuntimeOptions* NewLocalVar_0, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsDesktopPlatform_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, TArray<class FString>& K2Node_MakeArray_Array);
	void HandleRedeem(bool* bPassThrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class URedeemFriendCodeWindow_C* CallFunc_Create_ReturnValue);
	void HandleBack(bool* PassThrough);
	void PlayEquippedLockerMusic(ESubGame CallFunc_GetSubGame_ReturnValue, TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item);
	void HandleGenerateOffer(class UFortStoreFrontOfferInfo* OfferInfo, class UFortRealMoneyOffer* StoreOfferWidget, class FName CallFunc_GetStorefrontName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue, class UGridSlot* CallFunc_AddChildToGrid_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UStoreMain_MTXOffer_C* CallFunc_Create_ReturnValue);
	void HandleAllOffersGenerated(bool BothOfferSectionsVisible, EHorizontalAlignment Temp_byte_Variable, EHorizontalAlignment Temp_byte_Variable_1, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, bool Temp_bool_Variable, class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot, bool K2Node_DynamicCast_bSuccess, ESlateVisibility CallFunc_GetVisibilityByChildrenPresence_NewParam, ESlateVisibility CallFunc_GetVisibilityByChildrenPresence_NewParam_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsActivated_ReturnValue, const struct FMargin& K2Node_Select_Default, EHorizontalAlignment K2Node_Select_Default_1);
	void GetVisibilityByChildrenPresence(class UPanelWidget* Panel, ESlateVisibility* NewParam, bool Temp_bool_Variable, bool CallFunc_HasAnyChildren_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StoreMain_Root_C">();
	}
	static class UStoreMain_Root_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStoreMain_Root_C>();
	}
};
static_assert(alignof(UStoreMain_Root_C) == 0x000008, "Wrong alinment on UStoreMain_Root_C");
static_assert(sizeof(UStoreMain_Root_C) == 0x0005E0, "Wrong size on UStoreMain_Root_C");
static_assert(offsetof(UStoreMain_Root_C, UberGraphFrame) == 0x000518, "Member 'UStoreMain_Root_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, Intro) == 0x000520, "Member 'UStoreMain_Root_C::Intro' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, CommonBorder_0) == 0x000528, "Member 'UStoreMain_Root_C::CommonBorder_0' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, CommonTextBlock_3) == 0x000530, "Member 'UStoreMain_Root_C::CommonTextBlock_3' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, Container_AvailableAmount) == 0x000538, "Member 'UStoreMain_Root_C::Container_AvailableAmount' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, CurrencyNotificationBorder) == 0x000540, "Member 'UStoreMain_Root_C::CurrencyNotificationBorder' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, CurrencyNotificationText) == 0x000548, "Member 'UStoreMain_Root_C::CurrencyNotificationText' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, HorizontalBox_0) == 0x000550, "Member 'UStoreMain_Root_C::HorizontalBox_0' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, Image_142) == 0x000558, "Member 'UStoreMain_Root_C::Image_142' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, NewLTMGrid) == 0x000560, "Member 'UStoreMain_Root_C::NewLTMGrid' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, NEWLTMOfferSection) == 0x000568, "Member 'UStoreMain_Root_C::NEWLTMOfferSection' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, NewNoOffersBox) == 0x000570, "Member 'UStoreMain_Root_C::NewNoOffersBox' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, NewPurchasingDisabledBox) == 0x000578, "Member 'UStoreMain_Root_C::NewPurchasingDisabledBox' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, NewSpinner) == 0x000580, "Member 'UStoreMain_Root_C::NewSpinner' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, NewSwitcherItemsProgress) == 0x000588, "Member 'UStoreMain_Root_C::NewSwitcherItemsProgress' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, NewVBuckGrid) == 0x000590, "Member 'UStoreMain_Root_C::NewVBuckGrid' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, NewVbuckOffers) == 0x000598, "Member 'UStoreMain_Root_C::NewVbuckOffers' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, NewVBuckSection) == 0x0005A0, "Member 'UStoreMain_Root_C::NewVBuckSection' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, OfferScaleBoxRoot) == 0x0005A8, "Member 'UStoreMain_Root_C::OfferScaleBoxRoot' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, Overlay_0) == 0x0005B0, "Member 'UStoreMain_Root_C::Overlay_0' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, SimpleMTXDisplay) == 0x0005B8, "Member 'UStoreMain_Root_C::SimpleMTXDisplay' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, StoreBannerMessage) == 0x0005C0, "Member 'UStoreMain_Root_C::StoreBannerMessage' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, Ambient_Sound) == 0x0005C8, "Member 'UStoreMain_Root_C::Ambient_Sound' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, InitiallyFocusedOffer) == 0x0005D0, "Member 'UStoreMain_Root_C::InitiallyFocusedOffer' has a wrong offset!");
static_assert(offsetof(UStoreMain_Root_C, bShowingCampaignUpsell) == 0x0005D8, "Member 'UStoreMain_Root_C::bShowingCampaignUpsell' has a wrong offset!");

}

