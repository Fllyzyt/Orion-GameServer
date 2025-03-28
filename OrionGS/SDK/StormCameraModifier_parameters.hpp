#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StormCameraModifier

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function StormCameraModifier.StormCameraModifier_C.BlueprintModifyPostProcess
// 0x0AB0 (0x0AB0 - 0x0000)
struct StormCameraModifier_C_BlueprintModifyPostProcess final 
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PostProcessBlendWeight;                            // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E2A[0x8];                                     // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   PostProcessSettings;                               // 0x0010(0x0550)(Parm, OutParm)
	struct FPostProcessSettings                   K2Node_MakeStruct_PostProcessSettings;             // 0x0560(0x0550)()
};
static_assert(alignof(StormCameraModifier_C_BlueprintModifyPostProcess) == 0x000010, "Wrong alinment on StormCameraModifier_C_BlueprintModifyPostProcess");
static_assert(sizeof(StormCameraModifier_C_BlueprintModifyPostProcess) == 0x000AB0, "Wrong size on StormCameraModifier_C_BlueprintModifyPostProcess");
static_assert(offsetof(StormCameraModifier_C_BlueprintModifyPostProcess, DeltaTime) == 0x000000, "Member 'StormCameraModifier_C_BlueprintModifyPostProcess::DeltaTime' has a wrong offset!");
static_assert(offsetof(StormCameraModifier_C_BlueprintModifyPostProcess, PostProcessBlendWeight) == 0x000004, "Member 'StormCameraModifier_C_BlueprintModifyPostProcess::PostProcessBlendWeight' has a wrong offset!");
static_assert(offsetof(StormCameraModifier_C_BlueprintModifyPostProcess, PostProcessSettings) == 0x000010, "Member 'StormCameraModifier_C_BlueprintModifyPostProcess::PostProcessSettings' has a wrong offset!");
static_assert(offsetof(StormCameraModifier_C_BlueprintModifyPostProcess, K2Node_MakeStruct_PostProcessSettings) == 0x000560, "Member 'StormCameraModifier_C_BlueprintModifyPostProcess::K2Node_MakeStruct_PostProcessSettings' has a wrong offset!");

}

