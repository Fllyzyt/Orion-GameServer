#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDirectAquisitionStyleScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C
// 0x0068 (0x07A8 - 0x0740)
class UAthenaDirectAquisitionStyleScreen_C final  : public UFortStoreFrontOfferDetailsWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0740(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPanelButton_C*                         Button_Next;                                       // 0x0748(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         Button_Previous;                                   // 0x0750(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               CameraFramingWidget;                               // 0x0758(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCloseButton_C*                         CloseButton;                                       // 0x0760(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemInfoHeaderWidget_C*                ItemInfoHeader;                                    // 0x0768(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaLockedStyleNotification_C*       LockedNotification;                                // 0x0770(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       StyleDisclaimer;                                   // 0x0778(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          OfferSet;                                          // 0x0780(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_624E[0x3];                                     // 0x0781(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         IndexIntoOffersWithVariantsList;                   // 0x0784(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 OfferSubIndicesWithVariants;                       // 0x0788(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UFortItemDefinition*                    InitialTriggeringItemDef;                          // 0x0798(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              CharacterItem;                                     // 0x07A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ViewVaultItemWithBackpack(class UFortItemDefinition* Param_ItemToRepresent, class UFortItem* StrongItemToRepresent, const TArray<class UFortItem*>& StrongItemsToRepresent, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_1, class UAthenaCharacterItemDefinition* K2Node_DynamicCast_AsAthena_Character_Item_Definition, bool K2Node_DynamicCast_bSuccess, class UAthenaCharacterItemDefinition* K2Node_DynamicCast_AsAthena_Character_Item_Definition_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, TArray<class UFortItem*>& CallFunc_GetGrantedItems_Items, class UFortItem* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1);
	void SetupCharacterItem(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, TArray<class UFortItem*>& CallFunc_GetGrantedItems_Items, const struct FFortItemQuantityPair& CallFunc_GetGrantedItemQuantityPair_ItemQuantity, bool CallFunc_GetGrantedItemQuantityPair_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionFromItemQuantityPair_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UAthenaCharacterItemDefinition* K2Node_DynamicCast_AsAthena_Character_Item_Definition, bool K2Node_DynamicCast_bSuccess, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue);
	class UFortAccountItemDefinition* GetOfferGrantedItemDef(class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, int32 CallFunc_Array_Get_Item, class UFortAccountItemDefinition* CallFunc_GetGrantedItemDefinition_ReturnValue);
	void RebuildStylesFromOffer(class UAthenaCosmeticItemDefinition* CosmeticDef, class UFortAccountItemDefinition* CallFunc_GetOfferGrantedItemDef_ReturnValue, TArray<struct FMcpVariantChannelInfo>& CallFunc_GetDefaultVariantChannels_OutDefaultVariantData, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasTag_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue);
	void SwitchToNextItemInOffer(int32 Direction, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue);
	void ScanOfferForVariants(int32 Temp_int_Variable, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, ESlateVisibility K2Node_Select_Default, class UFortStoreFrontOfferInfo* CallFunc_GetOfferInfo_ReturnValue, class UFortAccountItemDefinition* CallFunc_GetGrantedItemDefinition_ReturnValue, int32 CallFunc_GetNumGrantedItems_ReturnValue, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_HasModifiableVariants_ReturnValue);
	void UpdateFromVariant(const struct FGameplayTag& VariantChannelTag, const struct FGameplayTag& VariantTag, const class FString& Variant_CustomData, bool IsOwned, class UFortAccountItemDefinition* GrantedItemDef, class UFortAccountItemDefinition* CallFunc_GetOfferGrantedItemDef_ReturnValue, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition_1, bool K2Node_DynamicCast_bSuccess_1, class UAthenaBackpackItemDefinition* K2Node_DynamicCast_AsAthena_Backpack_Item_Definition, bool K2Node_DynamicCast_bSuccess_2, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue);
	class UWidget* GetWidgetForFramingViewedItem();
	void HandleBack(bool* bPassThrough);
	void BP_OnOfferSet();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void BndEvt__Button_Previous_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnVariantChanged(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& VariantTag, const class FString& VariantCustomData, bool IsOwned);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaDirectAquisitionStyleScreen(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_HandleBack_bPassThrough, const struct FGameplayTag& K2Node_Event_VariantChannel, const struct FGameplayTag& K2Node_Event_VariantTag, const class FString& K2Node_Event_VariantCustomData, bool K2Node_Event_IsOwned, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, TDelegate<void(bool* bPassThrough)> K2Node_CreateDelegate_OutputDelegate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaDirectAquisitionStyleScreen_C">();
	}
	static class UAthenaDirectAquisitionStyleScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaDirectAquisitionStyleScreen_C>();
	}
};
static_assert(alignof(UAthenaDirectAquisitionStyleScreen_C) == 0x000008, "Wrong alinment on UAthenaDirectAquisitionStyleScreen_C");
static_assert(sizeof(UAthenaDirectAquisitionStyleScreen_C) == 0x0007A8, "Wrong size on UAthenaDirectAquisitionStyleScreen_C");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, UberGraphFrame) == 0x000740, "Member 'UAthenaDirectAquisitionStyleScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, Button_Next) == 0x000748, "Member 'UAthenaDirectAquisitionStyleScreen_C::Button_Next' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, Button_Previous) == 0x000750, "Member 'UAthenaDirectAquisitionStyleScreen_C::Button_Previous' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, CameraFramingWidget) == 0x000758, "Member 'UAthenaDirectAquisitionStyleScreen_C::CameraFramingWidget' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, CloseButton) == 0x000760, "Member 'UAthenaDirectAquisitionStyleScreen_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, ItemInfoHeader) == 0x000768, "Member 'UAthenaDirectAquisitionStyleScreen_C::ItemInfoHeader' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, LockedNotification) == 0x000770, "Member 'UAthenaDirectAquisitionStyleScreen_C::LockedNotification' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, StyleDisclaimer) == 0x000778, "Member 'UAthenaDirectAquisitionStyleScreen_C::StyleDisclaimer' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, OfferSet) == 0x000780, "Member 'UAthenaDirectAquisitionStyleScreen_C::OfferSet' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, IndexIntoOffersWithVariantsList) == 0x000784, "Member 'UAthenaDirectAquisitionStyleScreen_C::IndexIntoOffersWithVariantsList' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, OfferSubIndicesWithVariants) == 0x000788, "Member 'UAthenaDirectAquisitionStyleScreen_C::OfferSubIndicesWithVariants' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, InitialTriggeringItemDef) == 0x000798, "Member 'UAthenaDirectAquisitionStyleScreen_C::InitialTriggeringItemDef' has a wrong offset!");
static_assert(offsetof(UAthenaDirectAquisitionStyleScreen_C, CharacterItem) == 0x0007A0, "Member 'UAthenaDirectAquisitionStyleScreen_C::CharacterItem' has a wrong offset!");

}

