#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PhosphorusRuntime

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "PhosphorusRuntime_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// Class PhosphorusRuntime.FortAthenaMutator_Phosphorus
// 0x0398 (0x0768 - 0x03D0)
class AFortAthenaMutator_Phosphorus : public AFortAthenaMutator_GameModeBase
{
public:
	FMulticastInlineDelegateProperty_             OnPhosphorusPhaseChanged;                          // 0x03D0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UFortAbilitySet*                        EjectAbilitySet;                                   // 0x03E0(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortAbilitySet*                        LeaderAbilitySet;                                  // 0x03E8(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                         bKeepWarmupLoadoutsInFirstRound;                   // 0x03F0(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         bPutInStasisAtRoundEnd;                            // 0x0418(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	EPhosphorusPhase                              PhosphorusPhase;                                   // 0x0440(0x0001)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_470E[0x7];                                     // 0x0441(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             PlayerEnteredStormSound;                           // 0x0448(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFortAthenaMutator_CustomStormMovement* StormMutator;                                      // 0x0450(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortAthenaMutator_SafeZoneOrderOptimize* SafeZoneOrderOptimizeMutator;                      // 0x0458(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_470F[0x8];                                     // 0x0460(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPhosphorusTeamData>            TeamDataArray;                                     // 0x0468(0x0010)(Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                         InnerLandRadiusPercent;                            // 0x0478(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         OuterLandRadiusPercent;                            // 0x04A0(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         TeamLandWedgeAngleRandPercent;                     // 0x04C8(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class AFortAthenaMutator_PlayerSpawnPod*      PlayerSpawnPodMutator;                             // 0x04F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_             OnRoundAdvanced;                                   // 0x04F8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_4710[0x30];                                    // 0x0508(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPhosphorusNewSquadMVP;                           // 0x0538(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScalableFloat                         MaxExpectedRoundsOverride;                         // 0x0548(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         AdvanceRoundDelay;                                 // 0x0570(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         EndRoundUIDuration;                                // 0x0598(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         PreFirstRoundFadeOutDuration;                      // 0x05C0(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	int32                                         CurrentRound;                                      // 0x05E8(0x0004)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4711[0x4];                                     // 0x05EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            EndRoundTimeDilationCurve;                         // 0x05F0(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                         EndRoundTimeDilationDuration;                      // 0x05F8(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         EndRoundDuration;                                  // 0x0620(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         EmoteAudioFadeOutDuration;                         // 0x0648(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UFortAthenaCustomTimeDilationManager*   TimeDilationManager;                               // 0x0670(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                         NumRoundsToWin;                                    // 0x0678(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                         RoundWinningTeamNum;                               // 0x06A0(0x0001)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4712[0x7];                                     // 0x06A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         DesiredSupplyDrops;                                // 0x06A8(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         SupplyDropPercentSafeZoneRadiusToUse;              // 0x06D0(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         SupplyDropMinTimeUntilSpawn;                       // 0x06F8(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         SupplyDropMaxTimeUntilSpawn;                       // 0x0720(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_4713[0x8];                                     // 0x0748(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AFortAthenaSupplyDrop*>          SupplyDrops;                                       // 0x0750(0x0010)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bCheatForcedStart;                                 // 0x0760(0x0001)(Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4714[0x7];                                     // 0x0761(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AdvanceRound();
	void AudioFadeChangeEvent(bool bFadeOut, float FadeTime);
	void FadeToFirstRound();
	class AFortAthenaMutator_CustomStormMovement* GetCachedStormMutator();
	class AFortPlayerStateAthena* GetTeamMVP(uint8 TeamNum);
	void HandlePawnStormStatusChanged(class AFortPlayerPawn* PlayerPawn, bool bIsInSafeZone);
	void OnAllPodsLanded();
	void OnAllPodsLaunched();
	void OnPawnEjectedFromPod(class AFortPlayerPawnAthena* Pawn);
	void OnPrePodLaunch();
	void OnRep_CurrentRound();
	void OnRep_PhosphorusPhase();

