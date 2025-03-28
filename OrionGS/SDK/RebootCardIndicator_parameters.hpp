#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RebootCardIndicator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function RebootCardIndicator.RebootCardIndicator_C.ExecuteUbergraph_RebootCardIndicator
// 0x0060 (0x0060 - 0x0000)
struct RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C03[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C04[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_StartTimeLocalWorld;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_EndTimeLocalWorld;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C05[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bSelf;                                // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C06[0x1];                                     // 0x004B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_2;        // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C07[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator) == 0x000008, "Wrong alinment on RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator");
static_assert(sizeof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator) == 0x000060, "Wrong size on RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, EntryPoint) == 0x000000, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::EntryPoint' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, Temp_byte_Variable) == 0x000004, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, Temp_float_Variable) == 0x000008, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, Temp_bool_Variable) == 0x00000C, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, K2Node_Event_StartTimeLocalWorld) == 0x000010, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::K2Node_Event_StartTimeLocalWorld' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, K2Node_Event_EndTimeLocalWorld) == 0x000014, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::K2Node_Event_EndTimeLocalWorld' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000028, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000030, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000034, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000038, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, CallFunc_PlayAnimation_ReturnValue) == 0x000040, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000048, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, K2Node_Event_bSelf) == 0x000049, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::K2Node_Event_bSelf' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, Temp_byte_Variable_1) == 0x00004A, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, CallFunc_Subtract_FloatFloat_ReturnValue_2) == 0x00004C, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::CallFunc_Subtract_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, K2Node_Select_Default) == 0x000050, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, CallFunc_FTrunc_ReturnValue) == 0x000054, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000058, "Member 'RebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function RebootCardIndicator.RebootCardIndicator_C.HandleDisplayForSelf
// 0x0001 (0x0001 - 0x0000)
struct RebootCardIndicator_C_HandleDisplayForSelf final 
{
public:
	bool                                          bSelf;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RebootCardIndicator_C_HandleDisplayForSelf) == 0x000001, "Wrong alinment on RebootCardIndicator_C_HandleDisplayForSelf");
static_assert(sizeof(RebootCardIndicator_C_HandleDisplayForSelf) == 0x000001, "Wrong size on RebootCardIndicator_C_HandleDisplayForSelf");
static_assert(offsetof(RebootCardIndicator_C_HandleDisplayForSelf, bSelf) == 0x000000, "Member 'RebootCardIndicator_C_HandleDisplayForSelf::bSelf' has a wrong offset!");

// Function RebootCardIndicator.RebootCardIndicator_C.SetupCountdown
// 0x0008 (0x0008 - 0x0000)
struct RebootCardIndicator_C_SetupCountdown final 
{
public:
	float                                         StartTimeLocalWorld;                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EndTimeLocalWorld;                                 // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RebootCardIndicator_C_SetupCountdown) == 0x000004, "Wrong alinment on RebootCardIndicator_C_SetupCountdown");
static_assert(sizeof(RebootCardIndicator_C_SetupCountdown) == 0x000008, "Wrong size on RebootCardIndicator_C_SetupCountdown");
static_assert(offsetof(RebootCardIndicator_C_SetupCountdown, StartTimeLocalWorld) == 0x000000, "Member 'RebootCardIndicator_C_SetupCountdown::StartTimeLocalWorld' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_SetupCountdown, EndTimeLocalWorld) == 0x000004, "Member 'RebootCardIndicator_C_SetupCountdown::EndTimeLocalWorld' has a wrong offset!");

// Function RebootCardIndicator.RebootCardIndicator_C.bp_UpdateCountdownText
// 0x0090 (0x0090 - 0x0000)
struct RebootCardIndicator_C_bp_UpdateCountdownText final 
{
public:
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C08[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ReferenceParm, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0078(0x0018)()
};
static_assert(alignof(RebootCardIndicator_C_bp_UpdateCountdownText) == 0x000008, "Wrong alinment on RebootCardIndicator_C_bp_UpdateCountdownText");
static_assert(sizeof(RebootCardIndicator_C_bp_UpdateCountdownText) == 0x000090, "Wrong size on RebootCardIndicator_C_bp_UpdateCountdownText");
static_assert(offsetof(RebootCardIndicator_C_bp_UpdateCountdownText, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000000, "Member 'RebootCardIndicator_C_bp_UpdateCountdownText::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_bp_UpdateCountdownText, CallFunc_FTrunc_ReturnValue) == 0x000004, "Member 'RebootCardIndicator_C_bp_UpdateCountdownText::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_bp_UpdateCountdownText, CallFunc_Max_ReturnValue) == 0x000008, "Member 'RebootCardIndicator_C_bp_UpdateCountdownText::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_bp_UpdateCountdownText, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'RebootCardIndicator_C_bp_UpdateCountdownText::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_bp_UpdateCountdownText, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'RebootCardIndicator_C_bp_UpdateCountdownText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_bp_UpdateCountdownText, K2Node_MakeArray_Array) == 0x000068, "Member 'RebootCardIndicator_C_bp_UpdateCountdownText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(RebootCardIndicator_C_bp_UpdateCountdownText, CallFunc_Format_ReturnValue) == 0x000078, "Member 'RebootCardIndicator_C_bp_UpdateCountdownText::CallFunc_Format_ReturnValue' has a wrong offset!");

}

