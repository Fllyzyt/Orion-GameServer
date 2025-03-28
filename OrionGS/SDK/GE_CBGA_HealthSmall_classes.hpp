#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_CBGA_HealthSmall

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_CBGA_HealthSmall.GE_CBGA_HealthSmall_C
// 0x0000 (0x0800 - 0x0800)
class UGE_CBGA_HealthSmall_C : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_CBGA_HealthSmall_C">();
	}
	static class UGE_CBGA_HealthSmall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_CBGA_HealthSmall_C>();
	}
};
static_assert(alignof(UGE_CBGA_HealthSmall_C) == 0x000008, "Wrong alinment on UGE_CBGA_HealthSmall_C");
static_assert(sizeof(UGE_CBGA_HealthSmall_C) == 0x000800, "Wrong size on UGE_CBGA_HealthSmall_C");

}

