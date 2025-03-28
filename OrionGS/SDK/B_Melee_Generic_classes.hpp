#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Melee_Generic

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Melee_Generic.B_Melee_Generic_C
// 0x0138 (0x0E60 - 0x0D28)
class AB_Melee_Generic_C final  : public AFortWeapon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0D28(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               IdleFX;                                            // 0x0D30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               SwingFX;                                           // 0x0D38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               AnimTrial;                                         // 0x0D40(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               MeleeHeavy_PSC;                                    // 0x0D48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UParticleSystem*                        IdleFX_Template;                                   // 0x0D50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Has_Idle_Effect;                                   // 0x0D58(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	uint8                                         Pad_6F50[0x7];                                     // 0x0D59(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Idle_Effect;                                       // 0x0D60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UParticleSystemComponent*               Idle_Effect_Component;                             // 0x0D68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class FName                                   IdleFXAttachSocket;                                // 0x0D70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EAttachmentRule                               IdleFX_Location_Rule;                              // 0x0D78(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachmentRule                               Idle_FX_Rotation_Rule;                             // 0x0D79(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachmentRule                               Idle_FX_Scale_Rule;                                // 0x0D7A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F51[0x5];                                     // 0x0D7B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Swing_FX_Template;                                 // 0x0D80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Has_Swing_Effect;                                  // 0x0D88(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	uint8                                         Pad_6F52[0x7];                                     // 0x0D89(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Swing_Effect;                                      // 0x0D90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UParticleSystemComponent*               Swing_Effect_Component;                            // 0x0D98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class FName                                   SwingFXSocket;                                     // 0x0DA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EAttachmentRule                               SwingFX_Location_Rule;                             // 0x0DA8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachmentRule                               Swing_FX_Rotation_Rule;                            // 0x0DA9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachmentRule                               Swing_FX_Scale_Rule;                               // 0x0DAA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseAnimTrails;                                     // 0x0DAB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_6F53[0x4];                                     // 0x0DAC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Anim_Trail_Template;                               // 0x0DB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   OverrideFirstSocketName;                           // 0x0DB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   OverrideSecond_Socket_Name;                        // 0x0DC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UParticleSystem*                        AnimTrailsParticles;                               // 0x0DC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               AnimTrail_PSC;                                     // 0x0DD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class FName                                   FirstSocketName;                                   // 0x0DD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   Second_Socket_Name;                                // 0x0DE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Width;                                             // 0x0DE8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_6F54[0x4];                                     // 0x0DEC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        MeleeHeavy_ParticleSystem;                         // 0x0DF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WeaponDurabilityDestroyEffect;                     // 0x0DF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WeaponDurabilityDestroyEffectIcon;                 // 0x0E00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseDestroyEffect;                                  // 0x0E08(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F55[0x7];                                     // 0x0E09(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAnimMontage*>                   PokeAnimations;                                    // 0x0E10(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UParticleSystemComponent*               Alteration_Ambient_PS;                             // 0x0E20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class USoundBase*                             MeleeHeavy_Sound;                                  // 0x0E28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Melee_Heavy_Launch_Gameplay_Cue_Tag_Override;      // 0x0E30(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Melee_Heavy_Impact_Gameplay_Cue_Tag_Override;      // 0x0E38(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Effects_Color_Level;                               // 0x0E40(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F56[0x4];                                     // 0x0E4C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundAttenuation*                      MeleeHeavySoundAttenuationSettings;                // 0x0E50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundConcurrency*                      MeleeHeavySoundConcurrencySettings;                // 0x0E58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Melee_Generic(int32 EntryPoint, TDelegate<void(class UObject* Loaded)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_Event_First_Right, bool K2Node_Event_First_Left, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, struct FHitResult& K2Node_Event_HitResult, EPhysicalSurface K2Node_Event_ImpactPhysicalSurface, class UFXSystemComponent* K2Node_Event_SpawnedPSC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue_1, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_2, float CallFunc_GetPI_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_GetInstigator_ReturnValue_3, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_3, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_3, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue_2, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue_1, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue_1, const struct FRotator& CallFunc_MakeRotFromXY_ReturnValue, const struct FFortCosmeticModification& K2Node_Event_CosmeticMod, bool CallFunc_IsAssetNull_ReturnValue, bool K2Node_Event_bVisible, bool K2Node_Event_bSetForLocalControllerOnly, bool CallFunc_IsValid_ReturnValue_3, class UObject* Temp_object_Variable, class UObject* K2Node_CustomEvent_Loaded, class UParticleSystem* K2Node_DynamicCast_AsParticle_System, bool K2Node_DynamicCast_bSuccess_4, bool Temp_bool_Variable, const struct FVector& K2Node_Select_Default, const struct FHitResult& CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class UFortWeaponItemDefinition* CallFunc_GetWeaponData_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, class UTexture2D* CallFunc_GetOrLoadSynchronously_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class APawn* CallFunc_GetInstigator_ReturnValue_4, class APlayerPawn_Generic_Parent_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent, bool K2Node_DynamicCast_bSuccess_5, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_4, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_4, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float CallFunc_VSize_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_3, bool CallFunc_DoesSocketExist_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void OnWeaponDetached();
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod);
	void OnWeaponAttached();
	void OnEquippedWeaponDestory();
	void OnPlayImpactFX(struct FHitResult& HitResult, EPhysicalSurface ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC);
	void PlayRClickImpacts();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void ReceiveBeginPlay();
	void MeleeSwingLeft_End();
	void MeleeSwingRight_End();
	void FootStepRight();
	void FootStepLeft();
	void MeleeSwingLeft(bool First_Left);
	void MeleeSwingRight(bool First_Right);
	void OnLoaded_CB594210420542B302428F8181D85E48(class UObject* Loaded);
	void UserConstructionScript();
	void SetWpnRarity(EFortRarity Temp_byte_Variable, uint8 Temp_byte_Variable_1, uint8 Temp_byte_Variable_2, uint8 Temp_byte_Variable_3, uint8 Temp_byte_Variable_4, uint8 Temp_byte_Variable_5, uint8 Temp_byte_Variable_6, uint8 Temp_byte_Variable_7, uint8 Temp_byte_Variable_8, class UFortWeaponItemDefinition* CallFunc_GetWeaponData_ReturnValue, EFortRarity CallFunc_GetRarity_ReturnValue, uint8 K2Node_Select_Default, float CallFunc_Conv_ByteToFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue);
	void SetActiveAlterationIdleParticles(bool Active, bool Reset, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void PlayCQCPickaxeEnemyAudio(const struct FHitResult& Hit_Result, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class APawn* CallFunc_GetInstigator_ReturnValue, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue, bool CallFunc_IsValid_ReturnValue, EFortTeamAffiliation CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Melee_Effect_Color(struct FVector* Melee_Color_Set);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Melee_Generic_C">();
	}
	static class AB_Melee_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Melee_Generic_C>();
	}
};
static_assert(alignof(AB_Melee_Generic_C) == 0x000008, "Wrong alinment on AB_Melee_Generic_C");
static_assert(sizeof(AB_Melee_Generic_C) == 0x000E60, "Wrong size on AB_Melee_Generic_C");
static_assert(offsetof(AB_Melee_Generic_C, UberGraphFrame) == 0x000D28, "Member 'AB_Melee_Generic_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, IdleFX) == 0x000D30, "Member 'AB_Melee_Generic_C::IdleFX' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, SwingFX) == 0x000D38, "Member 'AB_Melee_Generic_C::SwingFX' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, AnimTrial) == 0x000D40, "Member 'AB_Melee_Generic_C::AnimTrial' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, MeleeHeavy_PSC) == 0x000D48, "Member 'AB_Melee_Generic_C::MeleeHeavy_PSC' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, IdleFX_Template) == 0x000D50, "Member 'AB_Melee_Generic_C::IdleFX_Template' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Has_Idle_Effect) == 0x000D58, "Member 'AB_Melee_Generic_C::Has_Idle_Effect' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Idle_Effect) == 0x000D60, "Member 'AB_Melee_Generic_C::Idle_Effect' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Idle_Effect_Component) == 0x000D68, "Member 'AB_Melee_Generic_C::Idle_Effect_Component' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, IdleFXAttachSocket) == 0x000D70, "Member 'AB_Melee_Generic_C::IdleFXAttachSocket' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, IdleFX_Location_Rule) == 0x000D78, "Member 'AB_Melee_Generic_C::IdleFX_Location_Rule' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Idle_FX_Rotation_Rule) == 0x000D79, "Member 'AB_Melee_Generic_C::Idle_FX_Rotation_Rule' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Idle_FX_Scale_Rule) == 0x000D7A, "Member 'AB_Melee_Generic_C::Idle_FX_Scale_Rule' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Swing_FX_Template) == 0x000D80, "Member 'AB_Melee_Generic_C::Swing_FX_Template' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Has_Swing_Effect) == 0x000D88, "Member 'AB_Melee_Generic_C::Has_Swing_Effect' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Swing_Effect) == 0x000D90, "Member 'AB_Melee_Generic_C::Swing_Effect' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Swing_Effect_Component) == 0x000D98, "Member 'AB_Melee_Generic_C::Swing_Effect_Component' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, SwingFXSocket) == 0x000DA0, "Member 'AB_Melee_Generic_C::SwingFXSocket' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, SwingFX_Location_Rule) == 0x000DA8, "Member 'AB_Melee_Generic_C::SwingFX_Location_Rule' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Swing_FX_Rotation_Rule) == 0x000DA9, "Member 'AB_Melee_Generic_C::Swing_FX_Rotation_Rule' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Swing_FX_Scale_Rule) == 0x000DAA, "Member 'AB_Melee_Generic_C::Swing_FX_Scale_Rule' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, UseAnimTrails) == 0x000DAB, "Member 'AB_Melee_Generic_C::UseAnimTrails' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Anim_Trail_Template) == 0x000DB0, "Member 'AB_Melee_Generic_C::Anim_Trail_Template' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, OverrideFirstSocketName) == 0x000DB8, "Member 'AB_Melee_Generic_C::OverrideFirstSocketName' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, OverrideSecond_Socket_Name) == 0x000DC0, "Member 'AB_Melee_Generic_C::OverrideSecond_Socket_Name' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, AnimTrailsParticles) == 0x000DC8, "Member 'AB_Melee_Generic_C::AnimTrailsParticles' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, AnimTrail_PSC) == 0x000DD0, "Member 'AB_Melee_Generic_C::AnimTrail_PSC' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, FirstSocketName) == 0x000DD8, "Member 'AB_Melee_Generic_C::FirstSocketName' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Second_Socket_Name) == 0x000DE0, "Member 'AB_Melee_Generic_C::Second_Socket_Name' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Width) == 0x000DE8, "Member 'AB_Melee_Generic_C::Width' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, MeleeHeavy_ParticleSystem) == 0x000DF0, "Member 'AB_Melee_Generic_C::MeleeHeavy_ParticleSystem' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, WeaponDurabilityDestroyEffect) == 0x000DF8, "Member 'AB_Melee_Generic_C::WeaponDurabilityDestroyEffect' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, WeaponDurabilityDestroyEffectIcon) == 0x000E00, "Member 'AB_Melee_Generic_C::WeaponDurabilityDestroyEffectIcon' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, UseDestroyEffect) == 0x000E08, "Member 'AB_Melee_Generic_C::UseDestroyEffect' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, PokeAnimations) == 0x000E10, "Member 'AB_Melee_Generic_C::PokeAnimations' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Alteration_Ambient_PS) == 0x000E20, "Member 'AB_Melee_Generic_C::Alteration_Ambient_PS' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, MeleeHeavy_Sound) == 0x000E28, "Member 'AB_Melee_Generic_C::MeleeHeavy_Sound' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Melee_Heavy_Launch_Gameplay_Cue_Tag_Override) == 0x000E30, "Member 'AB_Melee_Generic_C::Melee_Heavy_Launch_Gameplay_Cue_Tag_Override' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Melee_Heavy_Impact_Gameplay_Cue_Tag_Override) == 0x000E38, "Member 'AB_Melee_Generic_C::Melee_Heavy_Impact_Gameplay_Cue_Tag_Override' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, Effects_Color_Level) == 0x000E40, "Member 'AB_Melee_Generic_C::Effects_Color_Level' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, MeleeHeavySoundAttenuationSettings) == 0x000E50, "Member 'AB_Melee_Generic_C::MeleeHeavySoundAttenuationSettings' has a wrong offset!");
static_assert(offsetof(AB_Melee_Generic_C, MeleeHeavySoundConcurrencySettings) == 0x000E58, "Member 'AB_Melee_Generic_C::MeleeHeavySoundConcurrencySettings' has a wrong offset!");

}