	void GetLeadingTeamNums(TArray<uint8>* LeadingTeamNums) const;
	int32 GetNumAliveTeams() const;
	int32 GetNumValidTeams() const;
	uint8 GetRoundWinningTeamNum() const;
	void GetTeamDataArray(TArray<struct FPhosphorusTeamData>* OutTeamDataArray, bool bMustBeValid, bool bMustBeAlive, bool bSortByScore) const;
	struct FPhosphorusTeamData GetTeamDataCopy(uint8 TeamNum) const;
	int32 GetTeamSize(uint8 TeamNum) const;
	bool IsOnWinningTeam(class AFortPlayerPawnAthena* Pawn) const;
	bool IsTeamAlive(uint8 TeamNum) const;
	bool IsTeamValid(uint8 TeamNum) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortAthenaMutator_Phosphorus">();
	}
	static class AFortAthenaMutator_Phosphorus* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_Phosphorus>();
	}
};
static_assert(alignof(AFortAthenaMutator_Phosphorus) == 0x000008, "Wrong alinment on AFortAthenaMutator_Phosphorus");
static_assert(sizeof(AFortAthenaMutator_Phosphorus) == 0x000768, "Wrong size on AFortAthenaMutator_Phosphorus");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, OnPhosphorusPhaseChanged) == 0x0003D0, "Member 'AFortAthenaMutator_Phosphorus::OnPhosphorusPhaseChanged' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, EjectAbilitySet) == 0x0003E0, "Member 'AFortAthenaMutator_Phosphorus::EjectAbilitySet' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, LeaderAbilitySet) == 0x0003E8, "Member 'AFortAthenaMutator_Phosphorus::LeaderAbilitySet' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, bKeepWarmupLoadoutsInFirstRound) == 0x0003F0, "Member 'AFortAthenaMutator_Phosphorus::bKeepWarmupLoadoutsInFirstRound' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, bPutInStasisAtRoundEnd) == 0x000418, "Member 'AFortAthenaMutator_Phosphorus::bPutInStasisAtRoundEnd' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, PhosphorusPhase) == 0x000440, "Member 'AFortAthenaMutator_Phosphorus::PhosphorusPhase' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, PlayerEnteredStormSound) == 0x000448, "Member 'AFortAthenaMutator_Phosphorus::PlayerEnteredStormSound' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, StormMutator) == 0x000450, "Member 'AFortAthenaMutator_Phosphorus::StormMutator' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, SafeZoneOrderOptimizeMutator) == 0x000458, "Member 'AFortAthenaMutator_Phosphorus::SafeZoneOrderOptimizeMutator' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, TeamDataArray) == 0x000468, "Member 'AFortAthenaMutator_Phosphorus::TeamDataArray' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, InnerLandRadiusPercent) == 0x000478, "Member 'AFortAthenaMutator_Phosphorus::InnerLandRadiusPercent' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, OuterLandRadiusPercent) == 0x0004A0, "Member 'AFortAthenaMutator_Phosphorus::OuterLandRadiusPercent' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, TeamLandWedgeAngleRandPercent) == 0x0004C8, "Member 'AFortAthenaMutator_Phosphorus::TeamLandWedgeAngleRandPercent' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, PlayerSpawnPodMutator) == 0x0004F0, "Member 'AFortAthenaMutator_Phosphorus::PlayerSpawnPodMutator' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, OnRoundAdvanced) == 0x0004F8, "Member 'AFortAthenaMutator_Phosphorus::OnRoundAdvanced' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, OnPhosphorusNewSquadMVP) == 0x000538, "Member 'AFortAthenaMutator_Phosphorus::OnPhosphorusNewSquadMVP' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, MaxExpectedRoundsOverride) == 0x000548, "Member 'AFortAthenaMutator_Phosphorus::MaxExpectedRoundsOverride' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, AdvanceRoundDelay) == 0x000570, "Member 'AFortAthenaMutator_Phosphorus::AdvanceRoundDelay' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, EndRoundUIDuration) == 0x000598, "Member 'AFortAthenaMutator_Phosphorus::EndRoundUIDuration' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, PreFirstRoundFadeOutDuration) == 0x0005C0, "Member 'AFortAthenaMutator_Phosphorus::PreFirstRoundFadeOutDuration' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, CurrentRound) == 0x0005E8, "Member 'AFortAthenaMutator_Phosphorus::CurrentRound' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, EndRoundTimeDilationCurve) == 0x0005F0, "Member 'AFortAthenaMutator_Phosphorus::EndRoundTimeDilationCurve' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, EndRoundTimeDilationDuration) == 0x0005F8, "Member 'AFortAthenaMutator_Phosphorus::EndRoundTimeDilationDuration' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, EndRoundDuration) == 0x000620, "Member 'AFortAthenaMutator_Phosphorus::EndRoundDuration' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, EmoteAudioFadeOutDuration) == 0x000648, "Member 'AFortAthenaMutator_Phosphorus::EmoteAudioFadeOutDuration' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, TimeDilationManager) == 0x000670, "Member 'AFortAthenaMutator_Phosphorus::TimeDilationManager' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, NumRoundsToWin) == 0x000678, "Member 'AFortAthenaMutator_Phosphorus::NumRoundsToWin' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, RoundWinningTeamNum) == 0x0006A0, "Member 'AFortAthenaMutator_Phosphorus::RoundWinningTeamNum' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, DesiredSupplyDrops) == 0x0006A8, "Member 'AFortAthenaMutator_Phosphorus::DesiredSupplyDrops' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, SupplyDropPercentSafeZoneRadiusToUse) == 0x0006D0, "Member 'AFortAthenaMutator_Phosphorus::SupplyDropPercentSafeZoneRadiusToUse' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, SupplyDropMinTimeUntilSpawn) == 0x0006F8, "Member 'AFortAthenaMutator_Phosphorus::SupplyDropMinTimeUntilSpawn' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, SupplyDropMaxTimeUntilSpawn) == 0x000720, "Member 'AFortAthenaMutator_Phosphorus::SupplyDropMaxTimeUntilSpawn' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, SupplyDrops) == 0x000750, "Member 'AFortAthenaMutator_Phosphorus::SupplyDrops' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_Phosphorus, bCheatForcedStart) == 0x000760, "Member 'AFortAthenaMutator_Phosphorus::bCheatForcedStart' has a wrong offset!");

