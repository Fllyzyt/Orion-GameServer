#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VerseFortnite_Player_PlayerStartComponent

#include "Basic.hpp"

#include "EntityCore_classes.hpp"


namespace SDK
{

// SolarisGeneratedClass VerseFortnite_Player_PlayerStartComponent.PlayerStartComponent
// 0x0010 (0x0070 - 0x0060)
class UPlayerStartComponent final  : public UEntityComponent
{
public:
	TArray<class FString>                         __verse_0x7C32BFF7_tags;                           // 0x0060(0x0010)(Edit, HasGetValueTypeHash)

public:
	static TArray<class UPlayerStartComponent*> FindAllInPlayspaceWithTags(class UObject* __verse_0x9866B8E7_contextObject, const TArray<class FString>& __verse_0xC3624B24_searchTags);

	void _InitCDO();
	void _InitInstance();
	void AddTags(const TArray<class FString>& __verse_0xE77537C1_newTags);
	class UVector3* GetPosition();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerStartComponent">();
	}
	static class UPlayerStartComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerStartComponent>();
	}
};
static_assert(alignof(UPlayerStartComponent) == 0x000008, "Wrong alinment on UPlayerStartComponent");
static_assert(sizeof(UPlayerStartComponent) == 0x000070, "Wrong size on UPlayerStartComponent");
static_assert(offsetof(UPlayerStartComponent, __verse_0x7C32BFF7_tags) == 0x000060, "Member 'UPlayerStartComponent::__verse_0x7C32BFF7_tags' has a wrong offset!");

}

