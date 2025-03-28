#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerSurveyPanelContentsAnswerRatingWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C
// 0x0050 (0x03D0 - 0x0380)
class UPlayerSurveyPanelContentsAnswerRatingWidget_C final  : public UFortSurveyNumericalChoiceWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActionWidget*                    CommonActionWidget_0;                              // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      RatingButton_1;                                    // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      RatingButton_2;                                    // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      RatingButton_3;                                    // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      RatingButton_4;                                    // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      RatingButton_5;                                    // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Text_Subtitle;                                     // 0x03B8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_PlayerSurveyPanelContentsAnswerRatingWidget(int32 EntryPoint, int32 K2Node_Event_ButtonIndex_1, TArray<class UCommonButton*>& K2Node_MakeArray_Array, int32 K2Node_Event_ButtonIndex, bool CallFunc_GetCurrentAnswer_bOutIsSet, const struct FFortPlayerSurveyAnswerMultipleChoice& CallFunc_GetCurrentAnswer_OutAnswer);
	void HandleQuestionChanged();
	void HandleCommitCurrentAnswer();
	void HandleButtonFocused(int32 ButtonIndex);
	void HandleButtonClicked(int32 ButtonIndex);
	void OnInitialized();
	class UWidget* GetDefaultFocusedWidgetPostDummy(EUINavigation Param_Navigation);

	class UWidget* GetDefaultFocusedWidget(int32 DefaultIndex, class UWidget* TargetWidget, int32 SelectedIndex, class UWidget* CallFunc_HandleGetDefaultFocusedWidget_ReturnValue) const;
	class FText GetSubtitleText() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerSurveyPanelContentsAnswerRatingWidget_C">();
	}
	static class UPlayerSurveyPanelContentsAnswerRatingWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerSurveyPanelContentsAnswerRatingWidget_C>();
	}
};
static_assert(alignof(UPlayerSurveyPanelContentsAnswerRatingWidget_C) == 0x000008, "Wrong alinment on UPlayerSurveyPanelContentsAnswerRatingWidget_C");
static_assert(sizeof(UPlayerSurveyPanelContentsAnswerRatingWidget_C) == 0x0003D0, "Wrong size on UPlayerSurveyPanelContentsAnswerRatingWidget_C");
static_assert(offsetof(UPlayerSurveyPanelContentsAnswerRatingWidget_C, UberGraphFrame) == 0x000380, "Member 'UPlayerSurveyPanelContentsAnswerRatingWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyPanelContentsAnswerRatingWidget_C, CommonActionWidget_0) == 0x000388, "Member 'UPlayerSurveyPanelContentsAnswerRatingWidget_C::CommonActionWidget_0' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyPanelContentsAnswerRatingWidget_C, RatingButton_1) == 0x000390, "Member 'UPlayerSurveyPanelContentsAnswerRatingWidget_C::RatingButton_1' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyPanelContentsAnswerRatingWidget_C, RatingButton_2) == 0x000398, "Member 'UPlayerSurveyPanelContentsAnswerRatingWidget_C::RatingButton_2' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyPanelContentsAnswerRatingWidget_C, RatingButton_3) == 0x0003A0, "Member 'UPlayerSurveyPanelContentsAnswerRatingWidget_C::RatingButton_3' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyPanelContentsAnswerRatingWidget_C, RatingButton_4) == 0x0003A8, "Member 'UPlayerSurveyPanelContentsAnswerRatingWidget_C::RatingButton_4' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyPanelContentsAnswerRatingWidget_C, RatingButton_5) == 0x0003B0, "Member 'UPlayerSurveyPanelContentsAnswerRatingWidget_C::RatingButton_5' has a wrong offset!");
static_assert(offsetof(UPlayerSurveyPanelContentsAnswerRatingWidget_C, Text_Subtitle) == 0x0003B8, "Member 'UPlayerSurveyPanelContentsAnswerRatingWidget_C::Text_Subtitle' has a wrong offset!");

}

