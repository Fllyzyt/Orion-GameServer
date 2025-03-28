#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_AppleSun_DestroyOverlappingObjects

#include "Basic.hpp"

#include "GA_AppleSun_DestroyOverlappingObjects_classes.hpp"
#include "GA_AppleSun_DestroyOverlappingObjects_parameters.hpp"


namespace SDK
{

// Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.ExecuteUbergraph_GA_AppleSun_DestroyOverlappingObjects
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBuildingStructuralSupportSystem* CallFunc_GetBuildingStructuralSupportSystem_BuildingStructuralSupportSystem(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_TargetData_1                        (ConstParm)
// struct FGameplayTag                     K2Node_CustomEvent_ApplicationTag_1                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandle K2Node_CustomEvent_TargetData                          (ConstParm)
// struct FGameplayTag                     K2Node_CustomEvent_ApplicationTag                      (NoDestructor, HasGetValueTypeHash)
// TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)>K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor)
// struct FGameplayTag                     Temp_struct_Variable                                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandle Temp_struct_Variable_1                                 ()
// TArray<struct FActiveGameplayEffectHandle>CallFunc_ApplyGameplayEffectContainer_ReturnValue      (ConstParm, ReferenceParm, HasGetValueTypeHash)
// class UFortAbilityTask_WaitTargetSelection*CallFunc_WaitTargetSelection_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_AppleSun_DestroyOverlappingObjects_C::ExecuteUbergraph_GA_AppleSun_DestroyOverlappingObjects(int32 EntryPoint, class UBuildingStructuralSupportSystem* CallFunc_GetBuildingStructuralSupportSystem_BuildingStructuralSupportSystem, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, class UFortAbilityTask_WaitTargetSelection* CallFunc_WaitTargetSelection_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AppleSun_DestroyOverlappingObjects_C", "ExecuteUbergraph_GA_AppleSun_DestroyOverlappingObjects");

	Params::GA_AppleSun_DestroyOverlappingObjects_C_ExecuteUbergraph_GA_AppleSun_DestroyOverlappingObjects Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBuildingStructuralSupportSystem_BuildingStructuralSupportSystem = CallFunc_GetBuildingStructuralSupportSystem_BuildingStructuralSupportSystem;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_TargetData_1 = std::move(K2Node_CustomEvent_TargetData_1);
	Parms.K2Node_CustomEvent_ApplicationTag_1 = std::move(K2Node_CustomEvent_ApplicationTag_1);
	Parms.K2Node_CustomEvent_TargetData = std::move(K2Node_CustomEvent_TargetData);
	Parms.K2Node_CustomEvent_ApplicationTag = std::move(K2Node_CustomEvent_ApplicationTag);
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_struct_Variable = std::move(Temp_struct_Variable);
	Parms.Temp_struct_Variable_1 = std::move(Temp_struct_Variable_1);
	Parms.CallFunc_ApplyGameplayEffectContainer_ReturnValue = std::move(CallFunc_ApplyGameplayEffectContainer_ReturnValue);
	Parms.CallFunc_WaitTargetSelection_ReturnValue = CallFunc_WaitTargetSelection_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_AppleSun_DestroyOverlappingObjects_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AppleSun_DestroyOverlappingObjects_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.Targeted_96BA3C644E573EAE0D8760B88ABB3969
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_AppleSun_DestroyOverlappingObjects_C::Targeted_96BA3C644E573EAE0D8760B88ABB3969(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AppleSun_DestroyOverlappingObjects_C", "Targeted_96BA3C644E573EAE0D8760B88ABB3969");

	Params::GA_AppleSun_DestroyOverlappingObjects_C_Targeted_96BA3C644E573EAE0D8760B88ABB3969 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.Cancelled_96BA3C644E573EAE0D8760B88ABB3969
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                     ApplicationTag                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_AppleSun_DestroyOverlappingObjects_C::Cancelled_96BA3C644E573EAE0D8760B88ABB3969(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AppleSun_DestroyOverlappingObjects_C", "Cancelled_96BA3C644E573EAE0D8760B88ABB3969");

	Params::GA_AppleSun_DestroyOverlappingObjects_C_Cancelled_96BA3C644E573EAE0D8760B88ABB3969 Parms{};

	Parms.TargetData = std::move(TargetData);
	Parms.ApplicationTag = std::move(ApplicationTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.GetCustomAbilitySourceTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                           CallFunc_GetAvatarActorFromActorInfo_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       CallFunc_GetTransform_ReturnValue                      (ConstParm, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FTransform UGA_AppleSun_DestroyOverlappingObjects_C::GetCustomAbilitySourceTransform(class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AppleSun_DestroyOverlappingObjects_C", "GetCustomAbilitySourceTransform");

	Params::GA_AppleSun_DestroyOverlappingObjects_C_GetCustomAbilitySourceTransform Parms{};

	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = std::move(CallFunc_GetTransform_ReturnValue);
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

