#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Grenade_Tower_Athena

#include "Basic.hpp"

#include "B_ConsumableSmall_Athena_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Grenade_Tower_Athena.B_Grenade_Tower_Athena_C
// 0x0000 (0x0D38 - 0x0D38)
class AB_Grenade_Tower_Athena_C : public AB_ConsumableSmall_Athena_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Grenade_Tower_Athena_C">();
	}
	static class AB_Grenade_Tower_Athena_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Grenade_Tower_Athena_C>();
	}
};
static_assert(alignof(AB_Grenade_Tower_Athena_C) == 0x000008, "Wrong alinment on AB_Grenade_Tower_Athena_C");
static_assert(sizeof(AB_Grenade_Tower_Athena_C) == 0x000D38, "Wrong size on AB_Grenade_Tower_Athena_C");

}

