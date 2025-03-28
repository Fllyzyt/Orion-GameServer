#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemDetailsHeaderTagListText

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C
// 0x0010 (0x02F0 - 0x02E0)
class UItemDetailsHeaderTagListText_C final  : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                       TagListTextBlock;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void FormatItemDisplayTags(TArray<class FText>& TagTexts, class FText* FormatedText, class FText Result, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Array_Get_Item, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_TextIsEmpty_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void HandlePostDifferentItemToDetailSet();
	void HandlePostDifferentItemToCompareWithSet();
	void ExecuteUbergraph_ItemDetailsHeaderTagListText(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class FText>& CallFunc_GetUserFriendlyTags_ReturnValue, class FText CallFunc_FormatItemDisplayTags_FormatedText, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityDataForItemDef_ReturnValue, ESlateVisibility K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_IsSchematicOrCraftedWeapon_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemDetailsHeaderTagListText_C">();
	}
	static class UItemDetailsHeaderTagListText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemDetailsHeaderTagListText_C>();
	}
};
static_assert(alignof(UItemDetailsHeaderTagListText_C) == 0x000008, "Wrong alinment on UItemDetailsHeaderTagListText_C");
static_assert(sizeof(UItemDetailsHeaderTagListText_C) == 0x0002F0, "Wrong size on UItemDetailsHeaderTagListText_C");
static_assert(offsetof(UItemDetailsHeaderTagListText_C, UberGraphFrame) == 0x0002E0, "Member 'UItemDetailsHeaderTagListText_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemDetailsHeaderTagListText_C, TagListTextBlock) == 0x0002E8, "Member 'UItemDetailsHeaderTagListText_C::TagListTextBlock' has a wrong offset!");

}

