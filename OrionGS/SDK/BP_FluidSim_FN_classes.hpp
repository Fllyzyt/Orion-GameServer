#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FluidSim_FN

#include "Basic.hpp"

#include "FluidForceDynamic_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_FluidSim_01_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FluidSim_FN.BP_FluidSim_FN_C
// 0x0100 (0x0550 - 0x0450)
class ABP_FluidSim_FN_C final  : public ABP_FluidSim_01_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_FluidSim_FN_C;                   // 0x0450(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FFluidForceDynamic                     BoatForceSettings;                                 // 0x0458(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	struct FFluidForceDynamic                     PlayerForceSettings;                               // 0x04C8(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class AFortPawn*>                      RelevantFortPawns;                                 // 0x0538(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Use_FN_Pawn_Forces;                                // 0x0548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_FluidSim_FN(int32 EntryPoint);
	void GetPlayerPawnForces();
	void GetLocalPawn(class APawn** Pawn, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue);
	void GetFortnitePawnForces(const TMap<class UActorComponent*, struct FFluidForceDynamicPerInstanceData>& PreviousDynamicForces, const TArray<class AFortPawn*>& RelevantPawns, int32 LastCheckedIndex, const TArray<class AFortPawn*>& NearbyPawns, int32 CallFunc_GetShallowWaterMaxDynamicForces_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class AFortPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue, const struct FFluidForceDynamicPerInstanceData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsInWater_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshComponent_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue, const struct FFluidForceDynamicPerInstanceData& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, class AFortWaterBodyActor* CallFunc_GetCurrentWaterBody_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetWaterSurfaceInfo_WaterPlaneLocation, const struct FVector& CallFunc_GetWaterSurfaceInfo_WaterPlaneNormal, const struct FVector& CallFunc_GetWaterSurfaceInfo_WaterSurfacePosition, float CallFunc_GetWaterSurfaceInfo_WaterDepth, int32 CallFunc_GetWaterSurfaceInfo_WaterBodyIdx, const struct FVector& CallFunc_GetWaterSurfaceInfo_WaterVelocity, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_IsValid_ReturnValue_2, const struct FFluidForceDynamicPerInstanceData& K2Node_SetFieldsInStruct_StructOut, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class APawn* CallFunc_GetLocalPawn_Pawn, class AFortPawn* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_3, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsDrivingVehicle_ReturnValue, int32 CallFunc_GetPawnLOD_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, TArray<class AFortPawn*>& CallFunc_GetFortPawnsInRange_OutFortPawns);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FluidSim_FN_C">();
	}
	static class ABP_FluidSim_FN_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FluidSim_FN_C>();
	}
};
static_assert(alignof(ABP_FluidSim_FN_C) == 0x000008, "Wrong alinment on ABP_FluidSim_FN_C");
static_assert(sizeof(ABP_FluidSim_FN_C) == 0x000550, "Wrong size on ABP_FluidSim_FN_C");
static_assert(offsetof(ABP_FluidSim_FN_C, UberGraphFrame_BP_FluidSim_FN_C) == 0x000450, "Member 'ABP_FluidSim_FN_C::UberGraphFrame_BP_FluidSim_FN_C' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_FN_C, BoatForceSettings) == 0x000458, "Member 'ABP_FluidSim_FN_C::BoatForceSettings' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_FN_C, PlayerForceSettings) == 0x0004C8, "Member 'ABP_FluidSim_FN_C::PlayerForceSettings' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_FN_C, RelevantFortPawns) == 0x000538, "Member 'ABP_FluidSim_FN_C::RelevantFortPawns' has a wrong offset!");
static_assert(offsetof(ABP_FluidSim_FN_C, Use_FN_Pawn_Forces) == 0x000548, "Member 'ABP_FluidSim_FN_C::Use_FN_Pawn_Forces' has a wrong offset!");

}

