#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HousepartyMicToast

#include "Basic.hpp"

#include "HousepartyMicToast_classes.hpp"
#include "HousepartyMicToast_parameters.hpp"


namespace SDK
{

// Function HousepartyMicToast.HousepartyMicToast_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHousepartyMicToast_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HousepartyMicToast_C", "PreConstruct");

	Params::HousepartyMicToast_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HousepartyMicToast.HousepartyMicToast_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHousepartyMicToast_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HousepartyMicToast_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HousepartyMicToast.HousepartyMicToast_C.Popup Animation Finished
// (BlueprintCallable, BlueprintEvent)

void UHousepartyMicToast_C::Popup_Animation_Finished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HousepartyMicToast_C", "Popup Animation Finished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HousepartyMicToast.HousepartyMicToast_C.OnPlayOpenAnimation
// (Event, Protected, BlueprintEvent)

void UHousepartyMicToast_C::OnPlayOpenAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HousepartyMicToast_C", "OnPlayOpenAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HousepartyMicToast.HousepartyMicToast_C.OnPlayCloseAnimation
// (Event, Protected, BlueprintEvent)

void UHousepartyMicToast_C::OnPlayCloseAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HousepartyMicToast_C", "OnPlayCloseAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HousepartyMicToast.HousepartyMicToast_C.OnSetToast
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortUINotification*              ToastNotification                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHousepartyMicToast_C::OnSetToast(class UFortUINotification* ToastNotification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HousepartyMicToast_C", "OnSetToast");

	Params::HousepartyMicToast_C_OnSetToast Parms{};

	Parms.ToastNotification = ToastNotification;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HousepartyMicToast.HousepartyMicToast_C.ExecuteUbergraph_HousepartyMicToast
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*              CallFunc_GetRuntimeOptions_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetHPMicrophoneToastDisplaySeconds_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINotification*              K2Node_Event_ToastNotification                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHousepartyMicToast_C::ExecuteUbergraph_HousepartyMicToast(int32 EntryPoint, bool K2Node_Event_IsDesignTime, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, float CallFunc_GetHPMicrophoneToastDisplaySeconds_ReturnValue, class UFortUINotification* K2Node_Event_ToastNotification)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HousepartyMicToast_C", "ExecuteUbergraph_HousepartyMicToast");

	Params::HousepartyMicToast_C_ExecuteUbergraph_HousepartyMicToast Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_GetHPMicrophoneToastDisplaySeconds_ReturnValue = CallFunc_GetHPMicrophoneToastDisplaySeconds_ReturnValue;
	Parms.K2Node_Event_ToastNotification = K2Node_Event_ToastNotification;

	UObject::ProcessEvent(Func, &Parms);
}

}

