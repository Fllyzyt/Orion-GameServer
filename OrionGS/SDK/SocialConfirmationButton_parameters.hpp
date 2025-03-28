#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialConfirmationButton

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function SocialConfirmationButton.SocialConfirmationButton_C.ExecuteUbergraph_SocialConfirmationButton
// 0x0050 (0x0050 - 0x0000)
struct SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67BE[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67BF[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x003C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton) == 0x000008, "Wrong alinment on SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton");
static_assert(sizeof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton) == 0x000050, "Wrong size on SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, EntryPoint) == 0x000000, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, Temp_bool_Variable) == 0x000004, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, Temp_struct_Variable) == 0x000008, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, Temp_struct_Variable_1) == 0x000018, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000030, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, K2Node_Event_IsDesignTime) == 0x000038, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton, K2Node_Select_Default) == 0x00003C, "Member 'SocialConfirmationButton_C_ExecuteUbergraph_SocialConfirmationButton::K2Node_Select_Default' has a wrong offset!");

// Function SocialConfirmationButton.SocialConfirmationButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SocialConfirmationButton_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SocialConfirmationButton_C_PreConstruct) == 0x000001, "Wrong alinment on SocialConfirmationButton_C_PreConstruct");
static_assert(sizeof(SocialConfirmationButton_C_PreConstruct) == 0x000001, "Wrong size on SocialConfirmationButton_C_PreConstruct");
static_assert(offsetof(SocialConfirmationButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SocialConfirmationButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

