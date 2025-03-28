#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EnemyPawn_Parent_Deimos

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EnemyPawn_Parent_Deimos.EnemyPawn_Parent_Deimos_C
// 0x0320 (0x2660 - 0x2340)
#pragma pack(push, 0x1)
class alignas(0x10) AEnemyPawn_Parent_Deimos_C : public AFortAIPawn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      WeaponCapsuleCollision;                            // 0x2348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Elemental_Layer_Audio_Loop;                        // 0x2350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Enemy_Spawn_Out_TL_ColorFadeOutTrack_37A083E44F5772C5FFF36680D2AD7D94; // 0x2358(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Enemy_Spawn_Out_TL_FadeInTrack_37A083E44F5772C5FFF36680D2AD7D94; // 0x235C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Enemy_Spawn_Out_TL__Direction_37A083E44F5772C5FFF36680D2AD7D94; // 0x2360(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A0A[0x7];                                     // 0x2361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Enemy_Spawn_Out_TL;                                // 0x2368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EnemySpawnInTL_ColorFadeOutTrack_515E6B424789F427A1B9ACAD857FFF5D; // 0x2370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EnemySpawnInTL_FadeInTrack_515E6B424789F427A1B9ACAD857FFF5D; // 0x2374(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            EnemySpawnInTL__Direction_515E6B424789F427A1B9ACAD857FFF5D; // 0x2378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A0B[0x7];                                     // 0x2379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     EnemySpawnInTL;                                    // 0x2380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A0C[0x8];                                     // 0x2388(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             SpawnParticlesTransform;                           // 0x2390(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UParticleSystem*                        SpawnParticles;                                    // 0x23C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CharacterElementalParticles;                       // 0x23C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AllowHeadshot;                                     // 0x23D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A0D[0x7];                                     // 0x23D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  TC_RangedWeapon;                                   // 0x23D8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*               HeadshotParticleSystemComp;                        // 0x23F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           Additive_Hit_React_Montage;                        // 0x2400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Death_Normal_Sound;                                // 0x2408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Elemental_Audio_Layer_Sound;                       // 0x2410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Headshot_FX_Socket;                                // 0x2418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class USkeletalMeshComponent*, class UFXSkeletonMeshComponent_C*> AwakenFXSkeletalMeshes;                            // 0x2420(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class UStaticMeshComponent*, class UFXStaticMeshComponent_C*> AwakenFXStaticMeshes;                              // 0x2470(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                         AwokenMaxDistance;                                 // 0x24C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AwakenDuration;                                    // 0x24C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           DestroyAwakenFXTimer;                              // 0x24C8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class USkeletalMeshComponent*, class UFXSkeletonMeshComponent_C*> BuildingHitFXSkeletalMeshes;                       // 0x24D0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<class UStaticMeshComponent*, class UFXStaticMeshComponent_C*> BuildingHitFXStaticMeshes;                         // 0x2520(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                         BuildingHitDuration;                               // 0x2570(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A0E[0x4];                                     // 0x2574(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           DestroyBuildingHitFXTimer;                         // 0x2578(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UFXSkeletonMeshComponent_C*             TempFXSkeletalMesh;                                // 0x2580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>         RegisteredSkeletalMeshesForEffects;                // 0x2588(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>           RegisteredStaticMeshesForEffects;                  // 0x2598(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          HasGlowColorsAssigned;                             // 0x25A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          SpawnInTimelineCompletedSuccessfully;              // 0x25A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A0F[0x6];                                     // 0x25AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CharacterSpawnInSafetyCheckHandle;                 // 0x25B0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       Previous_MID;                                      // 0x25B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UParticleSystem*                        CharacterAmbientParticlesTemplate;                 // 0x25C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CharacterAmbientParticles;                         // 0x25D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 DuplicateCharacterMesh;                            // 0x25D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               DuplicateCharacterMID;                             // 0x25E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                        Auxillary_Objects;                                 // 0x25E8(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class UObject*>                        Duplicate_Auxillary_Objects;                       // 0x25F8(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UParticleSystemComponent*               MinibossPSComponent;                               // 0x2608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CharacterParticlesMaxDrawDistance;                 // 0x2610(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A10[0x4];                                     // 0x2614(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPhysicalMaterial*>              Original_Phys_Material;                            // 0x2618(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       Previous_MID_AuxObjs;                              // 0x2628(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         Restoring_Array_Index;                             // 0x2638(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseHeadShotFX;                                     // 0x263C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5A11[0x3];                                     // 0x263D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Death_Dematerialize_Sound;                         // 0x2640(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             HeadShot_Sound;                                    // 0x2648(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AdditiveHitReactRetriggerDelay;                    // 0x2650(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EnemyPawn_Parent_Deimos(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FLinearColor& Temp_struct_Variable, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, int32 Temp_int_Variable_2, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FLinearColor& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool Temp_bool_Variable_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, float K2Node_Event_Damage_2, struct FGameplayTagContainer& K2Node_Event_DamageTags_2, const struct FVector& K2Node_Event_Momentum_2, struct FHitResult& K2Node_Event_HitInfo_2, class AFortPawn* K2Node_Event_InstigatedBy_1, class AActor* K2Node_Event_DamageCauser_1, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext_2, EFortDamageZone CallFunc_GetDamageZone_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_1, const struct FVector& K2Node_CustomEvent_RiftLocationWS_2, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& K2Node_CustomEvent_RiftLocationWS_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& K2Node_CustomEvent_RiftLocationWS, bool CallFunc_IsDedicatedServer_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 Temp_int_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class ABuildingRift* K2Node_DynamicCast_AsBuilding_Rift, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_BooleanAND_ReturnValue, float K2Node_Event_Damage_1, struct FGameplayTagContainer& K2Node_Event_DamageTags_1, const struct FVector& K2Node_Event_Momentum_1, struct FHitResult& K2Node_Event_HitInfo_1, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext_1, class AFortProjectileBase* K2Node_DynamicCast_AsFort_Projectile_Base, bool K2Node_DynamicCast_bSuccess_1, class AFortWeapon* K2Node_DynamicCast_AsFort_Weapon, bool K2Node_DynamicCast_bSuccess_2, EFortDamageZone CallFunc_GetDamageZone_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FLinearColor& K2Node_Select_Default, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable, class USkeletalMeshComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UFXSkeletonMeshComponent_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UStaticMeshComponent* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class UFXStaticMeshComponent_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_Option_B___If_false__use_Option_A_Variable, bool CallFunc_WeaponDataHasAnyMatchingGameplayTags_ReturnValue, const struct FVector& K2Node_Select_Default_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class UStaticMeshComponent* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_LessEqual_IntInt_ReturnValue_3, bool CallFunc_IsDedicatedServer_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, float K2Node_Event_Damage, struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, struct FHitResult& K2Node_Event_HitInfo, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, bool K2Node_Event_bPlayerPlaced, bool CallFunc_ShouldApplyBuildingHitEffect_ReturnValue);
	void OnBuildingHitPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, const struct FGameplayEffectContextHandle& EffectContext, bool bPlayerPlaced);
	void DestroyBuildingHitEffect();
	void AdditiveHitReactDelay();
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnStartedEncounterSpawn();
	void OnFinishedEncounterSpawn();
	void DebugEnemySpawnIn();
	void DespawnEnemy(const struct FVector& RiftLocationWS);
	void PostSpawnIn();
	void SpawnInSafetyCheck();
	void ManualEnemySpawnIn(const struct FVector& RiftLocationWS);
	void ManualDespawnEnemy(const struct FVector& RiftLocationWS);
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveBeginPlay();
	void OnEndDance();
	void OnBeginDance();
	void EnemySpawnInTL__Spawn__EventFunc();
	void EnemySpawnInTL__UpdateFunc();
	void EnemySpawnInTL__FinishedFunc();
	void Enemy_Spawn_Out_TL__UpdateFunc();
	void Enemy_Spawn_Out_TL__FinishedFunc();
	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue);
	void SetVectorParameterOnAllCharacterMIDs(class FName Parameter_Name, const struct FVector& Vector_Value, bool Propagate_to_Auxiliary_Meshes, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, class UMeshComponent* K2Node_DynamicCast_AsMesh_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UObject* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_2, class UMeshComponent* K2Node_DynamicCast_AsMesh_Component_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_3);
	void SetScalarParameterOnAllCharacterMIDs(class FName Parameter_Name, float Scalar_Value, bool AlsoModifyOriginalMIDs, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UObject* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class UMeshComponent* K2Node_DynamicCast_AsMesh_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_4, class UObject* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_3, class UMeshComponent* K2Node_DynamicCast_AsMesh_Component_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_1);
	void PlayAdditiveHitReacts(const struct FVector& Hit_Direction, class UAnimMontage* Anim_Montage);
	void SpawnParticleSystemOnCharacterMesh(class UParticleSystem* ParticleSystemTemplate, class UParticleSystemComponent* ParticleSystemComponentReferenceVar, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TArray<struct FParticleSysParam>& InstanceParameters, bool AutoActivate, bool AutoDestroy, bool AbsoluteLocation, bool AbsoluteRotation, bool AbsoluteScale, class UParticleSystemComponent** PSComponentReference, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
	void CharacterSpawnInSafetyCheck();
	void ApplyBuildingHitEffectToSkeletalMesh(class USkeletalMeshComponent* Param_Mesh, class UFXSkeletonMeshComponent_C* FXSkeletalMesh, bool CallFunc_IsValid_ReturnValue, class UFXSkeletonMeshComponent_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, struct FTransform& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue_1, class UFXSkeletonMeshComponent_C* CallFunc_AddComponent_ReturnValue);
	void ApplyBuildingHitEffectToStaticMesh(class UStaticMeshComponent* Param_Mesh, class UFXStaticMeshComponent_C* FXStaticMesh, bool CallFunc_IsValid_ReturnValue, class UFXStaticMeshComponent_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, struct FTransform& Temp_struct_Variable, class UFXStaticMeshComponent_C* CallFunc_AddComponent_ReturnValue);
	void RegisterEffectSkeletalMesh(class USkeletalMeshComponent* Param_Mesh, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void RegisterEffectStaticMesh(class UStaticMeshComponent* Param_Mesh, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void ApplyAwakenEffectToSkeletalMesh(class USkeletalMeshComponent* Param_Mesh, class UFXSkeletonMeshComponent_C* FXSkeletalMesh, bool CallFunc_IsValid_ReturnValue, class UFXSkeletonMeshComponent_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, struct FTransform& Temp_struct_Variable, class UFXSkeletonMeshComponent_C* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ApplyAwakenEffectToStaticMesh(class UStaticMeshComponent* Param_Mesh, class UFXStaticMeshComponent_C* FXStaticMesh, bool CallFunc_IsValid_ReturnValue, class UFXStaticMeshComponent_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, struct FTransform& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue_1, class UFXStaticMeshComponent_C* CallFunc_AddComponent_ReturnValue);
	void DeregisterEffectStaticMesh(class UStaticMeshComponent* Param_Mesh, bool CallFunc_IsValid_ReturnValue, class UFXStaticMeshComponent_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFXStaticMeshComponent_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Map_Remove_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue);
	void DeregisterEffectSkeletalMesh(class USkeletalMeshComponent* Param_Mesh, bool CallFunc_IsValid_ReturnValue, class UFXSkeletonMeshComponent_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Map_Remove_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue, class UFXSkeletonMeshComponent_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EnemyPawn_Parent_Deimos_C">();
	}
	static class AEnemyPawn_Parent_Deimos_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEnemyPawn_Parent_Deimos_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(AEnemyPawn_Parent_Deimos_C) == 0x000010, "Wrong alinment on AEnemyPawn_Parent_Deimos_C");
static_assert(sizeof(AEnemyPawn_Parent_Deimos_C) == 0x002660, "Wrong size on AEnemyPawn_Parent_Deimos_C");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, UberGraphFrame) == 0x002340, "Member 'AEnemyPawn_Parent_Deimos_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, WeaponCapsuleCollision) == 0x002348, "Member 'AEnemyPawn_Parent_Deimos_C::WeaponCapsuleCollision' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, Elemental_Layer_Audio_Loop) == 0x002350, "Member 'AEnemyPawn_Parent_Deimos_C::Elemental_Layer_Audio_Loop' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, Enemy_Spawn_Out_TL_ColorFadeOutTrack_37A083E44F5772C5FFF36680D2AD7D94) == 0x002358, "Member 'AEnemyPawn_Parent_Deimos_C::Enemy_Spawn_Out_TL_ColorFadeOutTrack_37A083E44F5772C5FFF36680D2AD7D94' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, Enemy_Spawn_Out_TL_FadeInTrack_37A083E44F5772C5FFF36680D2AD7D94) == 0x00235C, "Member 'AEnemyPawn_Parent_Deimos_C::Enemy_Spawn_Out_TL_FadeInTrack_37A083E44F5772C5FFF36680D2AD7D94' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, Enemy_Spawn_Out_TL__Direction_37A083E44F5772C5FFF36680D2AD7D94) == 0x002360, "Member 'AEnemyPawn_Parent_Deimos_C::Enemy_Spawn_Out_TL__Direction_37A083E44F5772C5FFF36680D2AD7D94' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, Enemy_Spawn_Out_TL) == 0x002368, "Member 'AEnemyPawn_Parent_Deimos_C::Enemy_Spawn_Out_TL' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, EnemySpawnInTL_ColorFadeOutTrack_515E6B424789F427A1B9ACAD857FFF5D) == 0x002370, "Member 'AEnemyPawn_Parent_Deimos_C::EnemySpawnInTL_ColorFadeOutTrack_515E6B424789F427A1B9ACAD857FFF5D' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, EnemySpawnInTL_FadeInTrack_515E6B424789F427A1B9ACAD857FFF5D) == 0x002374, "Member 'AEnemyPawn_Parent_Deimos_C::EnemySpawnInTL_FadeInTrack_515E6B424789F427A1B9ACAD857FFF5D' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, EnemySpawnInTL__Direction_515E6B424789F427A1B9ACAD857FFF5D) == 0x002378, "Member 'AEnemyPawn_Parent_Deimos_C::EnemySpawnInTL__Direction_515E6B424789F427A1B9ACAD857FFF5D' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, EnemySpawnInTL) == 0x002380, "Member 'AEnemyPawn_Parent_Deimos_C::EnemySpawnInTL' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, SpawnParticlesTransform) == 0x002390, "Member 'AEnemyPawn_Parent_Deimos_C::SpawnParticlesTransform' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, SpawnParticles) == 0x0023C0, "Member 'AEnemyPawn_Parent_Deimos_C::SpawnParticles' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, CharacterElementalParticles) == 0x0023C8, "Member 'AEnemyPawn_Parent_Deimos_C::CharacterElementalParticles' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, AllowHeadshot) == 0x0023D0, "Member 'AEnemyPawn_Parent_Deimos_C::AllowHeadshot' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, TC_RangedWeapon) == 0x0023D8, "Member 'AEnemyPawn_Parent_Deimos_C::TC_RangedWeapon' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, HeadshotParticleSystemComp) == 0x0023F8, "Member 'AEnemyPawn_Parent_Deimos_C::HeadshotParticleSystemComp' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, Additive_Hit_React_Montage) == 0x002400, "Member 'AEnemyPawn_Parent_Deimos_C::Additive_Hit_React_Montage' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, Death_Normal_Sound) == 0x002408, "Member 'AEnemyPawn_Parent_Deimos_C::Death_Normal_Sound' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, Elemental_Audio_Layer_Sound) == 0x002410, "Member 'AEnemyPawn_Parent_Deimos_C::Elemental_Audio_Layer_Sound' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, Headshot_FX_Socket) == 0x002418, "Member 'AEnemyPawn_Parent_Deimos_C::Headshot_FX_Socket' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, AwakenFXSkeletalMeshes) == 0x002420, "Member 'AEnemyPawn_Parent_Deimos_C::AwakenFXSkeletalMeshes' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, AwakenFXStaticMeshes) == 0x002470, "Member 'AEnemyPawn_Parent_Deimos_C::AwakenFXStaticMeshes' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, AwokenMaxDistance) == 0x0024C0, "Member 'AEnemyPawn_Parent_Deimos_C::AwokenMaxDistance' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, AwakenDuration) == 0x0024C4, "Member 'AEnemyPawn_Parent_Deimos_C::AwakenDuration' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, DestroyAwakenFXTimer) == 0x0024C8, "Member 'AEnemyPawn_Parent_Deimos_C::DestroyAwakenFXTimer' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, BuildingHitFXSkeletalMeshes) == 0x0024D0, "Member 'AEnemyPawn_Parent_Deimos_C::BuildingHitFXSkeletalMeshes' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, BuildingHitFXStaticMeshes) == 0x002520, "Member 'AEnemyPawn_Parent_Deimos_C::BuildingHitFXStaticMeshes' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, BuildingHitDuration) == 0x002570, "Member 'AEnemyPawn_Parent_Deimos_C::BuildingHitDuration' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, DestroyBuildingHitFXTimer) == 0x002578, "Member 'AEnemyPawn_Parent_Deimos_C::DestroyBuildingHitFXTimer' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, TempFXSkeletalMesh) == 0x002580, "Member 'AEnemyPawn_Parent_Deimos_C::TempFXSkeletalMesh' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, RegisteredSkeletalMeshesForEffects) == 0x002588, "Member 'AEnemyPawn_Parent_Deimos_C::RegisteredSkeletalMeshesForEffects' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, RegisteredStaticMeshesForEffects) == 0x002598, "Member 'AEnemyPawn_Parent_Deimos_C::RegisteredStaticMeshesForEffects' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, HasGlowColorsAssigned) == 0x0025A8, "Member 'AEnemyPawn_Parent_Deimos_C::HasGlowColorsAssigned' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, SpawnInTimelineCompletedSuccessfully) == 0x0025A9, "Member 'AEnemyPawn_Parent_Deimos_C::SpawnInTimelineCompletedSuccessfully' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, CharacterSpawnInSafetyCheckHandle) == 0x0025B0, "Member 'AEnemyPawn_Parent_Deimos_C::CharacterSpawnInSafetyCheckHandle' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, Previous_MID) == 0x0025B8, "Member 'AEnemyPawn_Parent_Deimos_C::Previous_MID' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, CharacterAmbientParticlesTemplate) == 0x0025C8, "Member 'AEnemyPawn_Parent_Deimos_C::CharacterAmbientParticlesTemplate' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, CharacterAmbientParticles) == 0x0025D0, "Member 'AEnemyPawn_Parent_Deimos_C::CharacterAmbientParticles' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, DuplicateCharacterMesh) == 0x0025D8, "Member 'AEnemyPawn_Parent_Deimos_C::DuplicateCharacterMesh' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, DuplicateCharacterMID) == 0x0025E0, "Member 'AEnemyPawn_Parent_Deimos_C::DuplicateCharacterMID' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, Auxillary_Objects) == 0x0025E8, "Member 'AEnemyPawn_Parent_Deimos_C::Auxillary_Objects' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, Duplicate_Auxillary_Objects) == 0x0025F8, "Member 'AEnemyPawn_Parent_Deimos_C::Duplicate_Auxillary_Objects' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, MinibossPSComponent) == 0x002608, "Member 'AEnemyPawn_Parent_Deimos_C::MinibossPSComponent' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, CharacterParticlesMaxDrawDistance) == 0x002610, "Member 'AEnemyPawn_Parent_Deimos_C::CharacterParticlesMaxDrawDistance' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, Original_Phys_Material) == 0x002618, "Member 'AEnemyPawn_Parent_Deimos_C::Original_Phys_Material' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, Previous_MID_AuxObjs) == 0x002628, "Member 'AEnemyPawn_Parent_Deimos_C::Previous_MID_AuxObjs' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, Restoring_Array_Index) == 0x002638, "Member 'AEnemyPawn_Parent_Deimos_C::Restoring_Array_Index' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, UseHeadShotFX) == 0x00263C, "Member 'AEnemyPawn_Parent_Deimos_C::UseHeadShotFX' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, Death_Dematerialize_Sound) == 0x002640, "Member 'AEnemyPawn_Parent_Deimos_C::Death_Dematerialize_Sound' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, HeadShot_Sound) == 0x002648, "Member 'AEnemyPawn_Parent_Deimos_C::HeadShot_Sound' has a wrong offset!");
static_assert(offsetof(AEnemyPawn_Parent_Deimos_C, AdditiveHitReactRetriggerDelay) == 0x002650, "Member 'AEnemyPawn_Parent_Deimos_C::AdditiveHitReactRetriggerDelay' has a wrong offset!");

}

