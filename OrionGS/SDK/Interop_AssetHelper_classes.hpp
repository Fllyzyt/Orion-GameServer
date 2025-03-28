#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Interop_AssetHelper

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// SolarisGeneratedClass Interop_AssetHelper.AssetHelper
// 0x0000 (0x0028 - 0x0028)
class UAssetHelper final  : public UObject
{
public:
	static class UObject* LoadAsset_Internal(const class FString& __verse_0x5D4EDCE6_pathToAsset);

	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AssetHelper">();
	}
	static class UAssetHelper* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAssetHelper>();
	}
};
static_assert(alignof(UAssetHelper) == 0x000008, "Wrong alinment on UAssetHelper");
static_assert(sizeof(UAssetHelper) == 0x000028, "Wrong size on UAssetHelper");

}

