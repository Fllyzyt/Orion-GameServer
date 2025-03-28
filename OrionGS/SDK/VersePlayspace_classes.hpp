#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VersePlayspace

#include "Basic.hpp"

#include "PlayspaceSystem_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class VersePlayspace.PlayspaceComponentVerseWrapper
// 0x0008 (0x00B8 - 0x00B0)
class UPlayspaceComponentVerseWrapper final  : public PlayspaceSystem::UPlayspaceComponent
{
public:
	uint8                                         Pad_4ECC[0x8];                                     // 0x00B0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayspaceComponentVerseWrapper">();
	}
	static class UPlayspaceComponentVerseWrapper* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayspaceComponentVerseWrapper>();
	}
};
static_assert(alignof(UPlayspaceComponentVerseWrapper) == 0x000008, "Wrong alinment on UPlayspaceComponentVerseWrapper");
static_assert(sizeof(UPlayspaceComponentVerseWrapper) == 0x0000B8, "Wrong size on UPlayspaceComponentVerseWrapper");

// Class VersePlayspace.PlayspaceConfigComponent
// 0x0020 (0x00D0 - 0x00B0)
class UPlayspaceConfigComponent final  : public PlayspaceSystem::UPlayspaceComponent
{
public:
	TSubclassOf<class UEntityActorPlayerComponent> PlayerComponentClass;                              // 0x00B0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4ECD[0x18];                                    // 0x00B8(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayspaceConfigComponent">();
	}
	static class UPlayspaceConfigComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayspaceConfigComponent>();
	}
};
static_assert(alignof(UPlayspaceConfigComponent) == 0x000008, "Wrong alinment on UPlayspaceConfigComponent");
static_assert(sizeof(UPlayspaceConfigComponent) == 0x0000D0, "Wrong size on UPlayspaceConfigComponent");
static_assert(offsetof(UPlayspaceConfigComponent, PlayerComponentClass) == 0x0000B0, "Member 'UPlayspaceConfigComponent::PlayerComponentClass' has a wrong offset!");

// Class VersePlayspace.VersePlayspaceObjectHack
// 0x0000 (0x0028 - 0x0028)
class UVersePlayspaceObjectHack final  : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VersePlayspaceObjectHack">();
	}
	static class UVersePlayspaceObjectHack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVersePlayspaceObjectHack>();
	}
};
static_assert(alignof(UVersePlayspaceObjectHack) == 0x000008, "Wrong alinment on UVersePlayspaceObjectHack");
static_assert(sizeof(UVersePlayspaceObjectHack) == 0x000028, "Wrong size on UVersePlayspaceObjectHack");

}

