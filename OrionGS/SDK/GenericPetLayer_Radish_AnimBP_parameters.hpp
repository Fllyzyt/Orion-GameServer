#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GenericPetLayer_Radish_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GenericPetLayer_Radish_AnimBP.GenericPetLayer_Radish_AnimBP_C.ExecuteUbergraph_GenericPetLayer_Radish_AnimBP
// 0x0004 (0x0004 - 0x0000)
struct GenericPetLayer_Radish_AnimBP_C_ExecuteUbergraph_GenericPetLayer_Radish_AnimBP final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GenericPetLayer_Radish_AnimBP_C_ExecuteUbergraph_GenericPetLayer_Radish_AnimBP) == 0x000004, "Wrong alinment on GenericPetLayer_Radish_AnimBP_C_ExecuteUbergraph_GenericPetLayer_Radish_AnimBP");
static_assert(sizeof(GenericPetLayer_Radish_AnimBP_C_ExecuteUbergraph_GenericPetLayer_Radish_AnimBP) == 0x000004, "Wrong size on GenericPetLayer_Radish_AnimBP_C_ExecuteUbergraph_GenericPetLayer_Radish_AnimBP");
static_assert(offsetof(GenericPetLayer_Radish_AnimBP_C_ExecuteUbergraph_GenericPetLayer_Radish_AnimBP, EntryPoint) == 0x000000, "Member 'GenericPetLayer_Radish_AnimBP_C_ExecuteUbergraph_GenericPetLayer_Radish_AnimBP::EntryPoint' has a wrong offset!");

// Function GenericPetLayer_Radish_AnimBP.GenericPetLayer_Radish_AnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct GenericPetLayer_Radish_AnimBP_C_AnimGraph final 
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(GenericPetLayer_Radish_AnimBP_C_AnimGraph) == 0x000008, "Wrong alinment on GenericPetLayer_Radish_AnimBP_C_AnimGraph");
static_assert(sizeof(GenericPetLayer_Radish_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on GenericPetLayer_Radish_AnimBP_C_AnimGraph");
static_assert(offsetof(GenericPetLayer_Radish_AnimBP_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'GenericPetLayer_Radish_AnimBP_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function GenericPetLayer_Radish_AnimBP.GenericPetLayer_Radish_AnimBP_C.PetSkeletalControlLayer
// 0x0038 (0x0038 - 0x0000)
struct GenericPetLayer_Radish_AnimBP_C_PetSkeletalControlLayer final 
{
public:
	struct FPoseLink                              Pose;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                         Param_LookAtOverrideInput;                         // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Param_LookAtTargetLocationInput;                   // 0x0014(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Param_LegIKAlphaOverride;                          // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Param_HandIKAlphaOverride;                         // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPoseLink                              Param_PetSkeletalControlLayer;                     // 0x0028(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(GenericPetLayer_Radish_AnimBP_C_PetSkeletalControlLayer) == 0x000008, "Wrong alinment on GenericPetLayer_Radish_AnimBP_C_PetSkeletalControlLayer");
static_assert(sizeof(GenericPetLayer_Radish_AnimBP_C_PetSkeletalControlLayer) == 0x000038, "Wrong size on GenericPetLayer_Radish_AnimBP_C_PetSkeletalControlLayer");
static_assert(offsetof(GenericPetLayer_Radish_AnimBP_C_PetSkeletalControlLayer, Pose) == 0x000000, "Member 'GenericPetLayer_Radish_AnimBP_C_PetSkeletalControlLayer::Pose' has a wrong offset!");
static_assert(offsetof(GenericPetLayer_Radish_AnimBP_C_PetSkeletalControlLayer, Param_LookAtOverrideInput) == 0x000010, "Member 'GenericPetLayer_Radish_AnimBP_C_PetSkeletalControlLayer::Param_LookAtOverrideInput' has a wrong offset!");
static_assert(offsetof(GenericPetLayer_Radish_AnimBP_C_PetSkeletalControlLayer, Param_LookAtTargetLocationInput) == 0x000014, "Member 'GenericPetLayer_Radish_AnimBP_C_PetSkeletalControlLayer::Param_LookAtTargetLocationInput' has a wrong offset!");
static_assert(offsetof(GenericPetLayer_Radish_AnimBP_C_PetSkeletalControlLayer, Param_LegIKAlphaOverride) == 0x000020, "Member 'GenericPetLayer_Radish_AnimBP_C_PetSkeletalControlLayer::Param_LegIKAlphaOverride' has a wrong offset!");
static_assert(offsetof(GenericPetLayer_Radish_AnimBP_C_PetSkeletalControlLayer, Param_HandIKAlphaOverride) == 0x000024, "Member 'GenericPetLayer_Radish_AnimBP_C_PetSkeletalControlLayer::Param_HandIKAlphaOverride' has a wrong offset!");
static_assert(offsetof(GenericPetLayer_Radish_AnimBP_C_PetSkeletalControlLayer, Param_PetSkeletalControlLayer) == 0x000028, "Member 'GenericPetLayer_Radish_AnimBP_C_PetSkeletalControlLayer::Param_PetSkeletalControlLayer' has a wrong offset!");

// Function GenericPetLayer_Radish_AnimBP.GenericPetLayer_Radish_AnimBP_C.PetFullOverrideLayer
// 0x0020 (0x0020 - 0x0000)
struct GenericPetLayer_Radish_AnimBP_C_PetFullOverrideLayer final 
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Param_PetFullOverrideLayer;                        // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(GenericPetLayer_Radish_AnimBP_C_PetFullOverrideLayer) == 0x000008, "Wrong alinment on GenericPetLayer_Radish_AnimBP_C_PetFullOverrideLayer");
static_assert(sizeof(GenericPetLayer_Radish_AnimBP_C_PetFullOverrideLayer) == 0x000020, "Wrong size on GenericPetLayer_Radish_AnimBP_C_PetFullOverrideLayer");
static_assert(offsetof(GenericPetLayer_Radish_AnimBP_C_PetFullOverrideLayer, InPose) == 0x000000, "Member 'GenericPetLayer_Radish_AnimBP_C_PetFullOverrideLayer::InPose' has a wrong offset!");
static_assert(offsetof(GenericPetLayer_Radish_AnimBP_C_PetFullOverrideLayer, Param_PetFullOverrideLayer) == 0x000010, "Member 'GenericPetLayer_Radish_AnimBP_C_PetFullOverrideLayer::Param_PetFullOverrideLayer' has a wrong offset!");

}

