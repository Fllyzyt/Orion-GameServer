#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLoadoutTile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaLoadoutTile.AthenaLoadoutTile_C
// 0x0008 (0x0BC0 - 0x0BB8)
class UAthenaLoadoutTile_C final  : public UFortCosmeticLoadoutListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BB8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_AthenaLoadoutTile(int32 EntryPoint, bool K2Node_Event_bIsSelected, class UCosmeticLoadoutCard_C* K2Node_DynamicCast_AsCosmetic_Loadout_Card, bool K2Node_DynamicCast_bSuccess, class UCosmeticLoadoutCard_C* K2Node_DynamicCast_AsCosmetic_Loadout_Card_1, bool K2Node_DynamicCast_bSuccess_1, class UCosmeticLoadoutCard_C* K2Node_DynamicCast_AsCosmetic_Loadout_Card_2, bool K2Node_DynamicCast_bSuccess_2, class UCosmeticLoadoutCard_C* K2Node_DynamicCast_AsCosmetic_Loadout_Card_3, bool K2Node_DynamicCast_bSuccess_3, class UCosmeticLoadoutCard_C* K2Node_DynamicCast_AsCosmetic_Loadout_Card_4, bool K2Node_DynamicCast_bSuccess_4);
	void BP_OnEntryReleased();
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnUnhovered();
	void BP_OnHovered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaLoadoutTile_C">();
	}
	static class UAthenaLoadoutTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaLoadoutTile_C>();
	}
};
static_assert(alignof(UAthenaLoadoutTile_C) == 0x000008, "Wrong alinment on UAthenaLoadoutTile_C");
static_assert(sizeof(UAthenaLoadoutTile_C) == 0x000BC0, "Wrong size on UAthenaLoadoutTile_C");
static_assert(offsetof(UAthenaLoadoutTile_C, UberGraphFrame) == 0x000BB8, "Member 'UAthenaLoadoutTile_C::UberGraphFrame' has a wrong offset!");

}

