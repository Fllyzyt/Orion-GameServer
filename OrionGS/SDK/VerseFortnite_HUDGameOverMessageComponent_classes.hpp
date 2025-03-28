#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VerseFortnite_HUDGameOverMessageComponent

#include "Basic.hpp"

#include "VerseFortnite_classes.hpp"


namespace SDK
{

// SolarisGeneratedClass VerseFortnite_HUDGameOverMessageComponent.HUDGameOverMessageComponent
// 0x0000 (0x0128 - 0x0128)
class UHUDGameOverMessageComponent final  : public UHUDGameOverComponentBase
{
public:
	void _InitCDO();
	void _InitInstance();
	void Hide();
	void SetWidget(const class FString& __verse_0x5D4EDCE6_pathToAsset);
	void Show();
	void ShowDraw();
	void ShowWinningTeam(int32 __verse_0x28201082_team);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HUDGameOverMessageComponent">();
	}
	static class UHUDGameOverMessageComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHUDGameOverMessageComponent>();
	}
};
static_assert(alignof(UHUDGameOverMessageComponent) == 0x000008, "Wrong alinment on UHUDGameOverMessageComponent");
static_assert(sizeof(UHUDGameOverMessageComponent) == 0x000128, "Wrong size on UHUDGameOverMessageComponent");

}

