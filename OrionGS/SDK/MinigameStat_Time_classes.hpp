#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MinigameStat_Time

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MinigameStat_Time.MinigameStat_Time_C
// 0x0000 (0x0190 - 0x0190)
class UMinigameStat_Time_C : public UFortMinigameStatFilter
{
public:
	class FText FormatStat(int32 InCount, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool Temp_bool_Variable_1, const struct FTimespan& CallFunc_FromMilliseconds_ReturnValue, int32 CallFunc_GetHours_ReturnValue, float CallFunc_GetTotalHours_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float CallFunc_GetTotalMinutes_ReturnValue, int32 CallFunc_GetMilliseconds_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, int32 CallFunc_GetSeconds_ReturnValue, int32 CallFunc_GetMinutes_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_8, class FText CallFunc_Format_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText K2Node_Select_Default, class FText CallFunc_Format_ReturnValue_2, class FText Temp_text_Variable, bool Temp_bool_Variable_2, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2) const;
	int32 Compare(int32 FirstScore, int32 SecondScore, bool SecondIsValid, bool FirstIsValid, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_BoolBool_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1) const;
	int32 Accumulate(int32 A, int32 B, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_BooleanAND_ReturnValue, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MinigameStat_Time_C">();
	}
	static class UMinigameStat_Time_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMinigameStat_Time_C>();
	}
};
static_assert(alignof(UMinigameStat_Time_C) == 0x000008, "Wrong alinment on UMinigameStat_Time_C");
static_assert(sizeof(UMinigameStat_Time_C) == 0x000190, "Wrong size on UMinigameStat_Time_C");

}

