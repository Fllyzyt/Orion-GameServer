#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HousepartyWelcomeToast

#include "Basic.hpp"


namespace SDK::Params
{

// Function HousepartyWelcomeToast.HousepartyWelcomeToast_C.OnSetToast
// 0x0008 (0x0008 - 0x0000)
struct HousepartyWelcomeToast_C_OnSetToast final 
{
public:
	class UFortUINotification*                    ToastNotification;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HousepartyWelcomeToast_C_OnSetToast) == 0x000008, "Wrong alinment on HousepartyWelcomeToast_C_OnSetToast");
static_assert(sizeof(HousepartyWelcomeToast_C_OnSetToast) == 0x000008, "Wrong size on HousepartyWelcomeToast_C_OnSetToast");
static_assert(offsetof(HousepartyWelcomeToast_C_OnSetToast, ToastNotification) == 0x000000, "Member 'HousepartyWelcomeToast_C_OnSetToast::ToastNotification' has a wrong offset!");

// Function HousepartyWelcomeToast.HousepartyWelcomeToast_C.ExecuteUbergraph_HousepartyWelcomeToast
// 0x0010 (0x0010 - 0x0000)
struct HousepartyWelcomeToast_C_ExecuteUbergraph_HousepartyWelcomeToast final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_792E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUINotification*                    K2Node_Event_ToastNotification;                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HousepartyWelcomeToast_C_ExecuteUbergraph_HousepartyWelcomeToast) == 0x000008, "Wrong alinment on HousepartyWelcomeToast_C_ExecuteUbergraph_HousepartyWelcomeToast");
static_assert(sizeof(HousepartyWelcomeToast_C_ExecuteUbergraph_HousepartyWelcomeToast) == 0x000010, "Wrong size on HousepartyWelcomeToast_C_ExecuteUbergraph_HousepartyWelcomeToast");
static_assert(offsetof(HousepartyWelcomeToast_C_ExecuteUbergraph_HousepartyWelcomeToast, EntryPoint) == 0x000000, "Member 'HousepartyWelcomeToast_C_ExecuteUbergraph_HousepartyWelcomeToast::EntryPoint' has a wrong offset!");
static_assert(offsetof(HousepartyWelcomeToast_C_ExecuteUbergraph_HousepartyWelcomeToast, K2Node_Event_ToastNotification) == 0x000008, "Member 'HousepartyWelcomeToast_C_ExecuteUbergraph_HousepartyWelcomeToast::K2Node_Event_ToastNotification' has a wrong offset!");

}

