#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_FloppingRabbit_Pull

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_FloppingRabbit_Pull.GA_Athena_FloppingRabbit_Pull_C
// 0x00A0 (0x0B58 - 0x0AB8)
class UGA_Athena_FloppingRabbit_Pull_C final  : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        Target;                                            // 0x0AC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        Launcher;                                          // 0x0AC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           T_InVehicle;                                       // 0x0AD0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         LaunchArc;                                         // 0x0AD8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LaunchGrav;                                        // 0x0ADC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         Row_PullAmount;                                    // 0x0AE0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_PullEnabled;                                   // 0x0B08(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_CanPullFriends;                                // 0x0B30(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Athena_FloppingRabbit_Pull(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_GetGrantedByEffectContext_ReturnValue, class AActor* CallFunc_EffectContextGetEffectCauser_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_OnSameTeam_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity, bool CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue_1, bool CallFunc_OnSameTeam_ReturnValue_1, bool CallFunc_Conv_IntToBool_ReturnValue_1, bool CallFunc_OnSameTeam_ReturnValue_2, bool CallFunc_IsSkydiving_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_FloppingRabbit_Pull_C">();
	}
	static class UGA_Athena_FloppingRabbit_Pull_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_FloppingRabbit_Pull_C>();
	}
};
static_assert(alignof(UGA_Athena_FloppingRabbit_Pull_C) == 0x000008, "Wrong alinment on UGA_Athena_FloppingRabbit_Pull_C");
static_assert(sizeof(UGA_Athena_FloppingRabbit_Pull_C) == 0x000B58, "Wrong size on UGA_Athena_FloppingRabbit_Pull_C");
static_assert(offsetof(UGA_Athena_FloppingRabbit_Pull_C, UberGraphFrame) == 0x000AB8, "Member 'UGA_Athena_FloppingRabbit_Pull_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_FloppingRabbit_Pull_C, Target) == 0x000AC0, "Member 'UGA_Athena_FloppingRabbit_Pull_C::Target' has a wrong offset!");
static_assert(offsetof(UGA_Athena_FloppingRabbit_Pull_C, Launcher) == 0x000AC8, "Member 'UGA_Athena_FloppingRabbit_Pull_C::Launcher' has a wrong offset!");
static_assert(offsetof(UGA_Athena_FloppingRabbit_Pull_C, T_InVehicle) == 0x000AD0, "Member 'UGA_Athena_FloppingRabbit_Pull_C::T_InVehicle' has a wrong offset!");
static_assert(offsetof(UGA_Athena_FloppingRabbit_Pull_C, LaunchArc) == 0x000AD8, "Member 'UGA_Athena_FloppingRabbit_Pull_C::LaunchArc' has a wrong offset!");
static_assert(offsetof(UGA_Athena_FloppingRabbit_Pull_C, LaunchGrav) == 0x000ADC, "Member 'UGA_Athena_FloppingRabbit_Pull_C::LaunchGrav' has a wrong offset!");
static_assert(offsetof(UGA_Athena_FloppingRabbit_Pull_C, Row_PullAmount) == 0x000AE0, "Member 'UGA_Athena_FloppingRabbit_Pull_C::Row_PullAmount' has a wrong offset!");
static_assert(offsetof(UGA_Athena_FloppingRabbit_Pull_C, Row_PullEnabled) == 0x000B08, "Member 'UGA_Athena_FloppingRabbit_Pull_C::Row_PullEnabled' has a wrong offset!");
static_assert(offsetof(UGA_Athena_FloppingRabbit_Pull_C, Row_CanPullFriends) == 0x000B30, "Member 'UGA_Athena_FloppingRabbit_Pull_C::Row_CanPullFriends' has a wrong offset!");

}

