#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GA_Athena_ActivePower_StandardActivation_Parent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent.GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C
// 0x0038 (0x0CB8 - 0x0C80)
class UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C : public UGA_Athena_ActivePower_StandardActivation_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C; // 0x0C80(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          CommitOnEveryTargeting;                            // 0x0C88(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C23[0x3];                                     // 0x0C89(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           Tag_ApplyEffectNotify;                             // 0x0C8C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C24[0x4];                                     // 0x0C94(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 GE_ToApply;                                        // 0x0C98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EffectLevel;                                       // 0x0CA0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            GEH_ToApply;                                       // 0x0CA4(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_ApplyEffect;                                    // 0x0CAC(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ApplyEffectGCUsesParams;                           // 0x0CB4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          EndAbilityAfterApply;                              // 0x0CB5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayTag& K2Node_Event_NotifyTag, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_NotEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayCueParameters& CallFunc_ApplyEffectGCParams_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeEffectSpec_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue);
	void CastMontageBlendOut();
	void ApplyEffectToSelf();
	void CastMontageNotifyStart(const struct FGameplayTag& NotifyTag);
	void CastMontageNotifyEndAbility();
	void CastMontageCancelledOrInterrupted();
	void PowerCommitFailed();
	struct FGameplayCueParameters ApplyEffectGCParams();
	struct FGameplayEffectSpecHandle MakeEffectSpec(bool CallFunc_IsValidClass_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C">();
	}
	static class UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C>();
	}
};
static_assert(alignof(UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C) == 0x000008, "Wrong alinment on UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C");
static_assert(sizeof(UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C) == 0x000CB8, "Wrong size on UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C");
static_assert(offsetof(UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C, UberGraphFrame_GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C) == 0x000C80, "Member 'UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C::UberGraphFrame_GA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C, CommitOnEveryTargeting) == 0x000C88, "Member 'UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C::CommitOnEveryTargeting' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C, Tag_ApplyEffectNotify) == 0x000C8C, "Member 'UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C::Tag_ApplyEffectNotify' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C, GE_ToApply) == 0x000C98, "Member 'UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C::GE_ToApply' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C, EffectLevel) == 0x000CA0, "Member 'UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C::EffectLevel' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C, GEH_ToApply) == 0x000CA4, "Member 'UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C::GEH_ToApply' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C, GC_ApplyEffect) == 0x000CAC, "Member 'UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C::GC_ApplyEffect' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C, ApplyEffectGCUsesParams) == 0x000CB4, "Member 'UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C::ApplyEffectGCUsesParams' has a wrong offset!");
static_assert(offsetof(UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C, EndAbilityAfterApply) == 0x000CB5, "Member 'UGA_Athena_ActivePower_GenericTargetApplyEffectToSelf_Parent_C::EndAbilityAfterApply' has a wrong offset!");

}

