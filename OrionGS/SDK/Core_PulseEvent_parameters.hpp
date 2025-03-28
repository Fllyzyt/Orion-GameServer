#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Core_PulseEvent

#include "Basic.hpp"


namespace SDK::Params
{

// Function Core_PulseEvent.Context_PulseEvent_wait.Update
// 0x0004 (0x0004 - 0x0000)
struct Context_PulseEvent_wait_Update final 
{
public:
	int32                                         RetVal;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Context_PulseEvent_wait_Update) == 0x000004, "Wrong alinment on Context_PulseEvent_wait_Update");
static_assert(sizeof(Context_PulseEvent_wait_Update) == 0x000004, "Wrong size on Context_PulseEvent_wait_Update");
static_assert(offsetof(Context_PulseEvent_wait_Update, RetVal) == 0x000000, "Member 'Context_PulseEvent_wait_Update::RetVal' has a wrong offset!");

// Function Core_PulseEvent.PulseEvent.Create
// 0x0008 (0x0008 - 0x0000)
struct PulseEvent_Create final 
{
public:
	class UPulseEvent*                            RetVal;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PulseEvent_Create) == 0x000008, "Wrong alinment on PulseEvent_Create");
static_assert(sizeof(PulseEvent_Create) == 0x000008, "Wrong size on PulseEvent_Create");
static_assert(offsetof(PulseEvent_Create, RetVal) == 0x000000, "Member 'PulseEvent_Create::RetVal' has a wrong offset!");

}

