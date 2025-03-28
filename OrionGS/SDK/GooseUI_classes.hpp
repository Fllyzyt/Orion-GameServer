#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GooseUI

#include "Basic.hpp"

#include "GooseUI_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// Class GooseUI.GooseInventoryWidget
// 0x0068 (0x0380 - 0x0318)
class UGooseInventoryWidget final  : public ULTMWidgetBase
{
public:
	struct FScalableFloat                         WidgetEnabled;                                     // 0x0318(0x0028)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_4665[0x40];                                    // 0x0340(0x0040)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void CloseWidget();
	void OpenWidget(class UTexture2D* IconTexture, class UFortWorldItemDefinition* ItemDef);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GooseInventoryWidget">();
	}
	static class UGooseInventoryWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGooseInventoryWidget>();
	}
};
static_assert(alignof(UGooseInventoryWidget) == 0x000008, "Wrong alinment on UGooseInventoryWidget");
static_assert(sizeof(UGooseInventoryWidget) == 0x000380, "Wrong size on UGooseInventoryWidget");
static_assert(offsetof(UGooseInventoryWidget, WidgetEnabled) == 0x000318, "Member 'UGooseInventoryWidget::WidgetEnabled' has a wrong offset!");

// Class GooseUI.GooseWidgetBase
// 0x0018 (0x0330 - 0x0318)
class UGooseWidgetBase : public ULTMWidgetBase
{
public:
	uint8                                         Pad_4666[0x18];                                    // 0x0318(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnUpdateNumberOfPlanes(int32 FriendlyPlaneCount, int32 EnemyPlaneCount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GooseWidgetBase">();
	}
	static class UGooseWidgetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGooseWidgetBase>();
	}
};
static_assert(alignof(UGooseWidgetBase) == 0x000008, "Wrong alinment on UGooseWidgetBase");
static_assert(sizeof(UGooseWidgetBase) == 0x000330, "Wrong size on UGooseWidgetBase");

// Class GooseUI.GooseLeaderboardWidget
// 0x0008 (0x0338 - 0x0330)
class UGooseLeaderboardWidget final  : public UGooseWidgetBase
{
public:
	uint8                                         Pad_4667[0x4];                                     // 0x0330(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bOnlyListEnemySquads;                              // 0x0334(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4668[0x3];                                     // 0x0335(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void UpdateLeaderboardUI(TArray<struct FGooseLeaderboardData>& SortedLeaderboardInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GooseLeaderboardWidget">();
	}
	static class UGooseLeaderboardWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGooseLeaderboardWidget>();
	}
};
static_assert(alignof(UGooseLeaderboardWidget) == 0x000008, "Wrong alinment on UGooseLeaderboardWidget");
static_assert(sizeof(UGooseLeaderboardWidget) == 0x000338, "Wrong size on UGooseLeaderboardWidget");
static_assert(offsetof(UGooseLeaderboardWidget, bOnlyListEnemySquads) == 0x000334, "Member 'UGooseLeaderboardWidget::bOnlyListEnemySquads' has a wrong offset!");

// Class GooseUI.GoosePlanePickupWidget
// 0x0030 (0x0348 - 0x0318)
class UGoosePlanePickupWidget final  : public ULTMWidgetBase
{
public:
	TArray<struct FGoosePickupDisplayData>        DisplayData;                                       // 0x0318(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4669[0x20];                                    // 0x0328(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void CloseWidget();
	void OpenWidget(int32 DisplayIndex, class FName ChestName, class FText& DisplayText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GoosePlanePickupWidget">();
	}
	static class UGoosePlanePickupWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGoosePlanePickupWidget>();
	}
};
static_assert(alignof(UGoosePlanePickupWidget) == 0x000008, "Wrong alinment on UGoosePlanePickupWidget");
static_assert(sizeof(UGoosePlanePickupWidget) == 0x000348, "Wrong size on UGoosePlanePickupWidget");
static_assert(offsetof(UGoosePlanePickupWidget, DisplayData) == 0x000318, "Member 'UGoosePlanePickupWidget::DisplayData' has a wrong offset!");

