#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Background_Raytracing

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_Background_Raytracing.BP_Background_Raytracing_C.UserConstructionScript
// 0x0030 (0x0030 - 0x0000)
struct BP_Background_Raytracing_C_UserConstructionScript final 
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77A4[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_77A5[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Background_Raytracing_C_UserConstructionScript) == 0x000008, "Wrong alinment on BP_Background_Raytracing_C_UserConstructionScript");
static_assert(sizeof(BP_Background_Raytracing_C_UserConstructionScript) == 0x000030, "Wrong size on BP_Background_Raytracing_C_UserConstructionScript");
static_assert(offsetof(BP_Background_Raytracing_C_UserConstructionScript, Temp_bool_Variable) == 0x000000, "Member 'BP_Background_Raytracing_C_UserConstructionScript::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_Background_Raytracing_C_UserConstructionScript, Temp_object_Variable) == 0x000008, "Member 'BP_Background_Raytracing_C_UserConstructionScript::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(BP_Background_Raytracing_C_UserConstructionScript, Temp_object_Variable_1) == 0x000010, "Member 'BP_Background_Raytracing_C_UserConstructionScript::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Background_Raytracing_C_UserConstructionScript, K2Node_Select_Default) == 0x000018, "Member 'BP_Background_Raytracing_C_UserConstructionScript::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_Background_Raytracing_C_UserConstructionScript, CallFunc_SetStaticMesh_ReturnValue) == 0x000020, "Member 'BP_Background_Raytracing_C_UserConstructionScript::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Background_Raytracing_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000028, "Member 'BP_Background_Raytracing_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");

}

