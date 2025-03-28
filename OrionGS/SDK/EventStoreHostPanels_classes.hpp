#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventStoreHostPanels

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventStoreHostPanels.EventStoreHostPanels_C
// 0x0020 (0x0378 - 0x0358)
class UEventStoreHostPanels_C final  : public UFortItemDetailsHostPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalTabList_C*                   DetailPanelTabList;                                // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  DetailPanelWidgetSwitcher;                         // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ItemSelected;                                      // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EventStoreHostPanels(int32 EntryPoint, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UFortItemDetailsHostPanel* K2Node_DynamicCast_AsFort_Item_Details_Host_Panel, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortItemDetailsHostPanel* K2Node_DynamicCast_AsFort_Item_Details_Host_Panel_1, bool K2Node_DynamicCast_bSuccess_1, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess_2);
	void BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void Construct();
	void HandleDifferentItemToDetailSet();
	void BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void Setup_Details_Panels(ESlateVisibility NewCraftingVis, ESlateVisibility NewBonusVis, ESlateVisibility NewStatVis, class UFortWorker* K2Node_DynamicCast_AsFort_Worker, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNumGameplayTagsInContainer_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_SelectTabByID_ReturnValue, class FName CallFunc_GetSelectedTabId_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCommonButton* CallFunc_GetTabButtonByID_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsSchematic_ReturnValue);
	void SetTabVisibilities(ESlateVisibility StatVisibility, ESlateVisibility BonusVisibility, ESlateVisibility CraftingVisibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventStoreHostPanels_C">();
	}
	static class UEventStoreHostPanels_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventStoreHostPanels_C>();
	}
};
static_assert(alignof(UEventStoreHostPanels_C) == 0x000008, "Wrong alinment on UEventStoreHostPanels_C");
static_assert(sizeof(UEventStoreHostPanels_C) == 0x000378, "Wrong size on UEventStoreHostPanels_C");
static_assert(offsetof(UEventStoreHostPanels_C, UberGraphFrame) == 0x000358, "Member 'UEventStoreHostPanels_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventStoreHostPanels_C, DetailPanelTabList) == 0x000360, "Member 'UEventStoreHostPanels_C::DetailPanelTabList' has a wrong offset!");
static_assert(offsetof(UEventStoreHostPanels_C, DetailPanelWidgetSwitcher) == 0x000368, "Member 'UEventStoreHostPanels_C::DetailPanelWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UEventStoreHostPanels_C, ItemSelected) == 0x000370, "Member 'UEventStoreHostPanels_C::ItemSelected' has a wrong offset!");

}

