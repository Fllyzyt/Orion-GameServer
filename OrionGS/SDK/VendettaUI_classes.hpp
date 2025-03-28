#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VendettaUI

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "VendettaRuntime_structs.hpp"


namespace SDK
{

// Class VendettaUI.VendettaWidgetBase
// 0x0008 (0x0320 - 0x0318)
class UVendettaWidgetBase : public ULTMWidgetBase
{
public:
	class AFortAthenaMutator_Vendetta*            CachedVendettaMutator;                             // 0x0318(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void BindToMutator_BP();
	void UnbindFromMutator_BP();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VendettaWidgetBase">();
	}
	static class UVendettaWidgetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVendettaWidgetBase>();
	}
};
static_assert(alignof(UVendettaWidgetBase) == 0x000008, "Wrong alinment on UVendettaWidgetBase");
static_assert(sizeof(UVendettaWidgetBase) == 0x000320, "Wrong size on UVendettaWidgetBase");
static_assert(offsetof(UVendettaWidgetBase, CachedVendettaMutator) == 0x000318, "Member 'UVendettaWidgetBase::CachedVendettaMutator' has a wrong offset!");

// Class VendettaUI.VendettaCreditsEarnedMessageWidget
// 0x0000 (0x0320 - 0x0320)
class UVendettaCreditsEarnedMessageWidget final  : public UVendettaWidgetBase
{
public:
	void OnPlayerEliminatedBountyTarget(class AFortPlayerStateAthena* VictimPlayerState, class AFortPlayerStateAthena* KillerPlayerState, class AFortPlayerStateAthena* NewTargetPlayerState, int32 VictimRewardValue, int32 VictimBonusValue);
	void OnPlayerEliminatedBountyTarget_BP(class AFortPlayerStateAthena* VictimPlayerState, class AFortPlayerStateAthena* KillerPlayerState, class AFortPlayerStateAthena* NewTargetPlayerState, int32 VictimRewardValue, int32 VictimBonusValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VendettaCreditsEarnedMessageWidget">();
	}
	static class UVendettaCreditsEarnedMessageWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVendettaCreditsEarnedMessageWidget>();
	}
};
static_assert(alignof(UVendettaCreditsEarnedMessageWidget) == 0x000008, "Wrong alinment on UVendettaCreditsEarnedMessageWidget");
static_assert(sizeof(UVendettaCreditsEarnedMessageWidget) == 0x000320, "Wrong size on UVendettaCreditsEarnedMessageWidget");

// Class VendettaUI.VendettaSquadmateHuntedStatusWidget
// 0x0010 (0x0330 - 0x0320)
class UVendettaSquadmateHuntedStatusWidget final  : public UVendettaWidgetBase
{
public:
	uint8                                         Pad_4762[0x10];                                    // 0x0320(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnPlayerHuntedStatusChanged(class AFortPlayerStateAthena* PlayerState, EVendettaHuntedStatus HuntedStatus, EVendettaHuntedStatus SpecialNPCHuntedStatus);
	void OnPlayerHuntedStatusChanged_BP(EVendettaHuntedStatus HuntedStatus, EVendettaHuntedStatus SpecialNPCHuntedStatus);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VendettaSquadmateHuntedStatusWidget">();
	}
	static class UVendettaSquadmateHuntedStatusWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVendettaSquadmateHuntedStatusWidget>();
	}
};
static_assert(alignof(UVendettaSquadmateHuntedStatusWidget) == 0x000008, "Wrong alinment on UVendettaSquadmateHuntedStatusWidget");
static_assert(sizeof(UVendettaSquadmateHuntedStatusWidget) == 0x000330, "Wrong size on UVendettaSquadmateHuntedStatusWidget");

// Class VendettaUI.VendettaTopMessagingWidgetBase
// 0x0048 (0x0310 - 0x02C8)
class UVendettaTopMessagingWidgetBase final  : public UFortHUDElementWidget
{
public:
	uint8                                         Pad_4764[0x40];                                    // 0x02C8(0x0040)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortPrioritizedWidgetData             PrioritizationData;                                // 0x0308(0x0002)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_4765[0x6];                                     // 0x030A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VendettaTopMessagingWidgetBase">();
	}
	static class UVendettaTopMessagingWidgetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVendettaTopMessagingWidgetBase>();
	}
};
static_assert(alignof(UVendettaTopMessagingWidgetBase) == 0x000008, "Wrong alinment on UVendettaTopMessagingWidgetBase");
static_assert(sizeof(UVendettaTopMessagingWidgetBase) == 0x000310, "Wrong size on UVendettaTopMessagingWidgetBase");
static_assert(offsetof(UVendettaTopMessagingWidgetBase, PrioritizationData) == 0x000308, "Member 'UVendettaTopMessagingWidgetBase::PrioritizationData' has a wrong offset!");

}

