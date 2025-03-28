#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Entity_EntityUtil

#include "Basic.hpp"


namespace SDK::Params
{

// Function Entity_EntityUtil.EntityUtil.createAndAddComponent
// 0x0020 (0x0020 - 0x0000)
struct EntityUtil_CreateAndAddComponent final 
{
public:
	class UObject*                                __verse_0x9866B8E7_contextObject;                  // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __verse_0x0E84910C_entityID;                       // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6666[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 __verse_0x159E825F_componentType;                  // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                RetVal;                                            // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EntityUtil_CreateAndAddComponent) == 0x000008, "Wrong alinment on EntityUtil_CreateAndAddComponent");
static_assert(sizeof(EntityUtil_CreateAndAddComponent) == 0x000020, "Wrong size on EntityUtil_CreateAndAddComponent");
static_assert(offsetof(EntityUtil_CreateAndAddComponent, __verse_0x9866B8E7_contextObject) == 0x000000, "Member 'EntityUtil_CreateAndAddComponent::__verse_0x9866B8E7_contextObject' has a wrong offset!");
static_assert(offsetof(EntityUtil_CreateAndAddComponent, __verse_0x0E84910C_entityID) == 0x000008, "Member 'EntityUtil_CreateAndAddComponent::__verse_0x0E84910C_entityID' has a wrong offset!");
static_assert(offsetof(EntityUtil_CreateAndAddComponent, __verse_0x159E825F_componentType) == 0x000010, "Member 'EntityUtil_CreateAndAddComponent::__verse_0x159E825F_componentType' has a wrong offset!");
static_assert(offsetof(EntityUtil_CreateAndAddComponent, RetVal) == 0x000018, "Member 'EntityUtil_CreateAndAddComponent::RetVal' has a wrong offset!");

// Function Entity_EntityUtil.EntityUtil.getComponentOfTypeFromComponent
// 0x0018 (0x0018 - 0x0000)
struct EntityUtil_GetComponentOfTypeFromComponent final 
{
public:
	class UEntityComponent*                       __verse_0x4ED5ED1D_component;                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 __verse_0x0F99A7FE_type;                           // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEntityComponent*                       RetVal;                                            // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EntityUtil_GetComponentOfTypeFromComponent) == 0x000008, "Wrong alinment on EntityUtil_GetComponentOfTypeFromComponent");
static_assert(sizeof(EntityUtil_GetComponentOfTypeFromComponent) == 0x000018, "Wrong size on EntityUtil_GetComponentOfTypeFromComponent");
static_assert(offsetof(EntityUtil_GetComponentOfTypeFromComponent, __verse_0x4ED5ED1D_component) == 0x000000, "Member 'EntityUtil_GetComponentOfTypeFromComponent::__verse_0x4ED5ED1D_component' has a wrong offset!");
static_assert(offsetof(EntityUtil_GetComponentOfTypeFromComponent, __verse_0x0F99A7FE_type) == 0x000008, "Member 'EntityUtil_GetComponentOfTypeFromComponent::__verse_0x0F99A7FE_type' has a wrong offset!");
static_assert(offsetof(EntityUtil_GetComponentOfTypeFromComponent, RetVal) == 0x000010, "Member 'EntityUtil_GetComponentOfTypeFromComponent::RetVal' has a wrong offset!");

// Function Entity_EntityUtil.EntityUtil.getComponentOfTypeFromComponentForEntity
// 0x0020 (0x0020 - 0x0000)
struct EntityUtil_GetComponentOfTypeFromComponentForEntity final 
{
public:
	class UEntityComponent*                       __verse_0x4ED5ED1D_component;                      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __verse_0x0E84910C_entityID;                       // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6667[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 __verse_0x0F99A7FE_type;                           // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEntityComponent*                       RetVal;                                            // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EntityUtil_GetComponentOfTypeFromComponentForEntity) == 0x000008, "Wrong alinment on EntityUtil_GetComponentOfTypeFromComponentForEntity");
static_assert(sizeof(EntityUtil_GetComponentOfTypeFromComponentForEntity) == 0x000020, "Wrong size on EntityUtil_GetComponentOfTypeFromComponentForEntity");
static_assert(offsetof(EntityUtil_GetComponentOfTypeFromComponentForEntity, __verse_0x4ED5ED1D_component) == 0x000000, "Member 'EntityUtil_GetComponentOfTypeFromComponentForEntity::__verse_0x4ED5ED1D_component' has a wrong offset!");
static_assert(offsetof(EntityUtil_GetComponentOfTypeFromComponentForEntity, __verse_0x0E84910C_entityID) == 0x000008, "Member 'EntityUtil_GetComponentOfTypeFromComponentForEntity::__verse_0x0E84910C_entityID' has a wrong offset!");
static_assert(offsetof(EntityUtil_GetComponentOfTypeFromComponentForEntity, __verse_0x0F99A7FE_type) == 0x000010, "Member 'EntityUtil_GetComponentOfTypeFromComponentForEntity::__verse_0x0F99A7FE_type' has a wrong offset!");
static_assert(offsetof(EntityUtil_GetComponentOfTypeFromComponentForEntity, RetVal) == 0x000018, "Member 'EntityUtil_GetComponentOfTypeFromComponentForEntity::RetVal' has a wrong offset!");

// Function Entity_EntityUtil.EntityUtil.spawnEmptyEntity
// 0x0028 (0x0028 - 0x0000)
struct EntityUtil_SpawnEmptyEntity final 
{
public:
	class UObject*                                __verse_0x9866B8E7_contextObject;                  // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTransform*                             __verse_0x9801F364_transform;                      // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 __verse_0x45A29901_name;                           // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         RetVal;                                            // 0x0020(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EntityUtil_SpawnEmptyEntity) == 0x000008, "Wrong alinment on EntityUtil_SpawnEmptyEntity");
static_assert(sizeof(EntityUtil_SpawnEmptyEntity) == 0x000028, "Wrong size on EntityUtil_SpawnEmptyEntity");
static_assert(offsetof(EntityUtil_SpawnEmptyEntity, __verse_0x9866B8E7_contextObject) == 0x000000, "Member 'EntityUtil_SpawnEmptyEntity::__verse_0x9866B8E7_contextObject' has a wrong offset!");
static_assert(offsetof(EntityUtil_SpawnEmptyEntity, __verse_0x9801F364_transform) == 0x000008, "Member 'EntityUtil_SpawnEmptyEntity::__verse_0x9801F364_transform' has a wrong offset!");
static_assert(offsetof(EntityUtil_SpawnEmptyEntity, __verse_0x45A29901_name) == 0x000010, "Member 'EntityUtil_SpawnEmptyEntity::__verse_0x45A29901_name' has a wrong offset!");
static_assert(offsetof(EntityUtil_SpawnEmptyEntity, RetVal) == 0x000020, "Member 'EntityUtil_SpawnEmptyEntity::RetVal' has a wrong offset!");

// Function Entity_EntityUtil.EntityUtil.spawnEntityFromAsset
// 0x0038 (0x0038 - 0x0000)
struct EntityUtil_SpawnEntityFromAsset final 
{
public:
	class UObject*                                __verse_0x9866B8E7_contextObject;                  // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 __verse_0x2FF42210_assetPath;                      // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	class UTransform*                             __verse_0x9801F364_transform;                      // 0x0018(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 __verse_0x45A29901_name;                           // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         RetVal;                                            // 0x0030(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EntityUtil_SpawnEntityFromAsset) == 0x000008, "Wrong alinment on EntityUtil_SpawnEntityFromAsset");
static_assert(sizeof(EntityUtil_SpawnEntityFromAsset) == 0x000038, "Wrong size on EntityUtil_SpawnEntityFromAsset");
static_assert(offsetof(EntityUtil_SpawnEntityFromAsset, __verse_0x9866B8E7_contextObject) == 0x000000, "Member 'EntityUtil_SpawnEntityFromAsset::__verse_0x9866B8E7_contextObject' has a wrong offset!");
static_assert(offsetof(EntityUtil_SpawnEntityFromAsset, __verse_0x2FF42210_assetPath) == 0x000008, "Member 'EntityUtil_SpawnEntityFromAsset::__verse_0x2FF42210_assetPath' has a wrong offset!");
static_assert(offsetof(EntityUtil_SpawnEntityFromAsset, __verse_0x9801F364_transform) == 0x000018, "Member 'EntityUtil_SpawnEntityFromAsset::__verse_0x9801F364_transform' has a wrong offset!");
static_assert(offsetof(EntityUtil_SpawnEntityFromAsset, __verse_0x45A29901_name) == 0x000020, "Member 'EntityUtil_SpawnEntityFromAsset::__verse_0x45A29901_name' has a wrong offset!");
static_assert(offsetof(EntityUtil_SpawnEntityFromAsset, RetVal) == 0x000030, "Member 'EntityUtil_SpawnEntityFromAsset::RetVal' has a wrong offset!");

}

