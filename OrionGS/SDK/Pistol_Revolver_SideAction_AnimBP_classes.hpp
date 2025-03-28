#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Pistol_Revolver_SideAction_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Pistol_Revolver_SideAction_AnimBP.Pistol_Revolver_SideAction_AnimBP_C
// 0x0100 (0x03C0 - 0x02C0)
class UPistol_Revolver_SideAction_AnimBP_C final  : public UAnimInstance
{
public:
	uint8                                         Pad_6D18[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData             AnimBlueprintClassSubsystem_PropertyAccess;        // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D19[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02D0(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0300(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0348(0x0078)()

public:
	void ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Pistol_Revolver_SideAction_AnimBP_C">();
	}
	static class UPistol_Revolver_SideAction_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPistol_Revolver_SideAction_AnimBP_C>();
	}
};
static_assert(alignof(UPistol_Revolver_SideAction_AnimBP_C) == 0x000010, "Wrong alinment on UPistol_Revolver_SideAction_AnimBP_C");
static_assert(sizeof(UPistol_Revolver_SideAction_AnimBP_C) == 0x0003C0, "Wrong size on UPistol_Revolver_SideAction_AnimBP_C");
static_assert(offsetof(UPistol_Revolver_SideAction_AnimBP_C, UberGraphFrame) == 0x0002C0, "Member 'UPistol_Revolver_SideAction_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPistol_Revolver_SideAction_AnimBP_C, AnimBlueprintClassSubsystem_PropertyAccess) == 0x0002C8, "Member 'UPistol_Revolver_SideAction_AnimBP_C::AnimBlueprintClassSubsystem_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UPistol_Revolver_SideAction_AnimBP_C, AnimGraphNode_Root) == 0x0002D0, "Member 'UPistol_Revolver_SideAction_AnimBP_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UPistol_Revolver_SideAction_AnimBP_C, AnimGraphNode_Slot) == 0x000300, "Member 'UPistol_Revolver_SideAction_AnimBP_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UPistol_Revolver_SideAction_AnimBP_C, AnimGraphNode_SequencePlayer) == 0x000348, "Member 'UPistol_Revolver_SideAction_AnimBP_C::AnimGraphNode_SequencePlayer' has a wrong offset!");

}

