#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Cosmos_Rifle_MeleeImpact

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCN_Cosmos_Rifle_MeleeImpact.GCN_Cosmos_Rifle_MeleeImpact_C
// 0x0000 (0x01B8 - 0x01B8)
class UGCN_Cosmos_Rifle_MeleeImpact_C final  : public UFortGameplayCueNotify_Burst
{
public:
	void OnBurstGeneric(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UMatineeCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class UFXSystemComponent* CallFunc_Array_Get_Item, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System, bool K2Node_DynamicCast_bSuccess_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_K2_AttachToComponent_ReturnValue) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCN_Cosmos_Rifle_MeleeImpact_C">();
	}
	static class UGCN_Cosmos_Rifle_MeleeImpact_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGCN_Cosmos_Rifle_MeleeImpact_C>();
	}
};
static_assert(alignof(UGCN_Cosmos_Rifle_MeleeImpact_C) == 0x000008, "Wrong alinment on UGCN_Cosmos_Rifle_MeleeImpact_C");
static_assert(sizeof(UGCN_Cosmos_Rifle_MeleeImpact_C) == 0x0001B8, "Wrong size on UGCN_Cosmos_Rifle_MeleeImpact_C");

}

