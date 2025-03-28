#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PawnHighlight

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct PawnHighlight.PawnHighlight
// 0x0030 (0x0030 - 0x0000)
struct FPawnHighlight final 
{
public:
	float                                         Priority_28_E2E1B5344846E187B9C11B863A7F0698;      // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Inner_21_4CC2801147EA190DE16F59B34F36853E;         // 0x0004(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Outer_22_5A1D7D0543D303E8B54B66A7F7BD2E2E;         // 0x0014(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FresnelBrightness_23_52B0F96447FF640F47DF2895B0602E92; // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FresnelExponent_24_B427CF0C441AA37ED49833BF7579DE6D; // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UsesPulse_25_E29229F64E540F0617E4C4987AD77605;     // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FPawnHighlight) == 0x000004, "Wrong alinment on FPawnHighlight");
static_assert(sizeof(FPawnHighlight) == 0x000030, "Wrong size on FPawnHighlight");
static_assert(offsetof(FPawnHighlight, Priority_28_E2E1B5344846E187B9C11B863A7F0698) == 0x000000, "Member 'FPawnHighlight::Priority_28_E2E1B5344846E187B9C11B863A7F0698' has a wrong offset!");
static_assert(offsetof(FPawnHighlight, Inner_21_4CC2801147EA190DE16F59B34F36853E) == 0x000004, "Member 'FPawnHighlight::Inner_21_4CC2801147EA190DE16F59B34F36853E' has a wrong offset!");
static_assert(offsetof(FPawnHighlight, Outer_22_5A1D7D0543D303E8B54B66A7F7BD2E2E) == 0x000014, "Member 'FPawnHighlight::Outer_22_5A1D7D0543D303E8B54B66A7F7BD2E2E' has a wrong offset!");
static_assert(offsetof(FPawnHighlight, FresnelBrightness_23_52B0F96447FF640F47DF2895B0602E92) == 0x000024, "Member 'FPawnHighlight::FresnelBrightness_23_52B0F96447FF640F47DF2895B0602E92' has a wrong offset!");
static_assert(offsetof(FPawnHighlight, FresnelExponent_24_B427CF0C441AA37ED49833BF7579DE6D) == 0x000028, "Member 'FPawnHighlight::FresnelExponent_24_B427CF0C441AA37ED49833BF7579DE6D' has a wrong offset!");
static_assert(offsetof(FPawnHighlight, UsesPulse_25_E29229F64E540F0617E4C4987AD77605) == 0x00002C, "Member 'FPawnHighlight::UsesPulse_25_E29229F64E540F0617E4C4987AD77605' has a wrong offset!");

}

