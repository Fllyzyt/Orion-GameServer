#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SpectateAFriendPC

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SpectateAFriendPC.BP_SpectateAFriendPC_C
// 0x0000 (0x3280 - 0x3280)
class ABP_SpectateAFriendPC_C final  : public AFortSpectateAFriendController
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SpectateAFriendPC_C">();
	}
	static class ABP_SpectateAFriendPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SpectateAFriendPC_C>();
	}
};
static_assert(alignof(ABP_SpectateAFriendPC_C) == 0x000010, "Wrong alinment on ABP_SpectateAFriendPC_C");
static_assert(sizeof(ABP_SpectateAFriendPC_C) == 0x003280, "Wrong size on ABP_SpectateAFriendPC_C");

}

