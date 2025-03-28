#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DLSS

#include "Basic.hpp"

#include "DeveloperSettings_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class DLSS.DLSSUserPreferences
// 0x0008 (0x0040 - 0x0038)
class UDLSSUserPreferences final  : public UDeveloperSettings
{
public:
	bool                                          bEnableDLSSInEditorViewports;                      // 0x0038(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableScreenpercentageManipulationInDLSSEditorViewports; // 0x0039(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDLSSInPlayInEditorViewports;                // 0x003A(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E7E[0x5];                                     // 0x003B(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DLSSUserPreferences">();
	}
	static class UDLSSUserPreferences* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDLSSUserPreferences>();
	}
};
static_assert(alignof(UDLSSUserPreferences) == 0x000008, "Wrong alinment on UDLSSUserPreferences");
static_assert(sizeof(UDLSSUserPreferences) == 0x000040, "Wrong size on UDLSSUserPreferences");
static_assert(offsetof(UDLSSUserPreferences, bEnableDLSSInEditorViewports) == 0x000038, "Member 'UDLSSUserPreferences::bEnableDLSSInEditorViewports' has a wrong offset!");
static_assert(offsetof(UDLSSUserPreferences, bEnableScreenpercentageManipulationInDLSSEditorViewports) == 0x000039, "Member 'UDLSSUserPreferences::bEnableScreenpercentageManipulationInDLSSEditorViewports' has a wrong offset!");
static_assert(offsetof(UDLSSUserPreferences, bEnableDLSSInPlayInEditorViewports) == 0x00003A, "Member 'UDLSSUserPreferences::bEnableDLSSInPlayInEditorViewports' has a wrong offset!");

// Class DLSS.DLSSSettings
// 0x0038 (0x0060 - 0x0028)
class UDLSSSettings final  : public UObject
{
public:
	uint32                                        NVIDIANGXApplicationId;                            // 0x0028(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E7F[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ProductionBinariesPath;                            // 0x0030(0x0010)(Edit, ZeroConstructor, Config, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bProductionBinariesExists;                         // 0x0040(0x0001)(Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E80[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 NonProductionBinariesPath;                         // 0x0048(0x0010)(Edit, ZeroConstructor, Config, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bNonProductionBinariesExists;                      // 0x0058(0x0001)(Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableNonProductionBinariesInShipping;            // 0x0059(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDLSSD3D12;                                  // 0x005A(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDLSSD3D11;                                  // 0x005B(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEnableDLSSVulkan;                                 // 0x005C(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E81[0x3];                                     // 0x005D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DLSSSettings">();
	}
	static class UDLSSSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDLSSSettings>();
	}
};
static_assert(alignof(UDLSSSettings) == 0x000008, "Wrong alinment on UDLSSSettings");
static_assert(sizeof(UDLSSSettings) == 0x000060, "Wrong size on UDLSSSettings");
static_assert(offsetof(UDLSSSettings, NVIDIANGXApplicationId) == 0x000028, "Member 'UDLSSSettings::NVIDIANGXApplicationId' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, ProductionBinariesPath) == 0x000030, "Member 'UDLSSSettings::ProductionBinariesPath' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bProductionBinariesExists) == 0x000040, "Member 'UDLSSSettings::bProductionBinariesExists' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, NonProductionBinariesPath) == 0x000048, "Member 'UDLSSSettings::NonProductionBinariesPath' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bNonProductionBinariesExists) == 0x000058, "Member 'UDLSSSettings::bNonProductionBinariesExists' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bEnableNonProductionBinariesInShipping) == 0x000059, "Member 'UDLSSSettings::bEnableNonProductionBinariesInShipping' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bEnableDLSSD3D12) == 0x00005A, "Member 'UDLSSSettings::bEnableDLSSD3D12' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bEnableDLSSD3D11) == 0x00005B, "Member 'UDLSSSettings::bEnableDLSSD3D11' has a wrong offset!");
static_assert(offsetof(UDLSSSettings, bEnableDLSSVulkan) == 0x00005C, "Member 'UDLSSSettings::bEnableDLSSVulkan' has a wrong offset!");

}

