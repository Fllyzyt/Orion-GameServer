#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameFeatures

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct GameFeatures.GameFeatureComponentEntry
// 0x0058 (0x0058 - 0x0000)
struct FGameFeatureComponentEntry final 
{
public:
	TSoftClassPtr<class UClass>                   ActorClass;                                        // 0x0000(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UClass>                   ComponentClass;                                    // 0x0028(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bClientComponent : 1;                              // 0x0050(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bServerComponent : 1;                              // 0x0050(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_44CD[0x7];                                     // 0x0051(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FGameFeatureComponentEntry) == 0x000008, "Wrong alinment on FGameFeatureComponentEntry");
static_assert(sizeof(FGameFeatureComponentEntry) == 0x000058, "Wrong size on FGameFeatureComponentEntry");
static_assert(offsetof(FGameFeatureComponentEntry, ActorClass) == 0x000000, "Member 'FGameFeatureComponentEntry::ActorClass' has a wrong offset!");
static_assert(offsetof(FGameFeatureComponentEntry, ComponentClass) == 0x000028, "Member 'FGameFeatureComponentEntry::ComponentClass' has a wrong offset!");

// ScriptStruct GameFeatures.GameFeaturePluginStateMachineProperties
// 0x0070 (0x0070 - 0x0000)
struct FGameFeaturePluginStateMachineProperties final 
{
public:
	uint8                                         Pad_44CE[0x68];                                    // 0x0000(0x0068)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameFeatureData*                       GameFeatureData;                                   // 0x0068(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGameFeaturePluginStateMachineProperties) == 0x000008, "Wrong alinment on FGameFeaturePluginStateMachineProperties");
static_assert(sizeof(FGameFeaturePluginStateMachineProperties) == 0x000070, "Wrong size on FGameFeaturePluginStateMachineProperties");
static_assert(offsetof(FGameFeaturePluginStateMachineProperties, GameFeatureData) == 0x000068, "Member 'FGameFeaturePluginStateMachineProperties::GameFeatureData' has a wrong offset!");

}

