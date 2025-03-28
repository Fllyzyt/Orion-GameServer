#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Math_MathUtil

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// SolarisGeneratedClass Math_MathUtil.MathUtil
// 0x0000 (0x0028 - 0x0028)
class UMathUtil final  : public UObject
{
public:
	static float Abs(float __verse_0xE50A13DD_val);
	static int32 Ceil(float __verse_0xE50A13DD_val);
	static float ClampFloat(float __verse_0xE50A13DD_val, float __verse_0x299075D9_min, float __verse_0xDF83E27F_max);
	static int32 ClampInt(int32 __verse_0xE50A13DD_val, int32 __verse_0x299075D9_min, int32 __verse_0xDF83E27F_max);
	static float ConvertToFloat(int32 __verse_0xE50A13DD_val);
	static float Cos(float __verse_0xE50A13DD_val);
	static int32 Floor(float __verse_0xE50A13DD_val);
	static int32 Round(float __verse_0xE50A13DD_val);
	static float Sin(float __verse_0xE50A13DD_val);
	static float Sqrt(float __verse_0xE50A13DD_val);
	static float Tan(float __verse_0xE50A13DD_val);
	static int32 Trunc(float __verse_0xE50A13DD_val);

	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MathUtil">();
	}
	static class UMathUtil* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMathUtil>();
	}
};
static_assert(alignof(UMathUtil) == 0x000008, "Wrong alinment on UMathUtil");
static_assert(sizeof(UMathUtil) == 0x000028, "Wrong size on UMathUtil");

}

