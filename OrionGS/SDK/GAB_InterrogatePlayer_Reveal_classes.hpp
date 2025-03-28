#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_InterrogatePlayer_Reveal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C
// 0x02C8 (0x0D80 - 0x0AB8)
class UGAB_InterrogatePlayer_Reveal_C final  : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0AC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*            PlayerController;                                  // 0x0AC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        InterrogatedPlayer;                                // 0x0AD0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           Anim_Reveal;                                       // 0x0AD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           Anim_End;                                          // 0x0AE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   RevealHolster;                                     // 0x0AE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Reveal;                                         // 0x0AF0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         MarkDurationPlayer;                                // 0x0AF8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         MarkDurationNPC;                                   // 0x0B20(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         MarkRadius;                                        // 0x0B48(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                         SquadmatesToMark;                                  // 0x0B70(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	struct FTimerHandle                           Timer_Reveal;                                      // 0x0B80(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           T_NPC;                                             // 0x0B88(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         RevealDuration;                                    // 0x0B90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EndAbilityDelay;                                   // 0x0B94(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SweepDelay;                                        // 0x0B98(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Cancelled;                                         // 0x0B9C(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Ending;                                            // 0x0B9D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6358[0x2];                                     // 0x0B9E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 IndicatorGroup;                                    // 0x0BA0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                 CameraMode;                                        // 0x0BB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         ActorsToMark;                                      // 0x0BB8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGameplayTagContainer                  T_ReticleHUD;                                      // 0x0BC8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  NPCTagsToMark;                                     // 0x0BE8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  ChestTagsToMark;                                   // 0x0C08(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  GameplayItemTagsToMark;                            // 0x0C28(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   ParticleSystemParamName;                           // 0x0C48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        IndicatedPS;                                       // 0x0C50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             IndicatedSound;                                    // 0x0C58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PSOffset;                                          // 0x0C60(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   PSVectorParamName;                                 // 0x0C6C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PSDBNOOffset;                                      // 0x0C74(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   EnemyStencilName;                                  // 0x0C80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   TreasureChestStencilName;                          // 0x0C88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StepTime;                                          // 0x0C90(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Testbool;                                          // 0x0C94(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6359[0x3];                                     // 0x0C95(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         EnemyStencilID;                                    // 0x0C98(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         StencilStepTime;                                   // 0x0CC0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         bUseDefaultStencil;                                // 0x0CE8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         IndicatorStepTime;                                 // 0x0D10(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagQuery                      NPCGameplayTagQuery;                               // 0x0D38(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GAB_InterrogatePlayer_Reveal(int32 EntryPoint, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, bool CallFunc_IsValid_ReturnValue, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_5, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_5, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_4, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_4, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_3, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_3, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, TDelegate<void(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_3, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_4, struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_5, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_3, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_6, bool K2Node_Event_bWasCancelled, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsValid_ReturnValue_2, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_8, struct FGameplayEventData& K2Node_Event_EventData, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void EndInterrogation();
	void OnDied_Event_1(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnFinish_68B3C6D14B44CCD3170ABDA038C1203E();
	void Triggered_3C2C8C224B62B00BDEEAF5AF38A401C1(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_3C2C8C224B62B00BDEEAF5AF38A401C1(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_3C2C8C224B62B00BDEEAF5AF38A401C1(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_23F3C2DB411862D627ACFCA8233F7B33(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_23F3C2DB411862D627ACFCA8233F7B33(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_23F3C2DB411862D627ACFCA8233F7B33(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void InitAbility(bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_1);
	void EndAbilityCleanup(bool CallFunc_IsValid_ReturnValue);
	void Reveal(bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, class FName Temp_name_Variable, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_3, bool CallFunc_RowToBool_ReturnValue, bool CallFunc_RowToBool_ReturnValue_1, bool CallFunc_RowToBool_ReturnValue_2, bool CallFunc_RowToBool_ReturnValue_3, float CallFunc_GetValueAtLevel_ReturnValue_4, float CallFunc_GetValueAtLevel_ReturnValue_5, bool Temp_bool_Variable_1, float CallFunc_GetValueAtLevel_ReturnValue_6, class FName Temp_name_Variable_1, const struct FIndicatedActorParticleSystemData& CallFunc_MakeIndicatedActorParticleSystemData_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_7, const struct FIndicatedActorData& CallFunc_MakeIndicatedActorData_ReturnValue, class FName K2Node_Select_Default, float CallFunc_GetValueAtLevel_ReturnValue_8, TArray<EObjectTypeQuery>& K2Node_MakeArray_Array, float CallFunc_GetValueAtLevel_ReturnValue_9, const struct FIndicatedActorData& CallFunc_MakeIndicatedActorData_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_10, float CallFunc_GetValueAtLevel_ReturnValue_11, const struct FIndicatedActorParticleSystemData& CallFunc_MakeIndicatedActorParticleSystemData_ReturnValue_1, const struct FStenciledActorData& CallFunc_MakeStenciledActorData_ReturnValue, const struct FIndicatedActorData& CallFunc_MakeIndicatedActorData_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_12, float CallFunc_GetValueAtLevel_ReturnValue_13, const struct FIndicatedActorData& CallFunc_MakeIndicatedActorData_ReturnValue_3, TArray<EObjectTypeQuery>& K2Node_MakeArray_Array_1, TArray<EObjectTypeQuery>& K2Node_MakeArray_Array_2, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortPlayerStateAthena* K2Node_DynamicCast_AsFort_Player_State_Athena, bool K2Node_DynamicCast_bSuccess, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess_1, bool Temp_bool_Variable_2, TArray<class AFortPlayerStateAthena*>& CallFunc_GetSquadMemberPlayerStates_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FName K2Node_Select_Default_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FStenciledActorData& CallFunc_MakeStenciledActorData_ReturnValue_1, const struct FIndicatedActorDataWithFilter& CallFunc_MakeIndicatedActorDataWithFilter_ReturnValue, class FName Temp_name_Variable_2, bool Temp_bool_Variable_3, class FName Temp_name_Variable_3, class FName K2Node_Select_Default_2, const struct FStenciledActorData& CallFunc_MakeStenciledActorData_ReturnValue_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena_1, bool K2Node_DynamicCast_bSuccess_2, bool Temp_bool_Variable_4, int32 Temp_int_Array_Index_Variable_1, class FName K2Node_Select_Default_3, class AFortPlayerStateAthena* CallFunc_Array_Get_Item, const struct FStenciledActorData& CallFunc_MakeStenciledActorData_ReturnValue_3, class AFortPlayerPawn* CallFunc_GetCurrentPawn_ReturnValue, const struct FIndicatedActorDataWithFilter& CallFunc_MakeIndicatedActorDataWithFilter_ReturnValue_1, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_1, const struct FGameplayEffectContextHandle& CallFunc_MakeFortEffectContext_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue_1, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted, bool CallFunc_IsValid_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_SendComplexCustomStatEvent_QuestActive_1, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted_1, const struct FGameplayTagContainer& CallFunc_GetFactionTagContainerForActor_ReturnValue, const struct FIndicatedActorDataWithFilter& CallFunc_MakeIndicatedActorDataWithFilter_ReturnValue_2, class AFortPlayerStateAthena* K2Node_DynamicCast_AsFort_Player_State_Athena_1, bool K2Node_DynamicCast_bSuccess_3, TArray<struct FIndicatedActorDataWithFilter>& K2Node_MakeArray_Array_3, TArray<class AFortPlayerStateAthena*>& CallFunc_GetSquadMemberPlayerStates_ReturnValue_1, class AFortPlayerStateAthena* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class AFortPlayerPawn* CallFunc_GetPlayerPawnOrVehicleDriver_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void ToggleReticleVisibility(bool Hide, class UFortHUDContext* CallFunc_GetContext_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAB_InterrogatePlayer_Reveal_C">();
	}
	static class UGAB_InterrogatePlayer_Reveal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAB_InterrogatePlayer_Reveal_C>();
	}
};
static_assert(alignof(UGAB_InterrogatePlayer_Reveal_C) == 0x000008, "Wrong alinment on UGAB_InterrogatePlayer_Reveal_C");
static_assert(sizeof(UGAB_InterrogatePlayer_Reveal_C) == 0x000D80, "Wrong size on UGAB_InterrogatePlayer_Reveal_C");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, UberGraphFrame) == 0x000AB8, "Member 'UGAB_InterrogatePlayer_Reveal_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, PlayerPawn) == 0x000AC0, "Member 'UGAB_InterrogatePlayer_Reveal_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, PlayerController) == 0x000AC8, "Member 'UGAB_InterrogatePlayer_Reveal_C::PlayerController' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, InterrogatedPlayer) == 0x000AD0, "Member 'UGAB_InterrogatePlayer_Reveal_C::InterrogatedPlayer' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, Anim_Reveal) == 0x000AD8, "Member 'UGAB_InterrogatePlayer_Reveal_C::Anim_Reveal' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, Anim_End) == 0x000AE0, "Member 'UGAB_InterrogatePlayer_Reveal_C::Anim_End' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, RevealHolster) == 0x000AE8, "Member 'UGAB_InterrogatePlayer_Reveal_C::RevealHolster' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, GC_Reveal) == 0x000AF0, "Member 'UGAB_InterrogatePlayer_Reveal_C::GC_Reveal' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, MarkDurationPlayer) == 0x000AF8, "Member 'UGAB_InterrogatePlayer_Reveal_C::MarkDurationPlayer' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, MarkDurationNPC) == 0x000B20, "Member 'UGAB_InterrogatePlayer_Reveal_C::MarkDurationNPC' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, MarkRadius) == 0x000B48, "Member 'UGAB_InterrogatePlayer_Reveal_C::MarkRadius' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, SquadmatesToMark) == 0x000B70, "Member 'UGAB_InterrogatePlayer_Reveal_C::SquadmatesToMark' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, Timer_Reveal) == 0x000B80, "Member 'UGAB_InterrogatePlayer_Reveal_C::Timer_Reveal' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, T_NPC) == 0x000B88, "Member 'UGAB_InterrogatePlayer_Reveal_C::T_NPC' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, RevealDuration) == 0x000B90, "Member 'UGAB_InterrogatePlayer_Reveal_C::RevealDuration' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, EndAbilityDelay) == 0x000B94, "Member 'UGAB_InterrogatePlayer_Reveal_C::EndAbilityDelay' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, SweepDelay) == 0x000B98, "Member 'UGAB_InterrogatePlayer_Reveal_C::SweepDelay' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, Cancelled) == 0x000B9C, "Member 'UGAB_InterrogatePlayer_Reveal_C::Cancelled' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, Ending) == 0x000B9D, "Member 'UGAB_InterrogatePlayer_Reveal_C::Ending' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, IndicatorGroup) == 0x000BA0, "Member 'UGAB_InterrogatePlayer_Reveal_C::IndicatorGroup' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, CameraMode) == 0x000BB0, "Member 'UGAB_InterrogatePlayer_Reveal_C::CameraMode' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, ActorsToMark) == 0x000BB8, "Member 'UGAB_InterrogatePlayer_Reveal_C::ActorsToMark' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, T_ReticleHUD) == 0x000BC8, "Member 'UGAB_InterrogatePlayer_Reveal_C::T_ReticleHUD' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, NPCTagsToMark) == 0x000BE8, "Member 'UGAB_InterrogatePlayer_Reveal_C::NPCTagsToMark' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, ChestTagsToMark) == 0x000C08, "Member 'UGAB_InterrogatePlayer_Reveal_C::ChestTagsToMark' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, GameplayItemTagsToMark) == 0x000C28, "Member 'UGAB_InterrogatePlayer_Reveal_C::GameplayItemTagsToMark' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, ParticleSystemParamName) == 0x000C48, "Member 'UGAB_InterrogatePlayer_Reveal_C::ParticleSystemParamName' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, IndicatedPS) == 0x000C50, "Member 'UGAB_InterrogatePlayer_Reveal_C::IndicatedPS' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, IndicatedSound) == 0x000C58, "Member 'UGAB_InterrogatePlayer_Reveal_C::IndicatedSound' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, PSOffset) == 0x000C60, "Member 'UGAB_InterrogatePlayer_Reveal_C::PSOffset' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, PSVectorParamName) == 0x000C6C, "Member 'UGAB_InterrogatePlayer_Reveal_C::PSVectorParamName' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, PSDBNOOffset) == 0x000C74, "Member 'UGAB_InterrogatePlayer_Reveal_C::PSDBNOOffset' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, EnemyStencilName) == 0x000C80, "Member 'UGAB_InterrogatePlayer_Reveal_C::EnemyStencilName' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, TreasureChestStencilName) == 0x000C88, "Member 'UGAB_InterrogatePlayer_Reveal_C::TreasureChestStencilName' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, StepTime) == 0x000C90, "Member 'UGAB_InterrogatePlayer_Reveal_C::StepTime' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, Testbool) == 0x000C94, "Member 'UGAB_InterrogatePlayer_Reveal_C::Testbool' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, EnemyStencilID) == 0x000C98, "Member 'UGAB_InterrogatePlayer_Reveal_C::EnemyStencilID' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, StencilStepTime) == 0x000CC0, "Member 'UGAB_InterrogatePlayer_Reveal_C::StencilStepTime' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, bUseDefaultStencil) == 0x000CE8, "Member 'UGAB_InterrogatePlayer_Reveal_C::bUseDefaultStencil' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, IndicatorStepTime) == 0x000D10, "Member 'UGAB_InterrogatePlayer_Reveal_C::IndicatorStepTime' has a wrong offset!");
static_assert(offsetof(UGAB_InterrogatePlayer_Reveal_C, NPCGameplayTagQuery) == 0x000D38, "Member 'UGAB_InterrogatePlayer_Reveal_C::NPCGameplayTagQuery' has a wrong offset!");

}

