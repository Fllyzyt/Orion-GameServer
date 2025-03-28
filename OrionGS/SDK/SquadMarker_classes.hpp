#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SquadMarker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SquadMarker.SquadMarker_C
// 0x0008 (0x05D0 - 0x05C8)
class USquadMarker_C final  : public UAthenaSquadIndicator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_SquadMarker(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SquadMarker_C">();
	}
	static class USquadMarker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USquadMarker_C>();
	}
};
static_assert(alignof(USquadMarker_C) == 0x000008, "Wrong alinment on USquadMarker_C");
static_assert(sizeof(USquadMarker_C) == 0x0005D0, "Wrong size on USquadMarker_C");
static_assert(offsetof(USquadMarker_C, UberGraphFrame) == 0x0005C8, "Member 'USquadMarker_C::UberGraphFrame' has a wrong offset!");

}

