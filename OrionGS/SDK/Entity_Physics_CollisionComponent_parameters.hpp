#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Entity_Physics_CollisionComponent

#include "Basic.hpp"

#include "Entity_Physics_DOFMovementMode_structs.hpp"


namespace SDK::Params
{

// Function Entity_Physics_CollisionComponent.CollisionComponent.GetCollisionProfileName
// 0x0010 (0x0010 - 0x0000)
struct CollisionComponent_GetCollisionProfileName final 
{
public:
	class FString                                 RetVal;                                            // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};
static_assert(alignof(CollisionComponent_GetCollisionProfileName) == 0x000008, "Wrong alinment on CollisionComponent_GetCollisionProfileName");
static_assert(sizeof(CollisionComponent_GetCollisionProfileName) == 0x000010, "Wrong size on CollisionComponent_GetCollisionProfileName");
static_assert(offsetof(CollisionComponent_GetCollisionProfileName, RetVal) == 0x000000, "Member 'CollisionComponent_GetCollisionProfileName::RetVal' has a wrong offset!");

// Function Entity_Physics_CollisionComponent.CollisionComponent.getEnabled
// 0x0001 (0x0001 - 0x0000)
struct CollisionComponent_GetEnabled final 
{
public:
	uint8                                         RetVal : 1;                                        // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Parm, OutParm, ReturnParm, NoDestructor))
};
static_assert(alignof(CollisionComponent_GetEnabled) == 0x000001, "Wrong alinment on CollisionComponent_GetEnabled");
static_assert(sizeof(CollisionComponent_GetEnabled) == 0x000001, "Wrong size on CollisionComponent_GetEnabled");

// Function Entity_Physics_CollisionComponent.CollisionComponent.getGravityEnabled
// 0x0001 (0x0001 - 0x0000)
struct CollisionComponent_GetGravityEnabled final 
{
public:
	uint8                                         RetVal : 1;                                        // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Parm, OutParm, ReturnParm, NoDestructor))
};
static_assert(alignof(CollisionComponent_GetGravityEnabled) == 0x000001, "Wrong alinment on CollisionComponent_GetGravityEnabled");
static_assert(sizeof(CollisionComponent_GetGravityEnabled) == 0x000001, "Wrong size on CollisionComponent_GetGravityEnabled");

// Function Entity_Physics_CollisionComponent.CollisionComponent.getMovable
// 0x0001 (0x0001 - 0x0000)
struct CollisionComponent_GetMovable final 
{
public:
	uint8                                         RetVal : 1;                                        // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Parm, OutParm, ReturnParm, NoDestructor))
};
static_assert(alignof(CollisionComponent_GetMovable) == 0x000001, "Wrong alinment on CollisionComponent_GetMovable");
static_assert(sizeof(CollisionComponent_GetMovable) == 0x000001, "Wrong size on CollisionComponent_GetMovable");

// Function Entity_Physics_CollisionComponent.CollisionComponent.getSendHitEventsOnCollide
// 0x0001 (0x0001 - 0x0000)
struct CollisionComponent_GetSendHitEventsOnCollide final 
{
public:
	uint8                                         RetVal : 1;                                        // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Parm, OutParm, ReturnParm, NoDestructor))
};
static_assert(alignof(CollisionComponent_GetSendHitEventsOnCollide) == 0x000001, "Wrong alinment on CollisionComponent_GetSendHitEventsOnCollide");
static_assert(sizeof(CollisionComponent_GetSendHitEventsOnCollide) == 0x000001, "Wrong size on CollisionComponent_GetSendHitEventsOnCollide");

// Function Entity_Physics_CollisionComponent.CollisionComponent.getSendOverlapEvents
// 0x0001 (0x0001 - 0x0000)
struct CollisionComponent_GetSendOverlapEvents final 
{
public:
	uint8                                         RetVal : 1;                                        // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Parm, OutParm, ReturnParm, NoDestructor))
};
static_assert(alignof(CollisionComponent_GetSendOverlapEvents) == 0x000001, "Wrong alinment on CollisionComponent_GetSendOverlapEvents");
static_assert(sizeof(CollisionComponent_GetSendOverlapEvents) == 0x000001, "Wrong size on CollisionComponent_GetSendOverlapEvents");

// Function Entity_Physics_CollisionComponent.CollisionComponent.getUseContinuousCollisionDetection
// 0x0001 (0x0001 - 0x0000)
struct CollisionComponent_GetUseContinuousCollisionDetection final 
{
public:
	uint8                                         RetVal : 1;                                        // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Parm, OutParm, ReturnParm, NoDestructor))
};
static_assert(alignof(CollisionComponent_GetUseContinuousCollisionDetection) == 0x000001, "Wrong alinment on CollisionComponent_GetUseContinuousCollisionDetection");
static_assert(sizeof(CollisionComponent_GetUseContinuousCollisionDetection) == 0x000001, "Wrong size on CollisionComponent_GetUseContinuousCollisionDetection");

// Function Entity_Physics_CollisionComponent.CollisionComponent.SetCollisionProfileName
// 0x0010 (0x0010 - 0x0000)
struct CollisionComponent_SetCollisionProfileName final 
{
public:
	class FString                                 __verse_0x29B886CB_CollisionProfile;               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CollisionComponent_SetCollisionProfileName) == 0x000008, "Wrong alinment on CollisionComponent_SetCollisionProfileName");
static_assert(sizeof(CollisionComponent_SetCollisionProfileName) == 0x000010, "Wrong size on CollisionComponent_SetCollisionProfileName");
static_assert(offsetof(CollisionComponent_SetCollisionProfileName, __verse_0x29B886CB_CollisionProfile) == 0x000000, "Member 'CollisionComponent_SetCollisionProfileName::__verse_0x29B886CB_CollisionProfile' has a wrong offset!");

// Function Entity_Physics_CollisionComponent.CollisionComponent.setCustomDegreeOfFreedomConstrain
// 0x0008 (0x0008 - 0x0000)
struct CollisionComponent_SetCustomDegreeOfFreedomConstrain final 
{
public:
	class UVector3*                               __verse_0x64488B5B_CustomMovementPlaneNormal;      // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CollisionComponent_SetCustomDegreeOfFreedomConstrain) == 0x000008, "Wrong alinment on CollisionComponent_SetCustomDegreeOfFreedomConstrain");
static_assert(sizeof(CollisionComponent_SetCustomDegreeOfFreedomConstrain) == 0x000008, "Wrong size on CollisionComponent_SetCustomDegreeOfFreedomConstrain");
static_assert(offsetof(CollisionComponent_SetCustomDegreeOfFreedomConstrain, __verse_0x64488B5B_CustomMovementPlaneNormal) == 0x000000, "Member 'CollisionComponent_SetCustomDegreeOfFreedomConstrain::__verse_0x64488B5B_CustomMovementPlaneNormal' has a wrong offset!");

// Function Entity_Physics_CollisionComponent.CollisionComponent.setDegreeOfFreedomContraint
// 0x0001 (0x0001 - 0x0000)
struct CollisionComponent_SetDegreeOfFreedomContraint final 
{
public:
	EDOFMovementMode                              __verse_0xC6FC7EEF_MovementMode;                   // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CollisionComponent_SetDegreeOfFreedomContraint) == 0x000001, "Wrong alinment on CollisionComponent_SetDegreeOfFreedomContraint");
static_assert(sizeof(CollisionComponent_SetDegreeOfFreedomContraint) == 0x000001, "Wrong size on CollisionComponent_SetDegreeOfFreedomContraint");
static_assert(offsetof(CollisionComponent_SetDegreeOfFreedomContraint, __verse_0xC6FC7EEF_MovementMode) == 0x000000, "Member 'CollisionComponent_SetDegreeOfFreedomContraint::__verse_0xC6FC7EEF_MovementMode' has a wrong offset!");

// Function Entity_Physics_CollisionComponent.CollisionComponent.SetEnabled
// 0x0001 (0x0001 - 0x0000)
struct CollisionComponent_SetEnabled final 
{
public:
	uint8                                         __verse_0xD50E43B9_InIsEnabled : 1;                // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Parm, NoDestructor))
};
static_assert(alignof(CollisionComponent_SetEnabled) == 0x000001, "Wrong alinment on CollisionComponent_SetEnabled");
static_assert(sizeof(CollisionComponent_SetEnabled) == 0x000001, "Wrong size on CollisionComponent_SetEnabled");

// Function Entity_Physics_CollisionComponent.CollisionComponent.setGravityEnabled
// 0x0001 (0x0001 - 0x0000)
struct CollisionComponent_SetGravityEnabled final 
{
public:
	uint8                                         __verse_0x322B83BC_EnableGravity : 1;              // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Parm, NoDestructor))
};
static_assert(alignof(CollisionComponent_SetGravityEnabled) == 0x000001, "Wrong alinment on CollisionComponent_SetGravityEnabled");
static_assert(sizeof(CollisionComponent_SetGravityEnabled) == 0x000001, "Wrong size on CollisionComponent_SetGravityEnabled");

// Function Entity_Physics_CollisionComponent.CollisionComponent.setMovable
// 0x0001 (0x0001 - 0x0000)
struct CollisionComponent_SetMovable final 
{
public:
	uint8                                         __verse_0xD261A0E8_IsMovable : 1;                  // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Parm, NoDestructor))
};
static_assert(alignof(CollisionComponent_SetMovable) == 0x000001, "Wrong alinment on CollisionComponent_SetMovable");
static_assert(sizeof(CollisionComponent_SetMovable) == 0x000001, "Wrong size on CollisionComponent_SetMovable");

// Function Entity_Physics_CollisionComponent.CollisionComponent.setSendHitEventsOnCollide
// 0x0001 (0x0001 - 0x0000)
struct CollisionComponent_SetSendHitEventsOnCollide final 
{
public:
	uint8                                         __verse_0x9FB5B901_EnableHitEvents : 1;            // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Parm, NoDestructor))
};
static_assert(alignof(CollisionComponent_SetSendHitEventsOnCollide) == 0x000001, "Wrong alinment on CollisionComponent_SetSendHitEventsOnCollide");
static_assert(sizeof(CollisionComponent_SetSendHitEventsOnCollide) == 0x000001, "Wrong size on CollisionComponent_SetSendHitEventsOnCollide");

// Function Entity_Physics_CollisionComponent.CollisionComponent.setSendOverlapEvents
// 0x0001 (0x0001 - 0x0000)
struct CollisionComponent_SetSendOverlapEvents final 
{
public:
	uint8                                         __verse_0xD2175A3C_EnableOverlapEvents : 1;        // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Parm, NoDestructor))
};
static_assert(alignof(CollisionComponent_SetSendOverlapEvents) == 0x000001, "Wrong alinment on CollisionComponent_SetSendOverlapEvents");
static_assert(sizeof(CollisionComponent_SetSendOverlapEvents) == 0x000001, "Wrong size on CollisionComponent_SetSendOverlapEvents");

// Function Entity_Physics_CollisionComponent.CollisionComponent.setUseContinuousCollisionDetection
// 0x0001 (0x0001 - 0x0000)
struct CollisionComponent_SetUseContinuousCollisionDetection final 
{
public:
	uint8                                         __verse_0xD79DBFC5_UseCCD : 1;                     // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Parm, NoDestructor))
};
static_assert(alignof(CollisionComponent_SetUseContinuousCollisionDetection) == 0x000001, "Wrong alinment on CollisionComponent_SetUseContinuousCollisionDetection");
static_assert(sizeof(CollisionComponent_SetUseContinuousCollisionDetection) == 0x000001, "Wrong size on CollisionComponent_SetUseContinuousCollisionDetection");

// Function Entity_Physics_CollisionComponent.Context_CollisionComponent_WaitBeginOverlap.Update
// 0x0004 (0x0004 - 0x0000)
struct Context_CollisionComponent_WaitBeginOverlap_Update final 
{
public:
	int32                                         RetVal;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Context_CollisionComponent_WaitBeginOverlap_Update) == 0x000004, "Wrong alinment on Context_CollisionComponent_WaitBeginOverlap_Update");
static_assert(sizeof(Context_CollisionComponent_WaitBeginOverlap_Update) == 0x000004, "Wrong size on Context_CollisionComponent_WaitBeginOverlap_Update");
static_assert(offsetof(Context_CollisionComponent_WaitBeginOverlap_Update, RetVal) == 0x000000, "Member 'Context_CollisionComponent_WaitBeginOverlap_Update::RetVal' has a wrong offset!");

// Function Entity_Physics_CollisionComponent.Context_CollisionComponent_WaitEndOverlap.Update
// 0x0004 (0x0004 - 0x0000)
struct Context_CollisionComponent_WaitEndOverlap_Update final 
{
public:
	int32                                         RetVal;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Context_CollisionComponent_WaitEndOverlap_Update) == 0x000004, "Wrong alinment on Context_CollisionComponent_WaitEndOverlap_Update");
static_assert(sizeof(Context_CollisionComponent_WaitEndOverlap_Update) == 0x000004, "Wrong size on Context_CollisionComponent_WaitEndOverlap_Update");
static_assert(offsetof(Context_CollisionComponent_WaitEndOverlap_Update, RetVal) == 0x000000, "Member 'Context_CollisionComponent_WaitEndOverlap_Update::RetVal' has a wrong offset!");

// Function Entity_Physics_CollisionComponent.Context_CollisionComponent_WaitHit.Update
// 0x0004 (0x0004 - 0x0000)
struct Context_CollisionComponent_WaitHit_Update final 
{
public:
	int32                                         RetVal;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Context_CollisionComponent_WaitHit_Update) == 0x000004, "Wrong alinment on Context_CollisionComponent_WaitHit_Update");
static_assert(sizeof(Context_CollisionComponent_WaitHit_Update) == 0x000004, "Wrong size on Context_CollisionComponent_WaitHit_Update");
static_assert(offsetof(Context_CollisionComponent_WaitHit_Update, RetVal) == 0x000000, "Member 'Context_CollisionComponent_WaitHit_Update::RetVal' has a wrong offset!");

}

