#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveStreamAnimation

#include "Basic.hpp"


namespace SDK
{

// Enum LiveStreamAnimation.ELiveStreamAnimationRole
// NumValues: 0x0004
enum class ELiveStreamAnimationRole : uint8
{
	Proxy                                    = 0,
	Processor                                = 1,
	Tracker                                  = 2,
	ELiveStreamAnimationRole_MAX             = 3,
};

// ScriptStruct LiveStreamAnimation.LiveStreamAnimationHandleWrapper
// 0x0008 (0x0008 - 0x0000)
struct FLiveStreamAnimationHandleWrapper final 
{
public:
	class FName                                   Handle;                                            // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLiveStreamAnimationHandleWrapper) == 0x000004, "Wrong alinment on FLiveStreamAnimationHandleWrapper");
static_assert(sizeof(FLiveStreamAnimationHandleWrapper) == 0x000008, "Wrong size on FLiveStreamAnimationHandleWrapper");
static_assert(offsetof(FLiveStreamAnimationHandleWrapper, Handle) == 0x000000, "Member 'FLiveStreamAnimationHandleWrapper::Handle' has a wrong offset!");

}

