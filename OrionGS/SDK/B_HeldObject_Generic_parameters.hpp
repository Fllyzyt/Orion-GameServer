#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_HeldObject_Generic

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_HeldObject_Generic.B_HeldObject_Generic_C.ExecuteUbergraph_B_HeldObject_Generic
// 0x0058 (0x0058 - 0x0000)
struct B_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FA8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetAttachedActors_OutActors;              // 0x0010(0x0010)(ReferenceParm, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_FilterArray_FilteredArray;                // 0x0020(0x0010)(ReferenceParm, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_HeldObject_Parent_C*                 K2Node_DynamicCast_AsB_Held_Object_Parent;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FA9[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentScale_ReturnValue;         // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic) == 0x000008, "Wrong alinment on B_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic");
static_assert(sizeof(B_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic) == 0x000058, "Wrong size on B_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic");
static_assert(offsetof(B_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic, EntryPoint) == 0x000000, "Member 'B_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic, CallFunc_GetInstigator_ReturnValue) == 0x000008, "Member 'B_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic, CallFunc_GetAttachedActors_OutActors) == 0x000010, "Member 'B_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic::CallFunc_GetAttachedActors_OutActors' has a wrong offset!");
static_assert(offsetof(B_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic, CallFunc_FilterArray_FilteredArray) == 0x000020, "Member 'B_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic::CallFunc_FilterArray_FilteredArray' has a wrong offset!");
static_assert(offsetof(B_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic, CallFunc_Array_Get_Item) == 0x000030, "Member 'B_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic, K2Node_DynamicCast_AsB_Held_Object_Parent) == 0x000038, "Member 'B_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic::K2Node_DynamicCast_AsB_Held_Object_Parent' has a wrong offset!");
static_assert(offsetof(B_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'B_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic, CallFunc_K2_GetComponentScale_ReturnValue) == 0x000044, "Member 'B_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic::CallFunc_K2_GetComponentScale_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic, CallFunc_SetStaticMesh_ReturnValue) == 0x000050, "Member 'B_HeldObject_Generic_C_ExecuteUbergraph_B_HeldObject_Generic::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");

}

