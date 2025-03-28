#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_Petrol_Pickup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "BGA_HeldObject_Parent_classes.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BGA_Petrol_Pickup.BGA_Petrol_Pickup_C
// 0x0370 (0x0D20 - 0x09B0)
class ABGA_Petrol_Pickup_C final  : public ABGA_HeldObject_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BGA_Petrol_Pickup_C;                // 0x09B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortItemEntryComponent*                FortItemEntry;                                     // 0x09B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   PetrolCan;                                         // 0x09C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x09C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x09D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*            PlayerController;                                  // 0x09D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldExplode;                                     // 0x09E0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_7307[0x7];                                     // 0x09E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UClass*>                         ExplodeDamageGE;                                   // 0x09E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class AFortPawn*                              ExplodeInstigator;                                 // 0x09F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         TargetedActors;                                    // 0x0A00(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                 GE_Explode;                                        // 0x0A10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Explode;                                        // 0x0A18(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      ObjectArray;                                       // 0x0A20(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FScalableFloat                         SpawnedProjectileMinSpeed;                         // 0x0A30(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         SpawnedProjectileMaxSpeed;                         // 0x0A58(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         ConeHalfAngleInDegrees;                            // 0x0A80(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 CurieBGAtoSpawn;                                   // 0x0AA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CurieFireballsToSpawn;                             // 0x0AB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         FireBallsToSpawn;                                  // 0x0AB8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortWorldItemDefinition*               WeaponItemDefinition;                              // 0x0AE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPickup*                            WeaponPickupToGrant;                               // 0x0AE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             LastHit;                                           // 0x0AF0(0x008C)(Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_7308[0x4];                                     // 0x0B7C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           FuseTimerHandle;                                   // 0x0B80(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         FuseMinDuration;                                   // 0x0B88(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         FuseMaxDuration;                                   // 0x0BB0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGuid                                  HeldItemGUID;                                      // 0x0BD8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IFortInventoryOwnerInterface> HeldItemInventoryInterface;                        // 0x0BE8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsAttachedToWeapon;                                // 0x0BF8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Dropped;                                           // 0x0BF9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7309[0x2];                                     // 0x0BFA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           GC_OnFire;                                         // 0x0BFC(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_730A[0x4];                                     // 0x0C04(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         ExplosionRadius;                                   // 0x0C08(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         VehicleDamage;                                     // 0x0C30(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortWeapon*                            WeaponAttachedTo;                                  // 0x0C58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Refuel;                                         // 0x0C60(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      SpawnCollisionCheck_ObjectTypes;                   // 0x0C68(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         Max_Spawn_Z;                                       // 0x0C78(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SpawnCollisionBlocked;                             // 0x0C7C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_730B[0x3];                                     // 0x0C7D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                VelocityAfterVehicleOverlap;                       // 0x0C80(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_730C[0x4];                                     // 0x0C8C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         HotfixExplodeVehicleImpulse;                       // 0x0C90(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         HotfixExplodeSpinThrust;                           // 0x0CB8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 GE_ExplodePlayerDamage;                            // 0x0CE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_ExplodeVehicleDamage;                           // 0x0CE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FuseLit;                                           // 0x0CF0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_730D[0x3];                                     // 0x0CF1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinSpeedOfNoStickBounce;                           // 0x0CF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             FailedInteractSound;                               // 0x0CF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  Tag_FailedInteract_InventoryIsFull;                // 0x0D00(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BGA_Petrol_Pickup(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Variable_1, class AFortPawn* K2Node_Event_InteractingPawn, EInteractionBeingAttempted K2Node_Event_InteractionBeingAttempted, ESubGame CallFunc_GetSubGame_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, TArray<EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class AFortAthenaVehicle* K2Node_DynamicCast_AsFort_Athena_Vehicle, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool Temp_bool_IsClosed_Variable_1, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, class AFortPawn* K2Node_CustomEvent_Explodeinstigator, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class ABuildingGameplayActor* CallFunc_SpawnBuildingGameplayActor_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_2, float K2Node_Event_Damage_1, struct FGameplayTagContainer& K2Node_Event_DamageTags_1, const struct FVector& K2Node_Event_Momentum_1, struct FHitResult& K2Node_Event_HitInfo_1, class AController* K2Node_Event_InstigatedBy_1, class AActor* K2Node_Event_DamageCauser_1, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_HasItem_ReturnValue, bool CallFunc_IsCurieActive_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetValueAtLevel_ReturnValue_3, float CallFunc_GetValueAtLevel_ReturnValue_4, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_RemoveItem_ReturnValue, TScriptInterface<class IFortInventoryOwnerInterface> K2Node_CustomEvent_InventoryInterface, const struct FGuid& K2Node_CustomEvent_GUID, class AFortWeapon* K2Node_CustomEvent_WeaponAttachedTo, bool Temp_bool_Has_Been_Initd_Variable_1, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, TArray<class AActor*>& Temp_object_Variable, float CallFunc_GetValueAtLevel_ReturnValue_5, float CallFunc_GetValueAtLevel_ReturnValue_6, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, TArray<class AActor*>& CallFunc_ApplyGameplayEffectToActorsInRange_IgnoredActors, int32 CallFunc_Array_Length_ReturnValue_1, int32 K2Node_CustomEvent_FuelToAdd, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, const struct FGameplayTagContainer& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_GetLoadedAmmo_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_TrySetLoadedAmmo_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_1, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_AddItemToInventoryOwner_InventoryOwner_CastInput, bool CallFunc_AddItemToInventoryOwner_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, class UClass* K2Node_Select_Default, class AActor* K2Node_Select_Default_1, float CallFunc_GetValueAtLevel_ReturnValue_7, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_1, const struct FVector& CallFunc_CalcVehicleImpulse_Vector, bool CallFunc_IsValid_ReturnValue_6, float CallFunc_GetValueAtLevel_ReturnValue_8, const struct FActiveGameplayEffectHandle& CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 Temp_int_Array_Index_Variable_1, float CallFunc_FMin_ReturnValue, class AActor* CallFunc_Array_Get_Item_1, float CallFunc_RandomFloatInRange_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_CheckBasicActorLineOfSight_In_Line_Of_Sight, float CallFunc_CheckBasicActorLineOfSight_Distance, float CallFunc_RandomFloatInRange_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue_1, struct FHitResult& K2Node_ComponentBoundEvent_ImpactResult, struct FVector& K2Node_ComponentBoundEvent_ImpactVelocity, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_ComponentHasTag_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MirrorVectorByNormal_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_2, bool CallFunc_ActorHasTag_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_VSize_ReturnValue_1, float CallFunc_FMax_ReturnValue_1, class AB_PetrolWeapon_C* K2Node_DynamicCast_AsB_Petrol_Weapon, bool K2Node_DynamicCast_bSuccess_3, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, class AB_PetrolWeapon_C* K2Node_DynamicCast_AsB_Petrol_Weapon_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_7, struct FCurieContainerHandle& K2Node_Event_CurieContainerHandle_1, struct FGameplayTag& K2Node_Event_ElementTag_1, struct FCurieInteractParamsHandle& K2Node_Event_InteractParamsHandle_1, struct FCurieContainerHandle& K2Node_Event_CurieContainerHandle, struct FGameplayTag& K2Node_Event_ElementTag, struct FCurieInteractParamsHandle& K2Node_Event_InteractParamsHandle, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_2, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_RandomFloatInRange_ReturnValue_4, float CallFunc_RandomFloatInRange_ReturnValue_5, float CallFunc_RandomFloatInRange_ReturnValue_6, const struct FVector& CallFunc_MakeVector_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue, float K2Node_Event_Damage, struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_5, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_6, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_7, float CallFunc_Vector_GetAbsMax_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_2, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_OnSameTeam_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnCurieElementInteractBegun_BP(struct FCurieContainerHandle& CurieContainerHandle, struct FGameplayTag& ElementTag, struct FCurieInteractParamsHandle& InteractParamsHandle);
	void OnCurieElementInteract_BP(struct FCurieContainerHandle& CurieContainerHandle, struct FGameplayTag& ElementTag, struct FCurieInteractParamsHandle& InteractParamsHandle);
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity);
	void ReceiveBeginPlay();
	void Refuel(int32 FuelToAdd);
	void _ServerOnly_HideAndDestroy();
	void HideAndDestroy();
	void DropHeldItem();
	void SetHeldItemInfo(TScriptInterface<class IFortInventoryOwnerInterface> InventoryInterface, const struct FGuid& Guid, class AFortWeapon* Param_WeaponAttachedTo);
	void ExplodeAndDie();
	void SpawnFireBallsExplodeAndDie();
	void SetFuseAndDrop();
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void SpawnCurieFireballs(class AFortPawn* Param_ExplodeInstigator);
	void ReceiveDestroyed();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn, EInteractionBeingAttempted InteractionBeingAttempted);
	void OnRep_ShouldExplode();
	void OnRep_LastHit(bool CallFunc_IsDedicatedServer_ReturnValue, const struct FGameplayCueParameters& CallFunc_BuildCueParametersFromHitResult_OutCueParameters);
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);
	void CalcVehicleImpulse(class AActor* Vehicle, float Magnitude, struct FVector* Vector, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue);
	bool BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, const struct FFortItemEntry& CallFunc_CreateItemEntry_ReturnValue, int32 CallFunc_CountInventoryOverflowFromAddingItem_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);

	bool BlueprintGetInteractionTime(class AFortPawn* InteractingPawn, float* OutInteractionTime, EInteractionBeingAttempted InteractionBeingAttempted) const;
	class FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, EInteractionBeingAttempted InteractionBeingAttempted) const;
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, EInteractionBeingAttempted InteractionBeingAttempted, ETInteractionType InteractionType, bool CallFunc_Not_PreBool_ReturnValue) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_Petrol_Pickup_C">();
	}
	static class ABGA_Petrol_Pickup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_Petrol_Pickup_C>();
	}
};
static_assert(alignof(ABGA_Petrol_Pickup_C) == 0x000010, "Wrong alinment on ABGA_Petrol_Pickup_C");
static_assert(sizeof(ABGA_Petrol_Pickup_C) == 0x000D20, "Wrong size on ABGA_Petrol_Pickup_C");
static_assert(offsetof(ABGA_Petrol_Pickup_C, UberGraphFrame_BGA_Petrol_Pickup_C) == 0x0009B0, "Member 'ABGA_Petrol_Pickup_C::UberGraphFrame_BGA_Petrol_Pickup_C' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, FortItemEntry) == 0x0009B8, "Member 'ABGA_Petrol_Pickup_C::FortItemEntry' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, PetrolCan) == 0x0009C0, "Member 'ABGA_Petrol_Pickup_C::PetrolCan' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, Sphere) == 0x0009C8, "Member 'ABGA_Petrol_Pickup_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, PlayerPawn) == 0x0009D0, "Member 'ABGA_Petrol_Pickup_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, PlayerController) == 0x0009D8, "Member 'ABGA_Petrol_Pickup_C::PlayerController' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, ShouldExplode) == 0x0009E0, "Member 'ABGA_Petrol_Pickup_C::ShouldExplode' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, ExplodeDamageGE) == 0x0009E8, "Member 'ABGA_Petrol_Pickup_C::ExplodeDamageGE' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, ExplodeInstigator) == 0x0009F8, "Member 'ABGA_Petrol_Pickup_C::ExplodeInstigator' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, TargetedActors) == 0x000A00, "Member 'ABGA_Petrol_Pickup_C::TargetedActors' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, GE_Explode) == 0x000A10, "Member 'ABGA_Petrol_Pickup_C::GE_Explode' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, GC_Explode) == 0x000A18, "Member 'ABGA_Petrol_Pickup_C::GC_Explode' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, ObjectArray) == 0x000A20, "Member 'ABGA_Petrol_Pickup_C::ObjectArray' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, SpawnedProjectileMinSpeed) == 0x000A30, "Member 'ABGA_Petrol_Pickup_C::SpawnedProjectileMinSpeed' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, SpawnedProjectileMaxSpeed) == 0x000A58, "Member 'ABGA_Petrol_Pickup_C::SpawnedProjectileMaxSpeed' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, ConeHalfAngleInDegrees) == 0x000A80, "Member 'ABGA_Petrol_Pickup_C::ConeHalfAngleInDegrees' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, CurieBGAtoSpawn) == 0x000AA8, "Member 'ABGA_Petrol_Pickup_C::CurieBGAtoSpawn' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, CurieFireballsToSpawn) == 0x000AB0, "Member 'ABGA_Petrol_Pickup_C::CurieFireballsToSpawn' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, FireBallsToSpawn) == 0x000AB8, "Member 'ABGA_Petrol_Pickup_C::FireBallsToSpawn' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, WeaponItemDefinition) == 0x000AE0, "Member 'ABGA_Petrol_Pickup_C::WeaponItemDefinition' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, WeaponPickupToGrant) == 0x000AE8, "Member 'ABGA_Petrol_Pickup_C::WeaponPickupToGrant' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, LastHit) == 0x000AF0, "Member 'ABGA_Petrol_Pickup_C::LastHit' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, FuseTimerHandle) == 0x000B80, "Member 'ABGA_Petrol_Pickup_C::FuseTimerHandle' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, FuseMinDuration) == 0x000B88, "Member 'ABGA_Petrol_Pickup_C::FuseMinDuration' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, FuseMaxDuration) == 0x000BB0, "Member 'ABGA_Petrol_Pickup_C::FuseMaxDuration' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, HeldItemGUID) == 0x000BD8, "Member 'ABGA_Petrol_Pickup_C::HeldItemGUID' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, HeldItemInventoryInterface) == 0x000BE8, "Member 'ABGA_Petrol_Pickup_C::HeldItemInventoryInterface' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, IsAttachedToWeapon) == 0x000BF8, "Member 'ABGA_Petrol_Pickup_C::IsAttachedToWeapon' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, Dropped) == 0x000BF9, "Member 'ABGA_Petrol_Pickup_C::Dropped' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, GC_OnFire) == 0x000BFC, "Member 'ABGA_Petrol_Pickup_C::GC_OnFire' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, ExplosionRadius) == 0x000C08, "Member 'ABGA_Petrol_Pickup_C::ExplosionRadius' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, VehicleDamage) == 0x000C30, "Member 'ABGA_Petrol_Pickup_C::VehicleDamage' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, WeaponAttachedTo) == 0x000C58, "Member 'ABGA_Petrol_Pickup_C::WeaponAttachedTo' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, GC_Refuel) == 0x000C60, "Member 'ABGA_Petrol_Pickup_C::GC_Refuel' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, SpawnCollisionCheck_ObjectTypes) == 0x000C68, "Member 'ABGA_Petrol_Pickup_C::SpawnCollisionCheck_ObjectTypes' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, Max_Spawn_Z) == 0x000C78, "Member 'ABGA_Petrol_Pickup_C::Max_Spawn_Z' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, SpawnCollisionBlocked) == 0x000C7C, "Member 'ABGA_Petrol_Pickup_C::SpawnCollisionBlocked' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, VelocityAfterVehicleOverlap) == 0x000C80, "Member 'ABGA_Petrol_Pickup_C::VelocityAfterVehicleOverlap' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, HotfixExplodeVehicleImpulse) == 0x000C90, "Member 'ABGA_Petrol_Pickup_C::HotfixExplodeVehicleImpulse' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, HotfixExplodeSpinThrust) == 0x000CB8, "Member 'ABGA_Petrol_Pickup_C::HotfixExplodeSpinThrust' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, GE_ExplodePlayerDamage) == 0x000CE0, "Member 'ABGA_Petrol_Pickup_C::GE_ExplodePlayerDamage' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, GE_ExplodeVehicleDamage) == 0x000CE8, "Member 'ABGA_Petrol_Pickup_C::GE_ExplodeVehicleDamage' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, FuseLit) == 0x000CF0, "Member 'ABGA_Petrol_Pickup_C::FuseLit' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, MinSpeedOfNoStickBounce) == 0x000CF4, "Member 'ABGA_Petrol_Pickup_C::MinSpeedOfNoStickBounce' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, FailedInteractSound) == 0x000CF8, "Member 'ABGA_Petrol_Pickup_C::FailedInteractSound' has a wrong offset!");
static_assert(offsetof(ABGA_Petrol_Pickup_C, Tag_FailedInteract_InventoryIsFull) == 0x000D00, "Member 'ABGA_Petrol_Pickup_C::Tag_FailedInteract_InventoryIsFull' has a wrong offset!");

}

