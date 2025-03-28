#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaDirectAcquisitionOffer_SpecialBanner

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AthenaDirectAcquisitionOffer_SpecialBanner.AthenaDirectAcquisitionOffer_SpecialBanner_C.SetupSpecialOfferBanner
// 0x0038 (0x0038 - 0x0000)
struct AthenaDirectAcquisitionOffer_SpecialBanner_C_SetupSpecialOfferBanner final 
{
public:
	bool                                          bHasSale;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DD1[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   SaleText;                                          // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 BannerOverrideTag;                                 // 0x0020(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Param_bHasBattlePassStars;                         // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DD2[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         INumOfBattlePassStars;                             // 0x0034(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaDirectAcquisitionOffer_SpecialBanner_C_SetupSpecialOfferBanner) == 0x000008, "Wrong alinment on AthenaDirectAcquisitionOffer_SpecialBanner_C_SetupSpecialOfferBanner");
static_assert(sizeof(AthenaDirectAcquisitionOffer_SpecialBanner_C_SetupSpecialOfferBanner) == 0x000038, "Wrong size on AthenaDirectAcquisitionOffer_SpecialBanner_C_SetupSpecialOfferBanner");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_SetupSpecialOfferBanner, bHasSale) == 0x000000, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_SetupSpecialOfferBanner::bHasSale' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_SetupSpecialOfferBanner, SaleText) == 0x000008, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_SetupSpecialOfferBanner::SaleText' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_SetupSpecialOfferBanner, BannerOverrideTag) == 0x000020, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_SetupSpecialOfferBanner::BannerOverrideTag' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_SetupSpecialOfferBanner, Param_bHasBattlePassStars) == 0x000030, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_SetupSpecialOfferBanner::Param_bHasBattlePassStars' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_SetupSpecialOfferBanner, INumOfBattlePassStars) == 0x000034, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_SetupSpecialOfferBanner::INumOfBattlePassStars' has a wrong offset!");

// Function AthenaDirectAcquisitionOffer_SpecialBanner.AthenaDirectAcquisitionOffer_SpecialBanner_C.ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner
// 0x01A0 (0x01A0 - 0x0000)
struct AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         Temp_float_Variable;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TextIsEmpty_ReturnValue_1;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DD3[0x5];                                     // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ReferenceParm, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DD4[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0090(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x00A8(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bHasSale;                       // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DD5[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_SaleText;                       // 0x00C8(0x0018)()
	class FString                                 K2Node_CustomEvent_BannerOverrideTag;              // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bHasBattlePassStars;            // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DD6[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_iNumOfBattlePassStars;          // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable_1;                              // 0x00F8(0x0018)()
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x0110(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_3;                           // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x011C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DD7[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Map_Find_Value;                           // 0x0130(0x0018)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5DD8[0x6];                                     // 0x014A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_4;                           // 0x0150(0x0018)()
	class FText                                   K2Node_Select_Default_5;                           // 0x0168(0x0018)()
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0180(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x019A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x019B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner) == 0x000008, "Wrong alinment on AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner");
static_assert(sizeof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner) == 0x0001A0, "Wrong size on AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, EntryPoint) == 0x000000, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, Temp_byte_Variable) == 0x000004, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, CallFunc_TextIsEmpty_ReturnValue) == 0x000005, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, Temp_byte_Variable_1) == 0x000006, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, Temp_bool_Variable) == 0x000007, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, Temp_text_Variable) == 0x000008, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, Temp_bool_Variable_1) == 0x000020, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, Temp_byte_Variable_2) == 0x000021, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, Temp_byte_Variable_3) == 0x000022, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, Temp_bool_Variable_2) == 0x000023, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, Temp_float_Variable) == 0x000024, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, Temp_float_Variable_1) == 0x000028, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, Temp_bool_Variable_3) == 0x00002C, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x00002D, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, CallFunc_EqualEqual_BoolBool_ReturnValue_1) == 0x00002E, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::CallFunc_EqualEqual_BoolBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, CallFunc_BooleanAND_ReturnValue) == 0x00002F, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, CallFunc_TextIsEmpty_ReturnValue_1) == 0x000030, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::CallFunc_TextIsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, K2Node_Select_Default) == 0x000031, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, CallFunc_Greater_IntInt_ReturnValue) == 0x000032, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, K2Node_MakeArray_Array) == 0x000078, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, Temp_bool_Variable_4) == 0x000088, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, CallFunc_Format_ReturnValue) == 0x000090, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, K2Node_Select_Default_1) == 0x0000A8, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, K2Node_Select_Default_2) == 0x0000C0, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, K2Node_CustomEvent_bHasSale) == 0x0000C1, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::K2Node_CustomEvent_bHasSale' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, K2Node_CustomEvent_SaleText) == 0x0000C8, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::K2Node_CustomEvent_SaleText' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, K2Node_CustomEvent_BannerOverrideTag) == 0x0000E0, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::K2Node_CustomEvent_BannerOverrideTag' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, K2Node_CustomEvent_bHasBattlePassStars) == 0x0000F0, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::K2Node_CustomEvent_bHasBattlePassStars' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, K2Node_CustomEvent_iNumOfBattlePassStars) == 0x0000F4, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::K2Node_CustomEvent_iNumOfBattlePassStars' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, Temp_text_Variable_1) == 0x0000F8, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, CallFunc_SlotAsVerticalBoxSlot_ReturnValue) == 0x000110, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::CallFunc_SlotAsVerticalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, K2Node_Select_Default_3) == 0x000118, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, K2Node_MakeStruct_Margin) == 0x00011C, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, CallFunc_Map_Find_Value) == 0x000130, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, CallFunc_Map_Find_ReturnValue) == 0x000148, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, Temp_bool_Variable_5) == 0x000149, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, K2Node_Select_Default_4) == 0x000150, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, K2Node_Select_Default_5) == 0x000168, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, CallFunc_TextToUpper_ReturnValue) == 0x000180, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, CallFunc_BooleanAND_ReturnValue_1) == 0x000198, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, CallFunc_BooleanAND_ReturnValue_2) == 0x000199, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, CallFunc_BooleanOR_ReturnValue) == 0x00019A, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, CallFunc_Not_PreBool_ReturnValue) == 0x00019B, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner, CallFunc_BooleanAND_ReturnValue_3) == 0x00019C, "Member 'AthenaDirectAcquisitionOffer_SpecialBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SpecialBanner::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");

}

