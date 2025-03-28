#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Diagnostics_DebugDraw

#include "Basic.hpp"

#include "Diagnostics_DebugDraw_classes.hpp"
#include "Diagnostics_DebugDraw_parameters.hpp"


namespace SDK
{

// Function Diagnostics_DebugDraw.DebugDraw.Box
// (Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          __verse_0x9866B8E7_contextObject                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVector3*                         __verse_0xAA40E940_center                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVector3*                         __verse_0xD9D96B5B_extent                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVector3*                         __verse_0xAA1ABDC9_rotation                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UColor*                           __verse_0x6E3776DD_color                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   __verse_0x2EF20D38_duration                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   __verse_0x9553AF0D_thickness                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugDraw::Box(class UObject* __verse_0x9866B8E7_contextObject, class UVector3* __verse_0xAA40E940_center, class UVector3* __verse_0xD9D96B5B_extent, class UVector3* __verse_0xAA1ABDC9_rotation, class UColor* __verse_0x6E3776DD_color, float __verse_0x2EF20D38_duration, float __verse_0x9553AF0D_thickness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DebugDraw", "Box");

	Params::DebugDraw_Box Parms{};

	Parms.__verse_0x9866B8E7_contextObject = __verse_0x9866B8E7_contextObject;
	Parms.__verse_0xAA40E940_center = __verse_0xAA40E940_center;
	Parms.__verse_0xD9D96B5B_extent = __verse_0xD9D96B5B_extent;
	Parms.__verse_0xAA1ABDC9_rotation = __verse_0xAA1ABDC9_rotation;
	Parms.__verse_0x6E3776DD_color = __verse_0x6E3776DD_color;
	Parms.__verse_0x2EF20D38_duration = __verse_0x2EF20D38_duration;
	Parms.__verse_0x9553AF0D_thickness = __verse_0x9553AF0D_thickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Diagnostics_DebugDraw.DebugDraw.Capsule
// (Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          __verse_0x9866B8E7_contextObject                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVector3*                         __verse_0xAA40E940_center                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   __verse_0xA3E3F357_halfHeight                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   __verse_0x99B14952_radius                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVector3*                         __verse_0xAA1ABDC9_rotation                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UColor*                           __verse_0x6E3776DD_color                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   __verse_0x2EF20D38_duration                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   __verse_0x9553AF0D_thickness                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugDraw::Capsule(class UObject* __verse_0x9866B8E7_contextObject, class UVector3* __verse_0xAA40E940_center, float __verse_0xA3E3F357_halfHeight, float __verse_0x99B14952_radius, class UVector3* __verse_0xAA1ABDC9_rotation, class UColor* __verse_0x6E3776DD_color, float __verse_0x2EF20D38_duration, float __verse_0x9553AF0D_thickness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DebugDraw", "Capsule");

	Params::DebugDraw_Capsule Parms{};

	Parms.__verse_0x9866B8E7_contextObject = __verse_0x9866B8E7_contextObject;
	Parms.__verse_0xAA40E940_center = __verse_0xAA40E940_center;
	Parms.__verse_0xA3E3F357_halfHeight = __verse_0xA3E3F357_halfHeight;
	Parms.__verse_0x99B14952_radius = __verse_0x99B14952_radius;
	Parms.__verse_0xAA1ABDC9_rotation = __verse_0xAA1ABDC9_rotation;
	Parms.__verse_0x6E3776DD_color = __verse_0x6E3776DD_color;
	Parms.__verse_0x2EF20D38_duration = __verse_0x2EF20D38_duration;
	Parms.__verse_0x9553AF0D_thickness = __verse_0x9553AF0D_thickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Diagnostics_DebugDraw.DebugDraw.Cone
// (Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          __verse_0x9866B8E7_contextObject                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVector3*                         __verse_0xECD57F31_origin                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVector3*                         __verse_0x8BEC05BA_direction                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   __verse_0x21F2CF57_length                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   __verse_0xC8E65238_angleWidth                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   __verse_0x2E318446_angleHeight                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   __verse_0xE2324E4F_numSegments                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UColor*                           __verse_0x6E3776DD_color                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   __verse_0x2EF20D38_duration                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   __verse_0x9553AF0D_thickness                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugDraw::Cone(class UObject* __verse_0x9866B8E7_contextObject, class UVector3* __verse_0xECD57F31_origin, class UVector3* __verse_0x8BEC05BA_direction, float __verse_0x21F2CF57_length, float __verse_0xC8E65238_angleWidth, float __verse_0x2E318446_angleHeight, float __verse_0xE2324E4F_numSegments, class UColor* __verse_0x6E3776DD_color, float __verse_0x2EF20D38_duration, float __verse_0x9553AF0D_thickness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DebugDraw", "Cone");

