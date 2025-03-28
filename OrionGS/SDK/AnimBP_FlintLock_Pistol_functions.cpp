#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_FlintLock_Pistol

#include "Basic.hpp"

#include "AnimBP_FlintLock_Pistol_classes.hpp"
#include "AnimBP_FlintLock_Pistol_parameters.hpp"


namespace SDK
{

// Function AnimBP_FlintLock_Pistol.AnimBP_FlintLock_Pistol_C.ExecuteUbergraph_AnimBP_FlintLock_Pistol
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           CallFunc_GetOwningActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_Pistol_Flintlock_Athena_C*     K2Node_DynamicCast_AsB_Pistol_Flintlock_Athena         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   K2Node_Event_DeltaTimeX                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawnAthena*            K2Node_DynamicCast_AsFort_Player_Pawn_Athena           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// EFortCustomGender                       CallFunc_GetCharacterGender_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_FlintLock_Pistol_C::ExecuteUbergraph_AnimBP_FlintLock_Pistol(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AB_Pistol_Flintlock_Athena_C* K2Node_DynamicCast_AsB_Pistol_Flintlock_Athena, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, EFortCustomGender CallFunc_GetCharacterGender_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_FlintLock_Pistol_C", "ExecuteUbergraph_AnimBP_FlintLock_Pistol");

	Params::AnimBP_FlintLock_Pistol_C_ExecuteUbergraph_AnimBP_FlintLock_Pistol Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Pistol_Flintlock_Athena = K2Node_DynamicCast_AsB_Pistol_Flintlock_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCharacterGender_ReturnValue = CallFunc_GetCharacterGender_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimBP_FlintLock_Pistol.AnimBP_FlintLock_Pistol_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_FlintLock_Pistol_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_FlintLock_Pistol_C", "BlueprintUpdateAnimation");

	Params::AnimBP_FlintLock_Pistol_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimBP_FlintLock_Pistol.AnimBP_FlintLock_Pistol_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UAnimBP_FlintLock_Pistol_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_FlintLock_Pistol_C", "AnimGraph");

	Params::AnimBP_FlintLock_Pistol_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = Parms.Param_AnimGraph;
}

}

