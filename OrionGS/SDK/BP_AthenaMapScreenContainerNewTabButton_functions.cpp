#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AthenaMapScreenContainerNewTabButton

#include "Basic.hpp"

#include "BP_AthenaMapScreenContainerNewTabButton_classes.hpp"
#include "BP_AthenaMapScreenContainerNewTabButton_parameters.hpp"


namespace SDK
{

// Function BP_AthenaMapScreenContainerNewTabButton.BP_AthenaMapScreenContainerNewTabButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UBP_AthenaMapScreenContainerNewTabButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaMapScreenContainerNewTabButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AthenaMapScreenContainerNewTabButton.BP_AthenaMapScreenContainerNewTabButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UBP_AthenaMapScreenContainerNewTabButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaMapScreenContainerNewTabButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AthenaMapScreenContainerNewTabButton.BP_AthenaMapScreenContainerNewTabButton_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UBP_AthenaMapScreenContainerNewTabButton_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaMapScreenContainerNewTabButton_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AthenaMapScreenContainerNewTabButton.BP_AthenaMapScreenContainerNewTabButton_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UBP_AthenaMapScreenContainerNewTabButton_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaMapScreenContainerNewTabButton_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AthenaMapScreenContainerNewTabButton.BP_AthenaMapScreenContainerNewTabButton_C.ExecuteUbergraph_BP_AthenaMapScreenContainerNewTabButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationReverse_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationForward_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetSelected_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationReverse_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationForward_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicFontMaterial_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AthenaMapScreenContainerNewTabButton_C::ExecuteUbergraph_BP_AthenaMapScreenContainerNewTabButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_GetSelected_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AthenaMapScreenContainerNewTabButton_C", "ExecuteUbergraph_BP_AthenaMapScreenContainerNewTabButton");

	Params::BP_AthenaMapScreenContainerNewTabButton_C_ExecuteUbergraph_BP_AthenaMapScreenContainerNewTabButton Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_GetSelected_ReturnValue = CallFunc_GetSelected_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

