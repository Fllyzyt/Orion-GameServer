#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Throw_SneakySnowmanV2

#include "Basic.hpp"

#include "GA_Athena_Throw_SneakySnowmanV2_classes.hpp"
#include "GA_Athena_Throw_SneakySnowmanV2_parameters.hpp"


namespace SDK
{

// Function GA_Athena_Throw_SneakySnowmanV2.GA_Athena_Throw_SneakySnowmanV2_C.ExecuteUbergraph_GA_Athena_Throw_SneakySnowmanV2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle      CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue     (NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle      CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1   (NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_MakeVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Throw_SneakySnowmanV2_C::ExecuteUbergraph_GA_Athena_Throw_SneakySnowmanV2(int32 EntryPoint, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Throw_SneakySnowmanV2_C", "ExecuteUbergraph_GA_Athena_Throw_SneakySnowmanV2");

	Params::GA_Athena_Throw_SneakySnowmanV2_C_ExecuteUbergraph_GA_Athena_Throw_SneakySnowmanV2 Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = std::move(CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1 = std::move(CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1);
	Parms.CallFunc_MakeVector_ReturnValue = std::move(CallFunc_MakeVector_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_Throw_SneakySnowmanV2.GA_Athena_Throw_SneakySnowmanV2_C.K2_CommitExecute
// (Event, Public, BlueprintEvent)

void UGA_Athena_Throw_SneakySnowmanV2_C::K2_CommitExecute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Throw_SneakySnowmanV2_C", "K2_CommitExecute");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Throw_SneakySnowmanV2.GA_Athena_Throw_SneakySnowmanV2_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Throw_SneakySnowmanV2_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Throw_SneakySnowmanV2_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Athena_Throw_SneakySnowmanV2.GA_Athena_Throw_SneakySnowmanV2_C.SpawnLocationAndRotation
// (HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          OutLoc                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         OutRot                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSoftClassPath                   GolfCart                                               (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// struct FVector                          Temp_struct_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                           CallFunc_Conv_SoftClassReferenceToClass_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_GetVehicleActor_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           K2Node_ClassDynamicCast_AsActor                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_ClassDynamicCast_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                           CallFunc_GetObjectClass_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_ClassIsChildOf_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                          CallFunc_GetActorForwardVector_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Multiply_VectorFloat_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Add_VectorVector_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Throw_SneakySnowmanV2_C::SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot, const struct FSoftClassPath& GolfCart, const struct FVector& Temp_struct_Variable, bool Temp_bool_Variable, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class AActor* CallFunc_GetVehicleActor_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& K2Node_Select_Default) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Throw_SneakySnowmanV2_C", "SpawnLocationAndRotation");

	Params::GA_Athena_Throw_SneakySnowmanV2_C_SpawnLocationAndRotation Parms{};

	Parms.GolfCart = std::move(GolfCart);
	Parms.Temp_struct_Variable = std::move(Temp_struct_Variable);
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.CallFunc_GetVehicleActor_ReturnValue = CallFunc_GetVehicleActor_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsActor = K2Node_ClassDynamicCast_AsActor;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = std::move(CallFunc_GetActorForwardVector_ReturnValue);
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = std::move(CallFunc_Multiply_VectorFloat_ReturnValue);
	Parms.CallFunc_Add_VectorVector_ReturnValue = std::move(CallFunc_Add_VectorVector_ReturnValue);
	Parms.K2Node_Select_Default = std::move(K2Node_Select_Default);

	UObject::ProcessEvent(Func, &Parms);

	if (OutLoc != nullptr)
		*OutLoc = Parms.OutLoc;

	if (OutRot != nullptr)
		*OutRot = Parms.OutRot;
}


// Function GA_Athena_Throw_SneakySnowmanV2.GA_Athena_Throw_SneakySnowmanV2_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayAbilitySpecHandle       Handle                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            RelevantTags                                           (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_Athena_Throw_SneakySnowmanV2_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_Throw_SneakySnowmanV2_C", "K2_CanActivateAbility");

	Params::GA_Athena_Throw_SneakySnowmanV2_C_K2_CanActivateAbility Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Handle = std::move(Handle);

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = Parms.RelevantTags;

	return Parms.ReturnValue;
}

}