	Params::DebugDraw_Cone Parms{};

	Parms.__verse_0x9866B8E7_contextObject = __verse_0x9866B8E7_contextObject;
	Parms.__verse_0xECD57F31_origin = __verse_0xECD57F31_origin;
	Parms.__verse_0x8BEC05BA_direction = __verse_0x8BEC05BA_direction;
	Parms.__verse_0x21F2CF57_length = __verse_0x21F2CF57_length;
	Parms.__verse_0xC8E65238_angleWidth = __verse_0xC8E65238_angleWidth;
	Parms.__verse_0x2E318446_angleHeight = __verse_0x2E318446_angleHeight;
	Parms.__verse_0xE2324E4F_numSegments = __verse_0xE2324E4F_numSegments;
	Parms.__verse_0x6E3776DD_color = __verse_0x6E3776DD_color;
	Parms.__verse_0x2EF20D38_duration = __verse_0x2EF20D38_duration;
	Parms.__verse_0x9553AF0D_thickness = __verse_0x9553AF0D_thickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Diagnostics_DebugDraw.DebugDraw.Cylinder
// (Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          __verse_0x9866B8E7_contextObject                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVector3*                         __verse_0xA0F336DD_start                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVector3*                         __verse_0xAA0F01BA_end                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   __verse_0x99B14952_radius                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   __verse_0xE2324E4F_numSegments                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UColor*                           __verse_0x6E3776DD_color                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   __verse_0x2EF20D38_duration                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   __verse_0x9553AF0D_thickness                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugDraw::Cylinder(class UObject* __verse_0x9866B8E7_contextObject, class UVector3* __verse_0xA0F336DD_start, class UVector3* __verse_0xAA0F01BA_end, float __verse_0x99B14952_radius, float __verse_0xE2324E4F_numSegments, class UColor* __verse_0x6E3776DD_color, float __verse_0x2EF20D38_duration, float __verse_0x9553AF0D_thickness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DebugDraw", "Cylinder");

	Params::DebugDraw_Cylinder Parms{};

	Parms.__verse_0x9866B8E7_contextObject = __verse_0x9866B8E7_contextObject;
	Parms.__verse_0xA0F336DD_start = __verse_0xA0F336DD_start;
	Parms.__verse_0xAA0F01BA_end = __verse_0xAA0F01BA_end;
	Parms.__verse_0x99B14952_radius = __verse_0x99B14952_radius;
	Parms.__verse_0xE2324E4F_numSegments = __verse_0xE2324E4F_numSegments;
	Parms.__verse_0x6E3776DD_color = __verse_0x6E3776DD_color;
	Parms.__verse_0x2EF20D38_duration = __verse_0x2EF20D38_duration;
	Parms.__verse_0x9553AF0D_thickness = __verse_0x9553AF0D_thickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Diagnostics_DebugDraw.DebugDraw.Line
// (Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          __verse_0x9866B8E7_contextObject                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVector3*                         __verse_0xA0F336DD_start                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVector3*                         __verse_0xAA0F01BA_end                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UColor*                           __verse_0x6E3776DD_color                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   __verse_0x2EF20D38_duration                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   __verse_0x9553AF0D_thickness                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugDraw::Line(class UObject* __verse_0x9866B8E7_contextObject, class UVector3* __verse_0xA0F336DD_start, class UVector3* __verse_0xAA0F01BA_end, class UColor* __verse_0x6E3776DD_color, float __verse_0x2EF20D38_duration, float __verse_0x9553AF0D_thickness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DebugDraw", "Line");

