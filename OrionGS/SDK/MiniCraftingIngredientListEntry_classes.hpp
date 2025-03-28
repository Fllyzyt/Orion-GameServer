#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MiniCraftingIngredientListEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniCraftingIngredientListEntry.MiniCraftingIngredientListEntry_C
// 0x0010 (0x02C0 - 0x02B0)
class UMiniCraftingIngredientListEntry_C final  : public UFortItemQuantityListEntryBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UItemCount_C*                           ItemCountWidget;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class UWidget* Get_ItemCountWidget_ToolTipWidget(class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class FText CallFunc_GetShortDescription_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* CallFunc_Create_Basic_Tooltip_Output);
	void RefreshBeingPreviewed(const struct FFortItemEntryPreviewData& CallFunc_GetPreviewData_OutPreviewData, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsBeingPreviewed_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void Refresh(class UFortItemDefinition* CallFunc_GetItemDefinition_ReturnValue);
	void HandleDifferentItemOrQuantitySetBP(bool IsBeingReset);
	void PreviewStarted();
	void PreviewEnded();
	void RefreshListEntry();
	void ExecuteUbergraph_MiniCraftingIngredientListEntry(int32 EntryPoint, bool K2Node_Event_IsBeingReset);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniCraftingIngredientListEntry_C">();
	}
	static class UMiniCraftingIngredientListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniCraftingIngredientListEntry_C>();
	}
};
static_assert(alignof(UMiniCraftingIngredientListEntry_C) == 0x000008, "Wrong alinment on UMiniCraftingIngredientListEntry_C");
static_assert(sizeof(UMiniCraftingIngredientListEntry_C) == 0x0002C0, "Wrong size on UMiniCraftingIngredientListEntry_C");
static_assert(offsetof(UMiniCraftingIngredientListEntry_C, UberGraphFrame) == 0x0002B0, "Member 'UMiniCraftingIngredientListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMiniCraftingIngredientListEntry_C, ItemCountWidget) == 0x0002B8, "Member 'UMiniCraftingIngredientListEntry_C::ItemCountWidget' has a wrong offset!");

}

