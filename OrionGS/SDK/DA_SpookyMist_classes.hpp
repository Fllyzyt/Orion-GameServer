#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DA_SpookyMist

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DA_SpookyMist.DA_SpookyMist_C
// 0x0040 (0x0DF0 - 0x0DB0)
class ADA_SpookyMist_C final  : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0DB0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                           CanCancelTimer;                                    // 0x0DB8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         CancelDelay;                                       // 0x0DC0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0DE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DA_SpookyMist(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDrivingVehicle_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, class APawn* CallFunc_GetInstigator_ReturnValue_1, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData_1, class APawn* CallFunc_GetInstigator_ReturnValue_2, class AFortDecoHelper* K2Node_Event_FortDecoHelper_2, class AFortDecoHelper* K2Node_Event_FortDecoHelper_1, class AFortDecoHelper* K2Node_Event_FortDecoHelper, float CallFunc_GetValueAtLevel_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_GetInstigator_ReturnValue_4, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_2, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_GetInstigator_ReturnValue_5, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_3);
	void On_DBNO();
	void ReceiveBeginPlay();
	void CanCancel();
	void BPReleaseSecondaryFire(class AFortDecoHelper* FortDecoHelper);
	void BPOnUnEquip();
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DA_SpookyMist_C">();
	}
	static class ADA_SpookyMist_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADA_SpookyMist_C>();
	}
};
static_assert(alignof(ADA_SpookyMist_C) == 0x000008, "Wrong alinment on ADA_SpookyMist_C");
static_assert(sizeof(ADA_SpookyMist_C) == 0x000DF0, "Wrong size on ADA_SpookyMist_C");
static_assert(offsetof(ADA_SpookyMist_C, UberGraphFrame) == 0x000DB0, "Member 'ADA_SpookyMist_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ADA_SpookyMist_C, CanCancelTimer) == 0x000DB8, "Member 'ADA_SpookyMist_C::CanCancelTimer' has a wrong offset!");
static_assert(offsetof(ADA_SpookyMist_C, CancelDelay) == 0x000DC0, "Member 'ADA_SpookyMist_C::CancelDelay' has a wrong offset!");
static_assert(offsetof(ADA_SpookyMist_C, PlayerPawn) == 0x000DE8, "Member 'ADA_SpookyMist_C::PlayerPawn' has a wrong offset!");

}

