#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_CarryPlayer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_CarryPlayer.GAB_CarryPlayer_C
// 0x0030 (0x0B18 - 0x0AE8)
class UGAB_CarryPlayer_C final  : public UFortGameplayAbility_CarryPlayer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AE8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0AF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DBNOCarryHolster;                                  // 0x0AF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCompletedPickup;                                  // 0x0B00(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_60A2[0x3];                                     // 0x0B01(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                PickupLocation;                                    // 0x0B04(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CarryLongDistanceThreshold;                        // 0x0B10(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAB_CarryPlayer(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_Event_bWasCancelled, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, float CallFunc_Vector_Distance_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsServer_ReturnValue_1, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_C4440F1640E9A8D79E44FD8C23525824();
	void OnBlendOut_C4440F1640E9A8D79E44FD8C23525824();
	void OnInterrupted_C4440F1640E9A8D79E44FD8C23525824();
	void OnCancelled_C4440F1640E9A8D79E44FD8C23525824();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_CarryPlayer_C">();
	}
	static class UGAB_CarryPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_CarryPlayer_C>();
	}
};
static_assert(alignof(UGAB_CarryPlayer_C) == 0x000008, "Wrong alinment on UGAB_CarryPlayer_C");
static_assert(sizeof(UGAB_CarryPlayer_C) == 0x000B18, "Wrong size on UGAB_CarryPlayer_C");
static_assert(offsetof(UGAB_CarryPlayer_C, UberGraphFrame) == 0x000AE8, "Member 'UGAB_CarryPlayer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_CarryPlayer_C, PlayerPawn) == 0x000AF0, "Member 'UGAB_CarryPlayer_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGAB_CarryPlayer_C, DBNOCarryHolster) == 0x000AF8, "Member 'UGAB_CarryPlayer_C::DBNOCarryHolster' has a wrong offset!");
static_assert(offsetof(UGAB_CarryPlayer_C, bCompletedPickup) == 0x000B00, "Member 'UGAB_CarryPlayer_C::bCompletedPickup' has a wrong offset!");
static_assert(offsetof(UGAB_CarryPlayer_C, PickupLocation) == 0x000B04, "Member 'UGAB_CarryPlayer_C::PickupLocation' has a wrong offset!");
static_assert(offsetof(UGAB_CarryPlayer_C, CarryLongDistanceThreshold) == 0x000B10, "Member 'UGAB_CarryPlayer_C::CarryLongDistanceThreshold' has a wrong offset!");

}

