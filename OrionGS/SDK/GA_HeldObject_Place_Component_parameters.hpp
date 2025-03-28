#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_HeldObject_Place_Component

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.ExecuteUbergraph_GA_HeldObject_Place_Component
// 0x01E8 (0x01E8 - 0x0000)
struct GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EC3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_1;                   // 0x0008(0x0028)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_1;               // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x0038(0x0028)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x0060(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate;              // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0078(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable_1;                            // 0x0080(0x0028)()
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x00A8(0x00B0)(ConstParm)
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EC4[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EC5[0x6];                                     // 0x0172(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHeldObjectComponent*               CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue; // 0x0178(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsHeld_ReturnValue;                       // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EC6[0x6];                                     // 0x0182(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData_2;                   // 0x0188(0x0028)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag_2;               // 0x01B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x01B8(0x0010)(ZeroConstructor, NoDestructor)
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue;        // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x01D0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component) == 0x000008, "Wrong alinment on GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component");
static_assert(sizeof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component) == 0x0001E8, "Wrong size on GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component");
static_assert(offsetof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component, EntryPoint) == 0x000000, "Member 'GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component, K2Node_CustomEvent_TargetData_1) == 0x000008, "Member 'GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component::K2Node_CustomEvent_TargetData_1' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component, K2Node_CustomEvent_ApplicationTag_1) == 0x000030, "Member 'GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component::K2Node_CustomEvent_ApplicationTag_1' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component, K2Node_CustomEvent_TargetData) == 0x000038, "Member 'GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component, K2Node_CustomEvent_ApplicationTag) == 0x000060, "Member 'GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component, K2Node_CreateDelegate_OutputDelegate) == 0x000068, "Member 'GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component, Temp_struct_Variable) == 0x000078, "Member 'GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component, Temp_struct_Variable_1) == 0x000080, "Member 'GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component, K2Node_Event_EventData) == 0x0000A8, "Member 'GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000158, "Member 'GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component, CallFunc_K2_CommitAbility_ReturnValue) == 0x000160, "Member 'GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000168, "Member 'GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component, K2Node_DynamicCast_bSuccess) == 0x000170, "Member 'GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component, CallFunc_IsServer_ReturnValue) == 0x000171, "Member 'GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component, CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue) == 0x000178, "Member 'GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component::CallFunc_GetHeldObjectComponentAttachedToPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component, CallFunc_IsHeld_ReturnValue) == 0x000180, "Member 'GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component::CallFunc_IsHeld_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component, CallFunc_IsValid_ReturnValue) == 0x000181, "Member 'GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component, K2Node_CustomEvent_TargetData_2) == 0x000188, "Member 'GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component::K2Node_CustomEvent_TargetData_2' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component, K2Node_CustomEvent_ApplicationTag_2) == 0x0001B0, "Member 'GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component::K2Node_CustomEvent_ApplicationTag_2' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001B8, "Member 'GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component, CallFunc_PlayMontageWaitTarget_ReturnValue) == 0x0001C8, "Member 'GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component::CallFunc_PlayMontageWaitTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component, K2Node_CreateDelegate_OutputDelegate_2) == 0x0001D0, "Member 'GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component, CallFunc_IsValid_ReturnValue_1) == 0x0001E0, "Member 'GA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_HeldObject_Place_Component_C_K2_ActivateAbilityFromEvent final 
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_HeldObject_Place_Component_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alinment on GA_HeldObject_Place_Component_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_HeldObject_Place_Component_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_HeldObject_Place_Component_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_HeldObject_Place_Component_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_HeldObject_Place_Component_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.Triggered_FB73B2F540131A6D5CEF3FB7287803D4
// 0x0030 (0x0030 - 0x0000)
struct GA_HeldObject_Place_Component_C_Triggered_FB73B2F540131A6D5CEF3FB7287803D4 final 
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_HeldObject_Place_Component_C_Triggered_FB73B2F540131A6D5CEF3FB7287803D4) == 0x000008, "Wrong alinment on GA_HeldObject_Place_Component_C_Triggered_FB73B2F540131A6D5CEF3FB7287803D4");
static_assert(sizeof(GA_HeldObject_Place_Component_C_Triggered_FB73B2F540131A6D5CEF3FB7287803D4) == 0x000030, "Wrong size on GA_HeldObject_Place_Component_C_Triggered_FB73B2F540131A6D5CEF3FB7287803D4");
static_assert(offsetof(GA_HeldObject_Place_Component_C_Triggered_FB73B2F540131A6D5CEF3FB7287803D4, TargetData) == 0x000000, "Member 'GA_HeldObject_Place_Component_C_Triggered_FB73B2F540131A6D5CEF3FB7287803D4::TargetData' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_Triggered_FB73B2F540131A6D5CEF3FB7287803D4, ApplicationTag) == 0x000028, "Member 'GA_HeldObject_Place_Component_C_Triggered_FB73B2F540131A6D5CEF3FB7287803D4::ApplicationTag' has a wrong offset!");

// Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.Cancelled_FB73B2F540131A6D5CEF3FB7287803D4
// 0x0030 (0x0030 - 0x0000)
struct GA_HeldObject_Place_Component_C_Cancelled_FB73B2F540131A6D5CEF3FB7287803D4 final 
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_HeldObject_Place_Component_C_Cancelled_FB73B2F540131A6D5CEF3FB7287803D4) == 0x000008, "Wrong alinment on GA_HeldObject_Place_Component_C_Cancelled_FB73B2F540131A6D5CEF3FB7287803D4");
static_assert(sizeof(GA_HeldObject_Place_Component_C_Cancelled_FB73B2F540131A6D5CEF3FB7287803D4) == 0x000030, "Wrong size on GA_HeldObject_Place_Component_C_Cancelled_FB73B2F540131A6D5CEF3FB7287803D4");
static_assert(offsetof(GA_HeldObject_Place_Component_C_Cancelled_FB73B2F540131A6D5CEF3FB7287803D4, TargetData) == 0x000000, "Member 'GA_HeldObject_Place_Component_C_Cancelled_FB73B2F540131A6D5CEF3FB7287803D4::TargetData' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_Cancelled_FB73B2F540131A6D5CEF3FB7287803D4, ApplicationTag) == 0x000028, "Member 'GA_HeldObject_Place_Component_C_Cancelled_FB73B2F540131A6D5CEF3FB7287803D4::ApplicationTag' has a wrong offset!");

// Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.Completed_FB73B2F540131A6D5CEF3FB7287803D4
// 0x0030 (0x0030 - 0x0000)
struct GA_HeldObject_Place_Component_C_Completed_FB73B2F540131A6D5CEF3FB7287803D4 final 
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_HeldObject_Place_Component_C_Completed_FB73B2F540131A6D5CEF3FB7287803D4) == 0x000008, "Wrong alinment on GA_HeldObject_Place_Component_C_Completed_FB73B2F540131A6D5CEF3FB7287803D4");
static_assert(sizeof(GA_HeldObject_Place_Component_C_Completed_FB73B2F540131A6D5CEF3FB7287803D4) == 0x000030, "Wrong size on GA_HeldObject_Place_Component_C_Completed_FB73B2F540131A6D5CEF3FB7287803D4");
static_assert(offsetof(GA_HeldObject_Place_Component_C_Completed_FB73B2F540131A6D5CEF3FB7287803D4, TargetData) == 0x000000, "Member 'GA_HeldObject_Place_Component_C_Completed_FB73B2F540131A6D5CEF3FB7287803D4::TargetData' has a wrong offset!");
static_assert(offsetof(GA_HeldObject_Place_Component_C_Completed_FB73B2F540131A6D5CEF3FB7287803D4, ApplicationTag) == 0x000028, "Member 'GA_HeldObject_Place_Component_C_Completed_FB73B2F540131A6D5CEF3FB7287803D4::ApplicationTag' has a wrong offset!");

}

