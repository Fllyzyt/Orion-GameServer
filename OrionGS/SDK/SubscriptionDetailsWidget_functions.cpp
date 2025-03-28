#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SubscriptionDetailsWidget

#include "Basic.hpp"

#include "SubscriptionDetailsWidget_classes.hpp"
#include "SubscriptionDetailsWidget_parameters.hpp"


namespace SDK
{

// Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.ExecuteUbergraph_SubscriptionDetailsWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMcpSubscriptionState                   K2Node_Event_NewState                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       K2Node_Event_SkinImage_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       K2Node_Event_SkinImage                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubscriptionDetailsWidget_C::ExecuteUbergraph_SubscriptionDetailsWidget(int32 EntryPoint, EMcpSubscriptionState K2Node_Event_NewState, class UTexture2D* K2Node_Event_SkinImage_1, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UTexture2D* K2Node_Event_SkinImage, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubscriptionDetailsWidget_C", "ExecuteUbergraph_SubscriptionDetailsWidget");

	Params::SubscriptionDetailsWidget_C_ExecuteUbergraph_SubscriptionDetailsWidget Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;
	Parms.K2Node_Event_SkinImage_1 = K2Node_Event_SkinImage_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Event_SkinImage = K2Node_Event_SkinImage;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.OnBattlepassImageLoaded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*                       SkinImage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubscriptionDetailsWidget_C::OnBattlepassImageLoaded(class UTexture2D* SkinImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubscriptionDetailsWidget_C", "OnBattlepassImageLoaded");

	Params::SubscriptionDetailsWidget_C_OnBattlepassImageLoaded Parms{};

	Parms.SkinImage = SkinImage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.OnSkinImageLoaded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*                       SkinImage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubscriptionDetailsWidget_C::OnSkinImageLoaded(class UTexture2D* SkinImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubscriptionDetailsWidget_C", "OnSkinImageLoaded");

	Params::SubscriptionDetailsWidget_C_OnSkinImageLoaded Parms{};

	Parms.SkinImage = SkinImage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.OnScreenStateSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// EMcpSubscriptionState                   NewState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubscriptionDetailsWidget_C::OnScreenStateSet(EMcpSubscriptionState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubscriptionDetailsWidget_C", "OnScreenStateSet");

	Params::SubscriptionDetailsWidget_C_OnScreenStateSet Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.HandleTransitionToSubsScreenAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*               CallFunc_PlayAnimationForward_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubscriptionDetailsWidget_C::HandleTransitionToSubsScreenAnim(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubscriptionDetailsWidget_C", "HandleTransitionToSubsScreenAnim");

	Params::SubscriptionDetailsWidget_C_HandleTransitionToSubsScreenAnim Parms{};

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.SetScreenForTransitionAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CallFunc_GetEndTime_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubscriptionDetailsWidget_C::SetScreenForTransitionAnim(float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubscriptionDetailsWidget_C", "SetScreenForTransitionAnim");

	Params::SubscriptionDetailsWidget_C_SetScreenForTransitionAnim Parms{};

	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.SetMaterialColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Conv_ColorToLinearColor_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_LinearColorLerp_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Conv_ColorToLinearColor_ReturnValue_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Conv_ColorToLinearColor_ReturnValue_2         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_LinearColorLerp_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Conv_ColorToLinearColor_ReturnValue_3         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_LinearColorLerp_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Conv_ColorToLinearColor_ReturnValue_4         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Conv_ColorToLinearColor_ReturnValue_5         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Conv_ColorToLinearColor_ReturnValue_6         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicFontMaterial_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Conv_ColorToLinearColor_ReturnValue_7         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Conv_ColorToLinearColor_ReturnValue_8         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Conv_ColorToLinearColor_ReturnValue_9         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Conv_ColorToLinearColor_ReturnValue_10        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UImage*>                   K2Node_MakeArray_Array                                 (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UImage*                           CallFunc_Array_Get_Item                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   CallFunc_Add_IntInt_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Conv_ColorToLinearColor_ReturnValue_11        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Conv_ColorToLinearColor_ReturnValue_12        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_Conv_ColorToLinearColor_ReturnValue_13        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UImage*>                   K2Node_MakeArray_Array_1                               (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                           CallFunc_Array_Get_Item_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubscriptionDetailsWidget_C::SetMaterialColors(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_2, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_3, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_2, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_4, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_5, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_6, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_7, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_8, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_9, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_10, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UImage*>& K2Node_MakeArray_Array, class UImage* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_11, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_12, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_13, TArray<class UImage*>& K2Node_MakeArray_Array_1, int32 CallFunc_Array_Length_ReturnValue_1, class UImage* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubscriptionDetailsWidget_C", "SetMaterialColors");

	Params::SubscriptionDetailsWidget_C_SetMaterialColors Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = std::move(CallFunc_Conv_ColorToLinearColor_ReturnValue);
	Parms.CallFunc_LinearColorLerp_ReturnValue = std::move(CallFunc_LinearColorLerp_ReturnValue);
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_1 = std::move(CallFunc_Conv_ColorToLinearColor_ReturnValue_1);
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_2 = std::move(CallFunc_Conv_ColorToLinearColor_ReturnValue_2);
	Parms.CallFunc_LinearColorLerp_ReturnValue_1 = std::move(CallFunc_LinearColorLerp_ReturnValue_1);
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_3 = std::move(CallFunc_Conv_ColorToLinearColor_ReturnValue_3);
	Parms.CallFunc_LinearColorLerp_ReturnValue_2 = std::move(CallFunc_LinearColorLerp_ReturnValue_2);
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_4 = std::move(CallFunc_Conv_ColorToLinearColor_ReturnValue_4);
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_5 = std::move(CallFunc_Conv_ColorToLinearColor_ReturnValue_5);
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_6 = std::move(CallFunc_Conv_ColorToLinearColor_ReturnValue_6);
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_7 = std::move(CallFunc_Conv_ColorToLinearColor_ReturnValue_7);
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_8 = std::move(CallFunc_Conv_ColorToLinearColor_ReturnValue_8);
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_9 = std::move(CallFunc_Conv_ColorToLinearColor_ReturnValue_9);
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_10 = std::move(CallFunc_Conv_ColorToLinearColor_ReturnValue_10);
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_11 = std::move(CallFunc_Conv_ColorToLinearColor_ReturnValue_11);
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_12 = std::move(CallFunc_Conv_ColorToLinearColor_ReturnValue_12);
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_13 = std::move(CallFunc_Conv_ColorToLinearColor_ReturnValue_13);
	Parms.K2Node_MakeArray_Array_1 = std::move(K2Node_MakeArray_Array_1);
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_3 = CallFunc_GetDynamicMaterial_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
	K2Node_MakeArray_Array_1 = std::move(Parms.K2Node_MakeArray_Array_1);
}


// Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.SetRandomFlareTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_RandomFloatInRange_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubscriptionDetailsWidget_C::SetRandomFlareTime(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubscriptionDetailsWidget_C", "SetRandomFlareTime");

	Params::SubscriptionDetailsWidget_C_SetRandomFlareTime Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.HandleStopTransitionToSubsAnim
// (Public, BlueprintCallable, BlueprintEvent)

void USubscriptionDetailsWidget_C::HandleStopTransitionToSubsAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubscriptionDetailsWidget_C", "HandleStopTransitionToSubsAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.SetScreenForResetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CallFunc_GetEndTime_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubscriptionDetailsWidget_C::SetScreenForResetState(float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubscriptionDetailsWidget_C", "SetScreenForResetState");

	Params::SubscriptionDetailsWidget_C_SetScreenForResetState Parms{};

	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.OnBattlepassDisclaimerStateUpdated
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubscriptionDisclaimerState            DisclaimerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void USubscriptionDetailsWidget_C::OnBattlepassDisclaimerStateUpdated(ESubscriptionDisclaimerState DisclaimerState, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubscriptionDetailsWidget_C", "OnBattlepassDisclaimerStateUpdated");

	Params::SubscriptionDetailsWidget_C_OnBattlepassDisclaimerStateUpdated Parms{};

	Parms.DisclaimerState = DisclaimerState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.OnSkinDisclaimerStateUpdated
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubscriptionDisclaimerState            DisclaimerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void USubscriptionDetailsWidget_C::OnSkinDisclaimerStateUpdated(ESubscriptionDisclaimerState DisclaimerState, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubscriptionDetailsWidget_C", "OnSkinDisclaimerStateUpdated");

	Params::SubscriptionDetailsWidget_C_OnSkinDisclaimerStateUpdated Parms{};

	Parms.DisclaimerState = DisclaimerState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.OnVbucksDisclaimerStateUpdated
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubscriptionDisclaimerState            DisclaimerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void USubscriptionDetailsWidget_C::OnVbucksDisclaimerStateUpdated(ESubscriptionDisclaimerState DisclaimerState, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubscriptionDetailsWidget_C", "OnVbucksDisclaimerStateUpdated");

	Params::SubscriptionDetailsWidget_C_OnVbucksDisclaimerStateUpdated Parms{};

	Parms.DisclaimerState = DisclaimerState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SubscriptionDetailsWidget.SubscriptionDetailsWidget_C.SetScreenCompletedAnimState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CallFunc_GetEndTime_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubscriptionDetailsWidget_C::SetScreenCompletedAnimState(float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SubscriptionDetailsWidget_C", "SetScreenCompletedAnimState");

	Params::SubscriptionDetailsWidget_C_SetScreenCompletedAnimState Parms{};

	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

