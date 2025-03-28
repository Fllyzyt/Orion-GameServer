#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_SetFallInstigator_SnowmanV3

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GAT_TriggeredAbility_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_SetFallInstigator_SnowmanV3.GA_Athena_SetFallInstigator_SnowmanV3_C
// 0x0010 (0x0AE0 - 0x0AD0)
class UGA_Athena_SetFallInstigator_SnowmanV3_C final  : public UGAT_TriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Athena_SetFallInstigator_SnowmanV3_C; // 0x0AD0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0AD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_SetFallInstigator_SnowmanV3(int32 EntryPoint, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_GetGrantedByEffectContext_ReturnValue, class AActor* CallFunc_EffectContextGetEffectCauser_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class AFortPlayerController* K2Node_Select_Default);
	void K2_ActivateAbility();
	void Added_E583447C4BBF0EE09A70D5A1DDD572ED();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_SetFallInstigator_SnowmanV3_C">();
	}
	static class UGA_Athena_SetFallInstigator_SnowmanV3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_SetFallInstigator_SnowmanV3_C>();
	}
};
static_assert(alignof(UGA_Athena_SetFallInstigator_SnowmanV3_C) == 0x000008, "Wrong alinment on UGA_Athena_SetFallInstigator_SnowmanV3_C");
static_assert(sizeof(UGA_Athena_SetFallInstigator_SnowmanV3_C) == 0x000AE0, "Wrong size on UGA_Athena_SetFallInstigator_SnowmanV3_C");
static_assert(offsetof(UGA_Athena_SetFallInstigator_SnowmanV3_C, UberGraphFrame_GA_Athena_SetFallInstigator_SnowmanV3_C) == 0x000AD0, "Member 'UGA_Athena_SetFallInstigator_SnowmanV3_C::UberGraphFrame_GA_Athena_SetFallInstigator_SnowmanV3_C' has a wrong offset!");
static_assert(offsetof(UGA_Athena_SetFallInstigator_SnowmanV3_C, PlayerPawn) == 0x000AD8, "Member 'UGA_Athena_SetFallInstigator_SnowmanV3_C::PlayerPawn' has a wrong offset!");

}

