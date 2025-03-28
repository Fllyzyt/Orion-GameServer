#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SurfaceChange_Sand_BurrowedMound

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_SurfaceChange_Sand_BurrowedMound.B_SurfaceChange_Sand_BurrowedMound_C.ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound
// 0x00D0 (0x00D0 - 0x0000)
struct B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Location;                       // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_DamagedActor;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Damage;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6394[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            K2Node_CustomEvent_InstigatedBy;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_DamageCauser;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_HitLocation;                    // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6395[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_CustomEvent_FHitComponent;                  // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_BoneName;                       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Momentum;                       // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)> K2Node_CreateDelegate_OutputDelegate;              // 0x005C(0x0010)(ZeroConstructor, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6396[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6397[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDamaged_ReturnValue;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6398[0x5];                                     // 0x00A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue_1;  // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x00B0(0x0010)(ZeroConstructor, NoDestructor)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound) == 0x000008, "Wrong alinment on B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound");
static_assert(sizeof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound) == 0x0000D0, "Wrong size on B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound, EntryPoint) == 0x000000, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound, K2Node_CustomEvent_Location) == 0x000004, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound::K2Node_CustomEvent_Location' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound, K2Node_CustomEvent_DamagedActor) == 0x000010, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound::K2Node_CustomEvent_DamagedActor' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound, K2Node_CustomEvent_Damage) == 0x000018, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound::K2Node_CustomEvent_Damage' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound, K2Node_CustomEvent_InstigatedBy) == 0x000020, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound::K2Node_CustomEvent_InstigatedBy' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound, K2Node_CustomEvent_DamageCauser) == 0x000028, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound::K2Node_CustomEvent_DamageCauser' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound, K2Node_CustomEvent_HitLocation) == 0x000030, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound::K2Node_CustomEvent_HitLocation' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound, K2Node_CustomEvent_FHitComponent) == 0x000040, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound::K2Node_CustomEvent_FHitComponent' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound, K2Node_CustomEvent_BoneName) == 0x000048, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound::K2Node_CustomEvent_BoneName' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound, K2Node_CustomEvent_Momentum) == 0x000050, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound::K2Node_CustomEvent_Momentum' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound, K2Node_CreateDelegate_OutputDelegate) == 0x00005C, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00006C, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000078, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound, CallFunc_IsValid_ReturnValue) == 0x000084, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000088, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x000098, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound, CallFunc_IsDamaged_ReturnValue) == 0x0000A0, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound::CallFunc_IsDamaged_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound, CallFunc_Not_PreBool_ReturnValue) == 0x0000A1, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound, CallFunc_IsValid_ReturnValue_1) == 0x0000A2, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound, CallFunc_GetAbilitySystemComponent_ReturnValue_1) == 0x0000A8, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound::CallFunc_GetAbilitySystemComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000B0, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0000C0, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound, CallFunc_IsDedicatedServer_ReturnValue) == 0x0000C8, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_ExecuteUbergraph_B_SurfaceChange_Sand_BurrowedMound::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");

// Function B_SurfaceChange_Sand_BurrowedMound.B_SurfaceChange_Sand_BurrowedMound_C.Damaged
// 0x0050 (0x0050 - 0x0000)
struct B_SurfaceChange_Sand_BurrowedMound_C_Damaged final 
{
public:
	class AActor*                                 DamagedActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Damage;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6399[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            InstigatedBy;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageCauser;                                      // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLocation;                                       // 0x0020(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_639A[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    FHitComponent;                                     // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BoneName;                                          // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Momentum;                                          // 0x0040(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_SurfaceChange_Sand_BurrowedMound_C_Damaged) == 0x000008, "Wrong alinment on B_SurfaceChange_Sand_BurrowedMound_C_Damaged");
static_assert(sizeof(B_SurfaceChange_Sand_BurrowedMound_C_Damaged) == 0x000050, "Wrong size on B_SurfaceChange_Sand_BurrowedMound_C_Damaged");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_Damaged, DamagedActor) == 0x000000, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_Damaged::DamagedActor' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_Damaged, Damage) == 0x000008, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_Damaged::Damage' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_Damaged, InstigatedBy) == 0x000010, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_Damaged::InstigatedBy' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_Damaged, DamageCauser) == 0x000018, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_Damaged::DamageCauser' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_Damaged, HitLocation) == 0x000020, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_Damaged::HitLocation' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_Damaged, FHitComponent) == 0x000030, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_Damaged::FHitComponent' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_Damaged, BoneName) == 0x000038, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_Damaged::BoneName' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_Damaged, Momentum) == 0x000040, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_Damaged::Momentum' has a wrong offset!");

// Function B_SurfaceChange_Sand_BurrowedMound.B_SurfaceChange_Sand_BurrowedMound_C.DetachAndDie
// 0x000C (0x000C - 0x0000)
struct B_SurfaceChange_Sand_BurrowedMound_C_DetachAndDie final 
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_SurfaceChange_Sand_BurrowedMound_C_DetachAndDie) == 0x000004, "Wrong alinment on B_SurfaceChange_Sand_BurrowedMound_C_DetachAndDie");
static_assert(sizeof(B_SurfaceChange_Sand_BurrowedMound_C_DetachAndDie) == 0x00000C, "Wrong size on B_SurfaceChange_Sand_BurrowedMound_C_DetachAndDie");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_DetachAndDie, Location) == 0x000000, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_DetachAndDie::Location' has a wrong offset!");

// Function B_SurfaceChange_Sand_BurrowedMound.B_SurfaceChange_Sand_BurrowedMound_C.OnRep_Location
// 0x0090 (0x0090 - 0x0000)
struct B_SurfaceChange_Sand_BurrowedMound_C_OnRep_Location final 
{
public:
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0000(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_SurfaceChange_Sand_BurrowedMound_C_OnRep_Location) == 0x000004, "Wrong alinment on B_SurfaceChange_Sand_BurrowedMound_C_OnRep_Location");
static_assert(sizeof(B_SurfaceChange_Sand_BurrowedMound_C_OnRep_Location) == 0x000090, "Wrong size on B_SurfaceChange_Sand_BurrowedMound_C_OnRep_Location");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_OnRep_Location, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000000, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_OnRep_Location::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(B_SurfaceChange_Sand_BurrowedMound_C_OnRep_Location, CallFunc_K2_SetActorLocation_ReturnValue) == 0x00008C, "Member 'B_SurfaceChange_Sand_BurrowedMound_C_OnRep_Location::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");

}

