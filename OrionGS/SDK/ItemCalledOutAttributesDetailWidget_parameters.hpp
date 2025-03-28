#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemCalledOutAttributesDetailWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.Clear Stats
// 0x0020 (0x0020 - 0x0000)
struct ItemCalledOutAttributesDetailWidget_C_Clear_Stats final 
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7123[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStatsListItemWIdget_C*                 CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemCalledOutAttributesDetailWidget_C_Clear_Stats) == 0x000008, "Wrong alinment on ItemCalledOutAttributesDetailWidget_C_Clear_Stats");
static_assert(sizeof(ItemCalledOutAttributesDetailWidget_C_Clear_Stats) == 0x000020, "Wrong size on ItemCalledOutAttributesDetailWidget_C_Clear_Stats");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_Clear_Stats, Temp_int_Array_Index_Variable) == 0x000000, "Member 'ItemCalledOutAttributesDetailWidget_C_Clear_Stats::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_Clear_Stats, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'ItemCalledOutAttributesDetailWidget_C_Clear_Stats::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_Clear_Stats, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'ItemCalledOutAttributesDetailWidget_C_Clear_Stats::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_Clear_Stats, CallFunc_Array_Get_Item) == 0x000010, "Member 'ItemCalledOutAttributesDetailWidget_C_Clear_Stats::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_Clear_Stats, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'ItemCalledOutAttributesDetailWidget_C_Clear_Stats::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_Clear_Stats, CallFunc_Less_IntInt_ReturnValue) == 0x00001C, "Member 'ItemCalledOutAttributesDetailWidget_C_Clear_Stats::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.UpdateStats
// 0x0190 (0x0190 - 0x0000)
struct ItemCalledOutAttributesDetailWidget_C_UpdateStats final 
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7124[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x001C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStatsListItemWIdget_C*                 CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFortDisplayAttribute>          CallFunc_GetDisplayAttributesToCallOut_Attributes; // 0x0040(0x0010)(ReferenceParm, HasGetValueTypeHash)
	class UStatsListItemWIdget_C*                 CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortDisplayAttribute                  CallFunc_Array_Get_Item_1;                         // 0x0058(0x0088)()
	class UWrapBoxSlot*                           CallFunc_AddChildToWrapBox_ReturnValue;            // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7125[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortDisplayAttribute                  CallFunc_Array_Get_Item_2;                         // 0x00F0(0x0088)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7126[0x3];                                     // 0x017D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7127[0x3];                                     // 0x0185(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemCalledOutAttributesDetailWidget_C_UpdateStats) == 0x000008, "Wrong alinment on ItemCalledOutAttributesDetailWidget_C_UpdateStats");
static_assert(sizeof(ItemCalledOutAttributesDetailWidget_C_UpdateStats) == 0x000190, "Wrong size on ItemCalledOutAttributesDetailWidget_C_UpdateStats");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_UpdateStats, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'ItemCalledOutAttributesDetailWidget_C_UpdateStats::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_UpdateStats, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'ItemCalledOutAttributesDetailWidget_C_UpdateStats::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_UpdateStats, Temp_int_Array_Index_Variable) == 0x000008, "Member 'ItemCalledOutAttributesDetailWidget_C_UpdateStats::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_UpdateStats, Temp_int_Loop_Counter_Variable_1) == 0x00000C, "Member 'ItemCalledOutAttributesDetailWidget_C_UpdateStats::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_UpdateStats, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'ItemCalledOutAttributesDetailWidget_C_UpdateStats::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_UpdateStats, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'ItemCalledOutAttributesDetailWidget_C_UpdateStats::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_UpdateStats, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'ItemCalledOutAttributesDetailWidget_C_UpdateStats::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_UpdateStats, K2Node_MakeStruct_Margin) == 0x00001C, "Member 'ItemCalledOutAttributesDetailWidget_C_UpdateStats::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_UpdateStats, Temp_int_Array_Index_Variable_1) == 0x00002C, "Member 'ItemCalledOutAttributesDetailWidget_C_UpdateStats::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_UpdateStats, CallFunc_Array_Get_Item) == 0x000030, "Member 'ItemCalledOutAttributesDetailWidget_C_UpdateStats::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_UpdateStats, CallFunc_GetOwningPlayer_ReturnValue) == 0x000038, "Member 'ItemCalledOutAttributesDetailWidget_C_UpdateStats::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_UpdateStats, CallFunc_GetDisplayAttributesToCallOut_Attributes) == 0x000040, "Member 'ItemCalledOutAttributesDetailWidget_C_UpdateStats::CallFunc_GetDisplayAttributesToCallOut_Attributes' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_UpdateStats, CallFunc_Create_ReturnValue) == 0x000050, "Member 'ItemCalledOutAttributesDetailWidget_C_UpdateStats::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_UpdateStats, CallFunc_Array_Get_Item_1) == 0x000058, "Member 'ItemCalledOutAttributesDetailWidget_C_UpdateStats::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_UpdateStats, CallFunc_AddChildToWrapBox_ReturnValue) == 0x0000E0, "Member 'ItemCalledOutAttributesDetailWidget_C_UpdateStats::CallFunc_AddChildToWrapBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_UpdateStats, CallFunc_Array_Add_ReturnValue) == 0x0000E8, "Member 'ItemCalledOutAttributesDetailWidget_C_UpdateStats::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_UpdateStats, CallFunc_Array_Get_Item_2) == 0x0000F0, "Member 'ItemCalledOutAttributesDetailWidget_C_UpdateStats::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_UpdateStats, CallFunc_Array_Length_ReturnValue_1) == 0x000178, "Member 'ItemCalledOutAttributesDetailWidget_C_UpdateStats::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_UpdateStats, CallFunc_Less_IntInt_ReturnValue) == 0x00017C, "Member 'ItemCalledOutAttributesDetailWidget_C_UpdateStats::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_UpdateStats, CallFunc_Array_Length_ReturnValue_2) == 0x000180, "Member 'ItemCalledOutAttributesDetailWidget_C_UpdateStats::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_UpdateStats, CallFunc_Less_IntInt_ReturnValue_1) == 0x000184, "Member 'ItemCalledOutAttributesDetailWidget_C_UpdateStats::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_UpdateStats, CallFunc_Array_Length_ReturnValue_3) == 0x000188, "Member 'ItemCalledOutAttributesDetailWidget_C_UpdateStats::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_UpdateStats, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00018C, "Member 'ItemCalledOutAttributesDetailWidget_C_UpdateStats::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.GetDisplayAttributesToCallOut
// 0x0188 (0x0188 - 0x0000)
struct ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut final 
{
public:
	TArray<struct FFortDisplayAttribute>          Attributes;                                        // 0x0000(0x0010)(Parm, OutParm, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                   Tokens;                                            // 0x0010(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FFortDisplayAttribute>          Results;                                           // 0x0020(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                   K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ReferenceParm, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7128[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7129[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FGameplayTag>                   K2Node_MakeArray_Array_1;                          // 0x0050(0x0010)(ReferenceParm, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                   K2Node_MakeArray_Array_2;                          // 0x0060(0x0010)(ReferenceParm, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;       // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_712A[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       CallFunc_GetGameAccountId_ReturnValue;             // 0x0088(0x0028)(HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_Array_Get_Item;                           // 0x00B0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                    CallFunc_SpawnTooltipContextWithNetID_ReturnValue; // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_712B[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_712C[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortDisplayAttribute                  CallFunc_GetTooltipStat_OutDisplayAttribute;       // 0x00E0(0x0088)()
	bool                                          CallFunc_GetTooltipStat_ReturnValue;               // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_712D[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemDefinition*                    CallFunc_GetSchematicCraftingResultBP_ReturnValue; // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortItemType                                 CallFunc_GetSchematicResultType_ReturnValue;       // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortItemType                                 CallFunc_GetType_ReturnValue;                      // 0x017A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_712E[0x1];                                     // 0x017B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortItemType                                 K2Node_Select_Default;                             // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut) == 0x000008, "Wrong alinment on ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut");
static_assert(sizeof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut) == 0x000188, "Wrong size on ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, Attributes) == 0x000000, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::Attributes' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, Tokens) == 0x000010, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::Tokens' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, Results) == 0x000020, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::Results' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, K2Node_MakeArray_Array) == 0x000030, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, CallFunc_Greater_IntInt_ReturnValue) == 0x000044, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, Temp_int_Array_Index_Variable) == 0x000048, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, K2Node_MakeArray_Array_1) == 0x000050, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, K2Node_MakeArray_Array_2) == 0x000060, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, CallFunc_GetOwningPlayer_ReturnValue) == 0x000070, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000078, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, K2Node_DynamicCast_bSuccess) == 0x000080, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, CallFunc_GetGameAccountId_ReturnValue) == 0x000088, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::CallFunc_GetGameAccountId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, CallFunc_Array_Get_Item) == 0x0000B0, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, CallFunc_SpawnTooltipContextWithNetID_ReturnValue) == 0x0000B8, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::CallFunc_SpawnTooltipContextWithNetID_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, CallFunc_Array_Length_ReturnValue_1) == 0x0000C0, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, Temp_int_Loop_Counter_Variable) == 0x0000C4, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, CallFunc_Less_IntInt_ReturnValue) == 0x0000C8, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, CallFunc_Add_IntInt_ReturnValue) == 0x0000CC, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, CallFunc_GetContext_ReturnValue) == 0x0000D0, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, Temp_bool_Variable) == 0x0000D8, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, CallFunc_GetTooltipStat_OutDisplayAttribute) == 0x0000E0, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::CallFunc_GetTooltipStat_OutDisplayAttribute' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, CallFunc_GetTooltipStat_ReturnValue) == 0x000168, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::CallFunc_GetTooltipStat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, CallFunc_GetSchematicCraftingResultBP_ReturnValue) == 0x000170, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::CallFunc_GetSchematicCraftingResultBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, CallFunc_GetSchematicResultType_ReturnValue) == 0x000178, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::CallFunc_GetSchematicResultType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, CallFunc_IsValid_ReturnValue) == 0x000179, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, CallFunc_GetType_ReturnValue) == 0x00017A, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::CallFunc_GetType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, CallFunc_Array_Add_ReturnValue) == 0x00017C, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, K2Node_Select_Default) == 0x000180, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut, K2Node_SwitchEnum_CmpSuccess) == 0x000181, "Member 'ItemCalledOutAttributesDetailWidget_C_GetDisplayAttributesToCallOut::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function ItemCalledOutAttributesDetailWidget.ItemCalledOutAttributesDetailWidget_C.ExecuteUbergraph_ItemCalledOutAttributesDetailWidget
// 0x0038 (0x0038 - 0x0000)
struct ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortItemType                                 CallFunc_GetSchematicResultType_ReturnValue;       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortItemType                                 CallFunc_GetType_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_712F[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortItemDefinition*                    CallFunc_GetSchematicCraftingResultBP_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortItemType                                 K2Node_Select_Default;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7130[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EFortItemType>                         K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget) == 0x000008, "Wrong alinment on ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget");
static_assert(sizeof(ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget) == 0x000038, "Wrong size on ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget, EntryPoint) == 0x000000, "Member 'ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget, Temp_byte_Variable) == 0x000004, "Member 'ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget, Temp_bool_Variable) == 0x000005, "Member 'ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget, Temp_byte_Variable_1) == 0x000006, "Member 'ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget, CallFunc_IsValid_ReturnValue) == 0x000007, "Member 'ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget, CallFunc_GetSchematicResultType_ReturnValue) == 0x000008, "Member 'ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget::CallFunc_GetSchematicResultType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget, CallFunc_GetType_ReturnValue) == 0x000009, "Member 'ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget::CallFunc_GetType_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget, CallFunc_GetSchematicCraftingResultBP_ReturnValue) == 0x000010, "Member 'ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget::CallFunc_GetSchematicCraftingResultBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget, K2Node_Select_Default) == 0x000019, "Member 'ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget, K2Node_MakeArray_Array) == 0x000020, "Member 'ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget, Temp_bool_Variable_1) == 0x000030, "Member 'ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget, CallFunc_Array_Contains_ReturnValue) == 0x000031, "Member 'ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget, K2Node_Select_Default_1) == 0x000032, "Member 'ItemCalledOutAttributesDetailWidget_C_ExecuteUbergraph_ItemCalledOutAttributesDetailWidget::K2Node_Select_Default_1' has a wrong offset!");

}

