#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Rift_Flopper

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_Rift_Flopper.GA_Athena_Rift_Flopper_C.ExecuteUbergraph_GA_Athena_Rift_Flopper
// 0x00C0 (0x00C0 - 0x0000)
struct GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72BC[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Is_Flying_NewParam;                       // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72BD[0xE];                                     // 0x0012(0x000E)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0020(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72BE[0xC];                                     // 0x0074(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0080(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABGA_RiftPortal_Item_Athena_C*          CallFunc_FinishSpawningActor_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper) == 0x000010, "Wrong alinment on GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper");
static_assert(sizeof(GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper) == 0x0000C0, "Wrong size on GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper");
static_assert(offsetof(GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper, EntryPoint) == 0x000000, "Member 'GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x000008, "Member 'GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper, K2Node_Event_bWasCancelled) == 0x000010, "Member 'GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper, CallFunc_Is_Flying_NewParam) == 0x000011, "Member 'GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper::CallFunc_Is_Flying_NewParam' has a wrong offset!");
static_assert(offsetof(GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000020, "Member 'GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper, CallFunc_BreakTransform_Location) == 0x000050, "Member 'GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper, CallFunc_BreakTransform_Rotation) == 0x00005C, "Member 'GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper, CallFunc_BreakTransform_Scale) == 0x000068, "Member 'GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper, CallFunc_MakeTransform_ReturnValue) == 0x000080, "Member 'GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000B0, "Member 'GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000B8, "Member 'GA_Athena_Rift_Flopper_C_ExecuteUbergraph_GA_Athena_Rift_Flopper::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function GA_Athena_Rift_Flopper.GA_Athena_Rift_Flopper_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Athena_Rift_Flopper_C_K2_OnEndAbility final 
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Athena_Rift_Flopper_C_K2_OnEndAbility) == 0x000001, "Wrong alinment on GA_Athena_Rift_Flopper_C_K2_OnEndAbility");
static_assert(sizeof(GA_Athena_Rift_Flopper_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Athena_Rift_Flopper_C_K2_OnEndAbility");
static_assert(offsetof(GA_Athena_Rift_Flopper_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Athena_Rift_Flopper_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Athena_Rift_Flopper.GA_Athena_Rift_Flopper_C.Is Flying
// 0x0020 (0x0020 - 0x0000)
struct GA_Athena_Rift_Flopper_C_Is_Flying final 
{
public:
	bool                                          NewParam;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72BF[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMovementComp_Character*            K2Node_DynamicCast_AsFort_Movement_Comp_Character; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Athena_Rift_Flopper_C_Is_Flying) == 0x000008, "Wrong alinment on GA_Athena_Rift_Flopper_C_Is_Flying");
static_assert(sizeof(GA_Athena_Rift_Flopper_C_Is_Flying) == 0x000020, "Wrong size on GA_Athena_Rift_Flopper_C_Is_Flying");
static_assert(offsetof(GA_Athena_Rift_Flopper_C_Is_Flying, NewParam) == 0x000000, "Member 'GA_Athena_Rift_Flopper_C_Is_Flying::NewParam' has a wrong offset!");
static_assert(offsetof(GA_Athena_Rift_Flopper_C_Is_Flying, CallFunc_GetMovementComponent_ReturnValue) == 0x000008, "Member 'GA_Athena_Rift_Flopper_C_Is_Flying::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Rift_Flopper_C_Is_Flying, K2Node_DynamicCast_AsFort_Movement_Comp_Character) == 0x000010, "Member 'GA_Athena_Rift_Flopper_C_Is_Flying::K2Node_DynamicCast_AsFort_Movement_Comp_Character' has a wrong offset!");
static_assert(offsetof(GA_Athena_Rift_Flopper_C_Is_Flying, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GA_Athena_Rift_Flopper_C_Is_Flying::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_Rift_Flopper_C_Is_Flying, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000019, "Member 'GA_Athena_Rift_Flopper_C_Is_Flying::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function GA_Athena_Rift_Flopper.GA_Athena_Rift_Flopper_C.K2_CanActivateAbility
// 0x0088 (0x0088 - 0x0000)
struct GA_Athena_Rift_Flopper_C_K2_CanActivateAbility final 
{
public:
	struct FGameplayAbilityActorInfo              ActorInfo;                                         // 0x0000(0x0048)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayAbilitySpecHandle             Handle;                                            // 0x0048(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72C0[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  RelevantTags;                                      // 0x0050(0x0020)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0070(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72C1[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Athena_Rift_Flopper_C_K2_CanActivateAbility) == 0x000008, "Wrong alinment on GA_Athena_Rift_Flopper_C_K2_CanActivateAbility");
static_assert(sizeof(GA_Athena_Rift_Flopper_C_K2_CanActivateAbility) == 0x000088, "Wrong size on GA_Athena_Rift_Flopper_C_K2_CanActivateAbility");
static_assert(offsetof(GA_Athena_Rift_Flopper_C_K2_CanActivateAbility, ActorInfo) == 0x000000, "Member 'GA_Athena_Rift_Flopper_C_K2_CanActivateAbility::ActorInfo' has a wrong offset!");
static_assert(offsetof(GA_Athena_Rift_Flopper_C_K2_CanActivateAbility, Handle) == 0x000048, "Member 'GA_Athena_Rift_Flopper_C_K2_CanActivateAbility::Handle' has a wrong offset!");
static_assert(offsetof(GA_Athena_Rift_Flopper_C_K2_CanActivateAbility, RelevantTags) == 0x000050, "Member 'GA_Athena_Rift_Flopper_C_K2_CanActivateAbility::RelevantTags' has a wrong offset!");
static_assert(offsetof(GA_Athena_Rift_Flopper_C_K2_CanActivateAbility, ReturnValue) == 0x000070, "Member 'GA_Athena_Rift_Flopper_C_K2_CanActivateAbility::ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Rift_Flopper_C_K2_CanActivateAbility, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000078, "Member 'GA_Athena_Rift_Flopper_C_K2_CanActivateAbility::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GA_Athena_Rift_Flopper_C_K2_CanActivateAbility, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'GA_Athena_Rift_Flopper_C_K2_CanActivateAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

