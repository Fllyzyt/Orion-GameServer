#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_ForagedItemVersion_Consume_Parent

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_ForagedItemVersion_Consume_Parent.GA_Athena_ForagedItemVersion_Consume_Parent_C.ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent
// 0x0050 (0x0050 - 0x0000)
struct GA_Athena_ForagedItemVersion_Consume_Parent_C_ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62A6[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62A7[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_GetWeaponDataGameplayTags_GameplayTags;   // 0x0018(0x0020)()
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SendComplexCustomStatEvent_QuestActive;   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SendComplexCustomStatEvent_QuestCompleted; // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Athena_ForagedItemVersion_Consume_Parent_C_ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent) == 0x000008, "Wrong alinment on GA_Athena_ForagedItemVersion_Consume_Parent_C_ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent");
static_assert(sizeof(GA_Athena_ForagedItemVersion_Consume_Parent_C_ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent) == 0x000050, "Wrong size on GA_Athena_ForagedItemVersion_Consume_Parent_C_ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent");
static_assert(offsetof(GA_Athena_ForagedItemVersion_Consume_Parent_C_ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent, EntryPoint) == 0x000000, "Member 'GA_Athena_ForagedItemVersion_Consume_Parent_C_ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_ForagedItemVersion_Consume_Parent_C_ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent, CallFunc_GetActivatingPawn_ReturnValue) == 0x000008, "Member 'GA_Athena_ForagedItemVersion_Consume_Parent_C_ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ForagedItemVersion_Consume_Parent_C_ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent, CallFunc_IsServer_ReturnValue) == 0x000010, "Member 'GA_Athena_ForagedItemVersion_Consume_Parent_C_ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ForagedItemVersion_Consume_Parent_C_ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent, CallFunc_GetWeaponDataGameplayTags_GameplayTags) == 0x000018, "Member 'GA_Athena_ForagedItemVersion_Consume_Parent_C_ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent::CallFunc_GetWeaponDataGameplayTags_GameplayTags' has a wrong offset!");
static_assert(offsetof(GA_Athena_ForagedItemVersion_Consume_Parent_C_ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000038, "Member 'GA_Athena_ForagedItemVersion_Consume_Parent_C_ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ForagedItemVersion_Consume_Parent_C_ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent, CallFunc_GetQuestManager_ReturnValue) == 0x000040, "Member 'GA_Athena_ForagedItemVersion_Consume_Parent_C_ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_ForagedItemVersion_Consume_Parent_C_ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent, CallFunc_SendComplexCustomStatEvent_QuestActive) == 0x000048, "Member 'GA_Athena_ForagedItemVersion_Consume_Parent_C_ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent::CallFunc_SendComplexCustomStatEvent_QuestActive' has a wrong offset!");
static_assert(offsetof(GA_Athena_ForagedItemVersion_Consume_Parent_C_ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent, CallFunc_SendComplexCustomStatEvent_QuestCompleted) == 0x000049, "Member 'GA_Athena_ForagedItemVersion_Consume_Parent_C_ExecuteUbergraph_GA_Athena_ForagedItemVersion_Consume_Parent::CallFunc_SendComplexCustomStatEvent_QuestCompleted' has a wrong offset!");

}

