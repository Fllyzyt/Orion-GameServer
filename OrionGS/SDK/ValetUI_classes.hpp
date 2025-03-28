#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ValetUI

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// Class ValetUI.FortAthenaVehicleDashboardWidget_Valet
// 0x0010 (0x0358 - 0x0348)
class UFortAthenaVehicleDashboardWidget_Valet final  : public UFortAthenaVehicleDashboardWidget
{
public:
	uint8                                         Pad_44D5[0x8];                                     // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonTextBlock*                       Text_ItemName;                                     // 0x0350(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void OnRechargableBoostFilled();
	void OnRPMChanged(float NormalizedRPM);
	void OnUpdateRechargeableBoostPercent(float BoostPercent);
	void OnValetNameUpdated();
	void SetVehicleUsesRechargableBoost(bool bUsesRechargeableBoost);

	class AFortDagwoodVehicle* GetDagwoodVehicle() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortAthenaVehicleDashboardWidget_Valet">();
	}
	static class UFortAthenaVehicleDashboardWidget_Valet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaVehicleDashboardWidget_Valet>();
	}
};
static_assert(alignof(UFortAthenaVehicleDashboardWidget_Valet) == 0x000008, "Wrong alinment on UFortAthenaVehicleDashboardWidget_Valet");
static_assert(sizeof(UFortAthenaVehicleDashboardWidget_Valet) == 0x000358, "Wrong size on UFortAthenaVehicleDashboardWidget_Valet");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Valet, Text_ItemName) == 0x000350, "Member 'UFortAthenaVehicleDashboardWidget_Valet::Text_ItemName' has a wrong offset!");

// Class ValetUI.FortMobileActionButtonBehavior_ValetBoost
// 0x0008 (0x0100 - 0x00F8)
class UFortMobileActionButtonBehavior_ValetBoost : public UFortMobileActionButtonBehavior
{
public:
	uint8                                         Pad_44D6[0x8];                                     // 0x00F8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortMobileActionButtonBehavior_ValetBoost">();
	}
	static class UFortMobileActionButtonBehavior_ValetBoost* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMobileActionButtonBehavior_ValetBoost>();
	}
};
static_assert(alignof(UFortMobileActionButtonBehavior_ValetBoost) == 0x000008, "Wrong alinment on UFortMobileActionButtonBehavior_ValetBoost");
static_assert(sizeof(UFortMobileActionButtonBehavior_ValetBoost) == 0x000100, "Wrong size on UFortMobileActionButtonBehavior_ValetBoost");

}

