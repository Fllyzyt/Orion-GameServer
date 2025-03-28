#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Nightmare_Cloak_Cooldown_Finished

#include "Basic.hpp"

#include "GCNL_Nightmare_Cloak_Cooldown_Finished_classes.hpp"
#include "GCNL_Nightmare_Cloak_Cooldown_Finished_parameters.hpp"


namespace SDK
{

// Function GCNL_Nightmare_Cloak_Cooldown_Finished.GCNL_Nightmare_Cloak_Cooldown_Finished_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MyTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters           Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_OnRemove_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_HasMatchingGameplayTag_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AGCNL_Nightmare_Cloak_Cooldown_Finished_C::OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool Temp_bool_Variable, bool CallFunc_OnRemove_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasMatchingGameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNL_Nightmare_Cloak_Cooldown_Finished_C", "OnRemove");

	Params::GCNL_Nightmare_Cloak_Cooldown_Finished_C_OnRemove Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = std::move(Parameters);
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_OnRemove_ReturnValue = CallFunc_OnRemove_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

