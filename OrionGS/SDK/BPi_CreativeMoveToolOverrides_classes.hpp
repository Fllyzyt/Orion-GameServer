#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPi_CreativeMoveToolOverrides

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPi_CreativeMoveToolOverrides.BPi_CreativeMoveToolOverrides_C
// 0x0000 (0x0028 - 0x0028)
class IBPi_CreativeMoveToolOverrides_C final  : public IInterface
{
public:
	void GetCreativeActorOrigin(bool* Override, struct FVector* Center);
	void GetCreativeActorBounds(bool* Override_Bounds, struct FVector* Bounds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPi_CreativeMoveToolOverrides_C">();
	}
	static class IBPi_CreativeMoveToolOverrides_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPi_CreativeMoveToolOverrides_C>();
	}
};
static_assert(alignof(IBPi_CreativeMoveToolOverrides_C) == 0x000008, "Wrong alinment on IBPi_CreativeMoveToolOverrides_C");
static_assert(sizeof(IBPi_CreativeMoveToolOverrides_C) == 0x000028, "Wrong size on IBPi_CreativeMoveToolOverrides_C");

}

