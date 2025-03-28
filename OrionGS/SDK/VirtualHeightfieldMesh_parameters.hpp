#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VirtualHeightfieldMesh

#include "Basic.hpp"


namespace SDK::Params
{

// Function VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent.GatherHideFlags
// 0x0002 (0x0002 - 0x0000)
struct VirtualHeightfieldMeshComponent_GatherHideFlags final 
{
public:
	bool                                          InOutHidePrimitivesInEditor;                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          InOutHidePrimitivesInGame;                         // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VirtualHeightfieldMeshComponent_GatherHideFlags) == 0x000001, "Wrong alinment on VirtualHeightfieldMeshComponent_GatherHideFlags");
static_assert(sizeof(VirtualHeightfieldMeshComponent_GatherHideFlags) == 0x000002, "Wrong size on VirtualHeightfieldMeshComponent_GatherHideFlags");
static_assert(offsetof(VirtualHeightfieldMeshComponent_GatherHideFlags, InOutHidePrimitivesInEditor) == 0x000000, "Member 'VirtualHeightfieldMeshComponent_GatherHideFlags::InOutHidePrimitivesInEditor' has a wrong offset!");
static_assert(offsetof(VirtualHeightfieldMeshComponent_GatherHideFlags, InOutHidePrimitivesInGame) == 0x000001, "Member 'VirtualHeightfieldMeshComponent_GatherHideFlags::InOutHidePrimitivesInGame' has a wrong offset!");

}

