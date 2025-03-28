#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EnemyPawn_Interface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EnemyPawn_Interface.EnemyPawn_Interface_C
// 0x0000 (0x0028 - 0x0028)
class IEnemyPawn_Interface_C final  : public IInterface
{
public:
	void Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EnemyPawn_Interface_C">();
	}
	static class IEnemyPawn_Interface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IEnemyPawn_Interface_C>();
	}
};
static_assert(alignof(IEnemyPawn_Interface_C) == 0x000008, "Wrong alinment on IEnemyPawn_Interface_C");
static_assert(sizeof(IEnemyPawn_Interface_C) == 0x000028, "Wrong size on IEnemyPawn_Interface_C");

}