// Class PhosphorusRuntime.FortAthenaMutator_InventoryOverride_Phosphorus
// 0x0000 (0x0518 - 0x0518)
class AFortAthenaMutator_InventoryOverride_Phosphorus final  : public AFortAthenaMutator_InventoryOverride
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortAthenaMutator_InventoryOverride_Phosphorus">();
	}
	static class AFortAthenaMutator_InventoryOverride_Phosphorus* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_InventoryOverride_Phosphorus>();
	}
};
static_assert(alignof(AFortAthenaMutator_InventoryOverride_Phosphorus) == 0x000008, "Wrong alinment on AFortAthenaMutator_InventoryOverride_Phosphorus");
static_assert(sizeof(AFortAthenaMutator_InventoryOverride_Phosphorus) == 0x000518, "Wrong size on AFortAthenaMutator_InventoryOverride_Phosphorus");

// Class PhosphorusRuntime.FortCheatManager_Phosphorus
// 0x0000 (0x0038 - 0x0038)
class UFortCheatManager_Phosphorus final  : public UFortCheatManager_Coupled
{
public:
	void PhosphorusDebug(float TextScale);
	void PhosphorusEndMatch();
	void PhosphorusEndRound();
	void PhosphorusForceStartMatch();
	void PhosphorusSetNumRoundsToWin(int32 NumRounds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortCheatManager_Phosphorus">();
	}
	static class UFortCheatManager_Phosphorus* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCheatManager_Phosphorus>();
	}
};
static_assert(alignof(UFortCheatManager_Phosphorus) == 0x000008, "Wrong alinment on UFortCheatManager_Phosphorus");
static_assert(sizeof(UFortCheatManager_Phosphorus) == 0x000038, "Wrong size on UFortCheatManager_Phosphorus");

// Class PhosphorusRuntime.FortCheatManager_PlayerSpawnPod
// 0x0000 (0x0038 - 0x0038)
class UFortCheatManager_PlayerSpawnPod final  : public UFortCheatManager_Coupled
{
public:
	void PlayerSpawnPodDebug(float TextScale);
	void PlayerSpawnPodTest();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortCheatManager_PlayerSpawnPod">();
	}
	static class UFortCheatManager_PlayerSpawnPod* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCheatManager_PlayerSpawnPod>();
	}
};
static_assert(alignof(UFortCheatManager_PlayerSpawnPod) == 0x000008, "Wrong alinment on UFortCheatManager_PlayerSpawnPod");
static_assert(sizeof(UFortCheatManager_PlayerSpawnPod) == 0x000038, "Wrong size on UFortCheatManager_PlayerSpawnPod");

