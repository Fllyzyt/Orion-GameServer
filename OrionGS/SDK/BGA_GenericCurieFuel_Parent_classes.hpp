#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_GenericCurieFuel_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C
// 0x0090 (0x0860 - 0x07D0)
class ABGA_GenericCurieFuel_Parent_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Curie_Mesh;                                        // 0x07D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x07E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortProjectileMovementComponent*       FortProjectileMovement;                            // 0x07E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortCurieComponent*                    FortCurie;                                         // 0x07F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         ActorLifespanAfterIgnition;                        // 0x07F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_6BDB[0x4];                                     // 0x07FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABuildingWall*                          LocalWall;                                         // 0x0800(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IgniteSelf;                                        // 0x0808(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BDC[0x3];                                     // 0x0809(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SelfFireMagnitude;                                 // 0x080C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         SelfPropagationFuel;                               // 0x0810(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         SelfCurieLandscapeIgnitionRadius;                  // 0x0814(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          ShouldFireFallWithGravity;                         // 0x0818(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IgniteNearbyMaterialsImmediately;                  // 0x0819(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BDD[0x2];                                     // 0x081A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         IgniteNearbyMaterialsRadius;                       // 0x081C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         IgniteNearbyMaterialsFireMagnitude;                // 0x0820(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         IgniteNearbyMaterialsPropogationFuel;              // 0x0824(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         IgniteNearbyMaterialsLandscapeIgnitionRadius;      // 0x0828(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_6BDE[0x4];                                     // 0x082C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      IgniteMaterialsObjectTypes;                        // 0x0830(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                 IgniteMaterialsClassFilter;                        // 0x0840(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          ResumeSimulation;                                  // 0x0848(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                          CurieActive;                                       // 0x0849(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CurieHitVehicle;                                   // 0x084A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BDF[0x5];                                     // 0x084B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 HitActor;                                          // 0x0850(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0858(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BGA_GenericCurieFuel_Parent(int32 EntryPoint, TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, class AActor* K2Node_CustomEvent_DestroyedActor, TDelegate<void(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)> K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsServer_ReturnValue, class UFortAsyncAction_OnCurieActivated* CallFunc_OnCurieActivated_ReturnValue, bool CallFunc_IsValid_ReturnValue, struct FHitResult& K2Node_ComponentBoundEvent_ImpactResult, struct FVector& K2Node_ComponentBoundEvent_ImpactVelocity, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class ABGA_GenericCurieFuel_Parent_C* K2Node_DynamicCast_AsBGA_Generic_Curie_Fuel_Parent, bool K2Node_DynamicCast_bSuccess_1, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_2, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, struct FCurieContainerHandle& K2Node_Event_CurieContainerHandle, struct FGameplayTag& K2Node_Event_ElementTag, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, struct FHitResult& K2Node_Event_Hit);
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void OnCurieElementDetached_BP(struct FCurieContainerHandle& CurieContainerHandle, struct FGameplayTag& ElementTag);
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity);
	void BaseDied(class AActor* DestroyedActor);
	void AttachedComponentDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void OnCurieActive_112B241847E303B58BF962A699068D1C();
	void SelfIgnite(bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, struct FHitResult& Temp_struct_Variable);
	void HandleHits(class UObject* ObjectRef, class UPrimitiveComponent* PrimitiveObjectRef, bool CallFunc_HitVehicle_Success, bool CallFunc_HitBuildingWall_Success, bool CallFunc_HitBuildingActor_Success);
	void HitVehicle(class UObject* ObjectRef, class UPrimitiveComponent* PrimitiveObjectRef, bool* Success, TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface, bool K2Node_DynamicCast_bSuccess);
	void HitBuildingWall(class UObject* ObjectRef, class UPrimitiveComponent* PrimitiveObjectRef, bool* Success, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess, class ABuildingWall* K2Node_DynamicCast_AsBuilding_Wall, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsDoorComponent_ReturnValue);
	void HitBuildingActor(class UObject* ObjectRef, class UPrimitiveComponent* PrimitiveObjectRef, bool* Success, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, class ABGA_GenericCurieFuel_Parent_C* K2Node_DynamicCast_AsBGA_Generic_Curie_Fuel_Parent, bool K2Node_DynamicCast_bSuccess_1);
	void OnRep_ResumeSimulation();
	void IgniteNearbyMaterials(struct FVector& SpherePos, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class AActor*>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_MakeHitResult_ReturnValue);

	void ShouldPlayNativeCurieFX(EFortCurieNativeFXType FXType, struct FFortNativeCurieFXResponse* OutResponse, const struct FFortNativeCurieFXResponse& K2Node_MakeStruct_FortNativeCurieFXResponse) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_GenericCurieFuel_Parent_C">();
	}
	static class ABGA_GenericCurieFuel_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_GenericCurieFuel_Parent_C>();
	}
};
static_assert(alignof(ABGA_GenericCurieFuel_Parent_C) == 0x000008, "Wrong alinment on ABGA_GenericCurieFuel_Parent_C");
static_assert(sizeof(ABGA_GenericCurieFuel_Parent_C) == 0x000860, "Wrong size on ABGA_GenericCurieFuel_Parent_C");
static_assert(offsetof(ABGA_GenericCurieFuel_Parent_C, UberGraphFrame) == 0x0007D0, "Member 'ABGA_GenericCurieFuel_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABGA_GenericCurieFuel_Parent_C, Curie_Mesh) == 0x0007D8, "Member 'ABGA_GenericCurieFuel_Parent_C::Curie_Mesh' has a wrong offset!");
static_assert(offsetof(ABGA_GenericCurieFuel_Parent_C, Sphere) == 0x0007E0, "Member 'ABGA_GenericCurieFuel_Parent_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABGA_GenericCurieFuel_Parent_C, FortProjectileMovement) == 0x0007E8, "Member 'ABGA_GenericCurieFuel_Parent_C::FortProjectileMovement' has a wrong offset!");
static_assert(offsetof(ABGA_GenericCurieFuel_Parent_C, FortCurie) == 0x0007F0, "Member 'ABGA_GenericCurieFuel_Parent_C::FortCurie' has a wrong offset!");
static_assert(offsetof(ABGA_GenericCurieFuel_Parent_C, ActorLifespanAfterIgnition) == 0x0007F8, "Member 'ABGA_GenericCurieFuel_Parent_C::ActorLifespanAfterIgnition' has a wrong offset!");
static_assert(offsetof(ABGA_GenericCurieFuel_Parent_C, LocalWall) == 0x000800, "Member 'ABGA_GenericCurieFuel_Parent_C::LocalWall' has a wrong offset!");
static_assert(offsetof(ABGA_GenericCurieFuel_Parent_C, IgniteSelf) == 0x000808, "Member 'ABGA_GenericCurieFuel_Parent_C::IgniteSelf' has a wrong offset!");
static_assert(offsetof(ABGA_GenericCurieFuel_Parent_C, SelfFireMagnitude) == 0x00080C, "Member 'ABGA_GenericCurieFuel_Parent_C::SelfFireMagnitude' has a wrong offset!");
static_assert(offsetof(ABGA_GenericCurieFuel_Parent_C, SelfPropagationFuel) == 0x000810, "Member 'ABGA_GenericCurieFuel_Parent_C::SelfPropagationFuel' has a wrong offset!");
static_assert(offsetof(ABGA_GenericCurieFuel_Parent_C, SelfCurieLandscapeIgnitionRadius) == 0x000814, "Member 'ABGA_GenericCurieFuel_Parent_C::SelfCurieLandscapeIgnitionRadius' has a wrong offset!");
static_assert(offsetof(ABGA_GenericCurieFuel_Parent_C, ShouldFireFallWithGravity) == 0x000818, "Member 'ABGA_GenericCurieFuel_Parent_C::ShouldFireFallWithGravity' has a wrong offset!");
static_assert(offsetof(ABGA_GenericCurieFuel_Parent_C, IgniteNearbyMaterialsImmediately) == 0x000819, "Member 'ABGA_GenericCurieFuel_Parent_C::IgniteNearbyMaterialsImmediately' has a wrong offset!");
static_assert(offsetof(ABGA_GenericCurieFuel_Parent_C, IgniteNearbyMaterialsRadius) == 0x00081C, "Member 'ABGA_GenericCurieFuel_Parent_C::IgniteNearbyMaterialsRadius' has a wrong offset!");
static_assert(offsetof(ABGA_GenericCurieFuel_Parent_C, IgniteNearbyMaterialsFireMagnitude) == 0x000820, "Member 'ABGA_GenericCurieFuel_Parent_C::IgniteNearbyMaterialsFireMagnitude' has a wrong offset!");
static_assert(offsetof(ABGA_GenericCurieFuel_Parent_C, IgniteNearbyMaterialsPropogationFuel) == 0x000824, "Member 'ABGA_GenericCurieFuel_Parent_C::IgniteNearbyMaterialsPropogationFuel' has a wrong offset!");
static_assert(offsetof(ABGA_GenericCurieFuel_Parent_C, IgniteNearbyMaterialsLandscapeIgnitionRadius) == 0x000828, "Member 'ABGA_GenericCurieFuel_Parent_C::IgniteNearbyMaterialsLandscapeIgnitionRadius' has a wrong offset!");
static_assert(offsetof(ABGA_GenericCurieFuel_Parent_C, IgniteMaterialsObjectTypes) == 0x000830, "Member 'ABGA_GenericCurieFuel_Parent_C::IgniteMaterialsObjectTypes' has a wrong offset!");
static_assert(offsetof(ABGA_GenericCurieFuel_Parent_C, IgniteMaterialsClassFilter) == 0x000840, "Member 'ABGA_GenericCurieFuel_Parent_C::IgniteMaterialsClassFilter' has a wrong offset!");
static_assert(offsetof(ABGA_GenericCurieFuel_Parent_C, ResumeSimulation) == 0x000848, "Member 'ABGA_GenericCurieFuel_Parent_C::ResumeSimulation' has a wrong offset!");
static_assert(offsetof(ABGA_GenericCurieFuel_Parent_C, CurieActive) == 0x000849, "Member 'ABGA_GenericCurieFuel_Parent_C::CurieActive' has a wrong offset!");
static_assert(offsetof(ABGA_GenericCurieFuel_Parent_C, CurieHitVehicle) == 0x00084A, "Member 'ABGA_GenericCurieFuel_Parent_C::CurieHitVehicle' has a wrong offset!");
static_assert(offsetof(ABGA_GenericCurieFuel_Parent_C, HitActor) == 0x000850, "Member 'ABGA_GenericCurieFuel_Parent_C::HitActor' has a wrong offset!");
static_assert(offsetof(ABGA_GenericCurieFuel_Parent_C, HitComponent) == 0x000858, "Member 'ABGA_GenericCurieFuel_Parent_C::HitComponent' has a wrong offset!");

}

