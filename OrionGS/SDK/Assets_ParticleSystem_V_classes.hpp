#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Assets_ParticleSystem_V

#include "Basic.hpp"

#include "Assets_ClientAsset_classes.hpp"


namespace SDK
{

// SolarisGeneratedClass Assets_ParticleSystem_V.ParticleSystem_V
// 0x0000 (0x0080 - 0x0080)
class UParticleSystem_V final  : public UClientAsset
{
public:
	static class UParticleSystem_V* Create(const class FString& __verse_0x5D4EDCE6_pathToAsset, class UAsset* _TEMP_0, class UAsset* _TEMP_1);
	static class UParticleSystem_V* CreateAndLoad(const class FString& __verse_0x5D4EDCE6_pathToAsset, class UParticleSystem_V* __verse_0xC53A5C85_NewAsset_0, class UAsset* _TEMP_0, class UAsset* _TEMP_1);

	void _InitCDO();
	void _InitInstance();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ParticleSystem_V">();
	}
	static class UParticleSystem_V* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParticleSystem_V>();
	}
};
static_assert(alignof(UParticleSystem_V) == 0x000008, "Wrong alinment on UParticleSystem_V");
static_assert(sizeof(UParticleSystem_V) == 0x000080, "Wrong size on UParticleSystem_V");

}

