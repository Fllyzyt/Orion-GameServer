#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Shotgun_Break_Dragon_Athena

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_Shotgun_Break_Dragon_Athena.B_Shotgun_Break_Dragon_Athena_C.ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena
// 0x00D0 (0x00D0 - 0x0000)
struct B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_HitResult;                            // 0x0004(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	EPhysicalSurface                              K2Node_Event_ImpactPhysicalSurface;                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7487[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFXSystemComponent*                     K2Node_Event_SpawnedPSC;                           // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7488[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_Persistent_Fire;                      // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena) == 0x000008, "Wrong alinment on B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena");
static_assert(sizeof(B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena) == 0x0000D0, "Wrong size on B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena");
static_assert(offsetof(B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena, EntryPoint) == 0x000000, "Member 'B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena, K2Node_Event_HitResult) == 0x000004, "Member 'B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena::K2Node_Event_HitResult' has a wrong offset!");
static_assert(offsetof(B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena, K2Node_Event_ImpactPhysicalSurface) == 0x000090, "Member 'B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena::K2Node_Event_ImpactPhysicalSurface' has a wrong offset!");
static_assert(offsetof(B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena, K2Node_Event_SpawnedPSC) == 0x000098, "Member 'B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena::K2Node_Event_SpawnedPSC' has a wrong offset!");
static_assert(offsetof(B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0000A0, "Member 'B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x0000AC, "Member 'B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000B8, "Member 'B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x0000C0, "Member 'B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena, CallFunc_Not_PreBool_ReturnValue) == 0x0000C8, "Member 'B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena, K2Node_Event_Persistent_Fire) == 0x0000C9, "Member 'B_Shotgun_Break_Dragon_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Dragon_Athena::K2Node_Event_Persistent_Fire' has a wrong offset!");

// Function B_Shotgun_Break_Dragon_Athena.B_Shotgun_Break_Dragon_Athena_C.Muzzle Flash FX
// 0x0001 (0x0001 - 0x0000)
struct B_Shotgun_Break_Dragon_Athena_C_Muzzle_Flash_FX final 
{
public:
	bool                                          Persistent_Fire;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_Shotgun_Break_Dragon_Athena_C_Muzzle_Flash_FX) == 0x000001, "Wrong alinment on B_Shotgun_Break_Dragon_Athena_C_Muzzle_Flash_FX");
static_assert(sizeof(B_Shotgun_Break_Dragon_Athena_C_Muzzle_Flash_FX) == 0x000001, "Wrong size on B_Shotgun_Break_Dragon_Athena_C_Muzzle_Flash_FX");
static_assert(offsetof(B_Shotgun_Break_Dragon_Athena_C_Muzzle_Flash_FX, Persistent_Fire) == 0x000000, "Member 'B_Shotgun_Break_Dragon_Athena_C_Muzzle_Flash_FX::Persistent_Fire' has a wrong offset!");

// Function B_Shotgun_Break_Dragon_Athena.B_Shotgun_Break_Dragon_Athena_C.OnPlayImpactFX
// 0x0098 (0x0098 - 0x0000)
struct B_Shotgun_Break_Dragon_Athena_C_OnPlayImpactFX final 
{
public:
	struct FHitResult                             HitResult;                                         // 0x0000(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	EPhysicalSurface                              ImpactPhysicalSurface;                             // 0x008C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7489[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFXSystemComponent*                     SpawnedPSC;                                        // 0x0090(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Shotgun_Break_Dragon_Athena_C_OnPlayImpactFX) == 0x000008, "Wrong alinment on B_Shotgun_Break_Dragon_Athena_C_OnPlayImpactFX");
static_assert(sizeof(B_Shotgun_Break_Dragon_Athena_C_OnPlayImpactFX) == 0x000098, "Wrong size on B_Shotgun_Break_Dragon_Athena_C_OnPlayImpactFX");
static_assert(offsetof(B_Shotgun_Break_Dragon_Athena_C_OnPlayImpactFX, HitResult) == 0x000000, "Member 'B_Shotgun_Break_Dragon_Athena_C_OnPlayImpactFX::HitResult' has a wrong offset!");
static_assert(offsetof(B_Shotgun_Break_Dragon_Athena_C_OnPlayImpactFX, ImpactPhysicalSurface) == 0x00008C, "Member 'B_Shotgun_Break_Dragon_Athena_C_OnPlayImpactFX::ImpactPhysicalSurface' has a wrong offset!");
static_assert(offsetof(B_Shotgun_Break_Dragon_Athena_C_OnPlayImpactFX, SpawnedPSC) == 0x000090, "Member 'B_Shotgun_Break_Dragon_Athena_C_OnPlayImpactFX::SpawnedPSC' has a wrong offset!");

}

