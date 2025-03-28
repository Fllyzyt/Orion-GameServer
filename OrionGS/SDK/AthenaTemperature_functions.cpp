#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaTemperature

#include "Basic.hpp"

#include "AthenaTemperature_classes.hpp"
#include "AthenaTemperature_parameters.hpp"


namespace SDK
{

// Function AthenaTemperature.AthenaTemperature_C.ShowTemperatureChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShowTemperature                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTemperature_C::ShowTemperatureChanged(bool bShowTemperature, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTemperature_C", "ShowTemperatureChanged");

	Params::AthenaTemperature_C_ShowTemperatureChanged Parms{};

	Parms.bShowTemperature = bShowTemperature;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaTemperature.AthenaTemperature_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaTemperature_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTemperature_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaTemperature.AthenaTemperature_C.ExecuteUbergraph_AthenaTemperature
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(bool bShowTemperature)>  K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// class AFortPlayerController*            K2Node_DynamicCast_AsFort_Player_Controller            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTemperature_C::ExecuteUbergraph_AthenaTemperature(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TDelegate<void(bool bShowTemperature)> K2Node_CreateDelegate_OutputDelegate, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaTemperature_C", "ExecuteUbergraph_AthenaTemperature");

	Params::AthenaTemperature_C_ExecuteUbergraph_AthenaTemperature Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

}

