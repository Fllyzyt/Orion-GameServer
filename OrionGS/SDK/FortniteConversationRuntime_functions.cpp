#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortniteConversationRuntime

#include "Basic.hpp"

#include "FortniteConversationRuntime_classes.hpp"
#include "FortniteConversationRuntime_parameters.hpp"


namespace SDK
{

// Function FortniteConversationRuntime.FortConversationContextCondition.DoesContextPass
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FConversationContext             Context                                                (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortConversationContextCondition::DoesContextPass(struct FConversationContext& Context) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortConversationContextCondition", "DoesContextPass");

	Params::FortConversationContextCondition_DoesContextPass Parms{};

	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function FortniteConversationRuntime.FortConversationContextConditionHelpers.GetMessageForContext
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFortConversationNodeConditionalMessagesMessages                                               (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FConversationContext             Context                                                (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class FText                             OutText                                                (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortConversationContextConditionHelpers::GetMessageForContext(struct FFortConversationNodeConditionalMessages& Messages, struct FConversationContext& Context, class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("FortConversationContextConditionHelpers", "GetMessageForContext");

	Params::FortConversationContextConditionHelpers_GetMessageForContext Parms{};

	Parms.Messages = std::move(Messages);
	Parms.Context = std::move(Context);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);

	return Parms.ReturnValue;
}


// Function FortniteConversationRuntime.FortPlayerConversationComponent.HandleWaponEquipped
// (Final, Native, Private)
// Parameters:
// class AFortWeapon*                      NewWeapon                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortWeapon*                      PrevWeapon                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayerConversationComponent::HandleWaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerConversationComponent", "HandleWaponEquipped");

	Params::FortPlayerConversationComponent_HandleWaponEquipped Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function FortniteConversationRuntime.FortPlayerConversationComponent.RequestServerAbortConversation
// (Net, NetReliable, Native, Event, Public, NetServer)

void UFortPlayerConversationComponent::RequestServerAbortConversation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortPlayerConversationComponent", "RequestServerAbortConversation");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

