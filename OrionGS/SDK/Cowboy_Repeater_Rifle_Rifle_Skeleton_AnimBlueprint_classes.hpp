#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Cowboy_Repeater_Rifle_Rifle_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Cowboy_Repeater_Rifle_Rifle_Skeleton_AnimBlueprint.Cowboy_Repeater_Rifle_Rifle_Skeleton_AnimBlueprint_C
// 0x0100 (0x03C0 - 0x02C0)
class UCowboy_Repeater_Rifle_Rifle_Skeleton_AnimBlueprint_C final  : public UAnimInstance
{
public:
	uint8                                         Pad_4D15[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData             AnimBlueprintClassSubsystem_PropertyAccess;        // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D16[0x7];                                     // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02D0(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0300(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0348(0x0078)()

public:
	void ExecuteUbergraph_Cowboy_Repeater_Rifle_Rifle_Skeleton_AnimBlueprint(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Cowboy_Repeater_Rifle_Rifle_Skeleton_AnimBlueprint_C">();
	}
	static class UCowboy_Repeater_Rifle_Rifle_Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCowboy_Repeater_Rifle_Rifle_Skeleton_AnimBlueprint_C>();
	}
};
static_assert(alignof(UCowboy_Repeater_Rifle_Rifle_Skeleton_AnimBlueprint_C) == 0x000010, "Wrong alinment on UCowboy_Repeater_Rifle_Rifle_Skeleton_AnimBlueprint_C");
static_assert(sizeof(UCowboy_Repeater_Rifle_Rifle_Skeleton_AnimBlueprint_C) == 0x0003C0, "Wrong size on UCowboy_Repeater_Rifle_Rifle_Skeleton_AnimBlueprint_C");
static_assert(offsetof(UCowboy_Repeater_Rifle_Rifle_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x0002C0, "Member 'UCowboy_Repeater_Rifle_Rifle_Skeleton_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCowboy_Repeater_Rifle_Rifle_Skeleton_AnimBlueprint_C, AnimBlueprintClassSubsystem_PropertyAccess) == 0x0002C8, "Member 'UCowboy_Repeater_Rifle_Rifle_Skeleton_AnimBlueprint_C::AnimBlueprintClassSubsystem_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UCowboy_Repeater_Rifle_Rifle_Skeleton_AnimBlueprint_C, AnimGraphNode_Root) == 0x0002D0, "Member 'UCowboy_Repeater_Rifle_Rifle_Skeleton_AnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UCowboy_Repeater_Rifle_Rifle_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot) == 0x000300, "Member 'UCowboy_Repeater_Rifle_Rifle_Skeleton_AnimBlueprint_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UCowboy_Repeater_Rifle_Rifle_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer) == 0x000348, "Member 'UCowboy_Repeater_Rifle_Rifle_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer' has a wrong offset!");

}

