#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Track_SneakySnowman

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_Track_SneakySnowman.GA_Athena_Track_SneakySnowman_C.ExecuteUbergraph_GA_Athena_Track_SneakySnowman
// 0x02C0 (0x02C0 - 0x0000)
struct GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B71[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitGameplayEvent*         CallFunc_WaitGameplayEvent_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B72[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     Temp_struct_Variable;                              // 0x0028(0x00B0)()
	struct FGameplayEventData                     K2Node_CustomEvent_Payload;                        // 0x00D8(0x00B0)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B73[0x4];                                     // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0198(0x0048)(ContainsInstancedReference)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B74[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B75[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x01F8(0x0028)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue; // 0x0220(0x0010)(ReferenceParm, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetTrackedGroupedActors_ReturnValue;      // 0x0230(0x0010)(ReferenceParm, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B76[0x3];                                     // 0x0241(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0244(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0249(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B77[0x2];                                     // 0x024A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayEventData& Payload)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x024C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_DamagedActor;                   // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Damage;                         // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B78[0x4];                                     // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            K2Node_CustomEvent_InstigatedBy;                   // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_DamageCauser;                   // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_HitLocation;                    // 0x0280(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B79[0x4];                                     // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_CustomEvent_FHitComponent;                  // 0x0290(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_BoneName;                       // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_Momentum;                       // 0x02A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValueAtLevel_ReturnValue;              // 0x02AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x02B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman) == 0x000008, "Wrong alinment on GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman");
static_assert(sizeof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman) == 0x0002C0, "Wrong size on GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, EntryPoint) == 0x000000, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, CallFunc_WaitGameplayEvent_ReturnValue) == 0x000008, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::CallFunc_WaitGameplayEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, Temp_struct_Variable) == 0x000028, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, K2Node_CustomEvent_Payload) == 0x0000D8, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, Temp_int_Loop_Counter_Variable) == 0x000188, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, CallFunc_Add_IntInt_ReturnValue) == 0x00018C, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, Temp_int_Array_Index_Variable) == 0x000190, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, CallFunc_GetActorInfo_ReturnValue) == 0x000198, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001E0, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0001E8, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, K2Node_DynamicCast_bSuccess) == 0x0001F0, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x0001F8, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue) == 0x000220, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, CallFunc_GetTrackedGroupedActors_ReturnValue) == 0x000230, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::CallFunc_GetTrackedGroupedActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, CallFunc_K2_CommitAbility_ReturnValue) == 0x000240, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, CallFunc_Array_Length_ReturnValue) == 0x000244, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, CallFunc_Less_IntInt_ReturnValue) == 0x000248, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, K2Node_Event_bWasCancelled) == 0x000249, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, K2Node_CreateDelegate_OutputDelegate_1) == 0x00024C, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, CallFunc_Array_Length_ReturnValue_1) == 0x00025C, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, K2Node_CustomEvent_DamagedActor) == 0x000260, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::K2Node_CustomEvent_DamagedActor' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, K2Node_CustomEvent_Damage) == 0x000268, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::K2Node_CustomEvent_Damage' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, K2Node_CustomEvent_InstigatedBy) == 0x000270, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::K2Node_CustomEvent_InstigatedBy' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, K2Node_CustomEvent_DamageCauser) == 0x000278, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::K2Node_CustomEvent_DamageCauser' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, K2Node_CustomEvent_HitLocation) == 0x000280, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::K2Node_CustomEvent_HitLocation' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, K2Node_CustomEvent_FHitComponent) == 0x000290, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::K2Node_CustomEvent_FHitComponent' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, K2Node_CustomEvent_BoneName) == 0x000298, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::K2Node_CustomEvent_BoneName' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, K2Node_CustomEvent_Momentum) == 0x0002A0, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::K2Node_CustomEvent_Momentum' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, CallFunc_GetValueAtLevel_ReturnValue) == 0x0002AC, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0002B0, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, CallFunc_FTrunc_ReturnValue) == 0x0002B4, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman, CallFunc_Greater_IntInt_ReturnValue) == 0x0002B8, "Member 'GA_Athena_Track_SneakySnowman_C_ExecuteUbergraph_GA_Athena_Track_SneakySnowman::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function GA_Athena_Track_SneakySnowman.GA_Athena_Track_SneakySnowman_C.OnPlayerDeath
// 0x0050 (0x0050 - 0x0000)
struct GA_Athena_Track_SneakySnowman_C_OnPlayerDeath final 
{
public:
	class AActor*                                 DamagedActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Damage;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B7A[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            InstigatedBy;                                      // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageCauser;                                      // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitLocation;                                       // 0x0020(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B7B[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    FHitComponent;                                     // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BoneName;                                          // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Momentum;                                          // 0x0040(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_Track_SneakySnowman_C_OnPlayerDeath) == 0x000008, "Wrong alinment on GA_Athena_Track_SneakySnowman_C_OnPlayerDeath");
static_assert(sizeof(GA_Athena_Track_SneakySnowman_C_OnPlayerDeath) == 0x000050, "Wrong size on GA_Athena_Track_SneakySnowman_C_OnPlayerDeath");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_OnPlayerDeath, DamagedActor) == 0x000000, "Member 'GA_Athena_Track_SneakySnowman_C_OnPlayerDeath::DamagedActor' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_OnPlayerDeath, Damage) == 0x000008, "Member 'GA_Athena_Track_SneakySnowman_C_OnPlayerDeath::Damage' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_OnPlayerDeath, InstigatedBy) == 0x000010, "Member 'GA_Athena_Track_SneakySnowman_C_OnPlayerDeath::InstigatedBy' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_OnPlayerDeath, DamageCauser) == 0x000018, "Member 'GA_Athena_Track_SneakySnowman_C_OnPlayerDeath::DamageCauser' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_OnPlayerDeath, HitLocation) == 0x000020, "Member 'GA_Athena_Track_SneakySnowman_C_OnPlayerDeath::HitLocation' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_OnPlayerDeath, FHitComponent) == 0x000030, "Member 'GA_Athena_Track_SneakySnowman_C_OnPlayerDeath::FHitComponent' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_OnPlayerDeath, BoneName) == 0x000038, "Member 'GA_Athena_Track_SneakySnowman_C_OnPlayerDeath::BoneName' has a wrong offset!");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_OnPlayerDeath, Momentum) == 0x000040, "Member 'GA_Athena_Track_SneakySnowman_C_OnPlayerDeath::Momentum' has a wrong offset!");

