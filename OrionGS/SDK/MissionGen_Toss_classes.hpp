#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionGen_Toss

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MissionGen_Toss.MissionGen_Toss_C
// 0x0000 (0x06C8 - 0x06C8)
class UMissionGen_Toss_C final  : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionGen_Toss_C">();
	}
	static class UMissionGen_Toss_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGen_Toss_C>();
	}
};
static_assert(alignof(UMissionGen_Toss_C) == 0x000008, "Wrong alinment on UMissionGen_Toss_C");
static_assert(sizeof(UMissionGen_Toss_C) == 0x0006C8, "Wrong size on UMissionGen_Toss_C");

}

