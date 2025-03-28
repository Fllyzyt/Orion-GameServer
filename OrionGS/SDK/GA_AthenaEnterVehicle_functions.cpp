#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_AthenaEnterVehicle

#include "Basic.hpp"

#include "GA_AthenaEnterVehicle_classes.hpp"
#include "GA_AthenaEnterVehicle_parameters.hpp"


namespace SDK
{

// Function GA_AthenaEnterVehicle.GA_AthenaEnterVehicle_C.ExecuteUbergraph_GA_AthenaEnterVehicle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_K2_CommitAbility_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityActorInfo        CallFunc_GetActorInfo_ReturnValue                      (ContainsInstancedReference)
// class AFortPlayerPawn*                  K2Node_DynamicCast_AsFort_Player_Pawn                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandle CallFunc_AbilityTargetDataFromActor_ReturnValue        ()
// struct FActiveGameplayEffectHandle      CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue     (NoDestructor, HasGetValueTypeHash)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue    (ReferenceParm, HasGetValueTypeHash)

void UGA_AthenaEnterVehicle_C::ExecuteUbergraph_GA_AthenaEnterVehicle(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AthenaEnterVehicle_C", "ExecuteUbergraph_GA_AthenaEnterVehicle");

	Params::GA_AthenaEnterVehicle_C_ExecuteUbergraph_GA_AthenaEnterVehicle Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_GetActorInfo_ReturnValue = std::move(CallFunc_GetActorInfo_ReturnValue);
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = std::move(CallFunc_AbilityTargetDataFromActor_ReturnValue);
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = std::move(CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = std::move(CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = std::move(Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
}


// Function GA_AthenaEnterVehicle.GA_AthenaEnterVehicle_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_AthenaEnterVehicle_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AthenaEnterVehicle_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}