// Class GooseUI.GoosePlaneWeaponWidget
// 0x0030 (0x0348 - 0x0318)
class UGoosePlaneWeaponWidget final  : public ULTMWidgetBase
{
public:
	TArray<struct FGooseWeaponDisplayData>        DisplayData;                                       // 0x0318(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_466B[0x20];                                    // 0x0328(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void CloseWidget();
	void OpenWidget(int32 DisplayIndex, struct FGooseWeaponDisplayData& InDisplayData, float StartTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GoosePlaneWeaponWidget">();
	}
	static class UGoosePlaneWeaponWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGoosePlaneWeaponWidget>();
	}
};
static_assert(alignof(UGoosePlaneWeaponWidget) == 0x000008, "Wrong alinment on UGoosePlaneWeaponWidget");
static_assert(sizeof(UGoosePlaneWeaponWidget) == 0x000348, "Wrong size on UGoosePlaneWeaponWidget");
static_assert(offsetof(UGoosePlaneWeaponWidget, DisplayData) == 0x000318, "Member 'UGoosePlaneWeaponWidget::DisplayData' has a wrong offset!");

// Class GooseUI.GooseRadarIconWidget
// 0x0010 (0x0298 - 0x0288)
class UGooseRadarIconWidget final  : public UCommonUserWidget
{
public:
	ERadarIconState                               IconState;                                         // 0x0288(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_466E[0xF];                                     // 0x0289(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnNewIconState(ERadarIconState NewState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GooseRadarIconWidget">();
	}
	static class UGooseRadarIconWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGooseRadarIconWidget>();
	}
};
static_assert(alignof(UGooseRadarIconWidget) == 0x000008, "Wrong alinment on UGooseRadarIconWidget");
static_assert(sizeof(UGooseRadarIconWidget) == 0x000298, "Wrong size on UGooseRadarIconWidget");
static_assert(offsetof(UGooseRadarIconWidget, IconState) == 0x000288, "Member 'UGooseRadarIconWidget::IconState' has a wrong offset!");

// Class GooseUI.GooseRadarWidgetBase
// 0x0018 (0x02E0 - 0x02C8)
class UGooseRadarWidgetBase final  : public UFortHUDElementWidget
{
public:
	class UCanvasPanel*                           MyPanel;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UGooseRadarIconWidget*>          IconWidgets;                                       // 0x02D0(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	void OnPlaneRep(TArray<class AFortAthenaVehicle*>& Planes);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GooseRadarWidgetBase">();
	}
	static class UGooseRadarWidgetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGooseRadarWidgetBase>();
	}
};
static_assert(alignof(UGooseRadarWidgetBase) == 0x000008, "Wrong alinment on UGooseRadarWidgetBase");
static_assert(sizeof(UGooseRadarWidgetBase) == 0x0002E0, "Wrong size on UGooseRadarWidgetBase");
static_assert(offsetof(UGooseRadarWidgetBase, MyPanel) == 0x0002C8, "Member 'UGooseRadarWidgetBase::MyPanel' has a wrong offset!");
static_assert(offsetof(UGooseRadarWidgetBase, IconWidgets) == 0x0002D0, "Member 'UGooseRadarWidgetBase::IconWidgets' has a wrong offset!");

// Class GooseUI.GooseSkydivingWidget
// 0x0010 (0x0328 - 0x0318)
class UGooseSkydivingWidget final  : public ULTMWidgetBase
{
public:
	uint8                                         Pad_466F[0x10];                                    // 0x0318(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnEndSkydiving();
	void OnStartSkydiving();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GooseSkydivingWidget">();
	}
	static class UGooseSkydivingWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGooseSkydivingWidget>();
	}
};
static_assert(alignof(UGooseSkydivingWidget) == 0x000008, "Wrong alinment on UGooseSkydivingWidget");
static_assert(sizeof(UGooseSkydivingWidget) == 0x000328, "Wrong size on UGooseSkydivingWidget");

