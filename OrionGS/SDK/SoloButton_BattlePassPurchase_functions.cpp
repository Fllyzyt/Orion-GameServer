#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SoloButton_BattlePassPurchase

#include "Basic.hpp"

#include "SoloButton_BattlePassPurchase_classes.hpp"
#include "SoloButton_BattlePassPurchase_parameters.hpp"


namespace SDK
{

// Function SoloButton_BattlePassPurchase.SoloButton_BattlePassPurchase_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void USoloButton_BattlePassPurchase_C::SetText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloButton_BattlePassPurchase_C", "SetText");

	Params::SoloButton_BattlePassPurchase_C_SetText Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SoloButton_BattlePassPurchase.SoloButton_BattlePassPurchase_C.HandleSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Temp_int_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                          K2Node_MakeStruct_Margin                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                          K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   K2Node_Select_Default_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo                   K2Node_MakeStruct_SlateFontInfo                        (HasGetValueTypeHash)

void USoloButton_BattlePassPurchase_C::HandleSize(bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_Select_Default, int32 K2Node_Select_Default_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloButton_BattlePassPurchase_C", "HandleSize");

	Params::SoloButton_BattlePassPurchase_C_HandleSize Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_MakeStruct_Margin = std::move(K2Node_MakeStruct_Margin);
	Parms.K2Node_Select_Default = std::move(K2Node_Select_Default);
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_SlateFontInfo = std::move(K2Node_MakeStruct_SlateFontInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SoloButton_BattlePassPurchase.SoloButton_BattlePassPurchase_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USoloButton_BattlePassPurchase_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloButton_BattlePassPurchase_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SoloButton_BattlePassPurchase.SoloButton_BattlePassPurchase_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USoloButton_BattlePassPurchase_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloButton_BattlePassPurchase_C", "PreConstruct");

	Params::SoloButton_BattlePassPurchase_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SoloButton_BattlePassPurchase.SoloButton_BattlePassPurchase_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void USoloButton_BattlePassPurchase_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloButton_BattlePassPurchase_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SoloButton_BattlePassPurchase.SoloButton_BattlePassPurchase_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void USoloButton_BattlePassPurchase_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloButton_BattlePassPurchase_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SoloButton_BattlePassPurchase.SoloButton_BattlePassPurchase_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void USoloButton_BattlePassPurchase_C::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloButton_BattlePassPurchase_C", "BP_OnClicked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SoloButton_BattlePassPurchase.SoloButton_BattlePassPurchase_C.ExecuteUbergraph_SoloButton_BattlePassPurchase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Temp_float_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Temp_float_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationForward_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationReverse_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*            CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECommonInputType                        CallFunc_GetCurrentInputType_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USoloButton_BattlePassPurchase_C::ExecuteUbergraph_SoloButton_BattlePassPurchase(int32 EntryPoint, bool Temp_bool_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float Temp_float_Variable, float Temp_float_Variable_1, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoloButton_BattlePassPurchase_C", "ExecuteUbergraph_SoloButton_BattlePassPurchase");

	Params::SoloButton_BattlePassPurchase_C_ExecuteUbergraph_SoloButton_BattlePassPurchase Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}

}

