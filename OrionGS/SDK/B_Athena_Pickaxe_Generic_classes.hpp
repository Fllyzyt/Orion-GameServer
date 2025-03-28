#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Athena_Pickaxe_Generic

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C
// 0x0070 (0x0E48 - 0x0DD8)
class AB_Athena_Pickaxe_Generic_C final  : public AFortWeaponPickaxeAthena
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0DD8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               MeleeHeavy_PSC;                                    // 0x0DE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	EAttachmentRule                               IdleFX_Location_Rule;                              // 0x0DE8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachmentRule                               Idle_FX_Rotation_Rule;                             // 0x0DE9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachmentRule                               Idle_FX_Scale_Rule;                                // 0x0DEA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachmentRule                               SwingFX_Location_Rule;                             // 0x0DEB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachmentRule                               Swing_FX_Rotation_Rule;                            // 0x0DEC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachmentRule                               Swing_FX_Scale_Rule;                               // 0x0DED(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7511[0x2];                                     // 0x0DEE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        MeleeHeavy_ParticleSystem;                         // 0x0DF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WeaponDurabilityDestroyEffect;                     // 0x0DF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WeaponDurabilityDestroyEffectIcon;                 // 0x0E00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseDestroyEffect;                                  // 0x0E08(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7512[0x7];                                     // 0x0E09(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               Alteration_Ambient_PS;                             // 0x0E10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FVector                                Effects_Color_Level;                               // 0x0E18(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Equipped;                                          // 0x0E24(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEquipPendingInstigator;                           // 0x0E25(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          UseTimeofDayControl;                               // 0x0E26(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Swing_Right_;                                      // 0x0E27(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	class UFXSystemComponent*                     Impact_FX;                                         // 0x0E28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Left_Swing_Rotation;                               // 0x0E30(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               Right_Swing_Rotation;                              // 0x0E3C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_B_Athena_Pickaxe_Generic(int32 EntryPoint, TDelegate<void(class UObject* Loaded)> K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, class UObject* Temp_object_Variable, class UObject* K2Node_CustomEvent_Loaded, class UParticleSystem* K2Node_DynamicCast_AsParticle_System, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, float CallFunc_GetPI_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, int32 Temp_int_Variable_5, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, int32 Temp_int_Variable_8, int32 Temp_int_Variable_9, int32 Temp_int_Variable_10, int32 Temp_int_Variable_11, int32 Temp_int_Variable_12, class FName K2Node_CustomEvent_StatName, int32 K2Node_CustomEvent_StatValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_Event_First_Right, bool K2Node_Event_First_Left, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 Temp_int_Variable_13, int32 Temp_int_Variable_14, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsDedicatedServer_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FFortCosmeticModification& K2Node_Event_CosmeticMod, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsAssetNull_ReturnValue, bool K2Node_Event_bVisible, bool K2Node_Event_bSetForLocalControllerOnly, bool CallFunc_IsValid_ReturnValue, TDelegate<void(class FName StatName, int32 StatValue)> K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Variable_15, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Variable_16, bool CallFunc_IsDedicatedServer_ReturnValue_2, class UFortWeaponItemDefinition* CallFunc_GetWeaponData_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, class FName CallFunc_GetIdleFXSocketName_ReturnValue, class UTexture2D* CallFunc_GetOrLoadSynchronously_ReturnValue, class FName CallFunc_GetSwingFXSocketName_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_2, int32 K2Node_CustomEvent_Watched_Kills, class UFortAsyncAction_CosmeticAdaptiveStatWatcher* CallFunc_WatchCosmeticStat_ReturnValue, class UFXSystemComponent* CallFunc_GetIdleVFXComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UFXSystemComponent* CallFunc_GetIdleVFXComponent_ReturnValue_1, class UFXSystemComponent* CallFunc_GetSwingVFXComponent_ReturnValue, bool CallFunc_GetUseAnimTrailsPSC_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class FName CallFunc_GetAnimTrailsSecondSocketName_ReturnValue, class FName CallFunc_GetAnimTrailsFirstSocketName_ReturnValue, float CallFunc_GetAnimTrailsWidth_ReturnValue, int32 Temp_int_Variable_17, bool CallFunc_GetUseAnimTrailsPSC_ReturnValue_1, int32 Temp_int_Variable_18, class UFXSystemComponent* CallFunc_GetAnimTrailVFXComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class UFXSystemComponent* CallFunc_GetAnimTrailVFXComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, int32 Temp_int_Variable_19, bool K2Node_CustomEvent_bActive, int32 Temp_int_Variable_20, class UFXSystemComponent* CallFunc_GetSwingVFXComponent_ReturnValue_1, class UFXSystemComponent* CallFunc_GetSwingVFXComponent_ReturnValue_2, int32 Temp_int_Variable_21, bool CallFunc_IsValid_ReturnValue_6, int32 Temp_int_Variable_22, class UFXSystemComponent* CallFunc_GetSwingVFXComponent_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_7, class APawn* CallFunc_GetInstigator_ReturnValue_1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_3, int32 Temp_int_Variable_23, bool CallFunc_IsValid_ReturnValue_8, class UFXSystemComponent* CallFunc_GetAnimTrailsPSC_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_2, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_4, class UParticleSystem* CallFunc_GetAnimTrailsPSCTemplate_ReturnValue, class FName CallFunc_GetAnimTrailsFirstSocketName_ReturnValue_1, class FName CallFunc_GetAnimTrailsSecondSocketName_ReturnValue_1, float CallFunc_GetAnimTrailsWidth_ReturnValue_1, class UNiagaraSystem* CallFunc_GetAnimTrailsNiagaraAsset_ReturnValue, class UFXSystemComponent* CallFunc_GetAnimTrailsPSC_ReturnValue_1, bool CallFunc_GetUseAnimTrailsPSC_ReturnValue_2, int32 Temp_int_Variable_24, int32 Temp_int_Variable_25, bool CallFunc_AttachesAnimTrailsToWeapon_ReturnValue, int32 Temp_int_Variable_26, EFortDayPhase K2Node_CustomEvent_CurrentDayPhase, EFortDayPhase K2Node_CustomEvent_PreviousDayPhase, bool K2Node_CustomEvent_bAtCreation, int32 Temp_int_Variable_27, EPhysicalSurface Temp_byte_Variable, bool Temp_bool_Variable, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, EFortDayPhase CallFunc_GetPreviousDayPhase_ReturnValue, struct FHitResult& K2Node_Event_HitResult, EPhysicalSurface K2Node_Event_ImpactPhysicalSurface, class UFXSystemComponent* K2Node_Event_SpawnedPSC, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, int32 K2Node_Select_Default, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FRotator& K2Node_Select_Default_1, class UFXSystemComponent* CallFunc_GetSwingVFXComponent_ReturnValue_4, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class FName Temp_name_Variable, class APawn* CallFunc_GetInstigator_ReturnValue_3, class APlayerPawn_Generic_Parent_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent, bool K2Node_DynamicCast_bSuccess_5, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, bool CallFunc_DoesSocketExist_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void OnPlayImpactFX(struct FHitResult& HitResult, EPhysicalSurface ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC);
	void TODCheck(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation);
	void K2_OnUnEquip();
	void OnInstigatorSet();
	void SwingLeftEnd();
	void SwingRightEnd();
	void SwingLeft();
	void SwingRight();
	void Anim_Trails_Disable();
	void Anim_Trails_Notify(bool bActive);
	void UpdateBasedOnKills(int32 Watched_Kills);
	void HandleKillWatch();
	void OnInitWeaponCosmetics();
	void OnWeaponDetached();
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod);
	void OnWeaponAttached();
	void OnEquippedWeaponDestory();
	void PlayRClickImpacts();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void MeleeSwingLeft_End();
	void MeleeSwingRight_End();
	void FootStepRight();
	void FootStepLeft();
	void MeleeSwingLeft(bool First_Left);
	void MeleeSwingRight(bool First_Right);
	void OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2(class UObject* Loaded);
	void OnStatChanged_F171C56748FEA3E19F93088E968D3E21(class FName StatName, int32 StatValue);
	void UserConstructionScript();
	void SetWpnRarity(EFortRarity Temp_byte_Variable, uint8 Temp_byte_Variable_1, uint8 Temp_byte_Variable_2, uint8 Temp_byte_Variable_3, uint8 Temp_byte_Variable_4, uint8 Temp_byte_Variable_5, uint8 Temp_byte_Variable_6, uint8 Temp_byte_Variable_7, uint8 Temp_byte_Variable_8, class UFortWeaponItemDefinition* CallFunc_GetWeaponData_ReturnValue, EFortRarity CallFunc_GetRarity_ReturnValue, uint8 K2Node_Select_Default, float CallFunc_Conv_ByteToFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue);
	void SetActiveAlterationIdleParticles(bool Active, bool Reset, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void PlayCQCPickaxeEnemyAudio(const struct FHitResult& Hit_Result, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class APawn* CallFunc_GetInstigator_ReturnValue, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue, EFortTeamAffiliation CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void BindSwingAnimTrailEvents(TDelegate<void(bool bActive)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_3, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_4, class APawn* CallFunc_GetInstigator_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_1, const class FString& CallFunc_Conv_ObjectToString_ReturnValue, class APlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_5, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_6, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_7, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_8, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_9, TDelegate<void(bool bActive)> K2Node_CreateDelegate_OutputDelegate_10, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_11, class APawn* CallFunc_GetInstigator_ReturnValue_2, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1);
	void UnbindSwingAnimTrailEvents(TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_3, TDelegate<void(bool bActive)> K2Node_CreateDelegate_OutputDelegate_4, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_5, class APawn* CallFunc_GetInstigator_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_1, class APlayerPawn_Generic_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_ObjectToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_6, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_7, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_8, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_9, TDelegate<void(bool bActive)> K2Node_CreateDelegate_OutputDelegate_10, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_11, class APawn* CallFunc_GetInstigator_ReturnValue_2, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1);
	void Binding_Time_of_Day_Control(bool F_, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, TDelegate<void(EFortDayPhase CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation)> K2Node_CreateDelegate_OutputDelegate, EFortDayPhase CallFunc_GetPreviousDayPhase_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Melee_Effect_Color(struct FVector* Melee_Color_Set);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Athena_Pickaxe_Generic_C">();
	}
	static class AB_Athena_Pickaxe_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Athena_Pickaxe_Generic_C>();
	}
};
static_assert(alignof(AB_Athena_Pickaxe_Generic_C) == 0x000008, "Wrong alinment on AB_Athena_Pickaxe_Generic_C");
static_assert(sizeof(AB_Athena_Pickaxe_Generic_C) == 0x000E48, "Wrong size on AB_Athena_Pickaxe_Generic_C");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, UberGraphFrame) == 0x000DD8, "Member 'AB_Athena_Pickaxe_Generic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, MeleeHeavy_PSC) == 0x000DE0, "Member 'AB_Athena_Pickaxe_Generic_C::MeleeHeavy_PSC' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, IdleFX_Location_Rule) == 0x000DE8, "Member 'AB_Athena_Pickaxe_Generic_C::IdleFX_Location_Rule' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Idle_FX_Rotation_Rule) == 0x000DE9, "Member 'AB_Athena_Pickaxe_Generic_C::Idle_FX_Rotation_Rule' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Idle_FX_Scale_Rule) == 0x000DEA, "Member 'AB_Athena_Pickaxe_Generic_C::Idle_FX_Scale_Rule' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, SwingFX_Location_Rule) == 0x000DEB, "Member 'AB_Athena_Pickaxe_Generic_C::SwingFX_Location_Rule' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Swing_FX_Rotation_Rule) == 0x000DEC, "Member 'AB_Athena_Pickaxe_Generic_C::Swing_FX_Rotation_Rule' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Swing_FX_Scale_Rule) == 0x000DED, "Member 'AB_Athena_Pickaxe_Generic_C::Swing_FX_Scale_Rule' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, MeleeHeavy_ParticleSystem) == 0x000DF0, "Member 'AB_Athena_Pickaxe_Generic_C::MeleeHeavy_ParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, WeaponDurabilityDestroyEffect) == 0x000DF8, "Member 'AB_Athena_Pickaxe_Generic_C::WeaponDurabilityDestroyEffect' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, WeaponDurabilityDestroyEffectIcon) == 0x000E00, "Member 'AB_Athena_Pickaxe_Generic_C::WeaponDurabilityDestroyEffectIcon' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, UseDestroyEffect) == 0x000E08, "Member 'AB_Athena_Pickaxe_Generic_C::UseDestroyEffect' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Alteration_Ambient_PS) == 0x000E10, "Member 'AB_Athena_Pickaxe_Generic_C::Alteration_Ambient_PS' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Effects_Color_Level) == 0x000E18, "Member 'AB_Athena_Pickaxe_Generic_C::Effects_Color_Level' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Equipped) == 0x000E24, "Member 'AB_Athena_Pickaxe_Generic_C::Equipped' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, bEquipPendingInstigator) == 0x000E25, "Member 'AB_Athena_Pickaxe_Generic_C::bEquipPendingInstigator' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, UseTimeofDayControl) == 0x000E26, "Member 'AB_Athena_Pickaxe_Generic_C::UseTimeofDayControl' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Swing_Right_) == 0x000E27, "Member 'AB_Athena_Pickaxe_Generic_C::Swing_Right_' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Impact_FX) == 0x000E28, "Member 'AB_Athena_Pickaxe_Generic_C::Impact_FX' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Left_Swing_Rotation) == 0x000E30, "Member 'AB_Athena_Pickaxe_Generic_C::Left_Swing_Rotation' has a wrong offset!");
static_assert(offsetof(AB_Athena_Pickaxe_Generic_C, Right_Swing_Rotation) == 0x000E3C, "Member 'AB_Athena_Pickaxe_Generic_C::Right_Swing_Rotation' has a wrong offset!");

}

