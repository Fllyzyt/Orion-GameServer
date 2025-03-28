#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FluidSim_FN

#include "Basic.hpp"

#include "FluidForceDynamicPerInstanceData_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_FluidSim_FN.BP_FluidSim_FN_C.ExecuteUbergraph_BP_FluidSim_FN
// 0x0004 (0x0004 - 0x0000)
struct BP_FluidSim_FN_C_ExecuteUbergraph_BP_FluidSim_FN final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FluidSim_FN_C_ExecuteUbergraph_BP_FluidSim_FN) == 0x000004, "Wrong alinment on BP_FluidSim_FN_C_ExecuteUbergraph_BP_FluidSim_FN");
static_assert(sizeof(BP_FluidSim_FN_C_ExecuteUbergraph_BP_FluidSim_FN) == 0x000004, "Wrong size on BP_FluidSim_FN_C_ExecuteUbergraph_BP_FluidSim_FN");
static_assert(offsetof(BP_FluidSim_FN_C_ExecuteUbergraph_BP_FluidSim_FN, EntryPoint) == 0x000000, "Member 'BP_FluidSim_FN_C_ExecuteUbergraph_BP_FluidSim_FN::EntryPoint' has a wrong offset!");

// Function BP_FluidSim_FN.BP_FluidSim_FN_C.GetLocalPawn
// 0x0020 (0x0020 - 0x0000)
struct BP_FluidSim_FN_C_GetLocalPawn final 
{
public:
	class APawn*                                  Pawn;                                              // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  CallFunc_GetFirstLocalFortPlayerController_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62D7[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_FluidSim_FN_C_GetLocalPawn) == 0x000008, "Wrong alinment on BP_FluidSim_FN_C_GetLocalPawn");
static_assert(sizeof(BP_FluidSim_FN_C_GetLocalPawn) == 0x000020, "Wrong size on BP_FluidSim_FN_C_GetLocalPawn");
static_assert(offsetof(BP_FluidSim_FN_C_GetLocalPawn, Pawn) == 0x000000, "Member 'BP_FluidSim_FN_C_GetLocalPawn::Pawn' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetLocalPawn, CallFunc_GetFirstLocalFortPlayerController_ReturnValue) == 0x000008, "Member 'BP_FluidSim_FN_C_GetLocalPawn::CallFunc_GetFirstLocalFortPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetLocalPawn, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'BP_FluidSim_FN_C_GetLocalPawn::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetLocalPawn, CallFunc_K2_GetPawn_ReturnValue) == 0x000018, "Member 'BP_FluidSim_FN_C_GetLocalPawn::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");

