#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemInfoWidget

#include "Basic.hpp"

#include "ItemInfoWidget_classes.hpp"
#include "ItemInfoWidget_parameters.hpp"


namespace SDK
{

// Function ItemInfoWidget.ItemInfoWidget_C.SetRarityMaterialValues
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*              ItemDefinition                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInfoWidget_C::SetRarityMaterialValues(class UFortItemDefinition* ItemDefinition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoWidget_C", "SetRarityMaterialValues");

	Params::ItemInfoWidget_C_SetRarityMaterialValues Parms{};

	Parms.ItemDefinition = ItemDefinition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemInfoWidget.ItemInfoWidget_C.ExecuteUbergraph_ItemInfoWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CallFunc_MakeLiteralName_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CallFunc_MakeLiteralName_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*              K2Node_Event_ItemDefinition                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicFontMaterial_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortRarity                             CallFunc_GetRarity_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData              CallFunc_BPGetRarityData_ReturnValue                   ()
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CallFunc_MakeLiteralName_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInfoWidget_C::ExecuteUbergraph_ItemInfoWidget(int32 EntryPoint, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class UFortItemDefinition* K2Node_Event_ItemDefinition, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemInfoWidget_C", "ExecuteUbergraph_ItemInfoWidget");

	Params::ItemInfoWidget_C_ExecuteUbergraph_ItemInfoWidget Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.K2Node_Event_ItemDefinition = K2Node_Event_ItemDefinition;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = std::move(CallFunc_BPGetRarityData_ReturnValue);
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_2 = CallFunc_MakeLiteralName_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);
}

}