// Class GooseUI.GooseTargetLeadingWidget
// 0x01A8 (0x04D8 - 0x0330)
class UGooseTargetLeadingWidget final  : public UGooseWidgetBase
{
public:
	class AFortAthenaVehicle*                     TargetVehicle;                                     // 0x0330(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFortAthenaVehicle*                     BestNextTargetCandidate;                           // 0x0338(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFortAthenaVehicle*                     ViewingPlayerVehicle;                              // 0x0340(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetComponent*                       AimingReticleWidgetComponent;                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AFortWeapon*                            PlayerWeapon;                                      // 0x0350(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_4670[0x18];                                    // 0x0358(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         AimAtLocationLerpSpeed;                            // 0x0370(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FName                                   AimingReticleComponentTag;                         // 0x0398(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FScalableFloat                         TargetChangeDelay;                                 // 0x03A0(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         TargetFindDelay;                                   // 0x03C8(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         VehicleDetectionRange;                             // 0x03F0(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         VehicleDetectionAngle;                             // 0x0418(0x0028)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         ScreenDetectionBoxHalfSize;                        // 0x0440(0x0028)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                         TargetUpdateRate;                                  // 0x0468(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4671[0x10];                                    // 0x0490(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScalableFloat                         AimAtLocationUpdateRate;                           // 0x04A0(0x0028)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4672[0x8];                                     // 0x04C8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TWeakObjectPtr<class AFortPawn>               CachedPawn;                                        // 0x04D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void OnPlayerControllerPawnChanged(class AFortPawn* NewPawn);
	void OnPlayerEnterVehicle();
	void OnPlayerExitVehicle();
	void OnPlayerWeaponChanged(class AFortPawn* InPawn, class AFortWeapon* InNewWeapon, class AFortWeapon* InPlayerWeapon);
	void ShowLeadingReticle(bool bShow);
	void UpdateAimAtLocation();
	void UpdateLeadingReticlePosition(const struct FVector& TargetPosition, float InDeltaTime);
	void UpdateTargetVehicle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GooseTargetLeadingWidget">();
	}
	static class UGooseTargetLeadingWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGooseTargetLeadingWidget>();
	}
};
static_assert(alignof(UGooseTargetLeadingWidget) == 0x000008, "Wrong alinment on UGooseTargetLeadingWidget");
static_assert(sizeof(UGooseTargetLeadingWidget) == 0x0004D8, "Wrong size on UGooseTargetLeadingWidget");
static_assert(offsetof(UGooseTargetLeadingWidget, TargetVehicle) == 0x000330, "Member 'UGooseTargetLeadingWidget::TargetVehicle' has a wrong offset!");
static_assert(offsetof(UGooseTargetLeadingWidget, BestNextTargetCandidate) == 0x000338, "Member 'UGooseTargetLeadingWidget::BestNextTargetCandidate' has a wrong offset!");
static_assert(offsetof(UGooseTargetLeadingWidget, ViewingPlayerVehicle) == 0x000340, "Member 'UGooseTargetLeadingWidget::ViewingPlayerVehicle' has a wrong offset!");
static_assert(offsetof(UGooseTargetLeadingWidget, AimingReticleWidgetComponent) == 0x000348, "Member 'UGooseTargetLeadingWidget::AimingReticleWidgetComponent' has a wrong offset!");
static_assert(offsetof(UGooseTargetLeadingWidget, PlayerWeapon) == 0x000350, "Member 'UGooseTargetLeadingWidget::PlayerWeapon' has a wrong offset!");
static_assert(offsetof(UGooseTargetLeadingWidget, AimAtLocationLerpSpeed) == 0x000370, "Member 'UGooseTargetLeadingWidget::AimAtLocationLerpSpeed' has a wrong offset!");
static_assert(offsetof(UGooseTargetLeadingWidget, AimingReticleComponentTag) == 0x000398, "Member 'UGooseTargetLeadingWidget::AimingReticleComponentTag' has a wrong offset!");
static_assert(offsetof(UGooseTargetLeadingWidget, TargetChangeDelay) == 0x0003A0, "Member 'UGooseTargetLeadingWidget::TargetChangeDelay' has a wrong offset!");
static_assert(offsetof(UGooseTargetLeadingWidget, TargetFindDelay) == 0x0003C8, "Member 'UGooseTargetLeadingWidget::TargetFindDelay' has a wrong offset!");
static_assert(offsetof(UGooseTargetLeadingWidget, VehicleDetectionRange) == 0x0003F0, "Member 'UGooseTargetLeadingWidget::VehicleDetectionRange' has a wrong offset!");
static_assert(offsetof(UGooseTargetLeadingWidget, VehicleDetectionAngle) == 0x000418, "Member 'UGooseTargetLeadingWidget::VehicleDetectionAngle' has a wrong offset!");
static_assert(offsetof(UGooseTargetLeadingWidget, ScreenDetectionBoxHalfSize) == 0x000440, "Member 'UGooseTargetLeadingWidget::ScreenDetectionBoxHalfSize' has a wrong offset!");
static_assert(offsetof(UGooseTargetLeadingWidget, TargetUpdateRate) == 0x000468, "Member 'UGooseTargetLeadingWidget::TargetUpdateRate' has a wrong offset!");
static_assert(offsetof(UGooseTargetLeadingWidget, AimAtLocationUpdateRate) == 0x0004A0, "Member 'UGooseTargetLeadingWidget::AimAtLocationUpdateRate' has a wrong offset!");
static_assert(offsetof(UGooseTargetLeadingWidget, CachedPawn) == 0x0004D0, "Member 'UGooseTargetLeadingWidget::CachedPawn' has a wrong offset!");

}

