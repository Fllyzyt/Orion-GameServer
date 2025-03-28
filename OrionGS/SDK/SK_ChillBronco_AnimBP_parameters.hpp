#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SK_ChillBronco_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function SK_ChillBronco_AnimBP.SK_ChillBronco_AnimBP_C.ExecuteUbergraph_SK_ChillBronco_AnimBP
// 0x0004 (0x0004 - 0x0000)
struct SK_ChillBronco_AnimBP_C_ExecuteUbergraph_SK_ChillBronco_AnimBP final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SK_ChillBronco_AnimBP_C_ExecuteUbergraph_SK_ChillBronco_AnimBP) == 0x000004, "Wrong alinment on SK_ChillBronco_AnimBP_C_ExecuteUbergraph_SK_ChillBronco_AnimBP");
static_assert(sizeof(SK_ChillBronco_AnimBP_C_ExecuteUbergraph_SK_ChillBronco_AnimBP) == 0x000004, "Wrong size on SK_ChillBronco_AnimBP_C_ExecuteUbergraph_SK_ChillBronco_AnimBP");
static_assert(offsetof(SK_ChillBronco_AnimBP_C_ExecuteUbergraph_SK_ChillBronco_AnimBP, EntryPoint) == 0x000000, "Member 'SK_ChillBronco_AnimBP_C_ExecuteUbergraph_SK_ChillBronco_AnimBP::EntryPoint' has a wrong offset!");

// Function SK_ChillBronco_AnimBP.SK_ChillBronco_AnimBP_C.AnimGraph
// 0x0020 (0x0020 - 0x0000)
struct SK_ChillBronco_AnimBP_C_AnimGraph final 
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(SK_ChillBronco_AnimBP_C_AnimGraph) == 0x000008, "Wrong alinment on SK_ChillBronco_AnimBP_C_AnimGraph");
static_assert(sizeof(SK_ChillBronco_AnimBP_C_AnimGraph) == 0x000020, "Wrong size on SK_ChillBronco_AnimBP_C_AnimGraph");
static_assert(offsetof(SK_ChillBronco_AnimBP_C_AnimGraph, InPose) == 0x000000, "Member 'SK_ChillBronco_AnimBP_C_AnimGraph::InPose' has a wrong offset!");
static_assert(offsetof(SK_ChillBronco_AnimBP_C_AnimGraph, Param_AnimGraph) == 0x000010, "Member 'SK_ChillBronco_AnimBP_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}

