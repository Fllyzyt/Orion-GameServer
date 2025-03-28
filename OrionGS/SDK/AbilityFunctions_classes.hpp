#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AbilityFunctions

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AbilityFunctions.AbilityFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UAbilityFunctions_C final  : public UBlueprintFunctionLibrary
{
public:
	static void DoNOTUseMinusBuildArrayOfHitActors(const struct FGameplayAbilityTargetDataHandle& TargetData, class UObject* __WorldContext, TArray<class AActor*>* HitActors, const TArray<class AActor*>& LocalHitActors, int32 CallFunc_GetDataCountFromTargetData_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetActorsFromTargetData_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	static void SetArrayOfHitActors(const struct FGameplayAbilityTargetDataHandle& TargetData, TArray<class AActor*>& ArrayToSet, class UObject* __WorldContext, int32 CallFunc_GetDataCountFromTargetData_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetActorsFromTargetData_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	static void ConvertRangeToTiles(float InRange, class UObject* __WorldContext, float* OutTile, float CallFunc_Divide_FloatFloat_ReturnValue);
	static void GetProjectedTeleportLocation(class AActor* Actor, float MovementDistance, class UObject* __WorldContext, struct FVector* TargetLocation, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_VSize_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	static void GetRangeFromGameplayEffectContainerSpec(const struct FFortGameplayEffectContainerSpec& GE_Container_Spec, int32 Target_Selection_List_Index, float At_Level, class UObject* __WorldContext, float* Range, const struct FFortAbilityTargetSelection& CallFunc_Array_Get_Item, float CallFunc_GetValueAtLevel_ReturnValue);
	static void GetAngleBetweenTwoVectors(const struct FVector& VectorA, const struct FVector& VectorB, class UObject* __WorldContext, float* Angle__Degrees_, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, float CallFunc_Dot_VectorVector_ReturnValue, float CallFunc_DegAcos_ReturnValue);
	static void GetTotalGameplayEffectCount(TArray<class UClass*>& EffectsToCount, class UAbilitySystemComponent* AbilitySystemComponent, class UObject* __WorldContext, int32* FinalEffectCount, int32 TempTotalEffectCount, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_GetGameplayEffectCount_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
	static void GetRangeFromGameplayEffectContainer(const struct FFortGameplayEffectContainer& GE_Container, int32 Target_Selection_List_Index, float At_Level, class UObject* __WorldContext, float* Range, const struct FFortAbilityTargetSelection& CallFunc_Array_Get_Item, float CallFunc_GetValueAtLevel_ReturnValue);
	static void EvaluatePerkTierBalanceValue(const struct FScalableFloat& T01_Balance_Value, const struct FScalableFloat& T02_Balance_Value, bool Owns_T02, bool Should_Override_T01, class UObject* __WorldContext, struct FScalableFloat* Balance_Value, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default, const struct FScalableFloat& K2Node_MakeStruct_ScalableFloat, const struct FScalableFloat& K2Node_Select_Default_1, const struct FScalableFloat& K2Node_Select_Default_2);
	static void GetPawnFromPlayerStateZone(class AActor* InActor, class UObject* __WorldContext, class AFortPlayerPawn** OutPawn, bool* PawnReturned, class AFortPlayerStateZone* K2Node_DynamicCast_AsFort_Player_State_Zone, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawn* CallFunc_GetCurrentPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	static void GetDistanceBetweenActors(class AActor* Actor1, class AActor* Actor2, class UObject* __WorldContext, float* Distance, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue);
	static void GetDistanceSquaredBetweenActors(class AActor* Actor_1, class AActor* Actor_2, class UObject* __WorldContext, float* Distance_Squared, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSizeSquared_ReturnValue);
	static void ApplySlowFall(float SlowFallDuration, class UFortGameplayAbility* SelfGameplayAbilityReference, class UClass* GameplayEffect, class UObject* __WorldContext, struct FActiveGameplayEffectHandle* EffectSpecHandle, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue);

	static bool ShouldHammerHitsHealRespondToEvent(const struct FGameplayEventData& Payload, class UObject* __WorldContext, bool NewLocalVar_0, bool CallFunc_HasAllTags_ReturnValue, bool CallFunc_HasAllTags_ReturnValue_1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	static bool ShouldSwordHitsHealRespondToEvent(const struct FGameplayEventData& Payload, class UObject* __WorldContext, bool CallFunc_HasAllTags_ReturnValue, bool CallFunc_HasAllTags_ReturnValue_1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AbilityFunctions_C">();
	}
	static class UAbilityFunctions_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAbilityFunctions_C>();
	}
};
static_assert(alignof(UAbilityFunctions_C) == 0x000008, "Wrong alinment on UAbilityFunctions_C");
static_assert(sizeof(UAbilityFunctions_C) == 0x000028, "Wrong size on UAbilityFunctions_C");

}

