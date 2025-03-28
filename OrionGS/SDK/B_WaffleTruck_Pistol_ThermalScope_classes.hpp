#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_WaffleTruck_Pistol_ThermalScope

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_WaffleTruck_ScopedRevolver_Parent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_WaffleTruck_Pistol_ThermalScope.B_WaffleTruck_Pistol_ThermalScope_C
// 0x0020 (0x1300 - 0x12E0)
class AB_WaffleTruck_Pistol_ThermalScope_C final  : public AB_WaffleTruck_ScopedRevolver_Parent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_WaffleTruck_Pistol_ThermalScope_C; // 0x12E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         ScalePlayerThermal_NewTrack_0_74F122334ABEC082DB6D87A4D6AEF901; // 0x12E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ScalePlayerThermal__Direction_74F122334ABEC082DB6D87A4D6AEF901; // 0x12EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5740[0x3];                                     // 0x12ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ScalePlayerThermal;                                // 0x12F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlendInTimeThermal;                                // 0x12F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_WaffleTruck_Pistol_ThermalScope(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_Event_bNewIsTargeting, class APawn* CallFunc_GetInstigator_ReturnValue, bool Temp_bool_IsClosed_Variable, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class APawn* CallFunc_GetInstigator_ReturnValue_1, bool CallFunc_GetIsTargeting_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue_1, bool CallFunc_GetIsTargeting_ReturnValue_1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Divide_FloatFloat_ReturnValue);
	void ForceScopeBackImmediatly();
	void ReverseScopePP();
	void PlayScopePP();
	void OnSetTargeting(bool bNewIsTargeting);
	void ScalePlayerThermal__UpdateFunc();
	void ScalePlayerThermal__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_WaffleTruck_Pistol_ThermalScope_C">();
	}
	static class AB_WaffleTruck_Pistol_ThermalScope_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_WaffleTruck_Pistol_ThermalScope_C>();
	}
};
static_assert(alignof(AB_WaffleTruck_Pistol_ThermalScope_C) == 0x000008, "Wrong alinment on AB_WaffleTruck_Pistol_ThermalScope_C");
static_assert(sizeof(AB_WaffleTruck_Pistol_ThermalScope_C) == 0x001300, "Wrong size on AB_WaffleTruck_Pistol_ThermalScope_C");
static_assert(offsetof(AB_WaffleTruck_Pistol_ThermalScope_C, UberGraphFrame_B_WaffleTruck_Pistol_ThermalScope_C) == 0x0012E0, "Member 'AB_WaffleTruck_Pistol_ThermalScope_C::UberGraphFrame_B_WaffleTruck_Pistol_ThermalScope_C' has a wrong offset!");
static_assert(offsetof(AB_WaffleTruck_Pistol_ThermalScope_C, ScalePlayerThermal_NewTrack_0_74F122334ABEC082DB6D87A4D6AEF901) == 0x0012E8, "Member 'AB_WaffleTruck_Pistol_ThermalScope_C::ScalePlayerThermal_NewTrack_0_74F122334ABEC082DB6D87A4D6AEF901' has a wrong offset!");
static_assert(offsetof(AB_WaffleTruck_Pistol_ThermalScope_C, ScalePlayerThermal__Direction_74F122334ABEC082DB6D87A4D6AEF901) == 0x0012EC, "Member 'AB_WaffleTruck_Pistol_ThermalScope_C::ScalePlayerThermal__Direction_74F122334ABEC082DB6D87A4D6AEF901' has a wrong offset!");
static_assert(offsetof(AB_WaffleTruck_Pistol_ThermalScope_C, ScalePlayerThermal) == 0x0012F0, "Member 'AB_WaffleTruck_Pistol_ThermalScope_C::ScalePlayerThermal' has a wrong offset!");
static_assert(offsetof(AB_WaffleTruck_Pistol_ThermalScope_C, BlendInTimeThermal) == 0x0012F8, "Member 'AB_WaffleTruck_Pistol_ThermalScope_C::BlendInTimeThermal' has a wrong offset!");

}

