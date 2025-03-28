#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_ForagedItemVersion_Consume_Parent

#include "Basic.hpp"

#include "GA_Athena_ForagedItemVersion_Consume_Parent_classes.hpp"
#include "GA_Athena_ForagedItemVersion_Consume_Parent_parameters.hpp"


namespace SDK
{

// Function GA_Athena_ForagedItemVersion_Consume_Parent.GA_Athena_ForagedItemVersion_Consume_Parent_C.ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                        CallFunc_GetActivatingPawn_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsServer_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer            CallFunc_GetWeaponDataGameplayTags_GameplayTags        ()
// class AFortPlayerController*            CallFunc_GetFortPlayerControllerFromActor_ReturnValue  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*                CallFunc_GetQuestManager_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_SendComplexCustomStatEvent_QuestActive        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_SendComplexCustomStatEvent_QuestCompleted     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_ForagedItemVersion_Consume_Parent_C::ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetWeaponDataGameplayTags_GameplayTags, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ForagedItemVersion_Consume_Parent_C", "ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent");

	Params::GA_Athena_ForagedItemVersion_Consume_Parent_C_ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetWeaponDataGameplayTags_GameplayTags = std::move(CallFunc_GetWeaponDataGameplayTags_GameplayTags);
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_SendComplexCustomStatEvent_QuestActive = CallFunc_SendComplexCustomStatEvent_QuestActive;
	Parms.CallFunc_SendComplexCustomStatEvent_QuestCompleted = CallFunc_SendComplexCustomStatEvent_QuestCompleted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Athena_ForagedItemVersion_Consume_Parent.GA_Athena_ForagedItemVersion_Consume_Parent_C.K2_CommitExecute
// (Event, Public, BlueprintEvent)

void UGA_Athena_ForagedItemVersion_Consume_Parent_C::K2_CommitExecute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Athena_ForagedItemVersion_Consume_Parent_C", "K2_CommitExecute");

	UObject::ProcessEvent(Func, nullptr);
}

}

