#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StormMeshRotator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_StormMeshRotator.BP_StormMeshRotator_C
// 0x0048 (0x0268 - 0x0220)
class ABP_StormMeshRotator_C final  : public AFortStormRotator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Sphere;                                            // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StormCircleLowerSheet;                             // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_stormCircleTopRim;                              // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*             RotatingMovement;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_stormCircleNew;                                 // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RotationSpeed;                                     // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BoundsScale;                                       // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StormProgression;                                  // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TestStorm;                                         // 0x0264(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_StormMeshRotator(int32 EntryPoint, bool K2Node_Event_bEnabled_1, bool K2Node_Event_bEnabled, class ABP_SafeZoneStorm_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_CustomEvent_Progression, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void SetStormProgression(float Progression);
	void ToggleStormMeshesVisibility(bool bEnabled);
	void OnStormEffectsEnabled(bool bEnabled);
	void ReceiveBeginPlay();
	void UserConstructionScript(bool CallFunc_IsConsolePlatform_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class ABP_SafeZoneStorm_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_StormMeshRotator_C">();
	}
	static class ABP_StormMeshRotator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_StormMeshRotator_C>();
	}
};
static_assert(alignof(ABP_StormMeshRotator_C) == 0x000008, "Wrong alinment on ABP_StormMeshRotator_C");
static_assert(sizeof(ABP_StormMeshRotator_C) == 0x000268, "Wrong size on ABP_StormMeshRotator_C");
static_assert(offsetof(ABP_StormMeshRotator_C, UberGraphFrame) == 0x000220, "Member 'ABP_StormMeshRotator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_StormMeshRotator_C, Sphere) == 0x000228, "Member 'ABP_StormMeshRotator_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_StormMeshRotator_C, StormCircleLowerSheet) == 0x000230, "Member 'ABP_StormMeshRotator_C::StormCircleLowerSheet' has a wrong offset!");
static_assert(offsetof(ABP_StormMeshRotator_C, SM_stormCircleTopRim) == 0x000238, "Member 'ABP_StormMeshRotator_C::SM_stormCircleTopRim' has a wrong offset!");
static_assert(offsetof(ABP_StormMeshRotator_C, RotatingMovement) == 0x000240, "Member 'ABP_StormMeshRotator_C::RotatingMovement' has a wrong offset!");
static_assert(offsetof(ABP_StormMeshRotator_C, SM_stormCircleNew) == 0x000248, "Member 'ABP_StormMeshRotator_C::SM_stormCircleNew' has a wrong offset!");
static_assert(offsetof(ABP_StormMeshRotator_C, DefaultSceneRoot) == 0x000250, "Member 'ABP_StormMeshRotator_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_StormMeshRotator_C, RotationSpeed) == 0x000258, "Member 'ABP_StormMeshRotator_C::RotationSpeed' has a wrong offset!");
static_assert(offsetof(ABP_StormMeshRotator_C, BoundsScale) == 0x00025C, "Member 'ABP_StormMeshRotator_C::BoundsScale' has a wrong offset!");
static_assert(offsetof(ABP_StormMeshRotator_C, StormProgression) == 0x000260, "Member 'ABP_StormMeshRotator_C::StormProgression' has a wrong offset!");
static_assert(offsetof(ABP_StormMeshRotator_C, TestStorm) == 0x000264, "Member 'ABP_StormMeshRotator_C::TestStorm' has a wrong offset!");

}

