#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CameraRainDrops_01

#include "Basic.hpp"

#include "B_CameraRainDrops_01_classes.hpp"
#include "B_CameraRainDrops_01_parameters.hpp"


namespace SDK
{

// Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.Alpha__FinishedFunc
// (BlueprintEvent)

void AB_CameraRainDrops_01_C::Alpha__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraRainDrops_01_C", "Alpha__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.Alpha__UpdateFunc
// (BlueprintEvent)

void AB_CameraRainDrops_01_C::Alpha__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraRainDrops_01_C", "Alpha__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_CameraRainDrops_01_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraRainDrops_01_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.ExecuteUbergraph_B_CameraRainDrops_01
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetRenderingDetailMode_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GreaterEqual_IntInt_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CameraRainDrops_01_C::ExecuteUbergraph_B_CameraRainDrops_01(int32 EntryPoint, int32 CallFunc_GetRenderingDetailMode_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CameraRainDrops_01_C", "ExecuteUbergraph_B_CameraRainDrops_01");

	Params::B_CameraRainDrops_01_C_ExecuteUbergraph_B_CameraRainDrops_01 Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRenderingDetailMode_ReturnValue = CallFunc_GetRenderingDetailMode_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

