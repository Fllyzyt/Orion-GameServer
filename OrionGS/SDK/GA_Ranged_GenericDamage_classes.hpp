#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Ranged_GenericDamage

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C
// 0x0010 (0x0B00 - 0x0AF0)
class UGA_Ranged_GenericDamage_C : public UFortGameplayAbility_RangedWeapon
{
public:
	struct FGameplayTag                           GT_EventWeaponFire;                                // 0x0AF0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          ManualFireEvent;                                   // 0x0AF8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void K2_CommitExecute(const struct FGameplayEventData& CallFunc_GetEventData_GameplayEventData);
	void GetEventData(const struct FGameplayTag& EventTag, struct FGameplayEventData* GameplayEventData, const struct FGameplayTagContainer& GT_TargetTags, const struct FGameplayTagContainer& GT_InstigatorTags, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* CallFunc_GetCurrentPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayTagContainer& CallFunc_GetWeaponDataGameplayTags_GameplayTags, bool CallFunc_WeaponDataIsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Ranged_GenericDamage_C">();
	}
	static class UGA_Ranged_GenericDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Ranged_GenericDamage_C>();
	}
};
static_assert(alignof(UGA_Ranged_GenericDamage_C) == 0x000008, "Wrong alinment on UGA_Ranged_GenericDamage_C");
static_assert(sizeof(UGA_Ranged_GenericDamage_C) == 0x000B00, "Wrong size on UGA_Ranged_GenericDamage_C");
static_assert(offsetof(UGA_Ranged_GenericDamage_C, GT_EventWeaponFire) == 0x000AF0, "Member 'UGA_Ranged_GenericDamage_C::GT_EventWeaponFire' has a wrong offset!");
static_assert(offsetof(UGA_Ranged_GenericDamage_C, ManualFireEvent) == 0x000AF8, "Member 'UGA_Ranged_GenericDamage_C::ManualFireEvent' has a wrong offset!");

}

