#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BuildingContainer_Physics_Parent

#include "Basic.hpp"


namespace SDK::Params
{

// Function BuildingContainer_Physics_Parent.BuildingContainer_Physics_Parent_C.ExecuteUbergraph_BuildingContainer_Physics_Parent
// 0x0018 (0x0018 - 0x0000)
struct BuildingContainer_Physics_Parent_C_ExecuteUbergraph_BuildingContainer_Physics_Parent final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PerformLinkingCheck_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B1F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_SimulatingComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsAwake;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAwake_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_PerformLinkingCheck_ReturnValue_1;        // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BuildingContainer_Physics_Parent_C_ExecuteUbergraph_BuildingContainer_Physics_Parent) == 0x000008, "Wrong alinment on BuildingContainer_Physics_Parent_C_ExecuteUbergraph_BuildingContainer_Physics_Parent");
static_assert(sizeof(BuildingContainer_Physics_Parent_C_ExecuteUbergraph_BuildingContainer_Physics_Parent) == 0x000018, "Wrong size on BuildingContainer_Physics_Parent_C_ExecuteUbergraph_BuildingContainer_Physics_Parent");
static_assert(offsetof(BuildingContainer_Physics_Parent_C_ExecuteUbergraph_BuildingContainer_Physics_Parent, EntryPoint) == 0x000000, "Member 'BuildingContainer_Physics_Parent_C_ExecuteUbergraph_BuildingContainer_Physics_Parent::EntryPoint' has a wrong offset!");
static_assert(offsetof(BuildingContainer_Physics_Parent_C_ExecuteUbergraph_BuildingContainer_Physics_Parent, CallFunc_PerformLinkingCheck_ReturnValue) == 0x000004, "Member 'BuildingContainer_Physics_Parent_C_ExecuteUbergraph_BuildingContainer_Physics_Parent::CallFunc_PerformLinkingCheck_ReturnValue' has a wrong offset!");
static_assert(offsetof(BuildingContainer_Physics_Parent_C_ExecuteUbergraph_BuildingContainer_Physics_Parent, K2Node_ComponentBoundEvent_SimulatingComponent) == 0x000008, "Member 'BuildingContainer_Physics_Parent_C_ExecuteUbergraph_BuildingContainer_Physics_Parent::K2Node_ComponentBoundEvent_SimulatingComponent' has a wrong offset!");
static_assert(offsetof(BuildingContainer_Physics_Parent_C_ExecuteUbergraph_BuildingContainer_Physics_Parent, K2Node_ComponentBoundEvent_bIsAwake) == 0x000010, "Member 'BuildingContainer_Physics_Parent_C_ExecuteUbergraph_BuildingContainer_Physics_Parent::K2Node_ComponentBoundEvent_bIsAwake' has a wrong offset!");
static_assert(offsetof(BuildingContainer_Physics_Parent_C_ExecuteUbergraph_BuildingContainer_Physics_Parent, CallFunc_IsAwake_ReturnValue) == 0x000011, "Member 'BuildingContainer_Physics_Parent_C_ExecuteUbergraph_BuildingContainer_Physics_Parent::CallFunc_IsAwake_ReturnValue' has a wrong offset!");
static_assert(offsetof(BuildingContainer_Physics_Parent_C_ExecuteUbergraph_BuildingContainer_Physics_Parent, CallFunc_PerformLinkingCheck_ReturnValue_1) == 0x000012, "Member 'BuildingContainer_Physics_Parent_C_ExecuteUbergraph_BuildingContainer_Physics_Parent::CallFunc_PerformLinkingCheck_ReturnValue_1' has a wrong offset!");

// Function BuildingContainer_Physics_Parent.BuildingContainer_Physics_Parent_C.BndEvt__FortPhysicsObject_K2Node_ComponentBoundEvent_0_OnPhysicsObjectAwakeChanged__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct BuildingContainer_Physics_Parent_C_BndEvt__FortPhysicsObject_K2Node_ComponentBoundEvent_0_OnPhysicsObjectAwakeChanged__DelegateSignature final 
{
public:
	class UPrimitiveComponent*                    SimulatingComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsAwake;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BuildingContainer_Physics_Parent_C_BndEvt__FortPhysicsObject_K2Node_ComponentBoundEvent_0_OnPhysicsObjectAwakeChanged__DelegateSignature) == 0x000008, "Wrong alinment on BuildingContainer_Physics_Parent_C_BndEvt__FortPhysicsObject_K2Node_ComponentBoundEvent_0_OnPhysicsObjectAwakeChanged__DelegateSignature");
static_assert(sizeof(BuildingContainer_Physics_Parent_C_BndEvt__FortPhysicsObject_K2Node_ComponentBoundEvent_0_OnPhysicsObjectAwakeChanged__DelegateSignature) == 0x000010, "Wrong size on BuildingContainer_Physics_Parent_C_BndEvt__FortPhysicsObject_K2Node_ComponentBoundEvent_0_OnPhysicsObjectAwakeChanged__DelegateSignature");
static_assert(offsetof(BuildingContainer_Physics_Parent_C_BndEvt__FortPhysicsObject_K2Node_ComponentBoundEvent_0_OnPhysicsObjectAwakeChanged__DelegateSignature, SimulatingComponent) == 0x000000, "Member 'BuildingContainer_Physics_Parent_C_BndEvt__FortPhysicsObject_K2Node_ComponentBoundEvent_0_OnPhysicsObjectAwakeChanged__DelegateSignature::SimulatingComponent' has a wrong offset!");
static_assert(offsetof(BuildingContainer_Physics_Parent_C_BndEvt__FortPhysicsObject_K2Node_ComponentBoundEvent_0_OnPhysicsObjectAwakeChanged__DelegateSignature, bIsAwake) == 0x000008, "Member 'BuildingContainer_Physics_Parent_C_BndEvt__FortPhysicsObject_K2Node_ComponentBoundEvent_0_OnPhysicsObjectAwakeChanged__DelegateSignature::bIsAwake' has a wrong offset!");

}

