#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_AthenaDBNO

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.ExecuteUbergraph_GAB_AthenaDBNO
// 0x0200 (0x0200 - 0x0000)
struct GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_634A[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_StartAbilityState*         CallFunc_StartAbilityState_ReturnValue;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_634B[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitDelay*                 CallFunc_WaitDelay_ReturnValue;                    // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0070(0x00B0)(ConstParm)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_634C[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_634D[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_634E[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x014C(0x0010)(ZeroConstructor, NoDestructor)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x015C(0x0008)(NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_634F[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x0168(0x0010)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0178(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_GetInitialHealAmount_Health;              // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6350[0x3];                                     // 0x018D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectSpecHandle              CallFunc_AssignSetByCallerMagnitude_ReturnValue;   // 0x0190(0x0010)()
	struct FActiveGameplayEffectHandle            CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue; // 0x01A0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1; // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_1;           // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6351[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_Get_DBNO_Montage_ReturnValue;             // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6352[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2; // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn_2;           // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6353[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHeldObjectComponent*               CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue; // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO) == 0x000008, "Wrong alinment on GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO");
static_assert(sizeof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO) == 0x000200, "Wrong size on GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, EntryPoint) == 0x000000, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_StartAbilityState_ReturnValue) == 0x000048, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_StartAbilityState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_CreateDelegate_OutputDelegate_4) == 0x000050, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_WaitDelay_ReturnValue) == 0x000068, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_WaitDelay_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_Event_EventData) == 0x000070, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_IsValid_ReturnValue_1) == 0x000120, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000128, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000130, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_DynamicCast_bSuccess) == 0x000138, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000140, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_DynamicCast_bSuccess_1) == 0x000148, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_CreateDelegate_OutputDelegate_5) == 0x00014C, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x00015C, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue) == 0x000168, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_CreateDelegate_OutputDelegate_6) == 0x000178, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_GetInitialHealAmount_Health) == 0x000188, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_GetInitialHealAmount_Health' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_Event_bWasCancelled) == 0x00018C, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_AssignSetByCallerMagnitude_ReturnValue) == 0x000190, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_AssignSetByCallerMagnitude_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue) == 0x0001A0, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1) == 0x0001A8, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_DynamicCast_AsFort_Player_Pawn_1) == 0x0001B0, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_DynamicCast_AsFort_Player_Pawn_1' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_DynamicCast_bSuccess_2) == 0x0001B8, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_Get_DBNO_Montage_ReturnValue) == 0x0001C0, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_Get_DBNO_Montage_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x0001C8, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_IsValid_ReturnValue_2) == 0x0001D0, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2) == 0x0001D8, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_DynamicCast_AsFort_Player_Pawn_2) == 0x0001E0, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_DynamicCast_AsFort_Player_Pawn_2' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, K2Node_DynamicCast_bSuccess_3) == 0x0001E8, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue) == 0x0001F0, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO, CallFunc_IsValid_ReturnValue_3) == 0x0001F8, "Member 'GAB_AthenaDBNO_C_ExecuteUbergraph_GAB_AthenaDBNO::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GAB_AthenaDBNO_C_K2_OnEndAbility final 
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_AthenaDBNO_C_K2_OnEndAbility) == 0x000001, "Wrong alinment on GAB_AthenaDBNO_C_K2_OnEndAbility");
static_assert(sizeof(GAB_AthenaDBNO_C_K2_OnEndAbility) == 0x000001, "Wrong size on GAB_AthenaDBNO_C_K2_OnEndAbility");
static_assert(offsetof(GAB_AthenaDBNO_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GAB_AthenaDBNO_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent final 
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alinment on GAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAB_AthenaDBNO_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.InitializeDeathHitDirection
// 0x0160 (0x0160 - 0x0000)
struct GAB_AthenaDBNO_C_InitializeDeathHitDirection final 
{
public:
	struct FGameplayEventData                     EventHitData;                                      // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                CallFunc_GetImpulseData_ImpulseDirection;          // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetImpulseData_KnockbackMagnitude;        // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetImpulseData_KnockbackZAngle;           // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_EffectContextGetHitResult_ReturnValue;    // 0x00C4(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0150(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_AthenaDBNO_C_InitializeDeathHitDirection) == 0x000008, "Wrong alinment on GAB_AthenaDBNO_C_InitializeDeathHitDirection");
static_assert(sizeof(GAB_AthenaDBNO_C_InitializeDeathHitDirection) == 0x000160, "Wrong size on GAB_AthenaDBNO_C_InitializeDeathHitDirection");
static_assert(offsetof(GAB_AthenaDBNO_C_InitializeDeathHitDirection, EventHitData) == 0x000000, "Member 'GAB_AthenaDBNO_C_InitializeDeathHitDirection::EventHitData' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_InitializeDeathHitDirection, CallFunc_GetImpulseData_ImpulseDirection) == 0x0000B0, "Member 'GAB_AthenaDBNO_C_InitializeDeathHitDirection::CallFunc_GetImpulseData_ImpulseDirection' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_InitializeDeathHitDirection, CallFunc_GetImpulseData_KnockbackMagnitude) == 0x0000BC, "Member 'GAB_AthenaDBNO_C_InitializeDeathHitDirection::CallFunc_GetImpulseData_KnockbackMagnitude' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_InitializeDeathHitDirection, CallFunc_GetImpulseData_KnockbackZAngle) == 0x0000C0, "Member 'GAB_AthenaDBNO_C_InitializeDeathHitDirection::CallFunc_GetImpulseData_KnockbackZAngle' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_InitializeDeathHitDirection, CallFunc_EffectContextGetHitResult_ReturnValue) == 0x0000C4, "Member 'GAB_AthenaDBNO_C_InitializeDeathHitDirection::CallFunc_EffectContextGetHitResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_InitializeDeathHitDirection, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000150, "Member 'GAB_AthenaDBNO_C_InitializeDeathHitDirection::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");

// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.GetInitialHealAmount
// 0x0028 (0x0028 - 0x0000)
struct GAB_AthenaDBNO_C_GetInitialHealAmount final 
{
public:
	float                                         Health;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6354[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6355[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute; // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6356[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatAttribute_ReturnValue;            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6357[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_AthenaDBNO_C_GetInitialHealAmount) == 0x000008, "Wrong alinment on GAB_AthenaDBNO_C_GetInitialHealAmount");
static_assert(sizeof(GAB_AthenaDBNO_C_GetInitialHealAmount) == 0x000028, "Wrong size on GAB_AthenaDBNO_C_GetInitialHealAmount");
static_assert(offsetof(GAB_AthenaDBNO_C_GetInitialHealAmount, Health) == 0x000000, "Member 'GAB_AthenaDBNO_C_GetInitialHealAmount::Health' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_GetInitialHealAmount, CallFunc_EvaluateCurveTableRow_OutResult) == 0x000004, "Member 'GAB_AthenaDBNO_C_GetInitialHealAmount::CallFunc_EvaluateCurveTableRow_OutResult' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_GetInitialHealAmount, CallFunc_EvaluateCurveTableRow_OutXY) == 0x000008, "Member 'GAB_AthenaDBNO_C_GetInitialHealAmount::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_GetInitialHealAmount, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000010, "Member 'GAB_AthenaDBNO_C_GetInitialHealAmount::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_GetInitialHealAmount, CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute) == 0x000018, "Member 'GAB_AthenaDBNO_C_GetInitialHealAmount::CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_GetInitialHealAmount, CallFunc_GetFloatAttribute_ReturnValue) == 0x00001C, "Member 'GAB_AthenaDBNO_C_GetInitialHealAmount::CallFunc_GetFloatAttribute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_GetInitialHealAmount, K2Node_SwitchEnum_CmpSuccess) == 0x000020, "Member 'GAB_AthenaDBNO_C_GetInitialHealAmount::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_GetInitialHealAmount, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000024, "Member 'GAB_AthenaDBNO_C_GetInitialHealAmount::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");

// Function GAB_AthenaDBNO.GAB_AthenaDBNO_C.Get DBNO Montage
// 0x0010 (0x0010 - 0x0000)
struct GAB_AthenaDBNO_C_Get_DBNO_Montage final 
{
public:
	class UAnimMontage*                           ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSurfaceSwimming_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSkydiving_ReturnValue;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_AthenaDBNO_C_Get_DBNO_Montage) == 0x000008, "Wrong alinment on GAB_AthenaDBNO_C_Get_DBNO_Montage");
static_assert(sizeof(GAB_AthenaDBNO_C_Get_DBNO_Montage) == 0x000010, "Wrong size on GAB_AthenaDBNO_C_Get_DBNO_Montage");
static_assert(offsetof(GAB_AthenaDBNO_C_Get_DBNO_Montage, ReturnValue) == 0x000000, "Member 'GAB_AthenaDBNO_C_Get_DBNO_Montage::ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_Get_DBNO_Montage, CallFunc_IsSurfaceSwimming_ReturnValue) == 0x000008, "Member 'GAB_AthenaDBNO_C_Get_DBNO_Montage::CallFunc_IsSurfaceSwimming_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AthenaDBNO_C_Get_DBNO_Montage, CallFunc_IsSkydiving_ReturnValue) == 0x000009, "Member 'GAB_AthenaDBNO_C_Get_DBNO_Montage::CallFunc_IsSkydiving_ReturnValue' has a wrong offset!");

}

