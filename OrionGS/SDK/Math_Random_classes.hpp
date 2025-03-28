#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Math_Random

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// SolarisGeneratedClass Math_Random.Random
// 0x0000 (0x0028 - 0x0028)
class URandom final  : public UObject
{
public:
	static float RandomFloatInRange(float __verse_0x299075D9_min, float __verse_0xDF83E27F_max);
	static int32 RandomIntInRange(int32 __verse_0x299075D9_min, int32 __verse_0xDF83E27F_max);

	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Random">();
	}
	static class URandom* GetDefaultObj()
	{
		return GetDefaultObjImpl<URandom>();
	}
};
static_assert(alignof(URandom) == 0x000008, "Wrong alinment on URandom");
static_assert(sizeof(URandom) == 0x000028, "Wrong size on URandom");

}

