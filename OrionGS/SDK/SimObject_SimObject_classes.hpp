#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SimObject_SimObject

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// SolarisGeneratedClass SimObject_SimObject.SimObject
// 0x0008 (0x0030 - 0x0028)
class USimObject final  : public UObject
{
public:
	uint8                                         Pad_7A4C[0x8];                                     // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static uint8 DestroyObject(class UEntityComponent* __verse_0x4ED5ED1D_component);
	static class UEntityComponent* GetComponentOfTypeC(class UEntityComponent* __verse_0x4ED5ED1D_component, class UClass* __verse_0x0F99A7FE_type);
	static class USimObject* SpawnA(class UObject* __verse_0x9866B8E7_contextObject, class UTransform* __verse_0x9801F364_transform, const class FString& __verse_0x45A29901_name);
	static class USimObject* SpawnB(class UObject* __verse_0x9866B8E7_contextObject, class UVector3* __verse_0x7AF6BB5D_position, class UVector3* __verse_0xAA1ABDC9_rotation, class UVector3* __verse_0xA8267C47_scale, const class FString& __verse_0x45A29901_name);
	static class USimObject* SpawnC(class UObject* __verse_0x9866B8E7_contextObject, class UVector3* __verse_0x7AF6BB5D_position, const class FString& __verse_0x45A29901_name);

	void _InitCDO();
	void _InitInstance();
	class UEntityComponent* AddComponent(class UClass* __verse_0x159E825F_componentType);
	uint8 Destroy();
	TArray<class UEntityComponent*> GetAllComponentsOfType(class UClass* __verse_0x159E825F_componentType);
	class UEntityComponent* GetComponentOfType(class UClass* __verse_0x159E825F_componentType);
	class FString GetFullName();
	class FString GetName();
	class UEntityComponent* GetOrCreateComponentOfType(class UClass* __verse_0x159E825F_componentType);
	uint8 RemoveComponent(class UEntityComponent* __verse_0x4ED5ED1D_component);
	FOptionalProperty_ SetupComponents(const TArray<class UClass*>& __verse_0x452A7A62_requiredComponentClasses, const TArray<class UClass*>& __verse_0x1A7F8FD8_addComponentClasses, int32 _TEMP_0, int32 _TEMP_1, class UClass* __verse_0x9423708A_componentClass_1, class UEntityComponent* _TEMP_2, int32 _TEMP_3, int32 _TEMP_4, class UClass* __verse_0x9423708A_componentClass_4);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SimObject">();
	}
	static class USimObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<USimObject>();
	}
};
static_assert(alignof(USimObject) == 0x000008, "Wrong alinment on USimObject");
static_assert(sizeof(USimObject) == 0x000030, "Wrong size on USimObject");

}

