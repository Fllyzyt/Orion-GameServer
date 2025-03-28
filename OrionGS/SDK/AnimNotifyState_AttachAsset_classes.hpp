#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotifyState_AttachAsset

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C
// 0x0060 (0x0090 - 0x0030)
class UAnimNotifyState_AttachAsset_C final  : public UAnimNotifyState
{
public:
	struct FAssetAttachment                       Attachment;                                        // 0x0030(0x0030)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference)
	class UAnimSequence*                          Animation;                                         // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Looping;                                           // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F36[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PlayRate;                                          // 0x006C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  DoNotAttachTagContainer;                           // 0x0070(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Param_Animation, float TotalDuration, class AActor* CallFunc_GetOwner_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class USkeletalMeshComponent* CallFunc_GetAssetSkeletalMeshComponentAttachment_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1) const;
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Param_Animation, class AActor* CallFunc_GetOwner_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotifyState_AttachAsset_C">();
	}
	static class UAnimNotifyState_AttachAsset_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotifyState_AttachAsset_C>();
	}
};
static_assert(alignof(UAnimNotifyState_AttachAsset_C) == 0x000008, "Wrong alinment on UAnimNotifyState_AttachAsset_C");
static_assert(sizeof(UAnimNotifyState_AttachAsset_C) == 0x000090, "Wrong size on UAnimNotifyState_AttachAsset_C");
static_assert(offsetof(UAnimNotifyState_AttachAsset_C, Attachment) == 0x000030, "Member 'UAnimNotifyState_AttachAsset_C::Attachment' has a wrong offset!");
static_assert(offsetof(UAnimNotifyState_AttachAsset_C, Animation) == 0x000060, "Member 'UAnimNotifyState_AttachAsset_C::Animation' has a wrong offset!");
static_assert(offsetof(UAnimNotifyState_AttachAsset_C, Looping) == 0x000068, "Member 'UAnimNotifyState_AttachAsset_C::Looping' has a wrong offset!");
static_assert(offsetof(UAnimNotifyState_AttachAsset_C, PlayRate) == 0x00006C, "Member 'UAnimNotifyState_AttachAsset_C::PlayRate' has a wrong offset!");
static_assert(offsetof(UAnimNotifyState_AttachAsset_C, DoNotAttachTagContainer) == 0x000070, "Member 'UAnimNotifyState_AttachAsset_C::DoNotAttachTagContainer' has a wrong offset!");

}

