#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RebootCardIndicator

#include "Basic.hpp"

#include "RebootCardIndicator_classes.hpp"
#include "RebootCardIndicator_parameters.hpp"


namespace SDK
{

// Function RebootCardIndicator.RebootCardIndicator_C.ExecuteUbergraph_RebootCardIndicator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Temp_float_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   K2Node_Event_StartTimeLocalWorld                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_Event_EndTimeLocalWorld                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// struct FTimerHandle                     CallFunc_K2_SetTimerDelegate_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Subtract_FloatFloat_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Subtract_FloatFloat_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_LessEqual_FloatFloat_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_FloatFloat_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_Event_bSelf                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Subtract_FloatFloat_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_FTrunc_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_LessEqual_IntInt_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void URebootCardIndicator_C::ExecuteUbergraph_RebootCardIndicator(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, float Temp_float_Variable, bool Temp_bool_Variable, float K2Node_Event_StartTimeLocalWorld, float K2Node_Event_EndTimeLocalWorld, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool K2Node_Event_bSelf, ESlateVisibility Temp_byte_Variable_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, ESlateVisibility K2Node_Select_Default, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RebootCardIndicator_C", "ExecuteUbergraph_RebootCardIndicator");

	Params::RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_StartTimeLocalWorld = K2Node_Event_StartTimeLocalWorld;
	Parms.K2Node_Event_EndTimeLocalWorld = K2Node_Event_EndTimeLocalWorld;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = std::move(CallFunc_K2_SetTimerDelegate_ReturnValue);
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Event_bSelf = K2Node_Event_bSelf;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_2 = CallFunc_Subtract_FloatFloat_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RebootCardIndicator.RebootCardIndicator_C.HandleDisplayForSelf
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bSelf                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URebootCardIndicator_C::HandleDisplayForSelf(bool bSelf)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RebootCardIndicator_C", "HandleDisplayForSelf");

	Params::RebootCardIndicator_C_HandleDisplayForSelf Parms{};

	Parms.bSelf = bSelf;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RebootCardIndicator.RebootCardIndicator_C.UpdateCountdownText
// (BlueprintCallable, BlueprintEvent)

void URebootCardIndicator_C::UpdateCountdownText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RebootCardIndicator_C", "UpdateCountdownText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RebootCardIndicator.RebootCardIndicator_C.SetupCountdown
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                                   StartTimeLocalWorld                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   EndTimeLocalWorld                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URebootCardIndicator_C::SetupCountdown(float StartTimeLocalWorld, float EndTimeLocalWorld)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RebootCardIndicator_C", "SetupCountdown");

	Params::RebootCardIndicator_C_SetupCountdown Parms{};

	Parms.StartTimeLocalWorld = StartTimeLocalWorld;
	Parms.EndTimeLocalWorld = EndTimeLocalWorld;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RebootCardIndicator.RebootCardIndicator_C.bp_UpdateCountdownText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CallFunc_Subtract_FloatFloat_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_FTrunc_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Max_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_IntToText_ReturnValue                    ()
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData                   (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array                                 (ReferenceParm, HasGetValueTypeHash)
// class FText                             CallFunc_Format_ReturnValue                            ()

void URebootCardIndicator_C::bp_UpdateCountdownText(float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Max_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RebootCardIndicator_C", "bp_UpdateCountdownText");

	Params::RebootCardIndicator_C_bp_UpdateCountdownText Parms{};

	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = std::move(K2Node_MakeStruct_FormatArgumentData);
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
}

}

