#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionGen_CreativeLTM

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MissionGen_CreativeLTM.MissionGen_CreativeLTM_C
// 0x0000 (0x06C8 - 0x06C8)
class UMissionGen_CreativeLTM_C final  : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionGen_CreativeLTM_C">();
	}
	static class UMissionGen_CreativeLTM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGen_CreativeLTM_C>();
	}
};
static_assert(alignof(UMissionGen_CreativeLTM_C) == 0x000008, "Wrong alinment on UMissionGen_CreativeLTM_C");
static_assert(sizeof(UMissionGen_CreativeLTM_C) == 0x0006C8, "Wrong size on UMissionGen_CreativeLTM_C");

}

