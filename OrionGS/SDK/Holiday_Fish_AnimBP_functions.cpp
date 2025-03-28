#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Holiday_Fish_AnimBP

#include "Basic.hpp"

#include "Holiday_Fish_AnimBP_classes.hpp"
#include "Holiday_Fish_AnimBP_parameters.hpp"


namespace SDK
{

// Function Holiday_Fish_AnimBP.Holiday_Fish_AnimBP_C.ExecuteUbergraph_Holiday_Fish_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHoliday_Fish_AnimBP_C::ExecuteUbergraph_Holiday_Fish_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Holiday_Fish_AnimBP_C", "ExecuteUbergraph_Holiday_Fish_AnimBP");

	Params::Holiday_Fish_AnimBP_C_ExecuteUbergraph_Holiday_Fish_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Holiday_Fish_AnimBP.Holiday_Fish_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UHoliday_Fish_AnimBP_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Holiday_Fish_AnimBP_C", "AnimGraph");

	Params::Holiday_Fish_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = Parms.Param_AnimGraph;
}

}

