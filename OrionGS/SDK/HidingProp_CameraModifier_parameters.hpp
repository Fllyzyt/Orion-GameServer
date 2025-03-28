#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HidingProp_CameraModifier

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function HidingProp_CameraModifier.HidingProp_CameraModifier_C.BlueprintModifyCamera
// 0x0074 (0x0074 - 0x0000)
struct HidingProp_CameraModifier_C_BlueprintModifyCamera final 
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ViewLocation;                                      // 0x0004(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ViewRotation;                                      // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         FOV;                                               // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NewViewLocation;                                   // 0x0020(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               NewViewRotation;                                   // 0x002C(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         NewFOV;                                            // 0x0038(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HidingProp_CameraModifier_C_BlueprintModifyCamera) == 0x000004, "Wrong alinment on HidingProp_CameraModifier_C_BlueprintModifyCamera");
static_assert(sizeof(HidingProp_CameraModifier_C_BlueprintModifyCamera) == 0x000074, "Wrong size on HidingProp_CameraModifier_C_BlueprintModifyCamera");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, DeltaTime) == 0x000000, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::DeltaTime' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, ViewLocation) == 0x000004, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::ViewLocation' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, ViewRotation) == 0x000010, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::ViewRotation' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, FOV) == 0x00001C, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::FOV' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, NewViewLocation) == 0x000020, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::NewViewLocation' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, NewViewRotation) == 0x00002C, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::NewViewRotation' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, NewFOV) == 0x000038, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::NewFOV' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, CallFunc_BreakVector_X) == 0x00003C, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, CallFunc_BreakVector_Y) == 0x000040, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, CallFunc_BreakVector_Z) == 0x000044, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000048, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, CallFunc_BreakVector_X_1) == 0x000054, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, CallFunc_BreakVector_Y_1) == 0x000058, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, CallFunc_BreakVector_Z_1) == 0x00005C, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, CallFunc_Add_FloatFloat_ReturnValue) == 0x000060, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, CallFunc_FClamp_ReturnValue) == 0x000064, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(HidingProp_CameraModifier_C_BlueprintModifyCamera, CallFunc_MakeVector_ReturnValue) == 0x000068, "Member 'HidingProp_CameraModifier_C_BlueprintModifyCamera::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

}