// Class PhosphorusRuntime.PlayerSpawnPodCameraActor
// 0x0000 (0x07A0 - 0x07A0)
class APlayerSpawnPodCameraActor final  : public ACameraActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerSpawnPodCameraActor">();
	}
	static class APlayerSpawnPodCameraActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerSpawnPodCameraActor>();
	}
};
static_assert(alignof(APlayerSpawnPodCameraActor) == 0x000010, "Wrong alinment on APlayerSpawnPodCameraActor");
static_assert(sizeof(APlayerSpawnPodCameraActor) == 0x0007A0, "Wrong size on APlayerSpawnPodCameraActor");

// Class PhosphorusRuntime.FortAthenaMutator_PlayerSpawnPod
// 0x0470 (0x0730 - 0x02C0)
class AFortAthenaMutator_PlayerSpawnPod final  : public AFortAthenaMutator
{
public:
	FMulticastInlineDelegateProperty_             OnPawnEjectedFromPod;                              // 0x02C0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPodLanded;                                       // 0x02D0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_471C[0x30];                                    // 0x02E0(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class AActor>                     PodClass;                                          // 0x0310(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                  AllowNativeActionsInPod;                           // 0x0318(0x0020)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UGameplayEffect>            DuringStasisEffectClass;                           // 0x0338(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                  BlockAbilityTagsInStasis;                          // 0x0340(0x0020)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         PreLaunchDelay;                                    // 0x0360(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         FallDuration;                                      // 0x0388(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         RouteYawCenter;                                    // 0x03B0(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         RouteYawDeviation;                                 // 0x03D8(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         RouteMinXYDistancePercent;                         // 0x0400(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         RouteMaxXYDistancePercent;                         // 0x0428(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         StartAltitude;                                     // 0x0450(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         StartAltitudeDeviation;                            // 0x0478(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         EndLocationUpperTraceOffset;                       // 0x04A0(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         EndLocationLowerTraceOffset;                       // 0x04C8(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         EjectPawnYawSpread;                                // 0x04F0(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         EjectPawnPitch;                                    // 0x0518(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         EjectPawnImpulseMagnitude;                         // 0x0540(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         CanToggleCursorModeInStasis;                       // 0x0568(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<class FName>                           ActionsToAllowToggleCursorModeInStasis;            // 0x0590(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPlayerSpawnPodData>            PodDataArray;                                      // 0x05A0(0x0010)(Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortAbilitySystemComponent*>    BlockedAbilitySystemComponents;                    // 0x05B0(0x0010)(ExportObject, Net, ZeroConstructor, RepNotify, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UFortAbilitySystemComponent*>    PreviousBlockedAbilitySystemComponents;            // 0x05C0(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_471D[0x8];                                     // 0x05D0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortRespawnLogicData                  TeamTeleportLogicData;                             // 0x05D8(0x0140)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class AFortAthenaMutator_SynchronizedTeleport* TeleportMutator;                                   // 0x0718(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class AActor>                     ViewTargetClass;                                   // 0x0720(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortCameraMode>            PawnFallingCameraMode;                             // 0x0728(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	bool GetPodDataForActor(class AActor* Actor, struct FPlayerSpawnPodData* OutPodData, const class FString& ContextString);
	bool GetPodDataForID(int32 ID, struct FPlayerSpawnPodData* OutPodData, const class FString& ContextString);
	void HandlePodLanded(class UActorComponent* InComponent);
	void OnAllTeleportComplete();
	void OnPodDestroyed(class AActor* DestroyedActor);
	void OnRep_BlockedAbilitySystemComponents();
	void OnSingleTeleportComplete(class AFortPlayerStateAthena* PlayerState);
	void SetViewTarget(class AFortPlayerControllerAthena* Controller, class AActor* ViewTarget, struct FViewTargetTransitionParams& ViewTargetTransitionParams, bool bDestroyOldViewTarget);

