#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Assets_Material_V

#include "Basic.hpp"

#include "Assets_Asset_classes.hpp"


namespace SDK
{

// SolarisGeneratedClass Assets_Material_V.Material_V
// 0x0000 (0x0080 - 0x0080)
class UMaterial_V final  : public UAsset
{
public:
	static class UMaterial_V* Create(const class FString& __verse_0x5D4EDCE6_pathToAsset, class UAsset* _TEMP_0, class UAsset* _TEMP_1);
	static class UMaterial_V* CreateAndLoad(const class FString& __verse_0x5D4EDCE6_pathToAsset, class UMaterial_V* __verse_0xC53A5C85_NewAsset_0, class UAsset* _TEMP_0, class UAsset* _TEMP_1);

	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Material_V">();
	}
	static class UMaterial_V* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaterial_V>();
	}
};
static_assert(alignof(UMaterial_V) == 0x000008, "Wrong alinment on UMaterial_V");
static_assert(sizeof(UMaterial_V) == 0x000080, "Wrong size on UMaterial_V");

}

