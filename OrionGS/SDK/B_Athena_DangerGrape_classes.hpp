#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Athena_DangerGrape

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Athena_DangerGrape.B_Athena_DangerGrape_C
// 0x0108 (0x0328 - 0x0220)
class AB_Athena_DangerGrape_C final  : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FCurveTableRowHandle                   DecoyLifetimeRow;                                  // 0x0230(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                  BotPawn;                                           // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LeashUpdateInterval;                               // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BB_Key_LeashLocation;                              // 0x024C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   BB_Key_Radius;                                     // 0x0254(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_748E[0x4];                                     // 0x025C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         LeashRadius;                                       // 0x0260(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   BB_Key_Destination;                                // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                         DistanceFromPlayerToMoveDecoy;                     // 0x0290(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  T_QuestAbsorbDamage;                               // 0x02B8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortQuestItemDefinition*               Quest_Item;                                        // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Quest_Backend_Name;                                // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Damage;                                            // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_748F[0x4];                                     // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  No_Starting_Weapons_Tag;                           // 0x02F0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         SpawnRequestID;                                    // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7490[0x4];                                     // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 AISpawnerData;                                     // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 AISpawnerData_NoStartingWeapons;                   // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Athena_DangerGrape(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AAthena_GameMode_C* K2Node_DynamicCast_AsAthena_Game_Mode, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AFortWeapon* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UFortWeaponItemDefinition* CallFunc_GetWeaponData_ReturnValue, EFortItemType CallFunc_GetWeaponDataItemType_ReturnValue, const struct FItemAndCount& K2Node_MakeStruct_ItemAndCount, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_EvaluateCurveTableRow_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, float CallFunc_GetValueAtLevel_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_K2_ProjectPointToNavigation_ProjectedLocation, bool CallFunc_K2_ProjectPointToNavigation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_3, const struct FVector& K2Node_Select_Default, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData_1, class AActor* K2Node_CustomEvent_DeadActor, float K2Node_CustomEvent_Damage_1, class AFortPawn* K2Node_CustomEvent_InstigatedBy_1, const struct FVector& K2Node_CustomEvent_HitLocation_1, class AActor* K2Node_CustomEvent_DamageCauser_1, bool Temp_bool_True_if_break_was_hit_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_4, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted, bool CallFunc_OnSameTeam_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted, class UAthenaAISpawner* CallFunc_GetAISpawner_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TDelegate<void(class APawn* Pawn, int32 RequestID)> K2Node_CreateDelegate_OutputDelegate_1, class APawn* K2Node_CustomEvent_Pawn, int32 K2Node_CustomEvent_RequestID, class AActor* CallFunc_GetOwner_ReturnValue_5, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_2, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_3, class AController* CallFunc_GetController_ReturnValue_1, uint8 CallFunc_GetActorTeam_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class AController* CallFunc_GetController_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, class AFortAthenaAIBotController* K2Node_DynamicCast_AsFort_Athena_AIBot_Controller, bool K2Node_DynamicCast_bSuccess_4, bool Temp_bool_Variable_1, class UAthenaAISpawner* CallFunc_GetAISpawner_ReturnValue_1, class UClass* K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_2, class UFortAthenaAISpawnerDataComponentList* CallFunc_CreateComponentListFromClass_ReturnValue, int32 CallFunc_RequestSpawn_ReturnValue, TArray<class UFortAthenaAISpawnerDataComponent*>& CallFunc_GetList_ReturnValue, class UFortAthenaAISpawnerDataComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UBP_AISC_Inv_DangerGrape_C* K2Node_DynamicCast_AsBP_AISC_Inv_Danger_Grape, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, class UBP_AISC_Cosmetics_DangerGrape_C* K2Node_DynamicCast_AsBP_AISC_Cosmetics_Danger_Grape, bool K2Node_DynamicCast_bSuccess_6, TDelegate<void(class APawn* Pawn, int32 RequestID)> K2Node_CreateDelegate_OutputDelegate_2, class AFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, TArray<class UCustomCharacterPart*>& CallFunc_GatherCustomCharacterPartOverridesFromMutator_OutOverrides, TDelegate<void(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)> K2Node_CreateDelegate_OutputDelegate_3, TDelegate<void(class AActor* DeadActor, float Damage, class AFortPawn* InstigatedBy, const struct FVector& HitLocation, class AActor* DamageCauser)> K2Node_CreateDelegate_OutputDelegate_4);
	void SetupSpawnedBot(class APawn* Pawn, int32 RequestID);
	void PawnDamaged(class AActor* DamagedActor, float Param_Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void PawnDied(class AActor* DeadActor, float Param_Damage, class AFortPawn* InstigatedBy, const struct FVector& HitLocation, class AActor* DamageCauser);
	void UpdateLeashLocation();
	void RemoveDecoy();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Athena_DangerGrape_C">();
	}
	static class AB_Athena_DangerGrape_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Athena_DangerGrape_C>();
	}
};
static_assert(alignof(AB_Athena_DangerGrape_C) == 0x000008, "Wrong alinment on AB_Athena_DangerGrape_C");
static_assert(sizeof(AB_Athena_DangerGrape_C) == 0x000328, "Wrong size on AB_Athena_DangerGrape_C");
static_assert(offsetof(AB_Athena_DangerGrape_C, UberGraphFrame) == 0x000220, "Member 'AB_Athena_DangerGrape_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AB_Athena_DangerGrape_C, DefaultSceneRoot) == 0x000228, "Member 'AB_Athena_DangerGrape_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AB_Athena_DangerGrape_C, DecoyLifetimeRow) == 0x000230, "Member 'AB_Athena_DangerGrape_C::DecoyLifetimeRow' has a wrong offset!");
static_assert(offsetof(AB_Athena_DangerGrape_C, BotPawn) == 0x000240, "Member 'AB_Athena_DangerGrape_C::BotPawn' has a wrong offset!");
static_assert(offsetof(AB_Athena_DangerGrape_C, LeashUpdateInterval) == 0x000248, "Member 'AB_Athena_DangerGrape_C::LeashUpdateInterval' has a wrong offset!");
static_assert(offsetof(AB_Athena_DangerGrape_C, BB_Key_LeashLocation) == 0x00024C, "Member 'AB_Athena_DangerGrape_C::BB_Key_LeashLocation' has a wrong offset!");
static_assert(offsetof(AB_Athena_DangerGrape_C, BB_Key_Radius) == 0x000254, "Member 'AB_Athena_DangerGrape_C::BB_Key_Radius' has a wrong offset!");
static_assert(offsetof(AB_Athena_DangerGrape_C, LeashRadius) == 0x000260, "Member 'AB_Athena_DangerGrape_C::LeashRadius' has a wrong offset!");
static_assert(offsetof(AB_Athena_DangerGrape_C, BB_Key_Destination) == 0x000288, "Member 'AB_Athena_DangerGrape_C::BB_Key_Destination' has a wrong offset!");
static_assert(offsetof(AB_Athena_DangerGrape_C, DistanceFromPlayerToMoveDecoy) == 0x000290, "Member 'AB_Athena_DangerGrape_C::DistanceFromPlayerToMoveDecoy' has a wrong offset!");
static_assert(offsetof(AB_Athena_DangerGrape_C, T_QuestAbsorbDamage) == 0x0002B8, "Member 'AB_Athena_DangerGrape_C::T_QuestAbsorbDamage' has a wrong offset!");
static_assert(offsetof(AB_Athena_DangerGrape_C, Quest_Item) == 0x0002D8, "Member 'AB_Athena_DangerGrape_C::Quest_Item' has a wrong offset!");
static_assert(offsetof(AB_Athena_DangerGrape_C, Quest_Backend_Name) == 0x0002E0, "Member 'AB_Athena_DangerGrape_C::Quest_Backend_Name' has a wrong offset!");
static_assert(offsetof(AB_Athena_DangerGrape_C, Damage) == 0x0002E8, "Member 'AB_Athena_DangerGrape_C::Damage' has a wrong offset!");
static_assert(offsetof(AB_Athena_DangerGrape_C, No_Starting_Weapons_Tag) == 0x0002F0, "Member 'AB_Athena_DangerGrape_C::No_Starting_Weapons_Tag' has a wrong offset!");
static_assert(offsetof(AB_Athena_DangerGrape_C, SpawnRequestID) == 0x000310, "Member 'AB_Athena_DangerGrape_C::SpawnRequestID' has a wrong offset!");
static_assert(offsetof(AB_Athena_DangerGrape_C, AISpawnerData) == 0x000318, "Member 'AB_Athena_DangerGrape_C::AISpawnerData' has a wrong offset!");
static_assert(offsetof(AB_Athena_DangerGrape_C, AISpawnerData_NoStartingWeapons) == 0x000320, "Member 'AB_Athena_DangerGrape_C::AISpawnerData_NoStartingWeapons' has a wrong offset!");

}

