#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ThrowConsumable

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_ThrowConsumable.GA_ThrowConsumable_C
// 0x0390 (0x0E48 - 0x0AB8)
class UGA_ThrowConsumable_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0AC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AbilityKeyPressed;                                 // 0x0AC8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InThrowWindup;                                     // 0x0AC9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CD7[0x2];                                     // 0x0ACA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AdditionalThrowAngle;                              // 0x0ACC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxTossPitch;                                      // 0x0AD0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GrenadeTargetingOriginOffset;                      // 0x0AD4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GrenadeTargetingOriginOffset_Crouched;             // 0x0AE0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CD8[0x4];                                     // 0x0AEC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortProjectileBase*                    SpawnedProjectile;                                 // 0x0AF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Proj_ThrownProjectile;                             // 0x0AF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         ProjectileSpeed;                                   // 0x0B00(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         ProjectileGravityScale;                            // 0x0B28(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         TrajectoryUpdateInterval;                          // 0x0B50(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CD9[0x4];                                     // 0x0B54(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CookMonage;                                        // 0x0B58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           ThrowMontage;                                      // 0x0B60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_OnThrow;                                        // 0x0B68(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_ProjectileTrajectory_C*             TrajectoryIndicator;                               // 0x0B70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 TrajectoryIndicatorClass;                          // 0x0B78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                    DummyProjectile;                                   // 0x0B80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyMaxSpeed;                                     // 0x0B88(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyGravity;                                      // 0x0B8C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyExtent;                                       // 0x0B90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyTimeStep;                                     // 0x0B94(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TrajectoryCollisionProfileName;                    // 0x0B98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_InWindup;                                       // 0x0BA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                GrenadeTargetingOriginOffsetWater;                 // 0x0BA8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            Handle_GE_InWindup;                                // 0x0BB4(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EC_DefaultExplosion;                               // 0x0BBC(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         ExplosionEffectLevel;                              // 0x0BC4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec       ExplosionEffectContainerSpec;                      // 0x0BC8(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          SpawnedOnEquip;                                    // 0x0C80(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CDA[0x3];                                     // 0x0C81(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           EC_DefaultHit;                                     // 0x0C84(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         HitEffectLevel;                                    // 0x0C8C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec       HitEffectContainerSpec;                            // 0x0C90(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnProjectileSpawn;                                 // 0x0D48(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          HasAdditionalExplosion;                            // 0x0D58(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CDB[0x3];                                     // 0x0D59(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           EC_AdditionalExplosion;                            // 0x0D5C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         AdditionalExplodeLevel;                            // 0x0D64(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec       AdditionalContainerSpec;                           // 0x0D68(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  QuestCreditTargetTag;                              // 0x0E20(0x0020)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	int32                                         DummyMaxSteps;                                     // 0x0E40(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnProjectileSpawn__DelegateSignature();
	void ExecuteUbergraph_GA_ThrowConsumable(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, class UFortWeaponItemDefinition* CallFunc_GetWeaponData_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, float CallFunc_GetScaledCapsuleSize_OutRadius, float CallFunc_GetScaledCapsuleSize_OutHalfHeight, float CallFunc_GetGravityZ_ReturnValue, float CallFunc_FMax_ReturnValue, bool CallFunc_IsCurveTableRowValid_ReturnValue, float CallFunc_GetGravityZ_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_3, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_4, bool Temp_bool_Variable, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_IsServer_ReturnValue, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_5, bool K2Node_Event_bWasCancelled, const struct FVector& CallFunc_GetSpawnLocationAndRotation_Location, const struct FRotator& CallFunc_GetSpawnLocationAndRotation_Rotation, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Select_Default, class AFortProjectileBase* CallFunc_FinishSpawningActor_ReturnValue, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_6, class AFortProjectileTrajectory* CallFunc_SpawnTrajectoryIndicator_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_2, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_7, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, float CallFunc_GetProjectileInitialSpeedToUse_ProjectileSpeedToUse, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted, float CallFunc_GetProjectileInitialGravityScaleToUse_GravityScaleToUse, float CallFunc_GetProjectileInitialSpeedToUse_ProjectileSpeedToUse_1, class AFortProjectileBase* CallFunc_SpawnThrownProjectile_SpawnedProjectile, bool CallFunc_IsValid_ReturnValue_4, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2);
	void ThrowMontageStarted();
	void UpdateTrajectory();
	void CleanupTrajectoryIndicatorOnUnequip();
	void K2_ActivateAbility();
	void OnAbilityInputReleased();
	void InitTrajectoryVariables();
	void K2_OnEndAbility(bool bWasCancelled);
	void AttemptSpawnThrownProjectile();
	void ThrowProjectile();
	void OnCompleted_D89CCB8E47DB19D6DCF41F96F207CC3D();
	void OnBlendOut_D89CCB8E47DB19D6DCF41F96F207CC3D();
	void OnInterrupted_D89CCB8E47DB19D6DCF41F96F207CC3D();
	void OnCancelled_D89CCB8E47DB19D6DCF41F96F207CC3D();
	void OnFinish_96367E244486362FDDE5ED87D909C17B();
	void Triggered_01C5B37D48E3DC6F82DDC58640CE2A27(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_01C5B37D48E3DC6F82DDC58640CE2A27(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void PrethrowSetup(const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
	void SpawnThrownProjectile(class UClass* Param_ProjectileClass, struct FVector& ProjectileSpawnLocation, struct FRotator& ProjectileSpawnDirection, const struct FFortGameplayEffectContainerSpec& Param_HitEffectContainerSpec, const struct FFortGameplayEffectContainerSpec& Param_ExplosionEffectContainerSpec, float ProjectileInitialSpeed, float Param_ProjectileGravityScale, class AFortProjectileBase** Param_SpawnedProjectile, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue);
	void OnProjectileSpawned(class AFortProjectileBase* Param_SpawnedProjectile);
	void OnProjectileSetup();
	void SetupDummyProjectile(class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFortProjectileTrajectory* CallFunc_FinishSpawningActor_ReturnValue, class ABP_ProjectileTrajectory_C* K2Node_DynamicCast_AsBP_Projectile_Trajectory, bool K2Node_DynamicCast_bSuccess);
	void UpdateTrajectorySpline(TArray<struct FVector>& CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints, TArray<struct FVector>& CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents, const struct FHitResult& CallFunc_GetProjectileTrajectoryPoints_OutHitResult, bool CallFunc_IsValid_ReturnValue);
	void PostThrowCleanup(bool CallFunc_Not_PreBool_ReturnValue);
	void CleanupTrajectory();
	void GetProjectileInitialSpeedToUse(float* ProjectileSpeedToUse, const class FString& GetProjectileInitialSpeedToUseContext, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_EvaluateCurveTableRow_ReturnValue, bool CallFunc_IsCurveTableRowValid_ReturnValue);
	void GetProjectileInitialGravityScaleToUse(float* GravityScaleToUse, const class FString& GetProjectileInitialGravityScaleContext, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_EvaluateCurveTableRow_ReturnValue, bool CallFunc_IsCurveTableRowValid_ReturnValue);
	void GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult, const struct FVector& LocalVelocity, const struct FVector& LocalLocation, class AFortPlayerPawn* LocalPawn, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FHitResult& CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutHitResult, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutSplinePoints, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutSplineTangents, const struct FHitResult& CallFunc_CalculateProjectileTrajectorySplineWithHit_OutHitResult, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplinePoints, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplineTangents, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, const struct FVector& CallFunc_GetSpawnLocationAndRotation_Location, const struct FRotator& CallFunc_GetSpawnLocationAndRotation_Rotation, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	class AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);

	void GetSpawnLocationAndRotation(struct FVector* Location, struct FRotator* Rotation, float CallFunc_GetProjectileAdditionalThrowAngleToUse_AdditionalThrowAngleToUse, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, const struct FRotator& CallFunc_GetDefaultTargetingRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsSurfaceSwimming_ReturnValue, float CallFunc_NormalizeAxis_ReturnValue, float CallFunc_FMin_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& K2Node_Select_Default, const struct FVector& K2Node_Select_Default_1, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue) const;
	void GetOwningPlayer(class AFortPlayerPawn** Player_Pawn, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess) const;
	void GetProjectileAdditionalThrowAngleToUse(float* AdditionalThrowAngleToUse, class AFortWeapon* AbilitySourceWeapon, float CallFunc_GetProjectilePitchOffset_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_SelectFloat_ReturnValue, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue) const;
	TSubclassOf<class AFortProjectileTrajectory> GetProjectileTrajectoryActor() const;
	bool ShouldOnlyShowTrajectoryOnUse() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_ThrowConsumable_C">();
	}
	static class UGA_ThrowConsumable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ThrowConsumable_C>();
	}
};
static_assert(alignof(UGA_ThrowConsumable_C) == 0x000008, "Wrong alinment on UGA_ThrowConsumable_C");
static_assert(sizeof(UGA_ThrowConsumable_C) == 0x000E48, "Wrong size on UGA_ThrowConsumable_C");
static_assert(offsetof(UGA_ThrowConsumable_C, UberGraphFrame) == 0x000AB8, "Member 'UGA_ThrowConsumable_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, PlayerPawn) == 0x000AC0, "Member 'UGA_ThrowConsumable_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, AbilityKeyPressed) == 0x000AC8, "Member 'UGA_ThrowConsumable_C::AbilityKeyPressed' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, InThrowWindup) == 0x000AC9, "Member 'UGA_ThrowConsumable_C::InThrowWindup' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, AdditionalThrowAngle) == 0x000ACC, "Member 'UGA_ThrowConsumable_C::AdditionalThrowAngle' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, MaxTossPitch) == 0x000AD0, "Member 'UGA_ThrowConsumable_C::MaxTossPitch' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, GrenadeTargetingOriginOffset) == 0x000AD4, "Member 'UGA_ThrowConsumable_C::GrenadeTargetingOriginOffset' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, GrenadeTargetingOriginOffset_Crouched) == 0x000AE0, "Member 'UGA_ThrowConsumable_C::GrenadeTargetingOriginOffset_Crouched' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, SpawnedProjectile) == 0x000AF0, "Member 'UGA_ThrowConsumable_C::SpawnedProjectile' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, Proj_ThrownProjectile) == 0x000AF8, "Member 'UGA_ThrowConsumable_C::Proj_ThrownProjectile' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, ProjectileSpeed) == 0x000B00, "Member 'UGA_ThrowConsumable_C::ProjectileSpeed' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, ProjectileGravityScale) == 0x000B28, "Member 'UGA_ThrowConsumable_C::ProjectileGravityScale' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, TrajectoryUpdateInterval) == 0x000B50, "Member 'UGA_ThrowConsumable_C::TrajectoryUpdateInterval' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, CookMonage) == 0x000B58, "Member 'UGA_ThrowConsumable_C::CookMonage' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, ThrowMontage) == 0x000B60, "Member 'UGA_ThrowConsumable_C::ThrowMontage' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, GC_OnThrow) == 0x000B68, "Member 'UGA_ThrowConsumable_C::GC_OnThrow' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, TrajectoryIndicator) == 0x000B70, "Member 'UGA_ThrowConsumable_C::TrajectoryIndicator' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, TrajectoryIndicatorClass) == 0x000B78, "Member 'UGA_ThrowConsumable_C::TrajectoryIndicatorClass' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, DummyProjectile) == 0x000B80, "Member 'UGA_ThrowConsumable_C::DummyProjectile' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, DummyMaxSpeed) == 0x000B88, "Member 'UGA_ThrowConsumable_C::DummyMaxSpeed' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, DummyGravity) == 0x000B8C, "Member 'UGA_ThrowConsumable_C::DummyGravity' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, DummyExtent) == 0x000B90, "Member 'UGA_ThrowConsumable_C::DummyExtent' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, DummyTimeStep) == 0x000B94, "Member 'UGA_ThrowConsumable_C::DummyTimeStep' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, TrajectoryCollisionProfileName) == 0x000B98, "Member 'UGA_ThrowConsumable_C::TrajectoryCollisionProfileName' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, GE_InWindup) == 0x000BA0, "Member 'UGA_ThrowConsumable_C::GE_InWindup' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, GrenadeTargetingOriginOffsetWater) == 0x000BA8, "Member 'UGA_ThrowConsumable_C::GrenadeTargetingOriginOffsetWater' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, Handle_GE_InWindup) == 0x000BB4, "Member 'UGA_ThrowConsumable_C::Handle_GE_InWindup' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, EC_DefaultExplosion) == 0x000BBC, "Member 'UGA_ThrowConsumable_C::EC_DefaultExplosion' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, ExplosionEffectLevel) == 0x000BC4, "Member 'UGA_ThrowConsumable_C::ExplosionEffectLevel' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, ExplosionEffectContainerSpec) == 0x000BC8, "Member 'UGA_ThrowConsumable_C::ExplosionEffectContainerSpec' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, SpawnedOnEquip) == 0x000C80, "Member 'UGA_ThrowConsumable_C::SpawnedOnEquip' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, EC_DefaultHit) == 0x000C84, "Member 'UGA_ThrowConsumable_C::EC_DefaultHit' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, HitEffectLevel) == 0x000C8C, "Member 'UGA_ThrowConsumable_C::HitEffectLevel' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, HitEffectContainerSpec) == 0x000C90, "Member 'UGA_ThrowConsumable_C::HitEffectContainerSpec' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, OnProjectileSpawn) == 0x000D48, "Member 'UGA_ThrowConsumable_C::OnProjectileSpawn' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, HasAdditionalExplosion) == 0x000D58, "Member 'UGA_ThrowConsumable_C::HasAdditionalExplosion' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, EC_AdditionalExplosion) == 0x000D5C, "Member 'UGA_ThrowConsumable_C::EC_AdditionalExplosion' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, AdditionalExplodeLevel) == 0x000D64, "Member 'UGA_ThrowConsumable_C::AdditionalExplodeLevel' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, AdditionalContainerSpec) == 0x000D68, "Member 'UGA_ThrowConsumable_C::AdditionalContainerSpec' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, QuestCreditTargetTag) == 0x000E20, "Member 'UGA_ThrowConsumable_C::QuestCreditTargetTag' has a wrong offset!");
static_assert(offsetof(UGA_ThrowConsumable_C, DummyMaxSteps) == 0x000E40, "Member 'UGA_ThrowConsumable_C::DummyMaxSteps' has a wrong offset!");

}

