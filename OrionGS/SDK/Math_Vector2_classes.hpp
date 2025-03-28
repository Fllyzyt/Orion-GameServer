#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Math_Vector2

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// SolarisGeneratedClass Math_Vector2.Vector2
// 0x0008 (0x0030 - 0x0028)
class UVector2 final  : public UObject
{
public:
	float                                         __verse_0x6F57CF8F_x;                              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         __verse_0x0A307337_y;                              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UVector2* Create(float __verse_0x3205F605_inX, float __verse_0x57624ABD_inY);
	static class UVector2* CreateZero();
	static float CrossProduct(class UVector2* __verse_0xBAD88A47_v1, class UVector2* __verse_0x54773F55_v2);
	static float Distance(class UVector2* __verse_0xBAD88A47_v1, class UVector2* __verse_0x54773F55_v2);
	static float DistanceSquared(class UVector2* __verse_0xBAD88A47_v1, class UVector2* __verse_0x54773F55_v2);
	static float DotProduct(class UVector2* __verse_0xBAD88A47_v1, class UVector2* __verse_0x54773F55_v2);
	static class UVector2* ReflectVector(class UVector2* __verse_0x8BEC05BA_direction, class UVector2* __verse_0xADA21017_surfaceNormal);

	void _InitCDO();
	void _InitInstance();
	class UVector2* Add(class UVector2* __verse_0x5C20106F_v);
	class UVector2* Divide(class UVector2* __verse_0x5C20106F_v);
	class UVector2* Multiply(class UVector2* __verse_0x5C20106F_v);
	class UVector2* Normal();
	float Size();
	float SizeSquared();
	class UVector2* Subtract(class UVector2* __verse_0x5C20106F_v);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Vector2">();
	}
	static class UVector2* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVector2>();
	}
};
static_assert(alignof(UVector2) == 0x000008, "Wrong alinment on UVector2");
static_assert(sizeof(UVector2) == 0x000030, "Wrong size on UVector2");
static_assert(offsetof(UVector2, __verse_0x6F57CF8F_x) == 0x000028, "Member 'UVector2::__verse_0x6F57CF8F_x' has a wrong offset!");
static_assert(offsetof(UVector2, __verse_0x0A307337_y) == 0x00002C, "Member 'UVector2::__verse_0x0A307337_y' has a wrong offset!");

}