// Function GA_Athena_Track_SneakySnowman.GA_Athena_Track_SneakySnowman_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GA_Athena_Track_SneakySnowman_C_K2_OnEndAbility final 
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Athena_Track_SneakySnowman_C_K2_OnEndAbility) == 0x000001, "Wrong alinment on GA_Athena_Track_SneakySnowman_C_K2_OnEndAbility");
static_assert(sizeof(GA_Athena_Track_SneakySnowman_C_K2_OnEndAbility) == 0x000001, "Wrong size on GA_Athena_Track_SneakySnowman_C_K2_OnEndAbility");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Athena_Track_SneakySnowman_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

// Function GA_Athena_Track_SneakySnowman.GA_Athena_Track_SneakySnowman_C.EventReceived_3E66B31E47CEABBB2B2B24B29B395028
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Athena_Track_SneakySnowman_C_EventReceived_3E66B31E47CEABBB2B2B24B29B395028 final 
{
public:
	struct FGameplayEventData                     Payload;                                           // 0x0000(0x00B0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(GA_Athena_Track_SneakySnowman_C_EventReceived_3E66B31E47CEABBB2B2B24B29B395028) == 0x000008, "Wrong alinment on GA_Athena_Track_SneakySnowman_C_EventReceived_3E66B31E47CEABBB2B2B24B29B395028");
static_assert(sizeof(GA_Athena_Track_SneakySnowman_C_EventReceived_3E66B31E47CEABBB2B2B24B29B395028) == 0x0000B0, "Wrong size on GA_Athena_Track_SneakySnowman_C_EventReceived_3E66B31E47CEABBB2B2B24B29B395028");
static_assert(offsetof(GA_Athena_Track_SneakySnowman_C_EventReceived_3E66B31E47CEABBB2B2B24B29B395028, Payload) == 0x000000, "Member 'GA_Athena_Track_SneakySnowman_C_EventReceived_3E66B31E47CEABBB2B2B24B29B395028::Payload' has a wrong offset!");

}

