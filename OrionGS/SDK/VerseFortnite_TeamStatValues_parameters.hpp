#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VerseFortnite_TeamStatValues

#include "Basic.hpp"


namespace SDK::Params
{

// Function VerseFortnite_TeamStatValues.TeamStatValues.getPlayerStat
// 0x0010 (0x0010 - 0x0000)
struct TeamStatValues_GetPlayerStat final 
{
public:
	class UPlayerComponent*                       __verse_0x9F1D658F_player;                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __verse_0x8C4546BB_statIndex;                      // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RetVal;                                            // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TeamStatValues_GetPlayerStat) == 0x000008, "Wrong alinment on TeamStatValues_GetPlayerStat");
static_assert(sizeof(TeamStatValues_GetPlayerStat) == 0x000010, "Wrong size on TeamStatValues_GetPlayerStat");
static_assert(offsetof(TeamStatValues_GetPlayerStat, __verse_0x9F1D658F_player) == 0x000000, "Member 'TeamStatValues_GetPlayerStat::__verse_0x9F1D658F_player' has a wrong offset!");
static_assert(offsetof(TeamStatValues_GetPlayerStat, __verse_0x8C4546BB_statIndex) == 0x000008, "Member 'TeamStatValues_GetPlayerStat::__verse_0x8C4546BB_statIndex' has a wrong offset!");
static_assert(offsetof(TeamStatValues_GetPlayerStat, RetVal) == 0x00000C, "Member 'TeamStatValues_GetPlayerStat::RetVal' has a wrong offset!");

// Function VerseFortnite_TeamStatValues.TeamStatValues.incrementPlayerStat
// 0x0018 (0x0018 - 0x0000)
struct TeamStatValues_IncrementPlayerStat final 
{
public:
	class UPlayerComponent*                       __verse_0x9F1D658F_player;                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __verse_0x8C4546BB_statIndex;                      // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __verse_0x8461104C_increase;                       // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         RetVal : 1;                                        // 0x0010(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Parm, OutParm, ReturnParm, NoDestructor))
};
static_assert(alignof(TeamStatValues_IncrementPlayerStat) == 0x000008, "Wrong alinment on TeamStatValues_IncrementPlayerStat");
static_assert(sizeof(TeamStatValues_IncrementPlayerStat) == 0x000018, "Wrong size on TeamStatValues_IncrementPlayerStat");
static_assert(offsetof(TeamStatValues_IncrementPlayerStat, __verse_0x9F1D658F_player) == 0x000000, "Member 'TeamStatValues_IncrementPlayerStat::__verse_0x9F1D658F_player' has a wrong offset!");
static_assert(offsetof(TeamStatValues_IncrementPlayerStat, __verse_0x8C4546BB_statIndex) == 0x000008, "Member 'TeamStatValues_IncrementPlayerStat::__verse_0x8C4546BB_statIndex' has a wrong offset!");
static_assert(offsetof(TeamStatValues_IncrementPlayerStat, __verse_0x8461104C_increase) == 0x00000C, "Member 'TeamStatValues_IncrementPlayerStat::__verse_0x8461104C_increase' has a wrong offset!");

// Function VerseFortnite_TeamStatValues.TeamStatValues.setPlayerStat
// 0x0010 (0x0010 - 0x0000)
struct TeamStatValues_SetPlayerStat final 
{
public:
	class UPlayerComponent*                       __verse_0x9F1D658F_player;                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __verse_0x8C4546BB_statIndex;                      // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __verse_0x00827935_newValue;                       // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TeamStatValues_SetPlayerStat) == 0x000008, "Wrong alinment on TeamStatValues_SetPlayerStat");
static_assert(sizeof(TeamStatValues_SetPlayerStat) == 0x000010, "Wrong size on TeamStatValues_SetPlayerStat");
static_assert(offsetof(TeamStatValues_SetPlayerStat, __verse_0x9F1D658F_player) == 0x000000, "Member 'TeamStatValues_SetPlayerStat::__verse_0x9F1D658F_player' has a wrong offset!");
static_assert(offsetof(TeamStatValues_SetPlayerStat, __verse_0x8C4546BB_statIndex) == 0x000008, "Member 'TeamStatValues_SetPlayerStat::__verse_0x8C4546BB_statIndex' has a wrong offset!");
static_assert(offsetof(TeamStatValues_SetPlayerStat, __verse_0x00827935_newValue) == 0x00000C, "Member 'TeamStatValues_SetPlayerStat::__verse_0x00827935_newValue' has a wrong offset!");

}

