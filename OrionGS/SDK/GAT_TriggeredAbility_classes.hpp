#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_TriggeredAbility

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAT_TriggeredAbility.GAT_TriggeredAbility_C
// 0x0018 (0x0AD0 - 0x0AB8)
class UGAT_TriggeredAbility_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           TC_AbilitiesGenericTriggeredAbilityActivate;       // 0x0AC0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlayerHolsterState;                               // 0x0AC8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GAT_TriggeredAbility(int32 EntryPoint, struct FGameplayEventData& K2Node_Event_EventData);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void TriggeredAbilitySetup(class UAbilitySystemComponent* AbilitySystemIn, class UAbilitySystemComponent** AbilitySystemOut);
	void SetHolsterWeaponWithName(class AFortPawn* Target_Fort_Pawn, bool ShouldHolster, bool PlayEquipAnim, bool ShowDebugPrintName, bool* IsWeaponHolstered, bool* OperationSuccessful, bool bOperationSuccessful, bool CallFunc_BooleanXOR_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	void EndAbilityWithReason(const class FString& Reason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAT_TriggeredAbility_C">();
	}
	static class UGAT_TriggeredAbility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAT_TriggeredAbility_C>();
	}
};
static_assert(alignof(UGAT_TriggeredAbility_C) == 0x000008, "Wrong alinment on UGAT_TriggeredAbility_C");
static_assert(sizeof(UGAT_TriggeredAbility_C) == 0x000AD0, "Wrong size on UGAT_TriggeredAbility_C");
static_assert(offsetof(UGAT_TriggeredAbility_C, UberGraphFrame) == 0x000AB8, "Member 'UGAT_TriggeredAbility_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAT_TriggeredAbility_C, TC_AbilitiesGenericTriggeredAbilityActivate) == 0x000AC0, "Member 'UGAT_TriggeredAbility_C::TC_AbilitiesGenericTriggeredAbilityActivate' has a wrong offset!");
static_assert(offsetof(UGAT_TriggeredAbility_C, bPlayerHolsterState) == 0x000AC8, "Member 'UGAT_TriggeredAbility_C::bPlayerHolsterState' has a wrong offset!");

}

