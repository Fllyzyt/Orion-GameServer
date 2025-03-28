#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_Creative_TriggeredAbility_Pawn

#include "Basic.hpp"

#include "GAT_Creative_TriggeredAbility_Pawn_classes.hpp"
#include "GAT_Creative_TriggeredAbility_Pawn_parameters.hpp"


namespace SDK
{

// Function GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C.ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData               K2Node_Event_EventData                                 (ConstParm)
// class AFortPawn*                        CallFunc_SetupPawnActorAbility_FortPawn                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_Creative_TriggeredAbility_Pawn_C::ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn(int32 EntryPoint, struct FGameplayEventData& K2Node_Event_EventData, class AFortPawn* CallFunc_SetupPawnActorAbility_FortPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Creative_TriggeredAbility_Pawn_C", "ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn");

	Params::GAT_Creative_TriggeredAbility_Pawn_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = std::move(K2Node_Event_EventData);
	Parms.CallFunc_SetupPawnActorAbility_FortPawn = CallFunc_SetupPawnActorAbility_FortPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAT_Creative_TriggeredAbility_Pawn_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Creative_TriggeredAbility_Pawn_C", "K2_ActivateAbilityFromEvent");

	Params::GAT_Creative_TriggeredAbility_Pawn_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C.SetupPawnActorAbility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                        FortPawn                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                        LocalFortPawn                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo        CallFunc_GetActorInfo_ReturnValue                      (ContainsInstancedReference)
// class AFortPawn*                        K2Node_DynamicCast_AsFort_Pawn                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAT_Creative_TriggeredAbility_Pawn_C::SetupPawnActorAbility(class AFortPawn** FortPawn, class AFortPawn* LocalFortPawn, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Creative_TriggeredAbility_Pawn_C", "SetupPawnActorAbility");

	Params::GAT_Creative_TriggeredAbility_Pawn_C_SetupPawnActorAbility Parms{};

	Parms.LocalFortPawn = LocalFortPawn;
	Parms.CallFunc_GetActorInfo_ReturnValue = std::move(CallFunc_GetActorInfo_ReturnValue);
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (FortPawn != nullptr)
		*FortPawn = std::move(Parms.FortPawn);
}

}

