#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prj_Athena_DangerGrape

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "B_Prj_ThrownConsumable_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Prj_Athena_DangerGrape.Prj_Athena_DangerGrape_C
// 0x0058 (0x0970 - 0x0918)
class APrj_Athena_DangerGrape_C final  : public AB_Prj_ThrownConsumable_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prj_Athena_DangerGrape_C;           // 0x0918(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                 ActorToSpawn;                                      // 0x0920(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DelayBeforeSpawningFX;                             // 0x0928(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74B8[0x4];                                     // 0x092C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               BotSpawnParticleSystem;                            // 0x0930(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SweepColor;                                        // 0x0938(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Impact_Spawn_Sound;                                // 0x0948(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Water_Impact_Sound;                                // 0x0950(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ZToleranceForFloorExplosion;                       // 0x0958(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Trail_Ribbon_Color;                                // 0x095C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Prj_Athena_DangerGrape(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class AFortWaterBodyActor* K2Node_ComponentBoundEvent_WaterBody, class UFortWaterInteractionComponent* K2Node_ComponentBoundEvent_WaterInteractionComponent, bool K2Node_ComponentBoundEvent_bIsFirstBody, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, struct FHitResult& K2Node_Event_Hit_1, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, struct FHitResult& K2Node_Event_Hit, float CallFunc_Dot_VectorVector_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void OnStop(struct FHitResult& Hit);
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* Param_WaterInteractionComponent, bool bIsFirstBody);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Prj_Athena_DangerGrape_C">();
	}
	static class APrj_Athena_DangerGrape_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APrj_Athena_DangerGrape_C>();
	}
};
static_assert(alignof(APrj_Athena_DangerGrape_C) == 0x000008, "Wrong alinment on APrj_Athena_DangerGrape_C");
static_assert(sizeof(APrj_Athena_DangerGrape_C) == 0x000970, "Wrong size on APrj_Athena_DangerGrape_C");
static_assert(offsetof(APrj_Athena_DangerGrape_C, UberGraphFrame_Prj_Athena_DangerGrape_C) == 0x000918, "Member 'APrj_Athena_DangerGrape_C::UberGraphFrame_Prj_Athena_DangerGrape_C' has a wrong offset!");
static_assert(offsetof(APrj_Athena_DangerGrape_C, ActorToSpawn) == 0x000920, "Member 'APrj_Athena_DangerGrape_C::ActorToSpawn' has a wrong offset!");
static_assert(offsetof(APrj_Athena_DangerGrape_C, DelayBeforeSpawningFX) == 0x000928, "Member 'APrj_Athena_DangerGrape_C::DelayBeforeSpawningFX' has a wrong offset!");
static_assert(offsetof(APrj_Athena_DangerGrape_C, BotSpawnParticleSystem) == 0x000930, "Member 'APrj_Athena_DangerGrape_C::BotSpawnParticleSystem' has a wrong offset!");
static_assert(offsetof(APrj_Athena_DangerGrape_C, SweepColor) == 0x000938, "Member 'APrj_Athena_DangerGrape_C::SweepColor' has a wrong offset!");
static_assert(offsetof(APrj_Athena_DangerGrape_C, Impact_Spawn_Sound) == 0x000948, "Member 'APrj_Athena_DangerGrape_C::Impact_Spawn_Sound' has a wrong offset!");
static_assert(offsetof(APrj_Athena_DangerGrape_C, Water_Impact_Sound) == 0x000950, "Member 'APrj_Athena_DangerGrape_C::Water_Impact_Sound' has a wrong offset!");
static_assert(offsetof(APrj_Athena_DangerGrape_C, ZToleranceForFloorExplosion) == 0x000958, "Member 'APrj_Athena_DangerGrape_C::ZToleranceForFloorExplosion' has a wrong offset!");
static_assert(offsetof(APrj_Athena_DangerGrape_C, Trail_Ribbon_Color) == 0x00095C, "Member 'APrj_Athena_DangerGrape_C::Trail_Ribbon_Color' has a wrong offset!");

}

