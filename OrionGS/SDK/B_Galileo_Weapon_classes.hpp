#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Galileo_Weapon

#include "Basic.hpp"

#include "B_UtilityItem_Generic_Athena_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Galileo_Weapon.B_Galileo_Weapon_C
// 0x0000 (0x0D38 - 0x0D38)
class AB_Galileo_Weapon_C final  : public AB_UtilityItem_Generic_Athena_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Galileo_Weapon_C">();
	}
	static class AB_Galileo_Weapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Galileo_Weapon_C>();
	}
};
static_assert(alignof(AB_Galileo_Weapon_C) == 0x000008, "Wrong alinment on AB_Galileo_Weapon_C");
static_assert(sizeof(AB_Galileo_Weapon_C) == 0x000D38, "Wrong size on AB_Galileo_Weapon_C");

}

