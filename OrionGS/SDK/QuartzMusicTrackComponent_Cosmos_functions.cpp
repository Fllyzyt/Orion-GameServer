#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuartzMusicTrackComponent_Cosmos

#include "Basic.hpp"

#include "QuartzMusicTrackComponent_Cosmos_classes.hpp"
#include "QuartzMusicTrackComponent_Cosmos_parameters.hpp"


namespace SDK
{

// Function QuartzMusicTrackComponent_Cosmos.QuartzMusicTrackComponent_Cosmos_C.OnDataTrackerUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGameplayDataTrackerComponent*CallFunc_GetDataTrackerComponent_DataTracker           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameplayDataTrackerComponent*CallFunc_GetDataTrackerComponent_DataTracker_1         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetWorldDeltaSeconds_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetEventValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetWorldDeltaSeconds_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetEventValue_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Add_FloatFloat_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_FMin_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_GetEventValue_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_FInterpTo_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_FMin_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_FInterpTo_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuartzMusicTrackComponent_Cosmos_C::OnDataTrackerUpdate(class UFortGameplayDataTrackerComponent* CallFunc_GetDataTrackerComponent_DataTracker, class UFortGameplayDataTrackerComponent* CallFunc_GetDataTrackerComponent_DataTracker_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetEventValue_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_GetEventValue_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_GetEventValue_ReturnValue_2, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FMin_ReturnValue_1, float CallFunc_FInterpTo_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuartzMusicTrackComponent_Cosmos_C", "OnDataTrackerUpdate");

	Params::QuartzMusicTrackComponent_Cosmos_C_OnDataTrackerUpdate Parms{};

	Parms.CallFunc_GetDataTrackerComponent_DataTracker = CallFunc_GetDataTrackerComponent_DataTracker;
	Parms.CallFunc_GetDataTrackerComponent_DataTracker_1 = CallFunc_GetDataTrackerComponent_DataTracker_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetEventValue_ReturnValue = CallFunc_GetEventValue_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_GetEventValue_ReturnValue_1 = CallFunc_GetEventValue_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_GetEventValue_ReturnValue_2 = CallFunc_GetEventValue_ReturnValue_2;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue_1 = CallFunc_FMin_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}

}

