#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_BlockADS_Infinite

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_BlockADS_Infinite.GE_BlockADS_Infinite_C
// 0x0000 (0x0800 - 0x0800)
class UGE_BlockADS_Infinite_C final  : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_BlockADS_Infinite_C">();
	}
	static class UGE_BlockADS_Infinite_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_BlockADS_Infinite_C>();
	}
};
static_assert(alignof(UGE_BlockADS_Infinite_C) == 0x000008, "Wrong alinment on UGE_BlockADS_Infinite_C");
static_assert(sizeof(UGE_BlockADS_Infinite_C) == 0x000800, "Wrong size on UGE_BlockADS_Infinite_C");

}

