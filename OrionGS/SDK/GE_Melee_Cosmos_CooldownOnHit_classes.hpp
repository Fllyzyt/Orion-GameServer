#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Melee_Cosmos_CooldownOnHit

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Melee_Cosmos_CooldownOnHit.GE_Melee_Cosmos_CooldownOnHit_C
// 0x0000 (0x0800 - 0x0800)
class UGE_Melee_Cosmos_CooldownOnHit_C final  : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Melee_Cosmos_CooldownOnHit_C">();
	}
	static class UGE_Melee_Cosmos_CooldownOnHit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Melee_Cosmos_CooldownOnHit_C>();
	}
};
static_assert(alignof(UGE_Melee_Cosmos_CooldownOnHit_C) == 0x000008, "Wrong alinment on UGE_Melee_Cosmos_CooldownOnHit_C");
static_assert(sizeof(UGE_Melee_Cosmos_CooldownOnHit_C) == 0x000800, "Wrong size on UGE_Melee_Cosmos_CooldownOnHit_C");

}

