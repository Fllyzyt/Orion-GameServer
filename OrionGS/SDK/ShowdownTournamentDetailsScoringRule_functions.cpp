#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShowdownTournamentDetailsScoringRule

#include "Basic.hpp"

#include "ShowdownTournamentDetailsScoringRule_classes.hpp"
#include "ShowdownTournamentDetailsScoringRule_parameters.hpp"


namespace SDK
{

// Function ShowdownTournamentDetailsScoringRule.ShowdownTournamentDetailsScoringRule_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortShowdownScoringRuleInfo     ScoreRule                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortTournamentDisplayInfo       TournamentDisplayInfo                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor                     Temp_struct_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Temp_struct_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData                   (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array                                 (ReferenceParm, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_IntInt_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             CallFunc_Conv_IntToText_ReturnValue                    ()
// bool                                    CallFunc_LessEqual_IntInt_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EqualEqual_NameName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             Temp_text_Variable                                     ()
// struct FLinearColor                     K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortShowdownScoringRuleDisplayInfoCallFunc_GetDataTableRowFromName_OutRow                ()
// bool                                    CallFunc_GetDataTableRowFromName_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             CallFunc_Format_ReturnValue                            ()
// class FText                             K2Node_Select_Default_1                                ()

void UShowdownTournamentDetailsScoringRule_C::SetData(const struct FFortShowdownScoringRuleInfo& ScoreRule, const struct FFortTournamentDisplayInfo& TournamentDisplayInfo, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, class FText Temp_text_Variable, const struct FLinearColor& K2Node_Select_Default, bool Temp_bool_Variable_1, const struct FFortShowdownScoringRuleDisplayInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownTournamentDetailsScoringRule_C", "SetData");

	Params::ShowdownTournamentDetailsScoringRule_C_SetData Parms{};

	Parms.ScoreRule = std::move(ScoreRule);
	Parms.TournamentDisplayInfo = std::move(TournamentDisplayInfo);
	Parms.Temp_struct_Variable = std::move(Temp_struct_Variable);
	Parms.Temp_struct_Variable_1 = std::move(Temp_struct_Variable_1);
	Parms.K2Node_MakeStruct_FormatArgumentData = std::move(K2Node_MakeStruct_FormatArgumentData);
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_Select_Default = std::move(K2Node_Select_Default);
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = std::move(CallFunc_GetDataTableRowFromName_OutRow);
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
}

}

