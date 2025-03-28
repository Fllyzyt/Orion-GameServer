#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FrontEnd_GameMode

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FrontEnd_GameMode.FrontEnd_GameMode_C
// 0x0008 (0x06D0 - 0x06C8)
class AFrontEnd_GameMode_C final  : public AFortGameModeFrontEnd
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x06C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FrontEnd_GameMode_C">();
	}
	static class AFrontEnd_GameMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontEnd_GameMode_C>();
	}
};
static_assert(alignof(AFrontEnd_GameMode_C) == 0x000008, "Wrong alinment on AFrontEnd_GameMode_C");
static_assert(sizeof(AFrontEnd_GameMode_C) == 0x0006D0, "Wrong size on AFrontEnd_GameMode_C");
static_assert(offsetof(AFrontEnd_GameMode_C, DefaultSceneRoot) == 0x0006C8, "Member 'AFrontEnd_GameMode_C::DefaultSceneRoot' has a wrong offset!");

}