	Params::DebugDraw_Line Parms{};

	Parms.__verse_0x9866B8E7_contextObject = __verse_0x9866B8E7_contextObject;
	Parms.__verse_0xA0F336DD_start = __verse_0xA0F336DD_start;
	Parms.__verse_0xAA0F01BA_end = __verse_0xAA0F01BA_end;
	Parms.__verse_0x6E3776DD_color = __verse_0x6E3776DD_color;
	Parms.__verse_0x2EF20D38_duration = __verse_0x2EF20D38_duration;
	Parms.__verse_0x9553AF0D_thickness = __verse_0x9553AF0D_thickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Diagnostics_DebugDraw.DebugDraw.Point
// (Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          __verse_0x9866B8E7_contextObject                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVector3*                         __verse_0x7AF6BB5D_position                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UColor*                           __verse_0x6E3776DD_color                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   __verse_0x2EF20D38_duration                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   __verse_0x9553AF0D_thickness                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugDraw::Point(class UObject* __verse_0x9866B8E7_contextObject, class UVector3* __verse_0x7AF6BB5D_position, class UColor* __verse_0x6E3776DD_color, float __verse_0x2EF20D38_duration, float __verse_0x9553AF0D_thickness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DebugDraw", "Point");

	Params::DebugDraw_Point Parms{};

	Parms.__verse_0x9866B8E7_contextObject = __verse_0x9866B8E7_contextObject;
	Parms.__verse_0x7AF6BB5D_position = __verse_0x7AF6BB5D_position;
	Parms.__verse_0x6E3776DD_color = __verse_0x6E3776DD_color;
	Parms.__verse_0x2EF20D38_duration = __verse_0x2EF20D38_duration;
	Parms.__verse_0x9553AF0D_thickness = __verse_0x9553AF0D_thickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Diagnostics_DebugDraw.DebugDraw.Sphere
// (Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          __verse_0x9866B8E7_contextObject                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVector3*                         __verse_0xAA40E940_center                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   __verse_0x99B14952_radius                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   __verse_0xE2324E4F_numSegments                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UColor*                           __verse_0x6E3776DD_color                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   __verse_0x2EF20D38_duration                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   __verse_0x9553AF0D_thickness                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDebugDraw::Sphere(class UObject* __verse_0x9866B8E7_contextObject, class UVector3* __verse_0xAA40E940_center, float __verse_0x99B14952_radius, float __verse_0xE2324E4F_numSegments, class UColor* __verse_0x6E3776DD_color, float __verse_0x2EF20D38_duration, float __verse_0x9553AF0D_thickness)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DebugDraw", "Sphere");

	Params::DebugDraw_Sphere Parms{};

	Parms.__verse_0x9866B8E7_contextObject = __verse_0x9866B8E7_contextObject;
	Parms.__verse_0xAA40E940_center = __verse_0xAA40E940_center;
	Parms.__verse_0x99B14952_radius = __verse_0x99B14952_radius;
	Parms.__verse_0xE2324E4F_numSegments = __verse_0xE2324E4F_numSegments;
	Parms.__verse_0x6E3776DD_color = __verse_0x6E3776DD_color;
	Parms.__verse_0x2EF20D38_duration = __verse_0x2EF20D38_duration;
	Parms.__verse_0x9553AF0D_thickness = __verse_0x9553AF0D_thickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Diagnostics_DebugDraw.DebugDraw.$InitCDO
// ()

void UDebugDraw::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugDraw", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Diagnostics_DebugDraw.DebugDraw.$InitInstance
// ()

void UDebugDraw::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DebugDraw", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

}

