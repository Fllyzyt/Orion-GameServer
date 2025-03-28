#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Tethered_PassiveTriggered

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_Tethered_PassiveTriggered.GA_Athena_Tethered_PassiveTriggered_C.ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered
// 0x0230 (0x0230 - 0x0000)
struct GA_Athena_Tethered_PassiveTriggered_C_ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F41[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x0008(0x00B8)(ContainsInstancedReference)
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x00C0(0x00B0)(ConstParm)
	bool                                          GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F42[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_MakeStruct_GameplayEventData;               // 0x0178(0x00B0)()
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_Tethered_PassiveTriggered_C_ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered) == 0x000008, "Wrong alinment on GA_Athena_Tethered_PassiveTriggered_C_ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered");
static_assert(sizeof(GA_Athena_Tethered_PassiveTriggered_C_ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered) == 0x000230, "Wrong size on GA_Athena_Tethered_PassiveTriggered_C_ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered");
static_assert(offsetof(GA_Athena_Tethered_PassiveTriggered_C_ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered, EntryPoint) == 0x000000, "Member 'GA_Athena_Tethered_PassiveTriggered_C_ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_PassiveTriggered_C_ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered, CallFunc_MakeGameplayCueParameters_ReturnValue) == 0x000008, "Member 'GA_Athena_Tethered_PassiveTriggered_C_ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered::CallFunc_MakeGameplayCueParameters_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_PassiveTriggered_C_ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered, K2Node_Event_EventData) == 0x0000C0, "Member 'GA_Athena_Tethered_PassiveTriggered_C_ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_PassiveTriggered_C_ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered, GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess) == 0x000170, "Member 'GA_Athena_Tethered_PassiveTriggered_C_ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered::GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_PassiveTriggered_C_ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered, K2Node_MakeStruct_GameplayEventData) == 0x000178, "Member 'GA_Athena_Tethered_PassiveTriggered_C_ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered::K2Node_MakeStruct_GameplayEventData' has a wrong offset!");
static_assert(offsetof(GA_Athena_Tethered_PassiveTriggered_C_ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000228, "Member 'GA_Athena_Tethered_PassiveTriggered_C_ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");

// Function GA_Athena_Tethered_PassiveTriggered.GA_Athena_Tethered_PassiveTriggered_C.K2_ActivateAbilityFromEvent
// 0x00B0 (0x00B0 - 0x0000)
struct GA_Athena_Tethered_PassiveTriggered_C_K2_ActivateAbilityFromEvent final 
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00B0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_Athena_Tethered_PassiveTriggered_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alinment on GA_Athena_Tethered_PassiveTriggered_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_Athena_Tethered_PassiveTriggered_C_K2_ActivateAbilityFromEvent) == 0x0000B0, "Wrong size on GA_Athena_Tethered_PassiveTriggered_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_Athena_Tethered_PassiveTriggered_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_Athena_Tethered_PassiveTriggered_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}

