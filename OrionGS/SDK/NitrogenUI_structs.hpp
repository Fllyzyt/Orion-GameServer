#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NitrogenUI

#include "Basic.hpp"


namespace SDK
{

// Enum NitrogenUI.ENitrogenFareObjectiveDisplayState
// NumValues: 0x0004
enum class ENitrogenFareObjectiveDisplayState : uint8
{
	Default                                  = 0,
	Success                                  = 1,
	Failure                                  = 2,
	ENitrogenFareObjectiveDisplayState_MAX   = 3,
};

// Enum NitrogenUI.ENitrogenObjectiveWidgetState
// NumValues: 0x0004
enum class ENitrogenObjectiveWidgetState : uint8
{
	ENitrogenObjectiveWidgetState_Hidden     = 0,
	ENitrogenObjectiveWidgetState_FindFare   = 1,
	ENitrogenObjectiveWidgetState_FindTaxi   = 2,
	ENitrogenObjectiveWidgetState_MAX        = 3,
};

// ScriptStruct NitrogenUI.NitrogenLeaderboardData
// 0x0028 (0x0028 - 0x0000)
struct FNitrogenLeaderboardData final 
{
public:
	class FText                                   TeamName;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                         TeamScore;                                         // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         TeamPlacement;                                     // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnemyTeam;                                        // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_46F4[0x7];                                     // 0x0021(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNitrogenLeaderboardData) == 0x000008, "Wrong alinment on FNitrogenLeaderboardData");
static_assert(sizeof(FNitrogenLeaderboardData) == 0x000028, "Wrong size on FNitrogenLeaderboardData");
static_assert(offsetof(FNitrogenLeaderboardData, TeamName) == 0x000000, "Member 'FNitrogenLeaderboardData::TeamName' has a wrong offset!");
static_assert(offsetof(FNitrogenLeaderboardData, TeamScore) == 0x000018, "Member 'FNitrogenLeaderboardData::TeamScore' has a wrong offset!");
static_assert(offsetof(FNitrogenLeaderboardData, TeamPlacement) == 0x00001C, "Member 'FNitrogenLeaderboardData::TeamPlacement' has a wrong offset!");
static_assert(offsetof(FNitrogenLeaderboardData, bEnemyTeam) == 0x000020, "Member 'FNitrogenLeaderboardData::bEnemyTeam' has a wrong offset!");

}

