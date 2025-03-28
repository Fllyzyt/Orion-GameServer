#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Shotgun_DoubleDouble_Knockback

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Shotgun_DoubleDouble_Knockback.GA_Shotgun_DoubleDouble_Knockback_C
// 0x0148 (0x0C00 - 0x0AB8)
class UGA_Shotgun_DoubleDouble_Knockback_C final  : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Distance;                                          // 0x0AC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DistanceMagMod;                                    // 0x0AC4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         Row_ZAdd;                                          // 0x0AC8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_KnockMag;                                      // 0x0AF0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_MaxDistance;                                   // 0x0B18(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_ResetFall;                                     // 0x0B40(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                FinalLaunchVel;                                    // 0x0B68(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4673[0x4];                                     // 0x0B74(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         Row_ZStartOffset;                                  // 0x0B78(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_ZVelMult;                                      // 0x0BA0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  DefaultTags;                                       // 0x0BC8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                 Launcher;                                          // 0x0BE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         VelocityForFX;                                     // 0x0BF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FX_Delay;                                          // 0x0BF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           KnockbackCue;                                      // 0x0BF8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Shotgun_DoubleDouble_Knockback(int32 EntryPoint, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void CheckVel();
	void K2_ActivateAbility();
	void KnockPlayer(float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_3, float CallFunc_GetValueAtLevel_ReturnValue_4, float CallFunc_GetValueAtLevel_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_GetGrantedByEffectContext_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_EffectContextGetEffectCauser_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_DistanceBetweenTwoVectors_Distance, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1, bool CallFunc_HasMatchingGameplayTag_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Shotgun_DoubleDouble_Knockback_C">();
	}
	static class UGA_Shotgun_DoubleDouble_Knockback_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Shotgun_DoubleDouble_Knockback_C>();
	}
};
static_assert(alignof(UGA_Shotgun_DoubleDouble_Knockback_C) == 0x000008, "Wrong alinment on UGA_Shotgun_DoubleDouble_Knockback_C");
static_assert(sizeof(UGA_Shotgun_DoubleDouble_Knockback_C) == 0x000C00, "Wrong size on UGA_Shotgun_DoubleDouble_Knockback_C");
static_assert(offsetof(UGA_Shotgun_DoubleDouble_Knockback_C, UberGraphFrame) == 0x000AB8, "Member 'UGA_Shotgun_DoubleDouble_Knockback_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Shotgun_DoubleDouble_Knockback_C, Distance) == 0x000AC0, "Member 'UGA_Shotgun_DoubleDouble_Knockback_C::Distance' has a wrong offset!");
static_assert(offsetof(UGA_Shotgun_DoubleDouble_Knockback_C, DistanceMagMod) == 0x000AC4, "Member 'UGA_Shotgun_DoubleDouble_Knockback_C::DistanceMagMod' has a wrong offset!");
static_assert(offsetof(UGA_Shotgun_DoubleDouble_Knockback_C, Row_ZAdd) == 0x000AC8, "Member 'UGA_Shotgun_DoubleDouble_Knockback_C::Row_ZAdd' has a wrong offset!");
static_assert(offsetof(UGA_Shotgun_DoubleDouble_Knockback_C, Row_KnockMag) == 0x000AF0, "Member 'UGA_Shotgun_DoubleDouble_Knockback_C::Row_KnockMag' has a wrong offset!");
static_assert(offsetof(UGA_Shotgun_DoubleDouble_Knockback_C, Row_MaxDistance) == 0x000B18, "Member 'UGA_Shotgun_DoubleDouble_Knockback_C::Row_MaxDistance' has a wrong offset!");
static_assert(offsetof(UGA_Shotgun_DoubleDouble_Knockback_C, Row_ResetFall) == 0x000B40, "Member 'UGA_Shotgun_DoubleDouble_Knockback_C::Row_ResetFall' has a wrong offset!");
static_assert(offsetof(UGA_Shotgun_DoubleDouble_Knockback_C, FinalLaunchVel) == 0x000B68, "Member 'UGA_Shotgun_DoubleDouble_Knockback_C::FinalLaunchVel' has a wrong offset!");
static_assert(offsetof(UGA_Shotgun_DoubleDouble_Knockback_C, Row_ZStartOffset) == 0x000B78, "Member 'UGA_Shotgun_DoubleDouble_Knockback_C::Row_ZStartOffset' has a wrong offset!");
static_assert(offsetof(UGA_Shotgun_DoubleDouble_Knockback_C, Row_ZVelMult) == 0x000BA0, "Member 'UGA_Shotgun_DoubleDouble_Knockback_C::Row_ZVelMult' has a wrong offset!");
static_assert(offsetof(UGA_Shotgun_DoubleDouble_Knockback_C, DefaultTags) == 0x000BC8, "Member 'UGA_Shotgun_DoubleDouble_Knockback_C::DefaultTags' has a wrong offset!");
static_assert(offsetof(UGA_Shotgun_DoubleDouble_Knockback_C, Launcher) == 0x000BE8, "Member 'UGA_Shotgun_DoubleDouble_Knockback_C::Launcher' has a wrong offset!");
static_assert(offsetof(UGA_Shotgun_DoubleDouble_Knockback_C, VelocityForFX) == 0x000BF0, "Member 'UGA_Shotgun_DoubleDouble_Knockback_C::VelocityForFX' has a wrong offset!");
static_assert(offsetof(UGA_Shotgun_DoubleDouble_Knockback_C, FX_Delay) == 0x000BF4, "Member 'UGA_Shotgun_DoubleDouble_Knockback_C::FX_Delay' has a wrong offset!");
static_assert(offsetof(UGA_Shotgun_DoubleDouble_Knockback_C, KnockbackCue) == 0x000BF8, "Member 'UGA_Shotgun_DoubleDouble_Knockback_C::KnockbackCue' has a wrong offset!");

}

