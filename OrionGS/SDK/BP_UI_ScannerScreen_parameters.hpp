#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UI_ScannerScreen

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ExecuteUbergraph_BP_UI_ScannerScreen
// 0x00C8 (0x00C8 - 0x0000)
struct BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;                    // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue_1;                  // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F06[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_SuccessText;                    // 0x0028(0x0018)()
	class UMaterialInstanceDynamic*               CallFunc_GetMaterialInstance_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_FailureText;                    // 0x0048(0x0018)()
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_ScannerScreen_C*                    K2Node_DynamicCast_AsUI_Scanner_Screen;            // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Reverse;                        // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F07[0x2];                                     // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0074(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6F08[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0088(0x0008)(NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_LostText;                       // 0x0090(0x0018)()
	struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x00A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_Multiply_LinearColorFloat_ReturnValue;    // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen) == 0x000008, "Wrong alinment on BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen");
static_assert(sizeof(BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen) == 0x0000C8, "Wrong size on BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen");
static_assert(offsetof(BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen, EntryPoint) == 0x000000, "Member 'BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen, CallFunc_MakeColor_ReturnValue) == 0x000004, "Member 'BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen, CallFunc_MakeColor_ReturnValue_1) == 0x000014, "Member 'BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen::CallFunc_MakeColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen, K2Node_CustomEvent_SuccessText) == 0x000028, "Member 'BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen::K2Node_CustomEvent_SuccessText' has a wrong offset!");
static_assert(offsetof(BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen, CallFunc_GetMaterialInstance_ReturnValue) == 0x000040, "Member 'BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen::CallFunc_GetMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen, K2Node_CustomEvent_FailureText) == 0x000048, "Member 'BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen::K2Node_CustomEvent_FailureText' has a wrong offset!");
static_assert(offsetof(BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000060, "Member 'BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen, K2Node_DynamicCast_AsUI_Scanner_Screen) == 0x000068, "Member 'BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen::K2Node_DynamicCast_AsUI_Scanner_Screen' has a wrong offset!");
static_assert(offsetof(BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen, K2Node_CustomEvent_Reverse) == 0x000071, "Member 'BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen::K2Node_CustomEvent_Reverse' has a wrong offset!");
static_assert(offsetof(BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen, K2Node_CreateDelegate_OutputDelegate) == 0x000074, "Member 'BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000088, "Member 'BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen, K2Node_CustomEvent_LostText) == 0x000090, "Member 'BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen::K2Node_CustomEvent_LostText' has a wrong offset!");
static_assert(offsetof(BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen, CallFunc_LinearColorLerp_ReturnValue) == 0x0000A8, "Member 'BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen::CallFunc_LinearColorLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen, CallFunc_Multiply_LinearColorFloat_ReturnValue) == 0x0000B8, "Member 'BP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen::CallFunc_Multiply_LinearColorFloat_ReturnValue' has a wrong offset!");

// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventTargetLost
// 0x0018 (0x0018 - 0x0000)
struct BP_UI_ScannerScreen_C_ScreenEventTargetLost final 
{
public:
	class FText                                   LostText;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_UI_ScannerScreen_C_ScreenEventTargetLost) == 0x000008, "Wrong alinment on BP_UI_ScannerScreen_C_ScreenEventTargetLost");
static_assert(sizeof(BP_UI_ScannerScreen_C_ScreenEventTargetLost) == 0x000018, "Wrong size on BP_UI_ScannerScreen_C_ScreenEventTargetLost");
static_assert(offsetof(BP_UI_ScannerScreen_C_ScreenEventTargetLost, LostText) == 0x000000, "Member 'BP_UI_ScannerScreen_C_ScreenEventTargetLost::LostText' has a wrong offset!");

// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventFailure
// 0x0018 (0x0018 - 0x0000)
struct BP_UI_ScannerScreen_C_ScreenEventFailure final 
{
public:
	class FText                                   FailureText;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_UI_ScannerScreen_C_ScreenEventFailure) == 0x000008, "Wrong alinment on BP_UI_ScannerScreen_C_ScreenEventFailure");
static_assert(sizeof(BP_UI_ScannerScreen_C_ScreenEventFailure) == 0x000018, "Wrong size on BP_UI_ScannerScreen_C_ScreenEventFailure");
static_assert(offsetof(BP_UI_ScannerScreen_C_ScreenEventFailure, FailureText) == 0x000000, "Member 'BP_UI_ScannerScreen_C_ScreenEventFailure::FailureText' has a wrong offset!");

// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventSuccess
// 0x0018 (0x0018 - 0x0000)
struct BP_UI_ScannerScreen_C_ScreenEventSuccess final 
{
public:
	class FText                                   SuccessText;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_UI_ScannerScreen_C_ScreenEventSuccess) == 0x000008, "Wrong alinment on BP_UI_ScannerScreen_C_ScreenEventSuccess");
static_assert(sizeof(BP_UI_ScannerScreen_C_ScreenEventSuccess) == 0x000018, "Wrong size on BP_UI_ScannerScreen_C_ScreenEventSuccess");
static_assert(offsetof(BP_UI_ScannerScreen_C_ScreenEventSuccess, SuccessText) == 0x000000, "Member 'BP_UI_ScannerScreen_C_ScreenEventSuccess::SuccessText' has a wrong offset!");

// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventError
// 0x0001 (0x0001 - 0x0000)
struct BP_UI_ScannerScreen_C_ScreenEventError final 
{
public:
	bool                                          Reverse;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UI_ScannerScreen_C_ScreenEventError) == 0x000001, "Wrong alinment on BP_UI_ScannerScreen_C_ScreenEventError");
static_assert(sizeof(BP_UI_ScannerScreen_C_ScreenEventError) == 0x000001, "Wrong size on BP_UI_ScannerScreen_C_ScreenEventError");
static_assert(offsetof(BP_UI_ScannerScreen_C_ScreenEventError, Reverse) == 0x000000, "Member 'BP_UI_ScannerScreen_C_ScreenEventError::Reverse' has a wrong offset!");

}

