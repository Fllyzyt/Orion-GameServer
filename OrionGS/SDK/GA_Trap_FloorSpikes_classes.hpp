#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Trap_FloorSpikes

#include "Basic.hpp"

#include "GA_TrapGeneric_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Trap_FloorSpikes.GA_Trap_FloorSpikes_C
// 0x0000 (0x0AD8 - 0x0AD8)
class UGA_Trap_FloorSpikes_C final  : public UGA_TrapGeneric_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Trap_FloorSpikes_C">();
	}
	static class UGA_Trap_FloorSpikes_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Trap_FloorSpikes_C>();
	}
};
static_assert(alignof(UGA_Trap_FloorSpikes_C) == 0x000008, "Wrong alinment on UGA_Trap_FloorSpikes_C");
static_assert(sizeof(UGA_Trap_FloorSpikes_C) == 0x000AD8, "Wrong size on UGA_Trap_FloorSpikes_C");

}

