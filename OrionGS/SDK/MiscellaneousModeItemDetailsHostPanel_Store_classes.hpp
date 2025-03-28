#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MiscellaneousModeItemDetailsHostPanel_Store

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiscellaneousModeItemDetailsHostPanel_Store.MiscellaneousModeItemDetailsHostPanel_Store_C
// 0x0038 (0x03B0 - 0x0378)
class UMiscellaneousModeItemDetailsHostPanel_Store_C final  : public UFortItemManagementItemDetailsPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UItemDetailsHeader_C*                   HeaderWidget;                                      // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHeroLoadoutPerksDetailWidget_C*        HeroLoadoutPerksDetailWidget;                      // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemCraftingIngredientsDetailWidget_C* ItemCraftingIngredientsDetailWidget;               // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MarkedForMulchingBackgroundImage;                  // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeImage*                    MarkedForMulchingIndicatorImage;                   // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USurvivorTraitsDetailWidget_C*          SurvivorTraitsDetailWidget;                        // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void HandleHasItemMarkedForMulchingChanged();
	void ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel_Store(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiscellaneousModeItemDetailsHostPanel_Store_C">();
	}
	static class UMiscellaneousModeItemDetailsHostPanel_Store_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiscellaneousModeItemDetailsHostPanel_Store_C>();
	}
};
static_assert(alignof(UMiscellaneousModeItemDetailsHostPanel_Store_C) == 0x000008, "Wrong alinment on UMiscellaneousModeItemDetailsHostPanel_Store_C");
static_assert(sizeof(UMiscellaneousModeItemDetailsHostPanel_Store_C) == 0x0003B0, "Wrong size on UMiscellaneousModeItemDetailsHostPanel_Store_C");
static_assert(offsetof(UMiscellaneousModeItemDetailsHostPanel_Store_C, UberGraphFrame) == 0x000378, "Member 'UMiscellaneousModeItemDetailsHostPanel_Store_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMiscellaneousModeItemDetailsHostPanel_Store_C, HeaderWidget) == 0x000380, "Member 'UMiscellaneousModeItemDetailsHostPanel_Store_C::HeaderWidget' has a wrong offset!");
static_assert(offsetof(UMiscellaneousModeItemDetailsHostPanel_Store_C, HeroLoadoutPerksDetailWidget) == 0x000388, "Member 'UMiscellaneousModeItemDetailsHostPanel_Store_C::HeroLoadoutPerksDetailWidget' has a wrong offset!");
static_assert(offsetof(UMiscellaneousModeItemDetailsHostPanel_Store_C, ItemCraftingIngredientsDetailWidget) == 0x000390, "Member 'UMiscellaneousModeItemDetailsHostPanel_Store_C::ItemCraftingIngredientsDetailWidget' has a wrong offset!");
static_assert(offsetof(UMiscellaneousModeItemDetailsHostPanel_Store_C, MarkedForMulchingBackgroundImage) == 0x000398, "Member 'UMiscellaneousModeItemDetailsHostPanel_Store_C::MarkedForMulchingBackgroundImage' has a wrong offset!");
static_assert(offsetof(UMiscellaneousModeItemDetailsHostPanel_Store_C, MarkedForMulchingIndicatorImage) == 0x0003A0, "Member 'UMiscellaneousModeItemDetailsHostPanel_Store_C::MarkedForMulchingIndicatorImage' has a wrong offset!");
static_assert(offsetof(UMiscellaneousModeItemDetailsHostPanel_Store_C, SurvivorTraitsDetailWidget) == 0x0003A8, "Member 'UMiscellaneousModeItemDetailsHostPanel_Store_C::SurvivorTraitsDetailWidget' has a wrong offset!");

}

