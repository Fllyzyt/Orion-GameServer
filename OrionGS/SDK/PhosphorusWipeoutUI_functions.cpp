#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PhosphorusWipeoutUI

#include "Basic.hpp"

#include "PhosphorusWipeoutUI_classes.hpp"
#include "PhosphorusWipeoutUI_parameters.hpp"


namespace SDK
{

// Function PhosphorusWipeoutUI.PhosphorusKnockBackWidget.KnockBackFromAllPlayersReceivedEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPhosphorusWipeoutKnockBackData  KnockBackData                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UPhosphorusKnockBackWidget::KnockBackFromAllPlayersReceivedEvent(struct FPhosphorusWipeoutKnockBackData& KnockBackData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhosphorusKnockBackWidget", "KnockBackFromAllPlayersReceivedEvent");

	Params::PhosphorusKnockBackWidget_KnockBackFromAllPlayersReceivedEvent Parms{};

	Parms.KnockBackData = std::move(KnockBackData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PhosphorusWipeoutUI.PhosphorusKnockBackWidget.PhosphorusPhaseChangedEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortAthenaMutator_Phosphorus*    Mutator                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EPhosphorusPhase                        Phase                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPhosphorusKnockBackWidget::PhosphorusPhaseChangedEvent(class AFortAthenaMutator_Phosphorus* Mutator, EPhosphorusPhase Phase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PhosphorusKnockBackWidget", "PhosphorusPhaseChangedEvent");

	Params::PhosphorusKnockBackWidget_PhosphorusPhaseChangedEvent Parms{};

	Parms.Mutator = Mutator;
	Parms.Phase = Phase;

	UObject::ProcessEvent(Func, &Parms);
}

}

