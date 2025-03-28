#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CMSLobbyDirector

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CMSLobbyDirector.CMSLobbyDirector_C
// 0x0008 (0x02C8 - 0x02C0)
class ACMSLobbyDirector_C final  : public ADynamicBackgroundDirector
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CMSLobbyDirector_C">();
	}
	static class ACMSLobbyDirector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACMSLobbyDirector_C>();
	}
};
static_assert(alignof(ACMSLobbyDirector_C) == 0x000008, "Wrong alinment on ACMSLobbyDirector_C");
static_assert(sizeof(ACMSLobbyDirector_C) == 0x0002C8, "Wrong size on ACMSLobbyDirector_C");
static_assert(offsetof(ACMSLobbyDirector_C, DefaultSceneRoot) == 0x0002C0, "Member 'ACMSLobbyDirector_C::DefaultSceneRoot' has a wrong offset!");

}

