#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SubgameTile

#include "Basic.hpp"


namespace SDK::Params
{

// Function SubgameTile.SubgameTile_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SubgameTile_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SubgameTile_C_PreConstruct) == 0x000001, "Wrong alinment on SubgameTile_C_PreConstruct");
static_assert(sizeof(SubgameTile_C_PreConstruct) == 0x000001, "Wrong size on SubgameTile_C_PreConstruct");
static_assert(offsetof(SubgameTile_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SubgameTile_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function SubgameTile.SubgameTile_C.ExecuteUbergraph_SubgameTile
// 0x0080 (0x0080 - 0x0000)
struct SubgameTile_C_ExecuteUbergraph_SubgameTile final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_544A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_544B[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_1;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue_2;       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue_1;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue_2;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_2;       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetEndTime_ReturnValue_3;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_544C[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SubgameTile_C_ExecuteUbergraph_SubgameTile) == 0x000008, "Wrong alinment on SubgameTile_C_ExecuteUbergraph_SubgameTile");
static_assert(sizeof(SubgameTile_C_ExecuteUbergraph_SubgameTile) == 0x000080, "Wrong size on SubgameTile_C_ExecuteUbergraph_SubgameTile");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, EntryPoint) == 0x000000, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::EntryPoint' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000010, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_GetEndTime_ReturnValue) == 0x000018, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_GetEndTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, K2Node_Event_IsDesignTime) == 0x00001C, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_PlayAnimation_ReturnValue) == 0x000020, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x000028, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_PlayAnimationReverse_ReturnValue_1) == 0x000030, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_PlayAnimationReverse_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_PlayAnimationReverse_ReturnValue_2) == 0x000038, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_PlayAnimationReverse_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_GetEndTime_ReturnValue_1) == 0x000040, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_GetEndTime_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_GetEndTime_ReturnValue_2) == 0x000044, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_GetEndTime_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_PlayAnimation_ReturnValue_1) == 0x000048, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_PlayAnimation_ReturnValue_2) == 0x000050, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_PlayAnimationForward_ReturnValue_2) == 0x000058, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_PlayAnimationForward_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_GetEndTime_ReturnValue_3) == 0x000060, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_GetEndTime_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_PlayAnimation_ReturnValue_3) == 0x000068, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000070, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(SubgameTile_C_ExecuteUbergraph_SubgameTile, CallFunc_PlayAnimation_ReturnValue_4) == 0x000078, "Member 'SubgameTile_C_ExecuteUbergraph_SubgameTile::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");

}

