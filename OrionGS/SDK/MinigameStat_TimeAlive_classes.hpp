#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MinigameStat_TimeAlive

#include "Basic.hpp"

#include "MinigameStat_Time_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MinigameStat_TimeAlive.MinigameStat_TimeAlive_C
// 0x0000 (0x0190 - 0x0190)
class UMinigameStat_TimeAlive_C final  : public UMinigameStat_Time_C
{
public:
	int32 Compare(int32 FirstScore, int32 SecondScore, bool IsSecondValid, bool IsFirstValid, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MinigameStat_TimeAlive_C">();
	}
	static class UMinigameStat_TimeAlive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMinigameStat_TimeAlive_C>();
	}
};
static_assert(alignof(UMinigameStat_TimeAlive_C) == 0x000008, "Wrong alinment on UMinigameStat_TimeAlive_C");
static_assert(sizeof(UMinigameStat_TimeAlive_C) == 0x000190, "Wrong size on UMinigameStat_TimeAlive_C");

}

