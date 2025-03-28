#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FeatTimelineListEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FeatTimelineListEntry.FeatTimelineListEntry_C
// 0x0068 (0x0350 - 0x02E8)
class UFeatTimelineListEntry_C final  : public UAthenaFeatTimelineListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnActivated;                                       // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnShowCompleted;                                   // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnHover;                                           // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                AnimBoundTileBorder;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 burst;                                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Default;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                EntryVisbilityBorder;                              // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SeasonNumber;                                      // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Contents;                                  // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Date;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         TimespanMaxWidth;                                  // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimespanWidthPerDay;                               // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWaitingForCompletedTimer;                         // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void SetSeasonStyle(const struct FLinearColor& Season15Color2, const struct FLinearColor& Season15Color1, class FText Season15, const struct FLinearColor& Season14Color2, const struct FLinearColor& Season14Color1, class FText Season14, const struct FLinearColor& Season13Color2, const struct FLinearColor& Season13Color1, const struct FLinearColor& Season12Color2, const struct FLinearColor& Season12Color1, const struct FLinearColor& Season11Color2, const struct FLinearColor& Season11Color1, class FText Season12, class FText Season13, class FText Season11, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_5, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_6, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_7, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_8, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_9, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_10, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_11, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_12, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_13, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_14, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_15, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_16, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_17, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_18, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_19, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_4, class FText CallFunc_Format_ReturnValue_3, class FText CallFunc_Format_ReturnValue_4, const struct FGameplayTag& CallFunc_CalculateSourceTag_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess);
	void OnFeatInfoSet(int32 NumFeatsOnDay, int32 IdxOnDay);
	void OnTimespanInfoSet(int32 NumDays);
	void PreConstruct(bool IsDesignTime);
	void OnFeatCompletedThisSession();
	void WidgetAnimationEvt_OnShowCompleted_K2Node_WidgetAnimationEvent_0();
	void OnWaitingForCompletedTimer();
	void BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SimpleButton_ClickArea_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void HoverFeat();
	void UnHoverFeat();
	void ExecuteUbergraph_FeatTimelineListEntry(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32 K2Node_Event_NumFeatsOnDay, int32 K2Node_Event_IdxOnDay, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32 K2Node_Event_NumDays, bool K2Node_Event_IsDesignTime, float CallFunc_Multiply_IntFloat_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsUsingTouch_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FeatTimelineListEntry_C">();
	}
	static class UFeatTimelineListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFeatTimelineListEntry_C>();
	}
};
static_assert(alignof(UFeatTimelineListEntry_C) == 0x000008, "Wrong alinment on UFeatTimelineListEntry_C");
static_assert(sizeof(UFeatTimelineListEntry_C) == 0x000350, "Wrong size on UFeatTimelineListEntry_C");
static_assert(offsetof(UFeatTimelineListEntry_C, UberGraphFrame) == 0x0002E8, "Member 'UFeatTimelineListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, OnActivated) == 0x0002F0, "Member 'UFeatTimelineListEntry_C::OnActivated' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, OnShowCompleted) == 0x0002F8, "Member 'UFeatTimelineListEntry_C::OnShowCompleted' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, OnHover) == 0x000300, "Member 'UFeatTimelineListEntry_C::OnHover' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, AnimBoundTileBorder) == 0x000308, "Member 'UFeatTimelineListEntry_C::AnimBoundTileBorder' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, burst) == 0x000310, "Member 'UFeatTimelineListEntry_C::burst' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, Default) == 0x000318, "Member 'UFeatTimelineListEntry_C::Default' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, EntryVisbilityBorder) == 0x000320, "Member 'UFeatTimelineListEntry_C::EntryVisbilityBorder' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, SeasonNumber) == 0x000328, "Member 'UFeatTimelineListEntry_C::SeasonNumber' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, SizeBox_Contents) == 0x000330, "Member 'UFeatTimelineListEntry_C::SizeBox_Contents' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, SizeBox_Date) == 0x000338, "Member 'UFeatTimelineListEntry_C::SizeBox_Date' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, TimespanMaxWidth) == 0x000340, "Member 'UFeatTimelineListEntry_C::TimespanMaxWidth' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, TimespanWidthPerDay) == 0x000344, "Member 'UFeatTimelineListEntry_C::TimespanWidthPerDay' has a wrong offset!");
static_assert(offsetof(UFeatTimelineListEntry_C, bWaitingForCompletedTimer) == 0x000348, "Member 'UFeatTimelineListEntry_C::bWaitingForCompletedTimer' has a wrong offset!");

}

