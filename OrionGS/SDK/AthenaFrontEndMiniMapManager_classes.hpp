#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaFrontEndMiniMapManager

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AthenaFrontEndMiniMapManager.AthenaFrontEndMiniMapManager_C
// 0x0008 (0x0448 - 0x0440)
class AAthenaFrontEndMiniMapManager_C final  : public AFortFrontEndMiniMapManager
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaFrontEndMiniMapManager_C">();
	}
	static class AAthenaFrontEndMiniMapManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthenaFrontEndMiniMapManager_C>();
	}
};
static_assert(alignof(AAthenaFrontEndMiniMapManager_C) == 0x000008, "Wrong alinment on AAthenaFrontEndMiniMapManager_C");
static_assert(sizeof(AAthenaFrontEndMiniMapManager_C) == 0x000448, "Wrong size on AAthenaFrontEndMiniMapManager_C");
static_assert(offsetof(AAthenaFrontEndMiniMapManager_C, DefaultSceneRoot) == 0x000440, "Member 'AAthenaFrontEndMiniMapManager_C::DefaultSceneRoot' has a wrong offset!");

}

