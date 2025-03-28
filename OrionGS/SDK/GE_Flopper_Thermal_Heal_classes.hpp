#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Flopper_Thermal_Heal

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Flopper_Thermal_Heal.GE_Flopper_Thermal_Heal_C
// 0x0000 (0x0800 - 0x0800)
class UGE_Flopper_Thermal_Heal_C final  : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Flopper_Thermal_Heal_C">();
	}
	static class UGE_Flopper_Thermal_Heal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Flopper_Thermal_Heal_C>();
	}
};
static_assert(alignof(UGE_Flopper_Thermal_Heal_C) == 0x000008, "Wrong alinment on UGE_Flopper_Thermal_Heal_C");
static_assert(sizeof(UGE_Flopper_Thermal_Heal_C) == 0x000800, "Wrong size on UGE_Flopper_Thermal_Heal_C");

}

