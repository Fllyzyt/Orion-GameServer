#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventLeaderboardSummary

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventLeaderboardSummary.EventLeaderboardSummary_C
// 0x00A8 (0x0760 - 0x06B8)
class UEventLeaderboardSummary_C final  : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ViewAllHover;                                      // 0x06C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                      Button_ViewAll;                                    // 0x06C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_ContainerBG;                          // 0x06D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_ScoringTitleBG;                       // 0x06D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorder_ViewAllBG;                            // 0x06E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_Title;                             // 0x06E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry;                             // 0x06F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_0;                           // 0x06F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_1;                           // 0x0700(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_2;                           // 0x0708(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_3;                           // 0x0710(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_4;                           // 0x0718(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_5;                           // 0x0720(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_6;                           // 0x0728(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_7;                           // 0x0730(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*               EventLeaderboardEntry_8;                           // 0x0738(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_SummaryContent;                            // 0x0740(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_ViewFullLeaderboard;                          // 0x0748(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EventViewFullLeaderboard;                          // 0x0750(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void EventViewFullLeaderboard__DelegateSignature(const class FString& TournamentId, const class FString& EventId);
	void ExecuteUbergraph_EventLeaderboardSummary(int32 EntryPoint, bool Temp_bool_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_TournamentDisplayInfo, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor, float Temp_float_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_2, float CallFunc_GetStartTime_ReturnValue_1, float CallFunc_PauseAnimation_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_GetEndTime_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_IsEventLeaderboardAvailable_ReturnValue, float K2Node_Select_Default, const class FString& CallFunc_GetTournamentId_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, const class FString& CallFunc_GetEventId_ReturnValue, float Temp_float_Variable_1, float K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3);
	void RefreshDataBP();
	void BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void EventColorize(const struct FFortTournamentDisplayInfo& Param_TournamentDisplayInfo);
	void BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventLeaderboardSummary_C">();
	}
	static class UEventLeaderboardSummary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventLeaderboardSummary_C>();
	}
};
static_assert(alignof(UEventLeaderboardSummary_C) == 0x000008, "Wrong alinment on UEventLeaderboardSummary_C");
static_assert(sizeof(UEventLeaderboardSummary_C) == 0x000760, "Wrong size on UEventLeaderboardSummary_C");
static_assert(offsetof(UEventLeaderboardSummary_C, UberGraphFrame) == 0x0006B8, "Member 'UEventLeaderboardSummary_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, ViewAllHover) == 0x0006C0, "Member 'UEventLeaderboardSummary_C::ViewAllHover' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, Button_ViewAll) == 0x0006C8, "Member 'UEventLeaderboardSummary_C::Button_ViewAll' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, CommonBorder_ContainerBG) == 0x0006D0, "Member 'UEventLeaderboardSummary_C::CommonBorder_ContainerBG' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, CommonBorder_ScoringTitleBG) == 0x0006D8, "Member 'UEventLeaderboardSummary_C::CommonBorder_ScoringTitleBG' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, CommonBorder_ViewAllBG) == 0x0006E0, "Member 'UEventLeaderboardSummary_C::CommonBorder_ViewAllBG' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, CommonTextBlock_Title) == 0x0006E8, "Member 'UEventLeaderboardSummary_C::CommonTextBlock_Title' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, EventLeaderboardEntry) == 0x0006F0, "Member 'UEventLeaderboardSummary_C::EventLeaderboardEntry' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, EventLeaderboardEntry_0) == 0x0006F8, "Member 'UEventLeaderboardSummary_C::EventLeaderboardEntry_0' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, EventLeaderboardEntry_1) == 0x000700, "Member 'UEventLeaderboardSummary_C::EventLeaderboardEntry_1' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, EventLeaderboardEntry_2) == 0x000708, "Member 'UEventLeaderboardSummary_C::EventLeaderboardEntry_2' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, EventLeaderboardEntry_3) == 0x000710, "Member 'UEventLeaderboardSummary_C::EventLeaderboardEntry_3' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, EventLeaderboardEntry_4) == 0x000718, "Member 'UEventLeaderboardSummary_C::EventLeaderboardEntry_4' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, EventLeaderboardEntry_5) == 0x000720, "Member 'UEventLeaderboardSummary_C::EventLeaderboardEntry_5' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, EventLeaderboardEntry_6) == 0x000728, "Member 'UEventLeaderboardSummary_C::EventLeaderboardEntry_6' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, EventLeaderboardEntry_7) == 0x000730, "Member 'UEventLeaderboardSummary_C::EventLeaderboardEntry_7' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, EventLeaderboardEntry_8) == 0x000738, "Member 'UEventLeaderboardSummary_C::EventLeaderboardEntry_8' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, Overlay_SummaryContent) == 0x000740, "Member 'UEventLeaderboardSummary_C::Overlay_SummaryContent' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, Text_ViewFullLeaderboard) == 0x000748, "Member 'UEventLeaderboardSummary_C::Text_ViewFullLeaderboard' has a wrong offset!");
static_assert(offsetof(UEventLeaderboardSummary_C, EventViewFullLeaderboard) == 0x000750, "Member 'UEventLeaderboardSummary_C::EventViewFullLeaderboard' has a wrong offset!");

}

