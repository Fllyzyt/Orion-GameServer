#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInfoHeaderWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemInfoHeaderWidget.ItemInfoHeaderWidget_C
// 0x0138 (0x03E0 - 0x02A8)
class UItemInfoHeaderWidget_C final  : public UFortItemBaseWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           AlternateBGContainer;                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          AlternateBorder;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          AlternateRule;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        BackgroundSwitcher;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortCosmeticItemCard_C*                Card;                                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           CardContainer;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             DetailsScrollBox;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          HeaderBackground;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           HeaderBGContainer;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          HeaderRule;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemSeriesOrRarity_C*                  ItemSeriesOrRarity;                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       LockedTextBlock;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LockImage;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         MainHB;                                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       NameTextBlock;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RarityGlow;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RarityTypeSeperatorImage;                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               RemainingContainer;                                // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       RemainingText;                                     // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   RichDescriptionBox;                                // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          RootBackground;                                    // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           TextContainer;                                     // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TypeTextBlock;                                     // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         RemainingQuantity;                                 // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowCard;                                          // 0x036C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Locked;                                            // 0x036D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7635[0x2];                                     // 0x036E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   LockedReason;                                      // 0x0370(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          ShowRemainingQuantity;                             // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShowDetails;                                       // 0x0389(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EFortItemCardSize                             CardSize;                                          // 0x038A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowDescription;                                   // 0x038B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7636[0x4];                                     // 0x038C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EFortItemType, class FText>              ItemAlternateName;                                 // 0x0390(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	class FText GetAlternateNameForItem(class UFortItemDefinition* ItemDef, class FText Temp_text_Variable, EFortItemType CallFunc_GetItemType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_GetEmptyText_ReturnValue, class FText Temp_text_Variable_1, bool Temp_bool_Variable, EFortItemType CallFunc_GetItemType_ReturnValue_1, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UFortWorkerType* K2Node_DynamicCast_AsFort_Worker_Type, bool K2Node_DynamicCast_bSuccess, class FText K2Node_Select_Default);
	void HasValidItemDefinition(bool* HasValidDescription, class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateColorRarity(struct FFortColorPalette& Colors, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2);
	void OverrideHeaderAndDescription(class FText Header, class FText Description, class FText ItemType, bool bUseAlternateHeaderBG, EFortRarity Rarity, ESlateVisibility Temp_byte_Variable, class FText CallFunc_TextToUpper_ReturnValue, bool Temp_bool_Variable, const struct FFortColorPalette& CallFunc_BPGetRarityColorPalette_ReturnValue, ESlateVisibility Temp_byte_Variable_1, class UWidget* K2Node_Select_Default, bool Temp_bool_Variable_1, ESlateVisibility K2Node_Select_Default_1);
	void UpdateDetailVisibility(EHorizontalAlignment Temp_byte_Variable, EHorizontalAlignment Temp_byte_Variable_1, bool Temp_bool_Variable, class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot, bool K2Node_DynamicCast_bSuccess, EHorizontalAlignment K2Node_Select_Default);
	void SetScrollWidget();
	void UpdateLocked();
	void SetLocked(bool ShouldShowLocked, class FText LockReason);
	void SetRemainingQuantity(bool ShouldShowRemainingQuantity, int32 NewRemainingQuantity);
	void UpdateRemainingQuantity(bool Temp_bool_Variable, class FText Temp_text_Variable, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default);
	void UpdateCard(int32 CallFunc_GetQuantity_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue);
	void Setup(bool ShouldShowCard, EFortItemCardSize Param_CardSize, bool ShouldShowDetails, bool ShouldShowDescription);
	void UpdateNameText(class UFortItemDefinition* Param_ItemDefinition, int32 Quantity, class FText DisplayName, class FText CallFunc_GetAlternateNameForItem_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue_2, const class FString& CallFunc_GetPersistentName_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UFortTokenType* K2Node_DynamicCast_AsFort_Token_Type, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TextIsEmpty_ReturnValue, bool Temp_bool_Variable, class FText K2Node_Select_Default);
	void Update(class UFortItemDefinition* Param_ItemDefinition, int32 Quantity, ESlateVisibility Temp_byte_Variable, class FText CallFunc_GetRichDescription_ReturnValue, class FText CallFunc_GetItemTypeName_ReturnValue, EFortItemType CallFunc_GetItemType_ReturnValue, class FText CallFunc_GetShortDescription_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, const struct FFortColorPalette& CallFunc_GetRarityOrSeriesColors_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default);
	void OnItemDefinitionChanged();
	void ExecuteUbergraph_ItemInfoHeaderWidget(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, int32 CallFunc_GetQuantity_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemInfoHeaderWidget_C">();
	}
	static class UItemInfoHeaderWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemInfoHeaderWidget_C>();
	}
};
static_assert(alignof(UItemInfoHeaderWidget_C) == 0x000008, "Wrong alinment on UItemInfoHeaderWidget_C");
static_assert(sizeof(UItemInfoHeaderWidget_C) == 0x0003E0, "Wrong size on UItemInfoHeaderWidget_C");
static_assert(offsetof(UItemInfoHeaderWidget_C, UberGraphFrame) == 0x0002A8, "Member 'UItemInfoHeaderWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, AlternateBGContainer) == 0x0002B0, "Member 'UItemInfoHeaderWidget_C::AlternateBGContainer' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, AlternateBorder) == 0x0002B8, "Member 'UItemInfoHeaderWidget_C::AlternateBorder' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, AlternateRule) == 0x0002C0, "Member 'UItemInfoHeaderWidget_C::AlternateRule' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, BackgroundSwitcher) == 0x0002C8, "Member 'UItemInfoHeaderWidget_C::BackgroundSwitcher' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, Card) == 0x0002D0, "Member 'UItemInfoHeaderWidget_C::Card' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, CardContainer) == 0x0002D8, "Member 'UItemInfoHeaderWidget_C::CardContainer' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, DetailsScrollBox) == 0x0002E0, "Member 'UItemInfoHeaderWidget_C::DetailsScrollBox' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, HeaderBackground) == 0x0002E8, "Member 'UItemInfoHeaderWidget_C::HeaderBackground' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, HeaderBGContainer) == 0x0002F0, "Member 'UItemInfoHeaderWidget_C::HeaderBGContainer' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, HeaderRule) == 0x0002F8, "Member 'UItemInfoHeaderWidget_C::HeaderRule' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, ItemSeriesOrRarity) == 0x000300, "Member 'UItemInfoHeaderWidget_C::ItemSeriesOrRarity' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, LockedTextBlock) == 0x000308, "Member 'UItemInfoHeaderWidget_C::LockedTextBlock' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, LockImage) == 0x000310, "Member 'UItemInfoHeaderWidget_C::LockImage' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, MainHB) == 0x000318, "Member 'UItemInfoHeaderWidget_C::MainHB' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, NameTextBlock) == 0x000320, "Member 'UItemInfoHeaderWidget_C::NameTextBlock' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, RarityGlow) == 0x000328, "Member 'UItemInfoHeaderWidget_C::RarityGlow' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, RarityTypeSeperatorImage) == 0x000330, "Member 'UItemInfoHeaderWidget_C::RarityTypeSeperatorImage' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, RemainingContainer) == 0x000338, "Member 'UItemInfoHeaderWidget_C::RemainingContainer' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, RemainingText) == 0x000340, "Member 'UItemInfoHeaderWidget_C::RemainingText' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, RichDescriptionBox) == 0x000348, "Member 'UItemInfoHeaderWidget_C::RichDescriptionBox' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, RootBackground) == 0x000350, "Member 'UItemInfoHeaderWidget_C::RootBackground' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, TextContainer) == 0x000358, "Member 'UItemInfoHeaderWidget_C::TextContainer' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, TypeTextBlock) == 0x000360, "Member 'UItemInfoHeaderWidget_C::TypeTextBlock' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, RemainingQuantity) == 0x000368, "Member 'UItemInfoHeaderWidget_C::RemainingQuantity' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, ShowCard) == 0x00036C, "Member 'UItemInfoHeaderWidget_C::ShowCard' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, Locked) == 0x00036D, "Member 'UItemInfoHeaderWidget_C::Locked' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, LockedReason) == 0x000370, "Member 'UItemInfoHeaderWidget_C::LockedReason' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, ShowRemainingQuantity) == 0x000388, "Member 'UItemInfoHeaderWidget_C::ShowRemainingQuantity' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, ShowDetails) == 0x000389, "Member 'UItemInfoHeaderWidget_C::ShowDetails' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, CardSize) == 0x00038A, "Member 'UItemInfoHeaderWidget_C::CardSize' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, ShowDescription) == 0x00038B, "Member 'UItemInfoHeaderWidget_C::ShowDescription' has a wrong offset!");
static_assert(offsetof(UItemInfoHeaderWidget_C, ItemAlternateName) == 0x000390, "Member 'UItemInfoHeaderWidget_C::ItemAlternateName' has a wrong offset!");

}

