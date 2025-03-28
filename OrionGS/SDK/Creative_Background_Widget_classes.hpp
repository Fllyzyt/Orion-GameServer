#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Creative_Background_Widget

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "EBillboardshadowDirection_structs.hpp"
#include "Slate_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Creative_Background_Widget.Creative_Background_Widget_C
// 0x0010 (0x0270 - 0x0260)
class UCreative_Background_Widget_C final  : public UUserWidget
{
public:
	class UBorder*                                Border_0;                                          // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             UserText;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetText(const class FString& Text, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetBackgroundColor(const struct FLinearColor& Color);
	void SetTextScale(int32 FontSize, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void SetTextAlignment(ETextJustify Alignment);
	void SetTextColor(const struct FLinearColor& TextColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void SetTextFont(int32 TextFont, int32 OutlineStrength, const struct FSlateFontInfo& NewLocalVar_0, int32 Temp_int_Variable, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, int32 Temp_int_Variable_1, class FName K2Node_Select_Default, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* Temp_object_Variable_2, class UObject* K2Node_Select_Default_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void SetShadow(EBillboardshadowDirection Shadow, float ShadowScale, const struct FVector2D& Temp_struct_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, EBillboardshadowDirection Temp_byte_Variable, const struct FVector2D& K2Node_Select_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Creative_Background_Widget_C">();
	}
	static class UCreative_Background_Widget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreative_Background_Widget_C>();
	}
};
static_assert(alignof(UCreative_Background_Widget_C) == 0x000008, "Wrong alinment on UCreative_Background_Widget_C");
static_assert(sizeof(UCreative_Background_Widget_C) == 0x000270, "Wrong size on UCreative_Background_Widget_C");
static_assert(offsetof(UCreative_Background_Widget_C, Border_0) == 0x000260, "Member 'UCreative_Background_Widget_C::Border_0' has a wrong offset!");
static_assert(offsetof(UCreative_Background_Widget_C, UserText) == 0x000268, "Member 'UCreative_Background_Widget_C::UserText' has a wrong offset!");

}

