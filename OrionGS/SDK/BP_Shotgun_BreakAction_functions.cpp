#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Shotgun_BreakAction

#include "Basic.hpp"

#include "BP_Shotgun_BreakAction_classes.hpp"
#include "BP_Shotgun_BreakAction_parameters.hpp"


namespace SDK
{

// Function BP_Shotgun_BreakAction.BP_Shotgun_BreakAction_C.ExecuteUbergraph_BP_Shotgun_BreakAction
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Shotgun_BreakAction_C::ExecuteUbergraph_BP_Shotgun_BreakAction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shotgun_BreakAction_C", "ExecuteUbergraph_BP_Shotgun_BreakAction");

	Params::BP_Shotgun_BreakAction_C_ExecuteUbergraph_BP_Shotgun_BreakAction Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Shotgun_BreakAction.BP_Shotgun_BreakAction_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UBP_Shotgun_BreakAction_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Shotgun_BreakAction_C", "AnimGraph");

	Params::BP_Shotgun_BreakAction_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = Parms.Param_AnimGraph;
}

}

