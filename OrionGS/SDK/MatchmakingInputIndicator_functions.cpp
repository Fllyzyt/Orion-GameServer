#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MatchmakingInputIndicator

#include "Basic.hpp"

#include "MatchmakingInputIndicator_classes.hpp"
#include "MatchmakingInputIndicator_parameters.hpp"


namespace SDK
{

// Function MatchmakingInputIndicator.MatchmakingInputIndicator_C.OnInputSourceTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// ECommonInputType                        InputType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchmakingInputIndicator_C::OnInputSourceTypeChanged(ECommonInputType InputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatchmakingInputIndicator_C", "OnInputSourceTypeChanged");

	Params::MatchmakingInputIndicator_C_OnInputSourceTypeChanged Parms{};

	Parms.InputType = InputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MatchmakingInputIndicator.MatchmakingInputIndicator_C.ExecuteUbergraph_MatchmakingInputIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*             CallFunc_GetLocalPlayerSubsystem_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECommonInputType                        K2Node_Event_InputType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       CallFunc_GetInputTypeIcon_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMatchmakingInputIndicator_C::ExecuteUbergraph_MatchmakingInputIndicator(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, ECommonInputType K2Node_Event_InputType, class UTexture2D* CallFunc_GetInputTypeIcon_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatchmakingInputIndicator_C", "ExecuteUbergraph_MatchmakingInputIndicator");

	Params::MatchmakingInputIndicator_C_ExecuteUbergraph_MatchmakingInputIndicator Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.K2Node_Event_InputType = K2Node_Event_InputType;
	Parms.CallFunc_GetInputTypeIcon_ReturnValue = CallFunc_GetInputTypeIcon_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

