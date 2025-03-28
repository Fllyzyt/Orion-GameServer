#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PurchaseUnavailable

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function PurchaseUnavailable.PurchaseUnavailable_C.OnUpdateTextStyle
// 0x0018 (0x0018 - 0x0000)
struct PurchaseUnavailable_C_OnUpdateTextStyle final 
{
public:
	class FText                                   OfferDisplayName;                                  // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PurchaseUnavailable_C_OnUpdateTextStyle) == 0x000008, "Wrong alinment on PurchaseUnavailable_C_OnUpdateTextStyle");
static_assert(sizeof(PurchaseUnavailable_C_OnUpdateTextStyle) == 0x000018, "Wrong size on PurchaseUnavailable_C_OnUpdateTextStyle");
static_assert(offsetof(PurchaseUnavailable_C_OnUpdateTextStyle, OfferDisplayName) == 0x000000, "Member 'PurchaseUnavailable_C_OnUpdateTextStyle::OfferDisplayName' has a wrong offset!");

// Function PurchaseUnavailable.PurchaseUnavailable_C.ExecuteUbergraph_PurchaseUnavailable
// 0x0088 (0x0088 - 0x0000)
struct PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6570[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Event_OfferDisplayName;                     // 0x0008(0x0018)(ConstParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0020(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0060(0x0010)(ReferenceParm, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0070(0x0018)()
};
static_assert(alignof(PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable) == 0x000008, "Wrong alinment on PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable");
static_assert(sizeof(PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable) == 0x000088, "Wrong size on PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable");
static_assert(offsetof(PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable, EntryPoint) == 0x000000, "Member 'PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable::EntryPoint' has a wrong offset!");
static_assert(offsetof(PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable, K2Node_Event_OfferDisplayName) == 0x000008, "Member 'PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable::K2Node_Event_OfferDisplayName' has a wrong offset!");
static_assert(offsetof(PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable, K2Node_MakeArray_Array) == 0x000060, "Member 'PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable, CallFunc_Format_ReturnValue) == 0x000070, "Member 'PurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable::CallFunc_Format_ReturnValue' has a wrong offset!");

}

