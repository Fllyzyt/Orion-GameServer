#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_ZeroPoint_ActiveEffect

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_ZeroPoint_ActiveEffect.GE_ZeroPoint_ActiveEffect_C
// 0x0000 (0x0800 - 0x0800)
class UGE_ZeroPoint_ActiveEffect_C final  : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_ZeroPoint_ActiveEffect_C">();
	}
	static class UGE_ZeroPoint_ActiveEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_ZeroPoint_ActiveEffect_C>();
	}
};
static_assert(alignof(UGE_ZeroPoint_ActiveEffect_C) == 0x000008, "Wrong alinment on UGE_ZeroPoint_ActiveEffect_C");
static_assert(sizeof(UGE_ZeroPoint_ActiveEffect_C) == 0x000800, "Wrong size on UGE_ZeroPoint_ActiveEffect_C");

}

