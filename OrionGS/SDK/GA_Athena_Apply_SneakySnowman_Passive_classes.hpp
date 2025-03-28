#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Apply_SneakySnowman_Passive

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Athena_Apply_SneakySnowmanV2_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_Apply_SneakySnowman_Passive.GA_Athena_Apply_SneakySnowman_Passive_C
// 0x0008 (0x0BF8 - 0x0BF0)
class UGA_Athena_Apply_SneakySnowman_Passive_C final  : public UGA_Athena_Apply_SneakySnowmanV2_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Athena_Apply_SneakySnowman_Passive_C; // 0x0BF0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Athena_Apply_SneakySnowman_Passive(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Apply_SneakySnowman_Passive_C">();
	}
	static class UGA_Athena_Apply_SneakySnowman_Passive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Apply_SneakySnowman_Passive_C>();
	}
};
static_assert(alignof(UGA_Athena_Apply_SneakySnowman_Passive_C) == 0x000008, "Wrong alinment on UGA_Athena_Apply_SneakySnowman_Passive_C");
static_assert(sizeof(UGA_Athena_Apply_SneakySnowman_Passive_C) == 0x000BF8, "Wrong size on UGA_Athena_Apply_SneakySnowman_Passive_C");
static_assert(offsetof(UGA_Athena_Apply_SneakySnowman_Passive_C, UberGraphFrame_GA_Athena_Apply_SneakySnowman_Passive_C) == 0x000BF0, "Member 'UGA_Athena_Apply_SneakySnowman_Passive_C::UberGraphFrame_GA_Athena_Apply_SneakySnowman_Passive_C' has a wrong offset!");

}

