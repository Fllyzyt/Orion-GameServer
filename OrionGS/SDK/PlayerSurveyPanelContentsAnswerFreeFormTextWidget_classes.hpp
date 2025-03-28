#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerSurveyPanelContentsAnswerFreeFormTextWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C
// 0x0048 (0x0380 - 0x0338)
class UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C final  : public UFortPlayerSurveyFreeFormTextAnswerWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMultiLineEditableTextBox*              EntryTextBox;                                      // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       LimitsTextBlock;                                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIgnoreAnswerChange;                               // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6976[0x7];                                     // 0x0351(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Text_Subtitle;                                     // 0x0358(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 LimitsStyle_Normal;                                // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 LimitsStyle_Overflow;                              // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PlayerSurveyPanelContentsAnswerFreeFormTextWidget(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, ETextCommit K2Node_ComponentBoundEvent_CommitMethod, struct FFortPlayerSurveyAnswerContainerChangeEventInfo& K2Node_Event_EventInfo, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2);
	void HandleQuestionChanged();
	void HandleCommitCurrentAnswer();
	void HandleAnswerChanged(struct FFortPlayerSurveyAnswerContainerChangeEventInfo& EventInfo);
	void BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, ETextCommit CommitMethod);
	void BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void Construct();
	void UpdateEntryText(bool CallFunc_GetCurrentAnswer_bOutIsSet, const struct FFortPlayerSurveyAnswerFreeFormText& CallFunc_GetCurrentAnswer_OutAnswer, class FText CallFunc_Conv_StringToText_ReturnValue);
	void UpdateHintText(class FText HintText, class UFortPlayerSurveyQuestionFreeFormText* Param_Question, bool CallFunc_IsValid_ReturnValue, class UFortPlayerSurveyQuestionFreeFormText* CallFunc_GetCurrentQuestion_ReturnValue);
	void HandlePlayerEnterAnswer(const class FString& AnswerString, bool Temp_bool_Variable, const struct FTimespan& CallFunc_GetStopwatchTime_ReturnValue, const struct FFortPlayerSurveyAnswerFreeFormText& K2Node_MakeStruct_FortPlayerSurveyAnswerFreeFormText);
	void UpdateLimitsText(int32 AnswerLength, bool IsOverflowing, class UFortPlayerSurveyQuestionFreeFormText* CurrentQuestion, bool ShouldShowLimits, int32 MaxAnswerLength, class FText LimitsText, ESlateVisibility Temp_byte_Variable, bool CallFunc_Greater_IntInt_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, ESlateVisibility K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_Greater_IntInt_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable_1, class UClass* K2Node_Select_Default_1, bool CallFunc_GetCurrentAnswer_bOutIsSet, const struct FFortPlayerSurveyAnswerFreeFormText& CallFunc_GetCurrentAnswer_OutAnswer, class UFortPlayerSurveyQuestionFreeFormText* CallFunc_GetCurrentQuestion_ReturnValue, int32 CallFunc_Len_ReturnValue);

	class UWidget* GetDefaultFocusedWidget() const;
	class FText GetSubtitleText() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C">();
	}
	static class UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C>();
	}
};
static_assert(alignof(UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C) == 0x000008, "Wrong alinment on UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C");
static_assert(sizeof(UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C) == 0x000380, "Wrong size on UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C");
static_assert(offsetof(UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C, UberGraphFrame) == 0x000338, "Member 'UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C, EntryTextBox) == 0x000340, "Member 'UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::EntryTextBox' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C, LimitsTextBlock) == 0x000348, "Member 'UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::LimitsTextBlock' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C, bIgnoreAnswerChange) == 0x000350, "Member 'UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::bIgnoreAnswerChange' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C, Text_Subtitle) == 0x000358, "Member 'UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::Text_Subtitle' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C, LimitsStyle_Normal) == 0x000370, "Member 'UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::LimitsStyle_Normal' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C, LimitsStyle_Overflow) == 0x000378, "Member 'UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::LimitsStyle_Overflow' has a wrong offset!");

}

