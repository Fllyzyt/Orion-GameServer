#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VerseFortniteDynamicUI

#include "Basic.hpp"

#include "DynamicHUDTestUI_classes.hpp"


namespace SDK
{

// Class VerseFortniteDynamicUI.VerseFortniteDynamicUIDirector
// 0x0008 (0x0250 - 0x0248)
class AVerseFortniteDynamicUIDirector final  : public ADynamicHUDTestUIDirector
{
public:
	uint8                                         Pad_4EA8[0x8];                                     // 0x0248(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void StartDirecting();
	void StopDirecting();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VerseFortniteDynamicUIDirector">();
	}
	static class AVerseFortniteDynamicUIDirector* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVerseFortniteDynamicUIDirector>();
	}
};
static_assert(alignof(AVerseFortniteDynamicUIDirector) == 0x000008, "Wrong alinment on AVerseFortniteDynamicUIDirector");
static_assert(sizeof(AVerseFortniteDynamicUIDirector) == 0x000250, "Wrong size on AVerseFortniteDynamicUIDirector");

}

