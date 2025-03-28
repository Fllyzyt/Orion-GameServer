#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Shotgun_Break_Dragon_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Shotgun_Standard_Athena_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "PhysicsCore_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Shotgun_Break_Dragon_Athena.B_Shotgun_Break_Dragon_Athena_C
// 0x0068 (0x1330 - 0x12C8)
class AB_Shotgun_Break_Dragon_Athena_C final  : public AB_Shotgun_Standard_Athena_C
{
public:
	uint8                                         Pad_7483[0x4];                                     // 0x12C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Shotgun_Break_Dragon_Athena_C;    // 0x12C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_Shell_Eject_DragonsBreath;                       // 0x12D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug;                                             // 0x12D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7484[0x3];                                     // 0x12D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FXTraceYawFullAngle;                               // 0x12DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FXTracePitchFullAngle;                             // 0x12E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EndOfCenterFXTrace;                                // 0x12E4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        AllFXTraceEndPoints;                               // 0x12F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FVector                                CurrentFXTraceEnd;                                 // 0x1300(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CurrentFXTraceWasHit;                              // 0x130C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7485[0x3];                                     // 0x130D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        AllFXTracerSpawnPoints;                            // 0x1310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          SpawnTracersInsteadOfDummyImpactFX;                // 0x1320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7486[0x3];                                     // 0x1321(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MysteriousRangeBufferForTracers;                   // 0x1324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RangeLong;                                         // 0x1328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena(int32 EntryPoint, struct FHitResult& K2Node_Event_HitResult, EPhysicalSurface K2Node_Event_ImpactPhysicalSurface, class UFXSystemComponent* K2Node_Event_SpawnedPSC, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_Persistent_Fire);
	void Muzzle_Flash_FX(bool Persistent_Fire);
	void OnPlayImpactFX(struct FHitResult& HitResult, EPhysicalSurface ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Shotgun_Break_Dragon_Athena_C">();
	}
	static class AB_Shotgun_Break_Dragon_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Shotgun_Break_Dragon_Athena_C>();
	}
};
static_assert(alignof(AB_Shotgun_Break_Dragon_Athena_C) == 0x000008, "Wrong alinment on AB_Shotgun_Break_Dragon_Athena_C");
static_assert(sizeof(AB_Shotgun_Break_Dragon_Athena_C) == 0x001330, "Wrong size on AB_Shotgun_Break_Dragon_Athena_C");
static_assert(offsetof(AB_Shotgun_Break_Dragon_Athena_C, UberGraphFrame_B_Shotgun_Break_Dragon_Athena_C) == 0x0012C8, "Member 'AB_Shotgun_Break_Dragon_Athena_C::UberGraphFrame_B_Shotgun_Break_Dragon_Athena_C' has a wrong offset!");
static_assert(offsetof(AB_Shotgun_Break_Dragon_Athena_C, P_Shell_Eject_DragonsBreath) == 0x0012D0, "Member 'AB_Shotgun_Break_Dragon_Athena_C::P_Shell_Eject_DragonsBreath' has a wrong offset!");
static_assert(offsetof(AB_Shotgun_Break_Dragon_Athena_C, Debug) == 0x0012D8, "Member 'AB_Shotgun_Break_Dragon_Athena_C::Debug' has a wrong offset!");
static_assert(offsetof(AB_Shotgun_Break_Dragon_Athena_C, FXTraceYawFullAngle) == 0x0012DC, "Member 'AB_Shotgun_Break_Dragon_Athena_C::FXTraceYawFullAngle' has a wrong offset!");
static_assert(offsetof(AB_Shotgun_Break_Dragon_Athena_C, FXTracePitchFullAngle) == 0x0012E0, "Member 'AB_Shotgun_Break_Dragon_Athena_C::FXTracePitchFullAngle' has a wrong offset!");
static_assert(offsetof(AB_Shotgun_Break_Dragon_Athena_C, EndOfCenterFXTrace) == 0x0012E4, "Member 'AB_Shotgun_Break_Dragon_Athena_C::EndOfCenterFXTrace' has a wrong offset!");
static_assert(offsetof(AB_Shotgun_Break_Dragon_Athena_C, AllFXTraceEndPoints) == 0x0012F0, "Member 'AB_Shotgun_Break_Dragon_Athena_C::AllFXTraceEndPoints' has a wrong offset!");
static_assert(offsetof(AB_Shotgun_Break_Dragon_Athena_C, CurrentFXTraceEnd) == 0x001300, "Member 'AB_Shotgun_Break_Dragon_Athena_C::CurrentFXTraceEnd' has a wrong offset!");
static_assert(offsetof(AB_Shotgun_Break_Dragon_Athena_C, CurrentFXTraceWasHit) == 0x00130C, "Member 'AB_Shotgun_Break_Dragon_Athena_C::CurrentFXTraceWasHit' has a wrong offset!");
static_assert(offsetof(AB_Shotgun_Break_Dragon_Athena_C, AllFXTracerSpawnPoints) == 0x001310, "Member 'AB_Shotgun_Break_Dragon_Athena_C::AllFXTracerSpawnPoints' has a wrong offset!");
static_assert(offsetof(AB_Shotgun_Break_Dragon_Athena_C, SpawnTracersInsteadOfDummyImpactFX) == 0x001320, "Member 'AB_Shotgun_Break_Dragon_Athena_C::SpawnTracersInsteadOfDummyImpactFX' has a wrong offset!");
static_assert(offsetof(AB_Shotgun_Break_Dragon_Athena_C, MysteriousRangeBufferForTracers) == 0x001324, "Member 'AB_Shotgun_Break_Dragon_Athena_C::MysteriousRangeBufferForTracers' has a wrong offset!");
static_assert(offsetof(AB_Shotgun_Break_Dragon_Athena_C, RangeLong) == 0x001328, "Member 'AB_Shotgun_Break_Dragon_Athena_C::RangeLong' has a wrong offset!");

}

