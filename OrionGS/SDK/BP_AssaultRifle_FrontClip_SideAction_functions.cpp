#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AssaultRifle_FrontClip_SideAction

#include "Basic.hpp"

#include "BP_AssaultRifle_FrontClip_SideAction_classes.hpp"
#include "BP_AssaultRifle_FrontClip_SideAction_parameters.hpp"


namespace SDK
{

// Function BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C.ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AssaultRifle_FrontClip_SideAction_C::ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifle_FrontClip_SideAction_C", "ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction");

	Params::BP_AssaultRifle_FrontClip_SideAction_C_ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UBP_AssaultRifle_FrontClip_SideAction_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifle_FrontClip_SideAction_C", "AnimGraph");

	Params::BP_AssaultRifle_FrontClip_SideAction_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = Parms.Param_AnimGraph;
}

}

