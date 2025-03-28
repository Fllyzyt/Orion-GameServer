#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ModularGameplay

#include "Basic.hpp"


namespace SDK::Params
{

// Function ModularGameplay.GameFrameworkComponentManager.AddReceiver
// 0x0010 (0x0010 - 0x0000)
struct GameFrameworkComponentManager_AddReceiver final 
{
public:
	class AActor*                                 Receiver;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAddOnlyInGameWorlds;                              // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D43[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(GameFrameworkComponentManager_AddReceiver) == 0x000008, "Wrong alinment on GameFrameworkComponentManager_AddReceiver");
static_assert(sizeof(GameFrameworkComponentManager_AddReceiver) == 0x000010, "Wrong size on GameFrameworkComponentManager_AddReceiver");
static_assert(offsetof(GameFrameworkComponentManager_AddReceiver, Receiver) == 0x000000, "Member 'GameFrameworkComponentManager_AddReceiver::Receiver' has a wrong offset!");
static_assert(offsetof(GameFrameworkComponentManager_AddReceiver, bAddOnlyInGameWorlds) == 0x000008, "Member 'GameFrameworkComponentManager_AddReceiver::bAddOnlyInGameWorlds' has a wrong offset!");

// Function ModularGameplay.GameFrameworkComponentManager.RemoveReceiver
// 0x0008 (0x0008 - 0x0000)
struct GameFrameworkComponentManager_RemoveReceiver final 
{
public:
	class AActor*                                 Receiver;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(GameFrameworkComponentManager_RemoveReceiver) == 0x000008, "Wrong alinment on GameFrameworkComponentManager_RemoveReceiver");
static_assert(sizeof(GameFrameworkComponentManager_RemoveReceiver) == 0x000008, "Wrong size on GameFrameworkComponentManager_RemoveReceiver");
static_assert(offsetof(GameFrameworkComponentManager_RemoveReceiver, Receiver) == 0x000000, "Member 'GameFrameworkComponentManager_RemoveReceiver::Receiver' has a wrong offset!");

}

