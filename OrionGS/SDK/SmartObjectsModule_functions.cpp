#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SmartObjectsModule

#include "Basic.hpp"

#include "SmartObjectsModule_classes.hpp"
#include "SmartObjectsModule_parameters.hpp"


namespace SDK
{

// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_AddLooseGameplayTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                           Actor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer            GameplayTags                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::K2_AddLooseGameplayTags(class AActor* Actor, struct FGameplayTagContainer& GameplayTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SmartObjectBlueprintFunctionLibrary", "K2_AddLooseGameplayTags");

	Params::SmartObjectBlueprintFunctionLibrary_K2_AddLooseGameplayTags Parms{};

	Parms.Actor = Actor;
	Parms.GameplayTags = std::move(GameplayTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_RemoveLooseGameplayTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                           Actor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer            GameplayTags                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::K2_RemoveLooseGameplayTags(class AActor* Actor, struct FGameplayTagContainer& GameplayTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SmartObjectBlueprintFunctionLibrary", "K2_RemoveLooseGameplayTags");

	Params::SmartObjectBlueprintFunctionLibrary_K2_RemoveLooseGameplayTags Parms{};

	Parms.Actor = Actor;
	Parms.GameplayTags = std::move(GameplayTags);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_SetSmartObjectEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                           SmartObject                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bEnabled                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::K2_SetSmartObjectEnabled(class AActor* SmartObject, bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SmartObjectBlueprintFunctionLibrary", "K2_SetSmartObjectEnabled");

	Params::SmartObjectBlueprintFunctionLibrary_K2_SetSmartObjectEnabled Parms{};

	Parms.SmartObject = SmartObject;
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_UseSmartObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                           Avatar                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           SmartObject                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::K2_UseSmartObject(class AActor* Avatar, class AActor* SmartObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SmartObjectBlueprintFunctionLibrary", "K2_UseSmartObject");

	Params::SmartObjectBlueprintFunctionLibrary_K2_UseSmartObject Parms{};

	Parms.Avatar = Avatar;
	Parms.SmartObject = SmartObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function SmartObjectsModule.AITask_UseSmartObject.UseSmartObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIController*                    Controller                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           SmartObjectActor                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USmartObjectComponent*            SmartObjectComponent                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bLockAILogic                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask_UseSmartObject*           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAITask_UseSmartObject* UAITask_UseSmartObject::UseSmartObject(class AAIController* Controller, class AActor* SmartObjectActor, class USmartObjectComponent* SmartObjectComponent, bool bLockAILogic)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AITask_UseSmartObject", "UseSmartObject");

	Params::AITask_UseSmartObject_UseSmartObject Parms{};

	Parms.Controller = Controller;
	Parms.SmartObjectActor = SmartObjectActor;
	Parms.SmartObjectComponent = SmartObjectComponent;
	Parms.bLockAILogic = bLockAILogic;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

