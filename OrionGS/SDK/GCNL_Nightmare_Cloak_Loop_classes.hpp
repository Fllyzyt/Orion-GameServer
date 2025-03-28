#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_Nightmare_Cloak_Loop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "NightmareRuntime_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_Nightmare_Cloak_Loop.GCNL_Nightmare_Cloak_Loop_C
// 0x0220 (0x0A08 - 0x07E8)
class AGCNL_Nightmare_Cloak_Loop_C final  : public AFortNightmareGameCueNotifyLoop_Cloak
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07E8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Timeline_InteractionFadeInOut_Visbility_C77E5F5F4F157688A242B6998BCC9E95; // 0x07F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_InteractionFadeInOut__Direction_C77E5F5F4F157688A242B6998BCC9E95; // 0x07F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7132[0x3];                                     // 0x07F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_InteractionFadeInOut;                     // 0x07F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         Row_Duration;                                      // 0x0800(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_ExpireTellDuration;                            // 0x0828(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_StationaryVisMult;                             // 0x0850(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_MaxSpeedVisMult;                               // 0x0878(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UAudioComponent*>                LoopingAudioComponents;                            // 0x08A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	class UFXSystemComponent*                     AttachedFXHead;                                    // 0x08B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                     AttachedFXBody;                                    // 0x08B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           ExpireTellDelayTimer;                              // 0x08C0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>         PlayerSkeletalMeshes;                              // 0x08C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FScalableFloat                         Row_FriendlyVisMultMin;                            // 0x08D8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_InteractVisMultAddMax;                         // 0x0900(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                         Row_VisibilityLevelChangeRate;                     // 0x0928(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   MatParameterName_MovementOpacity;                  // 0x0950(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InteractVisMultAddMax;                             // 0x0958(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AudioVelocityInterp;                               // 0x095C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AudioParameterName_Velocity;                       // 0x0960(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExpirationSoundPeriod;                             // 0x0968(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7133[0x4];                                     // 0x096C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ExpirationSoundTimer;                              // 0x0970(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     M_Cloaked;                                         // 0x0978(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  MaterialOverrideId;                                // 0x0980(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  PartTypes;                                         // 0x0990(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelayBeforeApplyingCloakMaterialOverride;          // 0x09A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7134[0x4];                                     // 0x09A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ApplyCloakMaterialOverrideHandle;                  // 0x09A8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         DelayBeforeRemovingCloakMaterialOverride;          // 0x09B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7135[0x4];                                     // 0x09B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           RemoveCloakMaterialOverrideHandle;                 // 0x09B8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         DeactivateFXTemplate;                              // 0x09C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         ActivateFXTemplate;                                // 0x09C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ExpirationSoundPeriodScale;                        // 0x09D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7136[0x4];                                     // 0x09D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortPawnMaterialOverrideCopiedParameters MaterialParametersToCopy;                          // 0x09D8(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GCNL_Nightmare_Cloak_Loop(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_Event_MyTarget_1, struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaSeconds, float CallFunc_TickMovementOpacity_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, float K2Node_CustomEvent_Velocity, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_3, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_4, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, class UAudioComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_6, int32 CallFunc_Array_Length_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_ShouldRenderAsLocalPlayer_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, class AActor* K2Node_Event_MyTarget, struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UMatineeCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, float CallFunc_FInterpTo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue_4, float CallFunc_GetValueAtLevel_ReturnValue_5, float CallFunc_GetValueAtLevel_ReturnValue_6, float CallFunc_GetValueAtLevel_ReturnValue_7, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_VSize_ReturnValue, TArray<class USkeletalMeshComponent*>& CallFunc_GetSkeletalMeshesForAllParts_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue);
	void OnRemovalGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UMatineeCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void Initialize_Player_Skeletal_Meshes();
	void UpdateTeamVisbility();
	void SetMaterialCloaked();
	void EndedInteract();
	void StartedInteract();
	void SetMaterialUncloaked();
	void Audio_Tick(float Velocity);
	void ExpireWarningTick();
	void ClearExpireTell();
	void BeginExpireTell();
	void ReceiveTick(float DeltaSeconds);
	void OnLoopingStartGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void Timeline_InteractionFadeInOut__UpdateFunc();
	void Timeline_InteractionFadeInOut__FinishedFunc();
	bool ShouldRenderAsLocalPlayer(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_GetIsBroadcastClient_ReturnValue, bool CallFunc_GetIsPlayingReplay_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void IsPlayerControllerFriendly(class AController* PlayerController, bool* Is_Friendly_Player, bool CallFunc_IsValid_ReturnValue, bool CallFunc_OnSameTeam_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ApplyCloakMaterialOverride(float CallFunc_GetGameTimeInSeconds_ReturnValue, TSoftObjectPtr<class UMaterialInterface> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FGuid& CallFunc_ApplyMaterialOverrideLocal_ReturnValue);
	void RemoveCloakMaterialOverride(bool CallFunc_IsValid_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_RemoveMaterialOverrideLocal_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_Nightmare_Cloak_Loop_C">();
	}
	static class AGCNL_Nightmare_Cloak_Loop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_Nightmare_Cloak_Loop_C>();
	}
};
static_assert(alignof(AGCNL_Nightmare_Cloak_Loop_C) == 0x000008, "Wrong alinment on AGCNL_Nightmare_Cloak_Loop_C");
static_assert(sizeof(AGCNL_Nightmare_Cloak_Loop_C) == 0x000A08, "Wrong size on AGCNL_Nightmare_Cloak_Loop_C");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, UberGraphFrame) == 0x0007E8, "Member 'AGCNL_Nightmare_Cloak_Loop_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, Timeline_InteractionFadeInOut_Visbility_C77E5F5F4F157688A242B6998BCC9E95) == 0x0007F0, "Member 'AGCNL_Nightmare_Cloak_Loop_C::Timeline_InteractionFadeInOut_Visbility_C77E5F5F4F157688A242B6998BCC9E95' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, Timeline_InteractionFadeInOut__Direction_C77E5F5F4F157688A242B6998BCC9E95) == 0x0007F4, "Member 'AGCNL_Nightmare_Cloak_Loop_C::Timeline_InteractionFadeInOut__Direction_C77E5F5F4F157688A242B6998BCC9E95' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, Timeline_InteractionFadeInOut) == 0x0007F8, "Member 'AGCNL_Nightmare_Cloak_Loop_C::Timeline_InteractionFadeInOut' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, Row_Duration) == 0x000800, "Member 'AGCNL_Nightmare_Cloak_Loop_C::Row_Duration' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, Row_ExpireTellDuration) == 0x000828, "Member 'AGCNL_Nightmare_Cloak_Loop_C::Row_ExpireTellDuration' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, Row_StationaryVisMult) == 0x000850, "Member 'AGCNL_Nightmare_Cloak_Loop_C::Row_StationaryVisMult' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, Row_MaxSpeedVisMult) == 0x000878, "Member 'AGCNL_Nightmare_Cloak_Loop_C::Row_MaxSpeedVisMult' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, LoopingAudioComponents) == 0x0008A0, "Member 'AGCNL_Nightmare_Cloak_Loop_C::LoopingAudioComponents' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, AttachedFXHead) == 0x0008B0, "Member 'AGCNL_Nightmare_Cloak_Loop_C::AttachedFXHead' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, AttachedFXBody) == 0x0008B8, "Member 'AGCNL_Nightmare_Cloak_Loop_C::AttachedFXBody' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, ExpireTellDelayTimer) == 0x0008C0, "Member 'AGCNL_Nightmare_Cloak_Loop_C::ExpireTellDelayTimer' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, PlayerSkeletalMeshes) == 0x0008C8, "Member 'AGCNL_Nightmare_Cloak_Loop_C::PlayerSkeletalMeshes' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, Row_FriendlyVisMultMin) == 0x0008D8, "Member 'AGCNL_Nightmare_Cloak_Loop_C::Row_FriendlyVisMultMin' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, Row_InteractVisMultAddMax) == 0x000900, "Member 'AGCNL_Nightmare_Cloak_Loop_C::Row_InteractVisMultAddMax' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, Row_VisibilityLevelChangeRate) == 0x000928, "Member 'AGCNL_Nightmare_Cloak_Loop_C::Row_VisibilityLevelChangeRate' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, MatParameterName_MovementOpacity) == 0x000950, "Member 'AGCNL_Nightmare_Cloak_Loop_C::MatParameterName_MovementOpacity' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, InteractVisMultAddMax) == 0x000958, "Member 'AGCNL_Nightmare_Cloak_Loop_C::InteractVisMultAddMax' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, AudioVelocityInterp) == 0x00095C, "Member 'AGCNL_Nightmare_Cloak_Loop_C::AudioVelocityInterp' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, AudioParameterName_Velocity) == 0x000960, "Member 'AGCNL_Nightmare_Cloak_Loop_C::AudioParameterName_Velocity' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, ExpirationSoundPeriod) == 0x000968, "Member 'AGCNL_Nightmare_Cloak_Loop_C::ExpirationSoundPeriod' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, ExpirationSoundTimer) == 0x000970, "Member 'AGCNL_Nightmare_Cloak_Loop_C::ExpirationSoundTimer' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, M_Cloaked) == 0x000978, "Member 'AGCNL_Nightmare_Cloak_Loop_C::M_Cloaked' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, MaterialOverrideId) == 0x000980, "Member 'AGCNL_Nightmare_Cloak_Loop_C::MaterialOverrideId' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, PartTypes) == 0x000990, "Member 'AGCNL_Nightmare_Cloak_Loop_C::PartTypes' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, DelayBeforeApplyingCloakMaterialOverride) == 0x0009A0, "Member 'AGCNL_Nightmare_Cloak_Loop_C::DelayBeforeApplyingCloakMaterialOverride' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, ApplyCloakMaterialOverrideHandle) == 0x0009A8, "Member 'AGCNL_Nightmare_Cloak_Loop_C::ApplyCloakMaterialOverrideHandle' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, DelayBeforeRemovingCloakMaterialOverride) == 0x0009B0, "Member 'AGCNL_Nightmare_Cloak_Loop_C::DelayBeforeRemovingCloakMaterialOverride' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, RemoveCloakMaterialOverrideHandle) == 0x0009B8, "Member 'AGCNL_Nightmare_Cloak_Loop_C::RemoveCloakMaterialOverrideHandle' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, DeactivateFXTemplate) == 0x0009C0, "Member 'AGCNL_Nightmare_Cloak_Loop_C::DeactivateFXTemplate' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, ActivateFXTemplate) == 0x0009C8, "Member 'AGCNL_Nightmare_Cloak_Loop_C::ActivateFXTemplate' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, ExpirationSoundPeriodScale) == 0x0009D0, "Member 'AGCNL_Nightmare_Cloak_Loop_C::ExpirationSoundPeriodScale' has a wrong offset!");
static_assert(offsetof(AGCNL_Nightmare_Cloak_Loop_C, MaterialParametersToCopy) == 0x0009D8, "Member 'AGCNL_Nightmare_Cloak_Loop_C::MaterialParametersToCopy' has a wrong offset!");

}

