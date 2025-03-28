#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotifyState_AttachAsset

#include "Basic.hpp"


namespace SDK::Params
{

// Function AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C.Received_NotifyBegin
// 0x0058 (0x0058 - 0x0000)
struct AnimNotifyState_AttachAsset_C_Received_NotifyBegin final 
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Param_Animation;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TotalDuration;                                     // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0014(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F37[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F38[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F39[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 CallFunc_GetAssetSkeletalMeshComponentAttachment_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin) == 0x000008, "Wrong alinment on AnimNotifyState_AttachAsset_C_Received_NotifyBegin");
static_assert(sizeof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin) == 0x000058, "Wrong size on AnimNotifyState_AttachAsset_C_Received_NotifyBegin");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, MeshComp) == 0x000000, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, Param_Animation) == 0x000008, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::Param_Animation' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, TotalDuration) == 0x000010, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::TotalDuration' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, ReturnValue) == 0x000014, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, K2Node_DynamicCast_AsFort_Pawn) == 0x000020, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, CallFunc_HasAnyMatchingGameplayTags_self_CastInput) == 0x000030, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::CallFunc_HasAnyMatchingGameplayTags_self_CastInput' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, CallFunc_HasAnyMatchingGameplayTags_ReturnValue) == 0x000040, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::CallFunc_HasAnyMatchingGameplayTags_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, CallFunc_IsLocallyControlled_ReturnValue) == 0x000041, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, CallFunc_Not_PreBool_ReturnValue) == 0x000042, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, CallFunc_BooleanOR_ReturnValue) == 0x000043, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, CallFunc_GetAssetSkeletalMeshComponentAttachment_ReturnValue) == 0x000048, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::CallFunc_GetAssetSkeletalMeshComponentAttachment_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyBegin, CallFunc_IsValid_ReturnValue_1) == 0x000051, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyBegin::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C.Received_NotifyEnd
// 0x0030 (0x0030 - 0x0000)
struct AnimNotifyState_AttachAsset_C_Received_NotifyEnd final 
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Param_Animation;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F3A[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              K2Node_DynamicCast_AsFort_Pawn;                    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd) == 0x000008, "Wrong alinment on AnimNotifyState_AttachAsset_C_Received_NotifyEnd");
static_assert(sizeof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd) == 0x000030, "Wrong size on AnimNotifyState_AttachAsset_C_Received_NotifyEnd");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd, MeshComp) == 0x000000, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyEnd::MeshComp' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd, Param_Animation) == 0x000008, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyEnd::Param_Animation' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd, ReturnValue) == 0x000010, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyEnd::ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd, CallFunc_GetOwner_ReturnValue) == 0x000018, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyEnd::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd, K2Node_DynamicCast_AsFort_Pawn) == 0x000020, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyEnd::K2Node_DynamicCast_AsFort_Pawn' has a wrong offset!");
static_assert(offsetof(AnimNotifyState_AttachAsset_C_Received_NotifyEnd, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'AnimNotifyState_AttachAsset_C_Received_NotifyEnd::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