	float GetFallDuration() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortAthenaMutator_PlayerSpawnPod">();
	}
	static class AFortAthenaMutator_PlayerSpawnPod* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaMutator_PlayerSpawnPod>();
	}
};
static_assert(alignof(AFortAthenaMutator_PlayerSpawnPod) == 0x000008, "Wrong alinment on AFortAthenaMutator_PlayerSpawnPod");
static_assert(sizeof(AFortAthenaMutator_PlayerSpawnPod) == 0x000730, "Wrong size on AFortAthenaMutator_PlayerSpawnPod");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, OnPawnEjectedFromPod) == 0x0002C0, "Member 'AFortAthenaMutator_PlayerSpawnPod::OnPawnEjectedFromPod' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, OnPodLanded) == 0x0002D0, "Member 'AFortAthenaMutator_PlayerSpawnPod::OnPodLanded' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, PodClass) == 0x000310, "Member 'AFortAthenaMutator_PlayerSpawnPod::PodClass' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, AllowNativeActionsInPod) == 0x000318, "Member 'AFortAthenaMutator_PlayerSpawnPod::AllowNativeActionsInPod' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, DuringStasisEffectClass) == 0x000338, "Member 'AFortAthenaMutator_PlayerSpawnPod::DuringStasisEffectClass' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, BlockAbilityTagsInStasis) == 0x000340, "Member 'AFortAthenaMutator_PlayerSpawnPod::BlockAbilityTagsInStasis' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, PreLaunchDelay) == 0x000360, "Member 'AFortAthenaMutator_PlayerSpawnPod::PreLaunchDelay' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, FallDuration) == 0x000388, "Member 'AFortAthenaMutator_PlayerSpawnPod::FallDuration' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, RouteYawCenter) == 0x0003B0, "Member 'AFortAthenaMutator_PlayerSpawnPod::RouteYawCenter' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, RouteYawDeviation) == 0x0003D8, "Member 'AFortAthenaMutator_PlayerSpawnPod::RouteYawDeviation' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, RouteMinXYDistancePercent) == 0x000400, "Member 'AFortAthenaMutator_PlayerSpawnPod::RouteMinXYDistancePercent' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, RouteMaxXYDistancePercent) == 0x000428, "Member 'AFortAthenaMutator_PlayerSpawnPod::RouteMaxXYDistancePercent' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, StartAltitude) == 0x000450, "Member 'AFortAthenaMutator_PlayerSpawnPod::StartAltitude' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, StartAltitudeDeviation) == 0x000478, "Member 'AFortAthenaMutator_PlayerSpawnPod::StartAltitudeDeviation' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, EndLocationUpperTraceOffset) == 0x0004A0, "Member 'AFortAthenaMutator_PlayerSpawnPod::EndLocationUpperTraceOffset' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, EndLocationLowerTraceOffset) == 0x0004C8, "Member 'AFortAthenaMutator_PlayerSpawnPod::EndLocationLowerTraceOffset' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, EjectPawnYawSpread) == 0x0004F0, "Member 'AFortAthenaMutator_PlayerSpawnPod::EjectPawnYawSpread' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, EjectPawnPitch) == 0x000518, "Member 'AFortAthenaMutator_PlayerSpawnPod::EjectPawnPitch' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, EjectPawnImpulseMagnitude) == 0x000540, "Member 'AFortAthenaMutator_PlayerSpawnPod::EjectPawnImpulseMagnitude' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, CanToggleCursorModeInStasis) == 0x000568, "Member 'AFortAthenaMutator_PlayerSpawnPod::CanToggleCursorModeInStasis' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, ActionsToAllowToggleCursorModeInStasis) == 0x000590, "Member 'AFortAthenaMutator_PlayerSpawnPod::ActionsToAllowToggleCursorModeInStasis' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, PodDataArray) == 0x0005A0, "Member 'AFortAthenaMutator_PlayerSpawnPod::PodDataArray' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, BlockedAbilitySystemComponents) == 0x0005B0, "Member 'AFortAthenaMutator_PlayerSpawnPod::BlockedAbilitySystemComponents' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, PreviousBlockedAbilitySystemComponents) == 0x0005C0, "Member 'AFortAthenaMutator_PlayerSpawnPod::PreviousBlockedAbilitySystemComponents' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, TeamTeleportLogicData) == 0x0005D8, "Member 'AFortAthenaMutator_PlayerSpawnPod::TeamTeleportLogicData' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, TeleportMutator) == 0x000718, "Member 'AFortAthenaMutator_PlayerSpawnPod::TeleportMutator' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, ViewTargetClass) == 0x000720, "Member 'AFortAthenaMutator_PlayerSpawnPod::ViewTargetClass' has a wrong offset!");
static_assert(offsetof(AFortAthenaMutator_PlayerSpawnPod, PawnFallingCameraMode) == 0x000728, "Member 'AFortAthenaMutator_PlayerSpawnPod::PawnFallingCameraMode' has a wrong offset!");

}

