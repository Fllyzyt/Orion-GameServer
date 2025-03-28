#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TargetingSystem

#include "Basic.hpp"

#include "TargetingSystem_classes.hpp"
#include "TargetingSystem_parameters.hpp"


namespace SDK
{

// Function TargetingSystem.TargetingSelectionTask_AOE.GetSourceLocation
// (Native, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FTargetingRequestHandle          TargetingHandle                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTargetingSelectionTask_AOE::GetSourceLocation(struct FTargetingRequestHandle& TargetingHandle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetingSelectionTask_AOE", "GetSourceLocation");

	Params::TargetingSelectionTask_AOE_GetSourceLocation Parms{};

	Parms.TargetingHandle = std::move(TargetingHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TargetingSystem.TargetingSelectionTask_AOE.GetSourceOffset
// (Native, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FTargetingRequestHandle          TargetingHandle                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTargetingSelectionTask_AOE::GetSourceOffset(struct FTargetingRequestHandle& TargetingHandle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetingSelectionTask_AOE", "GetSourceOffset");

	Params::TargetingSelectionTask_AOE_GetSourceOffset Parms{};

	Parms.TargetingHandle = std::move(TargetingHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TargetingSystem.TargetingSelectionTask_Trace.GetSourceLocation
// (Native, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FTargetingRequestHandle          TargetingHandle                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTargetingSelectionTask_Trace::GetSourceLocation(struct FTargetingRequestHandle& TargetingHandle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetingSelectionTask_Trace", "GetSourceLocation");

	Params::TargetingSelectionTask_Trace_GetSourceLocation Parms{};

	Parms.TargetingHandle = std::move(TargetingHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TargetingSystem.TargetingSelectionTask_Trace.GetSourceOffset
// (Native, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FTargetingRequestHandle          TargetingHandle                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTargetingSelectionTask_Trace::GetSourceOffset(struct FTargetingRequestHandle& TargetingHandle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetingSelectionTask_Trace", "GetSourceOffset");

	Params::TargetingSelectionTask_Trace_GetSourceOffset Parms{};

	Parms.TargetingHandle = std::move(TargetingHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TargetingSystem.TargetingSelectionTask_Trace.GetSweptTraceRadius
// (Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FTargetingRequestHandle          TargetingHandle                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTargetingSelectionTask_Trace::GetSweptTraceRadius(struct FTargetingRequestHandle& TargetingHandle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetingSelectionTask_Trace", "GetSweptTraceRadius");

	Params::TargetingSelectionTask_Trace_GetSweptTraceRadius Parms{};

	Parms.TargetingHandle = std::move(TargetingHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TargetingSystem.TargetingSelectionTask_Trace.GetTraceDirection
// (Native, Event, Protected, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FTargetingRequestHandle          TargetingHandle                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UTargetingSelectionTask_Trace::GetTraceDirection(struct FTargetingRequestHandle& TargetingHandle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetingSelectionTask_Trace", "GetTraceDirection");

	Params::TargetingSelectionTask_Trace_GetTraceDirection Parms{};

	Parms.TargetingHandle = std::move(TargetingHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TargetingSystem.TargetingSelectionTask_Trace.GetTraceLength
// (Native, Event, Protected, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FTargetingRequestHandle          TargetingHandle                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTargetingSelectionTask_Trace::GetTraceLength(struct FTargetingRequestHandle& TargetingHandle) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetingSelectionTask_Trace", "GetTraceLength");

	Params::TargetingSelectionTask_Trace_GetTraceLength Parms{};

	Parms.TargetingHandle = std::move(TargetingHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TargetingSystem.TargetingSubsystem.GetTargetingResultsActors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTargetingRequestHandle          TargetingHandle                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<class AActor*>                   Targets                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTargetingSubsystem::GetTargetingResultsActors(const struct FTargetingRequestHandle& TargetingHandle, TArray<class AActor*>* Targets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TargetingSubsystem", "GetTargetingResultsActors");

	Params::TargetingSubsystem_GetTargetingResultsActors Parms{};

	Parms.TargetingHandle = std::move(TargetingHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Targets != nullptr)
		*Targets = Parms.Targets;
}


// Function TargetingSystem.TargetingSubsystem.GetTargetingSourceContext
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTargetingRequestHandle          TargetingHandle                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FTargetingSourceContext          ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FTargetingSourceContext UTargetingSubsystem::GetTargetingSourceContext(const struct FTargetingRequestHandle& TargetingHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TargetingSubsystem", "GetTargetingSourceContext");

	Params::TargetingSubsystem_GetTargetingSourceContext Parms{};

	Parms.TargetingHandle = std::move(TargetingHandle);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TargetingSystem.TargetingSubsystem.StartAsyncTargetingRequest
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTargetingPreset*                 TargetingPreset                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTargetingSourceContext          InSourceContext                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TDelegate<void(const struct FTargetingRequestHandle& TargetingRequestHandle)>CompletionDynamicDelegate                              (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UTargetingSubsystem::StartAsyncTargetingRequest(class UTargetingPreset* TargetingPreset, struct FTargetingSourceContext& InSourceContext, TDelegate<void(const struct FTargetingRequestHandle& TargetingRequestHandle)> CompletionDynamicDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetingSubsystem", "StartAsyncTargetingRequest");

	Params::TargetingSubsystem_StartAsyncTargetingRequest Parms{};

	Parms.TargetingPreset = TargetingPreset;
	Parms.InSourceContext = std::move(InSourceContext);
	Parms.CompletionDynamicDelegate = CompletionDynamicDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TargetingSystem.TargetingSubsystem.ExecuteTargetingRequest
// (Final, Native, Public, HasOutParams, BlueprintCallable, Const)
// Parameters:
// class UTargetingPreset*                 TargetingPreset                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTargetingSourceContext          InSourceContext                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TDelegate<void(const struct FTargetingRequestHandle& TargetingRequestHandle)>CompletionDynamicDelegate                              (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)

void UTargetingSubsystem::ExecuteTargetingRequest(class UTargetingPreset* TargetingPreset, struct FTargetingSourceContext& InSourceContext, TDelegate<void(const struct FTargetingRequestHandle& TargetingRequestHandle)> CompletionDynamicDelegate) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TargetingSubsystem", "ExecuteTargetingRequest");

	Params::TargetingSubsystem_ExecuteTargetingRequest Parms{};

	Parms.TargetingPreset = TargetingPreset;
	Parms.InSourceContext = std::move(InSourceContext);
	Parms.CompletionDynamicDelegate = CompletionDynamicDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

