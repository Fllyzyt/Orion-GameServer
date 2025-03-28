#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialBanModal

#include "Basic.hpp"


namespace SDK::Params
{

// Function SocialBanModal.SocialBanModal_C.ExecuteUbergraph_SocialBanModal
// 0x0038 (0x0038 - 0x0000)
struct SocialBanModal_C_ExecuteUbergraph_SocialBanModal final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67B1[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconTextButton_C*                      K2Node_DynamicCast_AsIcon_Text_Button;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67B2[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsBanned;                            // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67B3[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67B4[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UIconTextButton_C*                      K2Node_DynamicCast_AsIcon_Text_Button_1;           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SocialBanModal_C_ExecuteUbergraph_SocialBanModal) == 0x000008, "Wrong alinment on SocialBanModal_C_ExecuteUbergraph_SocialBanModal");
static_assert(sizeof(SocialBanModal_C_ExecuteUbergraph_SocialBanModal) == 0x000038, "Wrong size on SocialBanModal_C_ExecuteUbergraph_SocialBanModal");
static_assert(offsetof(SocialBanModal_C_ExecuteUbergraph_SocialBanModal, EntryPoint) == 0x000000, "Member 'SocialBanModal_C_ExecuteUbergraph_SocialBanModal::EntryPoint' has a wrong offset!");
static_assert(offsetof(SocialBanModal_C_ExecuteUbergraph_SocialBanModal, Temp_bool_Variable) == 0x000004, "Member 'SocialBanModal_C_ExecuteUbergraph_SocialBanModal::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SocialBanModal_C_ExecuteUbergraph_SocialBanModal, K2Node_DynamicCast_AsIcon_Text_Button) == 0x000008, "Member 'SocialBanModal_C_ExecuteUbergraph_SocialBanModal::K2Node_DynamicCast_AsIcon_Text_Button' has a wrong offset!");
static_assert(offsetof(SocialBanModal_C_ExecuteUbergraph_SocialBanModal, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'SocialBanModal_C_ExecuteUbergraph_SocialBanModal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SocialBanModal_C_ExecuteUbergraph_SocialBanModal, Temp_int_Variable) == 0x000014, "Member 'SocialBanModal_C_ExecuteUbergraph_SocialBanModal::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SocialBanModal_C_ExecuteUbergraph_SocialBanModal, Temp_int_Variable_1) == 0x000018, "Member 'SocialBanModal_C_ExecuteUbergraph_SocialBanModal::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(SocialBanModal_C_ExecuteUbergraph_SocialBanModal, K2Node_Event_bIsBanned) == 0x00001C, "Member 'SocialBanModal_C_ExecuteUbergraph_SocialBanModal::K2Node_Event_bIsBanned' has a wrong offset!");
static_assert(offsetof(SocialBanModal_C_ExecuteUbergraph_SocialBanModal, K2Node_Select_Default) == 0x000020, "Member 'SocialBanModal_C_ExecuteUbergraph_SocialBanModal::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SocialBanModal_C_ExecuteUbergraph_SocialBanModal, K2Node_DynamicCast_AsIcon_Text_Button_1) == 0x000028, "Member 'SocialBanModal_C_ExecuteUbergraph_SocialBanModal::K2Node_DynamicCast_AsIcon_Text_Button_1' has a wrong offset!");
static_assert(offsetof(SocialBanModal_C_ExecuteUbergraph_SocialBanModal, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'SocialBanModal_C_ExecuteUbergraph_SocialBanModal::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function SocialBanModal.SocialBanModal_C.OnDisplayModeSet
// 0x0001 (0x0001 - 0x0000)
struct SocialBanModal_C_OnDisplayModeSet final 
{
public:
	bool                                          bIsBanned;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SocialBanModal_C_OnDisplayModeSet) == 0x000001, "Wrong alinment on SocialBanModal_C_OnDisplayModeSet");
static_assert(sizeof(SocialBanModal_C_OnDisplayModeSet) == 0x000001, "Wrong size on SocialBanModal_C_OnDisplayModeSet");
static_assert(offsetof(SocialBanModal_C_OnDisplayModeSet, bIsBanned) == 0x000000, "Member 'SocialBanModal_C_OnDisplayModeSet::bIsBanned' has a wrong offset!");

}

