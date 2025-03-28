#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_BattleMapBaseNode

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BattleMapBaseNode.BP_BattleMapBaseNode_C
// 0x0010 (0x0358 - 0x0348)
class ABP_BattleMapBaseNode_C : public ABattleMapNode
{
public:
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleMapBaseNode_C">();
	}
	static class ABP_BattleMapBaseNode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattleMapBaseNode_C>();
	}
};
static_assert(alignof(ABP_BattleMapBaseNode_C) == 0x000008, "Wrong alinment on ABP_BattleMapBaseNode_C");
static_assert(sizeof(ABP_BattleMapBaseNode_C) == 0x000358, "Wrong size on ABP_BattleMapBaseNode_C");
static_assert(offsetof(ABP_BattleMapBaseNode_C, StaticMesh) == 0x000348, "Member 'ABP_BattleMapBaseNode_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_BattleMapBaseNode_C, DefaultSceneRoot) == 0x000350, "Member 'ABP_BattleMapBaseNode_C::DefaultSceneRoot' has a wrong offset!");

}

