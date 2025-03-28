#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSupplyDropBalloon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C
// 0x0040 (0x0B00 - 0x0AC0)
class AAthenaSupplyDropBalloon_C final  : public AFortAthenaSupplyDropBalloon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AC0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortHealthBarComponent*                FortHealthBar;                                     // 0x0AC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          CrateDestroyed;                                    // 0x0AD0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FD0[0x7];                                     // 0x0AD1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnBalloonDestroyed;                                // 0x0AD8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USoundBase*                             BalloonPopSound;                                   // 0x0AE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        BalloonPopFX;                                      // 0x0AF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_DamageReduction;                                // 0x0AF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnBalloonDestroyed__DelegateSignature();
	void ExecuteUbergraph_AthenaSupplyDropBalloon(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, float K2Node_Event_Damage_2, struct FGameplayTagContainer& K2Node_Event_DamageTags_2, const struct FVector& K2Node_Event_Momentum_2, struct FHitResult& K2Node_Event_HitInfo_2, class AController* K2Node_Event_InstigatedBy_2, class AActor* K2Node_Event_DamageCauser_2, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext_2, bool Temp_bool_Has_Been_Initd_Variable, const struct FFortAnalyticsEventAttribute& K2Node_MakeStruct_FortAnalyticsEventAttribute, float K2Node_Event_Damage_1, struct FGameplayTagContainer& K2Node_Event_DamageTags_1, const struct FVector& K2Node_Event_Momentum_1, struct FHitResult& K2Node_Event_HitInfo_1, class AFortPawn* K2Node_Event_InstigatedBy_1, class AActor* K2Node_Event_DamageCauser_1, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext_1, float K2Node_Event_Damage, struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue);
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveBeginPlay();
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaSupplyDropBalloon_C">();
	}
	static class AAthenaSupplyDropBalloon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthenaSupplyDropBalloon_C>();
	}
};
static_assert(alignof(AAthenaSupplyDropBalloon_C) == 0x000008, "Wrong alinment on AAthenaSupplyDropBalloon_C");
static_assert(sizeof(AAthenaSupplyDropBalloon_C) == 0x000B00, "Wrong size on AAthenaSupplyDropBalloon_C");
static_assert(offsetof(AAthenaSupplyDropBalloon_C, UberGraphFrame) == 0x000AC0, "Member 'AAthenaSupplyDropBalloon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDropBalloon_C, FortHealthBar) == 0x000AC8, "Member 'AAthenaSupplyDropBalloon_C::FortHealthBar' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDropBalloon_C, CrateDestroyed) == 0x000AD0, "Member 'AAthenaSupplyDropBalloon_C::CrateDestroyed' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDropBalloon_C, OnBalloonDestroyed) == 0x000AD8, "Member 'AAthenaSupplyDropBalloon_C::OnBalloonDestroyed' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDropBalloon_C, BalloonPopSound) == 0x000AE8, "Member 'AAthenaSupplyDropBalloon_C::BalloonPopSound' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDropBalloon_C, BalloonPopFX) == 0x000AF0, "Member 'AAthenaSupplyDropBalloon_C::BalloonPopFX' has a wrong offset!");
static_assert(offsetof(AAthenaSupplyDropBalloon_C, GE_DamageReduction) == 0x000AF8, "Member 'AAthenaSupplyDropBalloon_C::GE_DamageReduction' has a wrong offset!");

}

