#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemDetailsHeader

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemDetailsHeader.ItemDetailsHeader_C
// 0x0180 (0x04D8 - 0x0358)
class UItemDetailsHeader_C final  : public UFortItemDetailsHostPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       AmmoLoadedText;                                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemCategoryIndicator*             CategoryIndicator;                                 // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemCategoryIndicator*             CategoryIndicatorTertiary;                         // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         EvolutionAndTierBox;                               // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortEvolveIndicator*                   EvolveIndicator;                                   // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             ExtraIndicatorSlot;                                // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortFavoriteIndicator*                 FavoriteIndicator;                                 // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                IconSpacer;                                        // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                IconSpacerTertiary;                                // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDetailsHeaderItemDisplayText_C*    ItemDetailsHeaderItemDisplayText;                  // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDetailsHeaderKeywordsListText_C*   ItemDetailsHeaderKeywordsListText;                 // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDetailsHeaderOwnedCountText_C*     ItemDetailsHeaderOwnedCountText;                   // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDetailsHeaderRarityTypeText_C*     ItemDetailsHeaderRarityTypeText;                   // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDetailsHeaderTagListText_C*        ItemDetailsHeaderTagListText;                      // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDetailsStackCounter_C*             ItemDetailsStackCounter;                           // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemRatingIndicator_C*                 ItemRatingIndicator;                               // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          LevelBar;                                          // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLevelIndicator*                    LevelIndicator;                                    // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortInventoryOverflowIndicator*        OverflowIndicator;                                 // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          RarityBorder;                                      // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        RatingSwitcher;                                    // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_LoadGuard;                                 // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         TagListBox;                                        // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         TertiaryRow;                                       // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortTierIndicator*                     TierIndicator;                                     // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortUpgradeIndicator*                  UpgradeIndicator;                                  // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               RarityBorderMID;                                   // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortRarityItemData                    RarityData;                                        // 0x0438(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*               Level_Bar_MID;                                     // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LockItemColor;                                     // 0x04C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Show_Ammo_Header;                                  // 0x04D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          Force_Show_Details;                                // 0x04D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ShowOwnedCount;                                    // 0x04D2(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void SetStyles();
	void UpdateItemsForWidgets(ESubGame CallFunc_GetSubGame_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<EFortItemType>& K2Node_MakeArray_Array, bool CallFunc_IsMobileGame_ReturnValue, EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue_2, class UFortItemDefinition* CallFunc_GetSchematicCraftingResultBP_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UFortWeaponItemDefinition* K2Node_DynamicCast_AsFort_Weapon_Item_Definition, bool K2Node_DynamicCast_bSuccess, TArray<EFortItemType>& K2Node_MakeArray_Array_1, TArray<EFortItemType>& K2Node_MakeArray_Array_2, EFortItemType CallFunc_GetSchematicResultType_ReturnValue, class UFortItemDefinition* CallFunc_GetSchematicCraftingResultBP_ReturnValue_1, EFortItemType CallFunc_GetType_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue_1, EFortItemType K2Node_Select_Default, EFortRarity CallFunc_GetRarityCosmeticForItem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, EFortItemTier CallFunc_GetTier_ReturnValue, ESlateVisibility K2Node_Select_Default_1, int32 CallFunc_Convert_Tier_To_Integer_Numeric_Tier, bool CallFunc_IsValid_ReturnValue_2, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_3, ESlateVisibility K2Node_Select_Default_2, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_4, ESlateVisibility Temp_byte_Variable_6, ESlateVisibility K2Node_Select_Default_3, ESlateVisibility Temp_byte_Variable_7, ESlateVisibility K2Node_Select_Default_4, int32 CallFunc_GetNumInStack_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetLoadedAmmo_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortWeaponItemDefinition* K2Node_DynamicCast_AsFort_Weapon_Item_Definition_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsDroppedItem_ReturnValue, bool CallFunc_HasUniqueAmmo_ReturnValue, EFortItemType CallFunc_GetType_ReturnValue_2, bool CallFunc_Array_Contains_ReturnValue_2, EFortItemTier CallFunc_GetTier_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, int32 CallFunc_Convert_Tier_To_Integer_Numeric_Tier_1, bool CallFunc_BooleanOR_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void Construct();
	void HandleDifferentItemToDetailSet();
	void HandleDifferentItemToCompareSet();
	void PreConstruct(bool IsDesignTime);
	void HandleItemToDetailChangedBP();
	void ExecuteUbergraph_ItemDetailsHeader(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool K2Node_Event_IsDesignTime, ESlateVisibility K2Node_Select_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemDetailsHeader_C">();
	}
	static class UItemDetailsHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemDetailsHeader_C>();
	}
};
static_assert(alignof(UItemDetailsHeader_C) == 0x000008, "Wrong alinment on UItemDetailsHeader_C");
static_assert(sizeof(UItemDetailsHeader_C) == 0x0004D8, "Wrong size on UItemDetailsHeader_C");
static_assert(offsetof(UItemDetailsHeader_C, UberGraphFrame) == 0x000358, "Member 'UItemDetailsHeader_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, AmmoLoadedText) == 0x000360, "Member 'UItemDetailsHeader_C::AmmoLoadedText' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, CategoryIndicator) == 0x000368, "Member 'UItemDetailsHeader_C::CategoryIndicator' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, CategoryIndicatorTertiary) == 0x000370, "Member 'UItemDetailsHeader_C::CategoryIndicatorTertiary' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, EvolutionAndTierBox) == 0x000378, "Member 'UItemDetailsHeader_C::EvolutionAndTierBox' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, EvolveIndicator) == 0x000380, "Member 'UItemDetailsHeader_C::EvolveIndicator' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, ExtraIndicatorSlot) == 0x000388, "Member 'UItemDetailsHeader_C::ExtraIndicatorSlot' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, FavoriteIndicator) == 0x000390, "Member 'UItemDetailsHeader_C::FavoriteIndicator' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, IconSpacer) == 0x000398, "Member 'UItemDetailsHeader_C::IconSpacer' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, IconSpacerTertiary) == 0x0003A0, "Member 'UItemDetailsHeader_C::IconSpacerTertiary' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, ItemDetailsHeaderItemDisplayText) == 0x0003A8, "Member 'UItemDetailsHeader_C::ItemDetailsHeaderItemDisplayText' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, ItemDetailsHeaderKeywordsListText) == 0x0003B0, "Member 'UItemDetailsHeader_C::ItemDetailsHeaderKeywordsListText' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, ItemDetailsHeaderOwnedCountText) == 0x0003B8, "Member 'UItemDetailsHeader_C::ItemDetailsHeaderOwnedCountText' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, ItemDetailsHeaderRarityTypeText) == 0x0003C0, "Member 'UItemDetailsHeader_C::ItemDetailsHeaderRarityTypeText' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, ItemDetailsHeaderTagListText) == 0x0003C8, "Member 'UItemDetailsHeader_C::ItemDetailsHeaderTagListText' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, ItemDetailsStackCounter) == 0x0003D0, "Member 'UItemDetailsHeader_C::ItemDetailsStackCounter' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, ItemRatingIndicator) == 0x0003D8, "Member 'UItemDetailsHeader_C::ItemRatingIndicator' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, LevelBar) == 0x0003E0, "Member 'UItemDetailsHeader_C::LevelBar' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, LevelIndicator) == 0x0003E8, "Member 'UItemDetailsHeader_C::LevelIndicator' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, OverflowIndicator) == 0x0003F0, "Member 'UItemDetailsHeader_C::OverflowIndicator' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, RarityBorder) == 0x0003F8, "Member 'UItemDetailsHeader_C::RarityBorder' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, RatingSwitcher) == 0x000400, "Member 'UItemDetailsHeader_C::RatingSwitcher' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, SizeBox_LoadGuard) == 0x000408, "Member 'UItemDetailsHeader_C::SizeBox_LoadGuard' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, TagListBox) == 0x000410, "Member 'UItemDetailsHeader_C::TagListBox' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, TertiaryRow) == 0x000418, "Member 'UItemDetailsHeader_C::TertiaryRow' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, TierIndicator) == 0x000420, "Member 'UItemDetailsHeader_C::TierIndicator' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, UpgradeIndicator) == 0x000428, "Member 'UItemDetailsHeader_C::UpgradeIndicator' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, RarityBorderMID) == 0x000430, "Member 'UItemDetailsHeader_C::RarityBorderMID' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, RarityData) == 0x000438, "Member 'UItemDetailsHeader_C::RarityData' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, Level_Bar_MID) == 0x0004B8, "Member 'UItemDetailsHeader_C::Level_Bar_MID' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, LockItemColor) == 0x0004C0, "Member 'UItemDetailsHeader_C::LockItemColor' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, Show_Ammo_Header) == 0x0004D0, "Member 'UItemDetailsHeader_C::Show_Ammo_Header' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, Force_Show_Details) == 0x0004D1, "Member 'UItemDetailsHeader_C::Force_Show_Details' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeader_C, ShowOwnedCount) == 0x0004D2, "Member 'UItemDetailsHeader_C::ShowOwnedCount' has a wrong offset!");

}