// Function BP_FluidSim_FN.BP_FluidSim_FN_C.GetFortnitePawnForces
// 0x0560 (0x0560 - 0x0000)
struct BP_FluidSim_FN_C_GetFortnitePawnForces final 
{
public:
	TMap<class UActorComponent*, struct FFluidForceDynamicPerInstanceData> PreviousDynamicForces;                             // 0x0000(0x0050)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<class AFortPawn*>                      RelevantPawns;                                     // 0x0050(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	int32                                         LastCheckedIndex;                                  // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62D8[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AFortPawn*>                      NearbyPawns;                                       // 0x0068(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	int32                                         CallFunc_GetShallowWaterMaxDynamicForces_ReturnValue; // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62D9[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_Array_Get_Item;                           // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62DA[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62DB[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue;         // 0x00A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFluidForceDynamicPerInstanceData      CallFunc_Map_Find_Value;                           // 0x00B8(0x0130)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInWater_ReturnValue;                    // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62DC[0x6];                                     // 0x01EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetSkeletalMeshComponent_ReturnValue;     // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInVehicle_ReturnValue;                  // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62DD[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFluidForceDynamicPerInstanceData      CallFunc_Map_Find_Value_1;                         // 0x0200(0x0130)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0330(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0331(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62DE[0x6];                                     // 0x0332(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;           // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62DF[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortWaterBodyActor*                    CallFunc_GetCurrentWaterBody_ReturnValue;          // 0x0348(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0350(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x035C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62E0[0x3];                                     // 0x035D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetWaterSurfaceInfo_WaterPlaneLocation;   // 0x0360(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetWaterSurfaceInfo_WaterPlaneNormal;     // 0x036C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetWaterSurfaceInfo_WaterSurfacePosition; // 0x0378(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWaterSurfaceInfo_WaterDepth;           // 0x0384(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetWaterSurfaceInfo_WaterBodyIdx;         // 0x0388(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetWaterSurfaceInfo_WaterVelocity;        // 0x038C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x039C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x03A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62E1[0x3];                                     // 0x03A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFluidForceDynamicPerInstanceData      K2Node_SetFieldsInStruct_StructOut;                // 0x03A8(0x0130)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x04D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x04DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x04E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62E2[0x3];                                     // 0x04E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x04E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x04E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62E3[0x4];                                     // 0x04EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetLocalPawn_Pawn;                        // 0x04F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              CallFunc_Array_Get_Item_1;                         // 0x04F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0500(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62E4[0x7];                                     // 0x0501(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_2;           // 0x0508(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0510(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62E5[0x3];                                     // 0x0511(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0514(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDrivingVehicle_ReturnValue;             // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62E6[0x3];                                     // 0x0519(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetPawnLOD_ReturnValue;                   // 0x051C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_3;           // 0x0520(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0528(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0529(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62E7[0x2];                                     // 0x052A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x052C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0530(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62E8[0x3];                                     // 0x0531(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0534(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0538(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62E9[0x3];                                     // 0x0539(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x053C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0540(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62EA[0x3];                                     // 0x0541(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0544(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0548(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62EB[0x3];                                     // 0x0549(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x054C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPawn*>                      CallFunc_GetFortPawnsInRange_OutFortPawns;         // 0x0550(0x0010)(ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_FluidSim_FN_C_GetFortnitePawnForces) == 0x000008, "Wrong alinment on BP_FluidSim_FN_C_GetFortnitePawnForces");
static_assert(sizeof(BP_FluidSim_FN_C_GetFortnitePawnForces) == 0x000560, "Wrong size on BP_FluidSim_FN_C_GetFortnitePawnForces");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, PreviousDynamicForces) == 0x000000, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::PreviousDynamicForces' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, RelevantPawns) == 0x000050, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::RelevantPawns' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, LastCheckedIndex) == 0x000060, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::LastCheckedIndex' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, NearbyPawns) == 0x000068, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::NearbyPawns' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_GetShallowWaterMaxDynamicForces_ReturnValue) == 0x000078, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_GetShallowWaterMaxDynamicForces_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, Temp_int_Array_Index_Variable) == 0x00007C, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, Temp_int_Array_Index_Variable_1) == 0x000080, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Array_Get_Item) == 0x000088, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Array_Length_ReturnValue) == 0x000090, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000098, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_GetVehicleUInterface_ReturnValue) == 0x0000A8, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_GetVehicleUInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Map_Find_Value) == 0x0000B8, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Map_Find_ReturnValue) == 0x0001E8, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_IsInWater_ReturnValue) == 0x0001E9, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_IsInWater_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_GetSkeletalMeshComponent_ReturnValue) == 0x0001F0, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_GetSkeletalMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_IsInVehicle_ReturnValue) == 0x0001F8, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_IsInVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Map_Find_Value_1) == 0x000200, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Map_Find_ReturnValue_1) == 0x000330, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_IsValid_ReturnValue) == 0x000331, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x000338, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, K2Node_DynamicCast_bSuccess_1) == 0x000340, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_GetCurrentWaterBody_ReturnValue) == 0x000348, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_GetCurrentWaterBody_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000350, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_IsValid_ReturnValue_1) == 0x00035C, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_GetWaterSurfaceInfo_WaterPlaneLocation) == 0x000360, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_GetWaterSurfaceInfo_WaterPlaneLocation' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_GetWaterSurfaceInfo_WaterPlaneNormal) == 0x00036C, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_GetWaterSurfaceInfo_WaterPlaneNormal' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_GetWaterSurfaceInfo_WaterSurfacePosition) == 0x000378, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_GetWaterSurfaceInfo_WaterSurfacePosition' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_GetWaterSurfaceInfo_WaterDepth) == 0x000384, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_GetWaterSurfaceInfo_WaterDepth' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_GetWaterSurfaceInfo_WaterBodyIdx) == 0x000388, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_GetWaterSurfaceInfo_WaterBodyIdx' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_GetWaterSurfaceInfo_WaterVelocity) == 0x00038C, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_GetWaterSurfaceInfo_WaterVelocity' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_BreakVector_X) == 0x000398, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_BreakVector_Y) == 0x00039C, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_BreakVector_Z) == 0x0003A0, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_IsValid_ReturnValue_2) == 0x0003A4, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, K2Node_SetFieldsInStruct_StructOut) == 0x0003A8, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, Temp_int_Loop_Counter_Variable) == 0x0004D8, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, Temp_int_Loop_Counter_Variable_1) == 0x0004DC, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Less_IntInt_ReturnValue) == 0x0004E0, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Add_IntInt_ReturnValue) == 0x0004E4, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Add_IntInt_ReturnValue_1) == 0x0004E8, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_GetLocalPawn_Pawn) == 0x0004F0, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_GetLocalPawn_Pawn' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Array_Get_Item_1) == 0x0004F8, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_IsValid_ReturnValue_3) == 0x000500, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, K2Node_DynamicCast_AsFort_Player_Pawn_2) == 0x000508, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::K2Node_DynamicCast_AsFort_Player_Pawn_2' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, K2Node_DynamicCast_bSuccess_2) == 0x000510, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Array_Add_ReturnValue) == 0x000514, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_IsDrivingVehicle_ReturnValue) == 0x000518, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_IsDrivingVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_GetPawnLOD_ReturnValue) == 0x00051C, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_GetPawnLOD_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, K2Node_DynamicCast_AsFort_Player_Pawn_3) == 0x000520, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::K2Node_DynamicCast_AsFort_Player_Pawn_3' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, K2Node_DynamicCast_bSuccess_3) == 0x000528, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000529, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Array_AddUnique_ReturnValue) == 0x00052C, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_BooleanOR_ReturnValue) == 0x000530, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Array_Length_ReturnValue_1) == 0x000534, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Less_IntInt_ReturnValue_1) == 0x000538, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Array_Length_ReturnValue_2) == 0x00053C, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Less_IntInt_ReturnValue_2) == 0x000540, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Percent_IntInt_ReturnValue) == 0x000544, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000548, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00054C, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_FluidSim_FN_C_GetFortnitePawnForces, CallFunc_GetFortPawnsInRange_OutFortPawns) == 0x000550, "Member 'BP_FluidSim_FN_C_GetFortnitePawnForces::CallFunc_GetFortPawnsInRange_OutFortPawns' has a wrong offset!");

}

