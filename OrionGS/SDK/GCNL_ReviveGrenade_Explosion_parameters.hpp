#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_ReviveGrenade_Explosion

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function GCNL_ReviveGrenade_Explosion.GCNL_ReviveGrenade_Explosion_C.ExecuteUbergraph_GCNL_ReviveGrenade_Explosion
// 0x01A0 (0x01A0 - 0x0000)
struct GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D52[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_MyTarget;                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameplayCueEvent                             K2Node_Event_EventType;                            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D53[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 K2Node_Event_Parameters;                           // 0x0018(0x00B8)(ConstParm, ContainsInstancedReference)
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           CallFunc_BreakGameplayCueParameters_EffectContext; // 0x00D8(0x0018)()
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0x00F0(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0x00F8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x0100(0x0020)()
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x0120(0x0020)()
	struct FVector                                CallFunc_BreakGameplayCueParameters_Location;      // 0x0140(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakGameplayCueParameters_Normal;        // 0x014C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_Instigator;    // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetActorTeam_ReturnValue;                 // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortTeamAffiliation                          CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue; // 0x018A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x018B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D54[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFXSystemAsset*                         K2Node_Select_Default;                             // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                     CallFunc_SpawnFXAtLocation_ReturnValue;            // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion) == 0x000008, "Wrong alinment on GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion");
static_assert(sizeof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion) == 0x0001A0, "Wrong size on GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, EntryPoint) == 0x000000, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::EntryPoint' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, Temp_bool_Variable) == 0x000004, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, K2Node_Event_MyTarget) == 0x000008, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::K2Node_Event_MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, K2Node_Event_EventType) == 0x000010, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::K2Node_Event_EventType' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, K2Node_Event_Parameters) == 0x000018, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::K2Node_Event_Parameters' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, CallFunc_BreakGameplayCueParameters_NormalizedMagnitude) == 0x0000D0, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::CallFunc_BreakGameplayCueParameters_NormalizedMagnitude' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, CallFunc_BreakGameplayCueParameters_RawMagnitude) == 0x0000D4, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::CallFunc_BreakGameplayCueParameters_RawMagnitude' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, CallFunc_BreakGameplayCueParameters_EffectContext) == 0x0000D8, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::CallFunc_BreakGameplayCueParameters_EffectContext' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, CallFunc_BreakGameplayCueParameters_MatchedTagName) == 0x0000F0, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::CallFunc_BreakGameplayCueParameters_MatchedTagName' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, CallFunc_BreakGameplayCueParameters_OriginalTag) == 0x0000F8, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::CallFunc_BreakGameplayCueParameters_OriginalTag' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, CallFunc_BreakGameplayCueParameters_AggregatedSourceTags) == 0x000100, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::CallFunc_BreakGameplayCueParameters_AggregatedSourceTags' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, CallFunc_BreakGameplayCueParameters_AggregatedTargetTags) == 0x000120, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::CallFunc_BreakGameplayCueParameters_AggregatedTargetTags' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, CallFunc_BreakGameplayCueParameters_Location) == 0x000140, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::CallFunc_BreakGameplayCueParameters_Location' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, CallFunc_BreakGameplayCueParameters_Normal) == 0x00014C, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::CallFunc_BreakGameplayCueParameters_Normal' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, CallFunc_BreakGameplayCueParameters_Instigator) == 0x000158, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::CallFunc_BreakGameplayCueParameters_Instigator' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, CallFunc_BreakGameplayCueParameters_EffectCauser) == 0x000160, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::CallFunc_BreakGameplayCueParameters_EffectCauser' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, CallFunc_BreakGameplayCueParameters_SourceObject) == 0x000168, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::CallFunc_BreakGameplayCueParameters_SourceObject' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, CallFunc_BreakGameplayCueParameters_PhysicalMaterial) == 0x000170, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::CallFunc_BreakGameplayCueParameters_PhysicalMaterial' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, CallFunc_BreakGameplayCueParameters_GameplayEffectLevel) == 0x000178, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::CallFunc_BreakGameplayCueParameters_GameplayEffectLevel' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, CallFunc_BreakGameplayCueParameters_AbilityLevel) == 0x00017C, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::CallFunc_BreakGameplayCueParameters_AbilityLevel' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, CallFunc_BreakGameplayCueParameters_TargetAttachComponent) == 0x000180, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::CallFunc_BreakGameplayCueParameters_TargetAttachComponent' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, CallFunc_IsValid_ReturnValue) == 0x000188, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, CallFunc_GetActorTeam_ReturnValue) == 0x000189, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::CallFunc_GetActorTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue) == 0x00018A, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00018B, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, K2Node_Select_Default) == 0x000190, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion, CallFunc_SpawnFXAtLocation_ReturnValue) == 0x000198, "Member 'GCNL_ReviveGrenade_Explosion_C_ExecuteUbergraph_GCNL_ReviveGrenade_Explosion::CallFunc_SpawnFXAtLocation_ReturnValue' has a wrong offset!");

// Function GCNL_ReviveGrenade_Explosion.GCNL_ReviveGrenade_Explosion_C.K2_HandleGameplayCue
// 0x00C8 (0x00C8 - 0x0000)
struct GCNL_ReviveGrenade_Explosion_C_K2_HandleGameplayCue final 
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameplayCueEvent                             EventType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7D55[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayCueParameters                 Parameters;                                        // 0x0010(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(GCNL_ReviveGrenade_Explosion_C_K2_HandleGameplayCue) == 0x000008, "Wrong alinment on GCNL_ReviveGrenade_Explosion_C_K2_HandleGameplayCue");
static_assert(sizeof(GCNL_ReviveGrenade_Explosion_C_K2_HandleGameplayCue) == 0x0000C8, "Wrong size on GCNL_ReviveGrenade_Explosion_C_K2_HandleGameplayCue");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_K2_HandleGameplayCue, MyTarget) == 0x000000, "Member 'GCNL_ReviveGrenade_Explosion_C_K2_HandleGameplayCue::MyTarget' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_K2_HandleGameplayCue, EventType) == 0x000008, "Member 'GCNL_ReviveGrenade_Explosion_C_K2_HandleGameplayCue::EventType' has a wrong offset!");
static_assert(offsetof(GCNL_ReviveGrenade_Explosion_C_K2_HandleGameplayCue, Parameters) == 0x000010, "Member 'GCNL_ReviveGrenade_Explosion_C_K2_HandleGameplayCue::Parameters' has a wrong offset!");

}

