#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDirectAcquisitionConfirmation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C
// 0x00A8 (0x07E8 - 0x0740)
class UAthenaDirectAcquisitionConfirmation_C final  : public UFortStoreFrontOfferDetailsWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0740(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaDirectAcquisitonDetails_BattlePassStarDetails_C* AthenaDirectAcquisitonDetails_BattlePassStarDetails; // 0x0748(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      CancelButton;                                      // 0x0750(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_0;                                 // 0x0758(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Currency1ItemImage2;                               // 0x0760(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           CurrencyVB;                                        // 0x0768(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ItemRewardsSB;                                     // 0x0770(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x0778(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMTXButton_C*                           MTXButton;                                         // 0x0780(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaDirectAcquisitonDetails_RefundDisclaimer_C* NonrefundableText;                                 // 0x0788(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               O_Sale_PreviousPrice;                              // 0x0790(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       OfferName;                                         // 0x0798(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      PurchaseButton;                                    // 0x07A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextOfferDisplayPrice1;                            // 0x07A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextOriginalPrice1;                                // 0x07B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          CanPurchase;                                       // 0x07B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsPurchasing;                                      // 0x07B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_626C[0x2];                                     // 0x07BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumberToPurchase;                                  // 0x07BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanPurchaseLeft;                                   // 0x07C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanPurchaseRight;                                  // 0x07C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanChangeQuantity;                                 // 0x07C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_626D[0x5];                                     // 0x07C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             Confirm;                                           // 0x07C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Decline;                                           // 0x07D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void SetPurchaseNumber(int32 InNumToPurchse);
	void UpdateCatalogOfferName(class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class FText CallFunc_GetName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue);
	void UpdateItemList(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UAthenaStoreReward_C* CallFunc_Create_ReturnValue, TArray<class UFortAccountItemDefinition*>& CallFunc_GetGrantedItemDefinitions_GrantedItems, class UFortAccountItemDefinition* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess);
	void SetupPrice(class UWidget* PriceContainer, class UTextBlock* NormalPriceText, class UWidget* SalePriceContainer, class UTextBlock* SalePriceText, class UImage* CurrencyImage, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class FText CallFunc_GetSalePrice_SalePrice, bool CallFunc_GetSalePrice_ReturnValue, class FText CallFunc_GetNormalPrice_ReturnValue, int32 CallFunc_GetPriceItem_RequiredItemCount, class UFortAccountItemDefinition* CallFunc_GetPriceItem_ReturnValue, const struct FSlateBrush& CallFunc_GetSmallPreviewImageBrush_ReturnValue, bool CallFunc_IsValid_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
	void UpdateFromOffer(const TArray<class FString>& PlaceholderOneRecipient, TArray<class FString>& K2Node_MakeArray_Array, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, bool CallFunc_IsRefundable_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void BP_OnOfferSet();
	void BP_OnActivated();
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_171_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaDirectAcquisitionConfirmation(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button);
	void Decline__DelegateSignature();
	void Confirm__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaDirectAcquisitionConfirmation_C">();
	}
	static class UAthenaDirectAcquisitionConfirmation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaDirectAcquisitionConfirmation_C>();
	}
};
static_assert(alignof(UAthenaDirectAcquisitionConfirmation_C) == 0x000008, "Wrong alinment on UAthenaDirectAcquisitionConfirmation_C");
static_assert(sizeof(UAthenaDirectAcquisitionConfirmation_C) == 0x0007E8, "Wrong size on UAthenaDirectAcquisitionConfirmation_C");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, UberGraphFrame) == 0x000740, "Member 'UAthenaDirectAcquisitionConfirmation_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, AthenaDirectAcquisitonDetails_BattlePassStarDetails) == 0x000748, "Member 'UAthenaDirectAcquisitionConfirmation_C::AthenaDirectAcquisitonDetails_BattlePassStarDetails' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, CancelButton) == 0x000750, "Member 'UAthenaDirectAcquisitionConfirmation_C::CancelButton' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, CommonTextBlock_0) == 0x000758, "Member 'UAthenaDirectAcquisitionConfirmation_C::CommonTextBlock_0' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, Currency1ItemImage2) == 0x000760, "Member 'UAthenaDirectAcquisitionConfirmation_C::Currency1ItemImage2' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, CurrencyVB) == 0x000768, "Member 'UAthenaDirectAcquisitionConfirmation_C::CurrencyVB' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, ItemRewardsSB) == 0x000770, "Member 'UAthenaDirectAcquisitionConfirmation_C::ItemRewardsSB' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, Lightbox) == 0x000778, "Member 'UAthenaDirectAcquisitionConfirmation_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, MTXButton) == 0x000780, "Member 'UAthenaDirectAcquisitionConfirmation_C::MTXButton' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, NonrefundableText) == 0x000788, "Member 'UAthenaDirectAcquisitionConfirmation_C::NonrefundableText' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, O_Sale_PreviousPrice) == 0x000790, "Member 'UAthenaDirectAcquisitionConfirmation_C::O_Sale_PreviousPrice' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, OfferName) == 0x000798, "Member 'UAthenaDirectAcquisitionConfirmation_C::OfferName' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, PurchaseButton) == 0x0007A0, "Member 'UAthenaDirectAcquisitionConfirmation_C::PurchaseButton' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, TextOfferDisplayPrice1) == 0x0007A8, "Member 'UAthenaDirectAcquisitionConfirmation_C::TextOfferDisplayPrice1' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, TextOriginalPrice1) == 0x0007B0, "Member 'UAthenaDirectAcquisitionConfirmation_C::TextOriginalPrice1' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, CanPurchase) == 0x0007B8, "Member 'UAthenaDirectAcquisitionConfirmation_C::CanPurchase' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, IsPurchasing) == 0x0007B9, "Member 'UAthenaDirectAcquisitionConfirmation_C::IsPurchasing' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, NumberToPurchase) == 0x0007BC, "Member 'UAthenaDirectAcquisitionConfirmation_C::NumberToPurchase' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, CanPurchaseLeft) == 0x0007C0, "Member 'UAthenaDirectAcquisitionConfirmation_C::CanPurchaseLeft' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, CanPurchaseRight) == 0x0007C1, "Member 'UAthenaDirectAcquisitionConfirmation_C::CanPurchaseRight' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, CanChangeQuantity) == 0x0007C2, "Member 'UAthenaDirectAcquisitionConfirmation_C::CanChangeQuantity' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, Confirm) == 0x0007C8, "Member 'UAthenaDirectAcquisitionConfirmation_C::Confirm' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAcquisitionConfirmation_C, Decline) == 0x0007D8, "Member 'UAthenaDirectAcquisitionConfirmation_C::Decline' has a wrong offset!");

}

