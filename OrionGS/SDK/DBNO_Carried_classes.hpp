#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DBNO_Carried

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass DBNO_Carried.DBNO_Carried_C
// 0x0B40 (0x2720 - 0x1BE0)
class UDBNO_Carried_C final  : public UFortPlayerAnimInstance_DBNOCarried
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1BE0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimInstanceSubsystemData             AnimBlueprintClassSubsystem_PropertyAccess;        // 0x1BE8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65F5[0x7];                                     // 0x1BE9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1BF0(0x0030)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x1C20(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x1C40(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x1D48(0x0108)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x1E50(0x0078)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x1EC8(0x00C8)()
	struct FAnimNode_TwoBoneIK                    AnimGraphNode_TwoBoneIK;                           // 0x1F90(0x01E0)()
	struct FAnimNode_LinkedAnimGraph              AnimGraphNode_SubInstance;                         // 0x2170(0x00A0)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x2210(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x2230(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x2258(0x0028)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator_1;                 // 0x2280(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x22C8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x22F8(0x0078)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x2370(0x0030)()
	struct FAnimNode_SequenceEvaluator            AnimGraphNode_SequenceEvaluator;                   // 0x23A0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x23E8(0x0030)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x2418(0x00B0)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;                         // 0x24C8(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x2590(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x2658(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x2680(0x0028)()
	EFortPlayerAnimBodyType                       __CustomProperty_my_animbodytype_BC9172D64300E6A13C48509FE2988A40; // 0x26A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortCustomGender                             __CustomProperty_my_gender_BC9172D64300E6A13C48509FE2988A40; // 0x26A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Carried;                                           // 0x26AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65F6[0x5];                                     // 0x26AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerPawn_Athena_C*                   CarrierPawn;                                       // 0x26B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerAnimInstance*                CarrierAnimBP;                                     // 0x26B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LHandIKLocation;                                   // 0x26C0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               LHandIKRotation;                                   // 0x26CC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                TempAttachLocation;                                // 0x26D8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               TempAttachRotation;                                // 0x26E4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         SubAnimPhysicsWeight;                              // 0x26F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBeingDropped;                                    // 0x26F4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65F7[0x3];                                     // 0x26F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DropMontagePosition;                               // 0x26F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65F8[0x4];                                     // 0x26FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CarrierDropMontage;                                // 0x2700(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CarrierPickupMontage;                              // 0x2708(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBeingPickedUp;                                   // 0x2710(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65F9[0x3];                                     // 0x2711(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PickupMontagePosition;                             // 0x2714(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TransitionFromPickupToIdle;                        // 0x2718(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_DBNO_Carried(int32 EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UFortPlayerAnimInstance* K2Node_DynamicCast_AsFort_Player_Anim_Instance, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetInstanceStateWeight_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Montage_GetPosition_ReturnValue, float CallFunc_Montage_GetPlayRate_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Montage_GetPosition_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_Montage_IsPlaying_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue_1);
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_ModifyBone_59E069244645BEF22808AB9196186F3F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_ApplyAdditive_56B19EE040BEEBC25D674F8DC99831B9();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DBNO_Carried_C">();
	}
	static class UDBNO_Carried_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDBNO_Carried_C>();
	}
};
static_assert(alignof(UDBNO_Carried_C) == 0x000010, "Wrong alinment on UDBNO_Carried_C");
static_assert(sizeof(UDBNO_Carried_C) == 0x002720, "Wrong size on UDBNO_Carried_C");
static_assert(offsetof(UDBNO_Carried_C, UberGraphFrame) == 0x001BE0, "Member 'UDBNO_Carried_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, AnimBlueprintClassSubsystem_PropertyAccess) == 0x001BE8, "Member 'UDBNO_Carried_C::AnimBlueprintClassSubsystem_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, AnimGraphNode_Root) == 0x001BF0, "Member 'UDBNO_Carried_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, AnimGraphNode_LocalToComponentSpace) == 0x001C20, "Member 'UDBNO_Carried_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, AnimGraphNode_ModifyBone_1) == 0x001C40, "Member 'UDBNO_Carried_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, AnimGraphNode_ModifyBone) == 0x001D48, "Member 'UDBNO_Carried_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, AnimGraphNode_SequencePlayer_1) == 0x001E50, "Member 'UDBNO_Carried_C::AnimGraphNode_SequencePlayer_1' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, AnimGraphNode_ApplyAdditive) == 0x001EC8, "Member 'UDBNO_Carried_C::AnimGraphNode_ApplyAdditive' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, AnimGraphNode_TwoBoneIK) == 0x001F90, "Member 'UDBNO_Carried_C::AnimGraphNode_TwoBoneIK' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, AnimGraphNode_SubInstance) == 0x002170, "Member 'UDBNO_Carried_C::AnimGraphNode_SubInstance' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, AnimGraphNode_ComponentToLocalSpace) == 0x002210, "Member 'UDBNO_Carried_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, AnimGraphNode_TransitionResult_1) == 0x002230, "Member 'UDBNO_Carried_C::AnimGraphNode_TransitionResult_1' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, AnimGraphNode_TransitionResult) == 0x002258, "Member 'UDBNO_Carried_C::AnimGraphNode_TransitionResult' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, AnimGraphNode_SequenceEvaluator_1) == 0x002280, "Member 'UDBNO_Carried_C::AnimGraphNode_SequenceEvaluator_1' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, AnimGraphNode_StateResult_2) == 0x0022C8, "Member 'UDBNO_Carried_C::AnimGraphNode_StateResult_2' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, AnimGraphNode_SequencePlayer) == 0x0022F8, "Member 'UDBNO_Carried_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, AnimGraphNode_StateResult_1) == 0x002370, "Member 'UDBNO_Carried_C::AnimGraphNode_StateResult_1' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, AnimGraphNode_SequenceEvaluator) == 0x0023A0, "Member 'UDBNO_Carried_C::AnimGraphNode_SequenceEvaluator' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, AnimGraphNode_StateResult) == 0x0023E8, "Member 'UDBNO_Carried_C::AnimGraphNode_StateResult' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, AnimGraphNode_StateMachine) == 0x002418, "Member 'UDBNO_Carried_C::AnimGraphNode_StateMachine' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, AnimGraphNode_TwoWayBlend) == 0x0024C8, "Member 'UDBNO_Carried_C::AnimGraphNode_TwoWayBlend' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, AnimGraphNode_SaveCachedPose) == 0x002590, "Member 'UDBNO_Carried_C::AnimGraphNode_SaveCachedPose' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, AnimGraphNode_UseCachedPose_1) == 0x002658, "Member 'UDBNO_Carried_C::AnimGraphNode_UseCachedPose_1' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, AnimGraphNode_UseCachedPose) == 0x002680, "Member 'UDBNO_Carried_C::AnimGraphNode_UseCachedPose' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, __CustomProperty_my_animbodytype_BC9172D64300E6A13C48509FE2988A40) == 0x0026A8, "Member 'UDBNO_Carried_C::__CustomProperty_my_animbodytype_BC9172D64300E6A13C48509FE2988A40' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, __CustomProperty_my_gender_BC9172D64300E6A13C48509FE2988A40) == 0x0026A9, "Member 'UDBNO_Carried_C::__CustomProperty_my_gender_BC9172D64300E6A13C48509FE2988A40' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, Carried) == 0x0026AA, "Member 'UDBNO_Carried_C::Carried' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, CarrierPawn) == 0x0026B0, "Member 'UDBNO_Carried_C::CarrierPawn' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, CarrierAnimBP) == 0x0026B8, "Member 'UDBNO_Carried_C::CarrierAnimBP' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, LHandIKLocation) == 0x0026C0, "Member 'UDBNO_Carried_C::LHandIKLocation' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, LHandIKRotation) == 0x0026CC, "Member 'UDBNO_Carried_C::LHandIKRotation' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, TempAttachLocation) == 0x0026D8, "Member 'UDBNO_Carried_C::TempAttachLocation' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, TempAttachRotation) == 0x0026E4, "Member 'UDBNO_Carried_C::TempAttachRotation' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, SubAnimPhysicsWeight) == 0x0026F0, "Member 'UDBNO_Carried_C::SubAnimPhysicsWeight' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, IsBeingDropped) == 0x0026F4, "Member 'UDBNO_Carried_C::IsBeingDropped' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, DropMontagePosition) == 0x0026F8, "Member 'UDBNO_Carried_C::DropMontagePosition' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, CarrierDropMontage) == 0x002700, "Member 'UDBNO_Carried_C::CarrierDropMontage' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, CarrierPickupMontage) == 0x002708, "Member 'UDBNO_Carried_C::CarrierPickupMontage' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, IsBeingPickedUp) == 0x002710, "Member 'UDBNO_Carried_C::IsBeingPickedUp' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, PickupMontagePosition) == 0x002714, "Member 'UDBNO_Carried_C::PickupMontagePosition' has a wrong offset!");
static_assert(offsetof(UDBNO_Carried_C, TransitionFromPickupToIdle) == 0x002718, "Member 'UDBNO_Carried_C::TransitionFromPickupToIdle' has a wrong offset!");

}

