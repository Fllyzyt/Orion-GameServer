#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_HidingProp_HidingInProp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C
// 0x0028 (0x0AE0 - 0x0AB8)
class UGA_Athena_HidingProp_HidingInProp_C final  : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                  ChangeEquipmentTag;                                // 0x0AC0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Athena_HidingProp_HidingInProp(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool K2Node_Event_bWasCancelled, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, float CallFunc_PlayAnimMontage_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component, bool K2Node_DynamicCast_bSuccess_2);
	void GrapplerFailSafe();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_HidingProp_HidingInProp_C">();
	}
	static class UGA_Athena_HidingProp_HidingInProp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_HidingProp_HidingInProp_C>();
	}
};
static_assert(alignof(UGA_Athena_HidingProp_HidingInProp_C) == 0x000008, "Wrong alinment on UGA_Athena_HidingProp_HidingInProp_C");
static_assert(sizeof(UGA_Athena_HidingProp_HidingInProp_C) == 0x000AE0, "Wrong size on UGA_Athena_HidingProp_HidingInProp_C");
static_assert(offsetof(UGA_Athena_HidingProp_HidingInProp_C, UberGraphFrame) == 0x000AB8, "Member 'UGA_Athena_HidingProp_HidingInProp_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_HidingProp_HidingInProp_C, ChangeEquipmentTag) == 0x000AC0, "Member 'UGA_Athena_HidingProp_HidingInProp_C::ChangeEquipmentTag' has a wrong offset!");

}

