#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPi_CreativeMoveToolOverrides

#include "Basic.hpp"

#include "BPi_CreativeMoveToolOverrides_classes.hpp"
#include "BPi_CreativeMoveToolOverrides_parameters.hpp"


namespace SDK
{

// Function BPi_CreativeMoveToolOverrides.BPi_CreativeMoveToolOverrides_C.GetCreativeActorOrigin
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Override                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          Center                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_CreativeMoveToolOverrides_C::GetCreativeActorOrigin(bool* Override, struct FVector* Center)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPi_CreativeMoveToolOverrides_C", "GetCreativeActorOrigin");

	Params::BPi_CreativeMoveToolOverrides_C_GetCreativeActorOrigin Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Override != nullptr)
		*Override = std::move(Parms.Override);

	if (Center != nullptr)
		*Center = Parms.Center;
}


// Function BPi_CreativeMoveToolOverrides.BPi_CreativeMoveToolOverrides_C.GetCreativeActorBounds
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Override_Bounds                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          Bounds                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPi_CreativeMoveToolOverrides_C::GetCreativeActorBounds(bool* Override_Bounds, struct FVector* Bounds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPi_CreativeMoveToolOverrides_C", "GetCreativeActorBounds");

	Params::BPi_CreativeMoveToolOverrides_C_GetCreativeActorBounds Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Override_Bounds != nullptr)
		*Override_Bounds = std::move(Parms.Override_Bounds);

	if (Bounds != nullptr)
		*Bounds = Parms.Bounds;
}

}

