#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EventsSimpleTab

#include "Basic.hpp"

#include "EventsSimpleTab_classes.hpp"
#include "EventsSimpleTab_parameters.hpp"


namespace SDK
{

// Function EventsSimpleTab.EventsSimpleTab_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UEventsSimpleTab_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleTab_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventsSimpleTab.EventsSimpleTab_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UEventsSimpleTab_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleTab_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventsSimpleTab.EventsSimpleTab_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventsSimpleTab_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleTab_C", "PreConstruct");

	Params::EventsSimpleTab_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventsSimpleTab.EventsSimpleTab_C.UpdateColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ParameterName                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FLinearColor                     New_Color                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventsSimpleTab_C::UpdateColor(class FString& ParameterName, const struct FLinearColor& New_Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleTab_C", "UpdateColor");

	Params::EventsSimpleTab_C_UpdateColor Parms{};

	Parms.ParameterName = std::move(ParameterName);
	Parms.New_Color = std::move(New_Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventsSimpleTab.EventsSimpleTab_C.OnSelectedChangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_Selected                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventsSimpleTab_C::OnSelectedChangedEvent(class UCommonButton* Button, bool Param_Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleTab_C", "OnSelectedChangedEvent");

	Params::EventsSimpleTab_C_OnSelectedChangedEvent Parms{};

	Parms.Button = Button;
	Parms.Param_Selected = Param_Selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventsSimpleTab.EventsSimpleTab_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEventsSimpleTab_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleTab_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventsSimpleTab.EventsSimpleTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEventsSimpleTab_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleTab_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventsSimpleTab.EventsSimpleTab_C.ExecuteUbergraph_EventsSimpleTab
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Temp_string_Variable                                   (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           Temp_string_Variable_1                                 (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// TDelegate<void(class UCommonButton* Button, bool Selected)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// class FText                             CallFunc_TextToUpper_ReturnValue                       ()
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Temp_string_Variable_2                                 (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Map_Find_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Map_Find_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Temp_string_Variable_3                                 (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Map_Find_Value_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Map_Find_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                     CallFunc_Map_Find_Value_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Map_Find_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                     CallFunc_Map_Find_Value_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Map_Find_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                      K2Node_MakeStruct_SlateColor                           ()
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             K2Node_Select_Default                                  ()
// class FString                           K2Node_CustomEvent_ParameterName                       (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FLinearColor                     K2Node_CustomEvent_New_Color                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakVector2D_X                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_BreakVector2D_Y                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                          K2Node_MakeStruct_Margin                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*                    K2Node_CustomEvent_Button                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_CustomEvent_Selected                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationReverse_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationForward_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_BoolBool_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationForward_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationReverse_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsMobileGame_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventsSimpleTab_C::ExecuteUbergraph_EventsSimpleTab(int32 EntryPoint, class FString& Temp_string_Variable, class FString& Temp_string_Variable_1, TDelegate<void(class UCommonButton* Button, bool Selected)> K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_TextToUpper_ReturnValue, bool K2Node_Event_IsDesignTime, class FString& Temp_string_Variable_2, const struct FLinearColor& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FString& Temp_string_Variable_3, const struct FLinearColor& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FLinearColor& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, const struct FLinearColor& CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class FText K2Node_Select_Default, class FString& K2Node_CustomEvent_ParameterName, const struct FLinearColor& K2Node_CustomEvent_New_Color, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FMargin& K2Node_MakeStruct_Margin, class UCommonButton* K2Node_CustomEvent_Button, bool K2Node_CustomEvent_Selected, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, bool CallFunc_IsMobileGame_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventsSimpleTab_C", "ExecuteUbergraph_EventsSimpleTab");

	Params::EventsSimpleTab_C_ExecuteUbergraph_EventsSimpleTab Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_string_Variable = std::move(Temp_string_Variable);
	Parms.Temp_string_Variable_1 = std::move(Temp_string_Variable_1);
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_string_Variable_2 = std::move(Temp_string_Variable_2);
	Parms.CallFunc_Map_Find_Value = std::move(CallFunc_Map_Find_Value);
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_string_Variable_3 = std::move(Temp_string_Variable_3);
	Parms.CallFunc_Map_Find_Value_1 = std::move(CallFunc_Map_Find_Value_1);
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = std::move(CallFunc_Map_Find_Value_2);
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value_3 = std::move(CallFunc_Map_Find_Value_3);
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;
	Parms.K2Node_MakeStruct_SlateColor = std::move(K2Node_MakeStruct_SlateColor);
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_ParameterName = std::move(K2Node_CustomEvent_ParameterName);
	Parms.K2Node_CustomEvent_New_Color = std::move(K2Node_CustomEvent_New_Color);
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_MakeStruct_Margin = std::move(K2Node_MakeStruct_Margin);
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.K2Node_CustomEvent_Selected = K2Node_CustomEvent_Selected;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

