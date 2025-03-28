#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_ZipLine_Smash

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C
// 0x0080 (0x0B38 - 0x0AB8)
class UGA_Athena_ZipLine_Smash_C final  : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0AC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UpdateIntervalForSmashVolume;                      // 0x0AC8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6441[0x4];                                     // 0x0ACC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 StructureDamageGE;                                 // 0x0AD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ZipLine_Athena_Harness_C*           ZiplineHarness;                                    // 0x0AD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAthenaZipline*                     Zipline;                                           // 0x0AE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortCustomMovement                           DrivingCustomMovementMode;                         // 0x0AE8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6442[0x3];                                     // 0x0AE9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            FallImmunityGEFX;                                  // 0x0AEC(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           AttachVFXCue;                                      // 0x0AF4(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           SmashCue;                                          // 0x0AFC(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           T_Swimming;                                        // 0x0B04(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           T_Falling;                                         // 0x0B0C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6443[0x4];                                     // 0x0B14(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  TagsThatBlockFallImmunityRemoval;                  // 0x0B18(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Athena_ZipLine_Smash(int32 EntryPoint, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, struct FGameplayEventData& K2Node_Event_EventData, struct FHitResult& K2Node_CustomEvent_Hit, class AFortAthenaZipline* K2Node_DynamicCast_AsFort_Athena_Zipline, bool K2Node_DynamicCast_bSuccess_1, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue_1, bool K2Node_CustomEvent_bIsZiplining, TDelegate<void(bool bIsZiplining)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(bool bIsZiplining)> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void(bool bIsZiplining)> K2Node_CreateDelegate_OutputDelegate_2, class AActor* K2Node_CustomEvent_NewParam, float K2Node_CustomEvent_NewParam2, class AController* K2Node_CustomEvent_NewParam3, class AActor* K2Node_CustomEvent_NewParam4, const struct FVector& K2Node_CustomEvent_NewParam5, class UPrimitiveComponent* K2Node_CustomEvent_NewParam6, class FName K2Node_CustomEvent_NewParam7, const struct FVector& K2Node_CustomEvent_NewParam8, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, TDelegate<void(struct FHitResult& Hit)> K2Node_CreateDelegate_OutputDelegate_3, TDelegate<void(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)> K2Node_CreateDelegate_OutputDelegate_4, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_5, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_6, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_7, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_8, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_9, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component_1, bool K2Node_DynamicCast_bSuccess_3, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, TDelegate<void(class AFortPlayerPawn* FortPlayerPawn)> K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, TDelegate<void(struct FHitResult& Hit)> K2Node_CreateDelegate_OutputDelegate_11, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_12, TDelegate<void(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)> K2Node_CreateDelegate_OutputDelegate_13, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_14, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_15, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class AFortPlayerPawn* K2Node_CustomEvent_FortPlayerPawn, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_16, class UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue);
	void EnterWaterExit(class AFortPlayerPawn* FortPlayerPawn);
	void SwimmingStarted();
	void BindEvent();
	void DelaySpawnMotor();
	void OnBeginSkydiving_Bind();
	void OnEnteredAircraft_Bind();
	void OnPawnDied_Bind(class AActor* NewParam, float NewParam2, class AController* NewParam3, class AActor* NewParam4, const struct FVector& NewParam5, class UPrimitiveComponent* NewParam6, class FName NewParam7, const struct FVector& NewParam8);
	void ZipliningComplete();
	void OnEnterVehicle_Bind();
	void SurroundingsCheck();
	void RemoveFallDamageImmunity();
	void HandleZiplineStateChanged(bool bIsZiplining);
	void OnPawnLanded_Bind(struct FHitResult& Hit);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void Removed_4E9755484C178DFBE6FF8396B520588B();
	void Added_57667DA14EF15649A9E09AA4184D83F2();
	void BreakNearbyStructures(class AFortPlayerPawn* Param_PlayerPawn, int32 Temp_int_Array_Index_Variable, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<EObjectTypeQuery>& K2Node_MakeArray_Array_1, TArray<class AActor*>& CallFunc_BoxOverlapActors_OutActors, bool CallFunc_BoxOverlapActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, class AFortAthenaSupplyDropBalloon* K2Node_DynamicCast_AsFort_Athena_Supply_Drop_Balloon, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, class UFortHeldObjectComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_2);
	void SpawnMotor(class AActor* Param_PlayerPawn, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FVector& CallFunc_Get_Zipline_Motor_Offset_Offset, class ABP_ZipLine_Athena_Harness_Yellow_C* CallFunc_FinishSpawningActor_ReturnValue, TDelegate<void(bool bIsZiplining)> K2Node_CreateDelegate_OutputDelegate, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue);
	void CheckMotor(bool HasHarness, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, class ABP_ZipLine_Athena_Harness_C* K2Node_DynamicCast_AsBP_Zip_Line_Athena_Harness, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void CheckForQuestProgress(TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasAuthority_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted);
	void Get_Zipline_Pole_B_Socket_Loc(struct FVector* PoleBSocketLoc, class ABP_Athena_Environmental_ZipLine_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line, bool K2Node_DynamicCast_bSuccess, class ABP_Athena_Environmental_ZipLine_Spline_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void Get_Zipline_Pole_A_Socket_Loc(struct FVector* PoleBSocketLoc, class ABP_Athena_Environmental_ZipLine_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line, bool K2Node_DynamicCast_bSuccess, class ABP_Athena_Environmental_ZipLine_Spline_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void GetZiplineRotationForMotor(struct FRotator* Rotation, class ABP_Athena_Environmental_ZipLine_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line, bool K2Node_DynamicCast_bSuccess, class ABP_Athena_Environmental_ZipLine_Spline_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline, bool K2Node_DynamicCast_bSuccess_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue);
	void Get_Zipline_Motor_Offset(struct FVector* Offset, class ABP_Athena_Environmental_ZipLine_Spline_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line_Spline, bool K2Node_DynamicCast_bSuccess, class ABP_Athena_Environmental_ZipLine_C* K2Node_DynamicCast_AsBP_Athena_Environmental_Zip_Line, bool K2Node_DynamicCast_bSuccess_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_ZipLine_Smash_C">();
	}
	static class UGA_Athena_ZipLine_Smash_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_ZipLine_Smash_C>();
	}
};
static_assert(alignof(UGA_Athena_ZipLine_Smash_C) == 0x000008, "Wrong alinment on UGA_Athena_ZipLine_Smash_C");
static_assert(sizeof(UGA_Athena_ZipLine_Smash_C) == 0x000B38, "Wrong size on UGA_Athena_ZipLine_Smash_C");
static_assert(offsetof(UGA_Athena_ZipLine_Smash_C, UberGraphFrame) == 0x000AB8, "Member 'UGA_Athena_ZipLine_Smash_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_Smash_C, PlayerPawn) == 0x000AC0, "Member 'UGA_Athena_ZipLine_Smash_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_Smash_C, UpdateIntervalForSmashVolume) == 0x000AC8, "Member 'UGA_Athena_ZipLine_Smash_C::UpdateIntervalForSmashVolume' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_Smash_C, StructureDamageGE) == 0x000AD0, "Member 'UGA_Athena_ZipLine_Smash_C::StructureDamageGE' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_Smash_C, ZiplineHarness) == 0x000AD8, "Member 'UGA_Athena_ZipLine_Smash_C::ZiplineHarness' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_Smash_C, Zipline) == 0x000AE0, "Member 'UGA_Athena_ZipLine_Smash_C::Zipline' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_Smash_C, DrivingCustomMovementMode) == 0x000AE8, "Member 'UGA_Athena_ZipLine_Smash_C::DrivingCustomMovementMode' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_Smash_C, FallImmunityGEFX) == 0x000AEC, "Member 'UGA_Athena_ZipLine_Smash_C::FallImmunityGEFX' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_Smash_C, AttachVFXCue) == 0x000AF4, "Member 'UGA_Athena_ZipLine_Smash_C::AttachVFXCue' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_Smash_C, SmashCue) == 0x000AFC, "Member 'UGA_Athena_ZipLine_Smash_C::SmashCue' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_Smash_C, T_Swimming) == 0x000B04, "Member 'UGA_Athena_ZipLine_Smash_C::T_Swimming' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_Smash_C, T_Falling) == 0x000B0C, "Member 'UGA_Athena_ZipLine_Smash_C::T_Falling' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ZipLine_Smash_C, TagsThatBlockFallImmunityRemoval) == 0x000B18, "Member 'UGA_Athena_ZipLine_Smash_C::TagsThatBlockFallImmunityRemoval' has a wrong offset!");

}

