#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Tethered_PassiveTriggered

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_Tethered_PassiveTriggered.GA_Athena_Tethered_PassiveTriggered_C
// 0x0020 (0x0AD8 - 0x0AB8)
class UGA_Athena_Tethered_PassiveTriggered_C final  : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           GCN_BoostTag;                                      // 0x0AC0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GCN_JumpTag;                                       // 0x0AC8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ZiplineExit;                                       // 0x0AD0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered(int32 EntryPoint, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, struct FGameplayEventData& K2Node_Event_EventData, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Tethered_PassiveTriggered_C">();
	}
	static class UGA_Athena_Tethered_PassiveTriggered_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Tethered_PassiveTriggered_C>();
	}
};
static_assert(alignof(UGA_Athena_Tethered_PassiveTriggered_C) == 0x000008, "Wrong alinment on UGA_Athena_Tethered_PassiveTriggered_C");
static_assert(sizeof(UGA_Athena_Tethered_PassiveTriggered_C) == 0x000AD8, "Wrong size on UGA_Athena_Tethered_PassiveTriggered_C");
static_assert(offsetof(UGA_Athena_Tethered_PassiveTriggered_C, UberGraphFrame) == 0x000AB8, "Member 'UGA_Athena_Tethered_PassiveTriggered_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Tethered_PassiveTriggered_C, GCN_BoostTag) == 0x000AC0, "Member 'UGA_Athena_Tethered_PassiveTriggered_C::GCN_BoostTag' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Tethered_PassiveTriggered_C, GCN_JumpTag) == 0x000AC8, "Member 'UGA_Athena_Tethered_PassiveTriggered_C::GCN_JumpTag' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Tethered_PassiveTriggered_C, ZiplineExit) == 0x000AD0, "Member 'UGA_Athena_Tethered_PassiveTriggered_C::ZiplineExit' has a wrong offset!");

}

