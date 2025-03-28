#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VBucksStoreScreen

#include "Basic.hpp"

#include "VBucksStoreScreen_classes.hpp"
#include "VBucksStoreScreen_parameters.hpp"


namespace SDK
{

// Function VBucksStoreScreen.VBucksStoreScreen_C.ExecuteUbergraph_VBucksStoreScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*             CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_HasOtherPlatformCurrency                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             K2Node_Event_CurrencyMessageLocText                    (ConstParm)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsActivated_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStore_BannerMessage_C*           K2Node_DynamicCast_AsStore_Banner_Message              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRuntimeOptions*              CallFunc_GetRuntimeOptions_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVBucksStoreScreen_C::ExecuteUbergraph_VBucksStoreScreen(int32 EntryPoint, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_HasOtherPlatformCurrency, class FText K2Node_Event_CurrencyMessageLocText, bool Temp_bool_Variable, bool CallFunc_IsActivated_ReturnValue, class UStore_BannerMessage_C* K2Node_DynamicCast_AsStore_Banner_Message, bool K2Node_DynamicCast_bSuccess, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool K2Node_Event_IsDesignTime, ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "ExecuteUbergraph_VBucksStoreScreen");

	Params::VBucksStoreScreen_C_ExecuteUbergraph_VBucksStoreScreen Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_HasOtherPlatformCurrency = K2Node_Event_HasOtherPlatformCurrency;
	Parms.K2Node_Event_CurrencyMessageLocText = K2Node_Event_CurrencyMessageLocText;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.K2Node_DynamicCast_AsStore_Banner_Message = K2Node_DynamicCast_AsStore_Banner_Message;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VBucksStoreScreen.VBucksStoreScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVBucksStoreScreen_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "PreConstruct");

	Params::VBucksStoreScreen_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VBucksStoreScreen.VBucksStoreScreen_C.OnStartReadingOffers
// (Event, Protected, BlueprintEvent)

void UVBucksStoreScreen_C::OnStartReadingOffers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "OnStartReadingOffers");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VBucksStoreScreen.VBucksStoreScreen_C.OnTransitionedBySwitcher
// (Event, Protected, BlueprintEvent)

void UVBucksStoreScreen_C::OnTransitionedBySwitcher()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "OnTransitionedBySwitcher");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VBucksStoreScreen.VBucksStoreScreen_C.OnPurchasingDisabled
// (Event, Protected, BlueprintEvent)

void UVBucksStoreScreen_C::OnPurchasingDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "OnPurchasingDisabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VBucksStoreScreen.VBucksStoreScreen_C.OnUpdateOtherPlatformMTXMessage
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// bool                                    HasOtherPlatformCurrency                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             CurrencyMessageLocText                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UVBucksStoreScreen_C::OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, class FText& CurrencyMessageLocText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "OnUpdateOtherPlatformMTXMessage");

	Params::VBucksStoreScreen_C_OnUpdateOtherPlatformMTXMessage Parms{};

	Parms.HasOtherPlatformCurrency = HasOtherPlatformCurrency;
	Parms.CurrencyMessageLocText = CurrencyMessageLocText;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VBucksStoreScreen.VBucksStoreScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UVBucksStoreScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VBucksStoreScreen.VBucksStoreScreen_C.OnOffersGenerated
// (Event, Protected, BlueprintEvent)

void UVBucksStoreScreen_C::OnOffersGenerated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "OnOffersGenerated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VBucksStoreScreen.VBucksStoreScreen_C.NoOffersAvailable
// (Event, Protected, BlueprintEvent)

void UVBucksStoreScreen_C::NoOffersAvailable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "NoOffersAvailable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VBucksStoreScreen.VBucksStoreScreen_C.UpdateCurrencyNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMtxBreakdown                    CallFunc_GetMtxBreakdown_ReturnValue                   (NoDestructor)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData                   (HasGetValueTypeHash)
// bool                                    CallFunc_Greater_IntInt_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array                                 (ReferenceParm, HasGetValueTypeHash)
// class FText                             CallFunc_Format_ReturnValue                            ()
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVBucksStoreScreen_C::UpdateCurrencyNotification(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, const struct FMtxBreakdown& CallFunc_GetMtxBreakdown_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "UpdateCurrencyNotification");

	Params::VBucksStoreScreen_C_UpdateCurrencyNotification Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetMtxBreakdown_ReturnValue = std::move(CallFunc_GetMtxBreakdown_ReturnValue);
	Parms.K2Node_MakeStruct_FormatArgumentData = std::move(K2Node_MakeStruct_FormatArgumentData);
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
}


// Function VBucksStoreScreen.VBucksStoreScreen_C.HandleRedeem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPassThrough                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URedeemFriendCodeWindow_C*        CallFunc_Create_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVBucksStoreScreen_C::HandleRedeem(bool* bPassThrough, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class URedeemFriendCodeWindow_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "HandleRedeem");

	Params::VBucksStoreScreen_C_HandleRedeem Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = std::move(Parms.bPassThrough);
}


// Function VBucksStoreScreen.VBucksStoreScreen_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PassThrough                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVBucksStoreScreen_C::HandleBack(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "HandleBack");

	Params::VBucksStoreScreen_C_HandleBack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = std::move(Parms.PassThrough);
}


// Function VBucksStoreScreen.VBucksStoreScreen_C.PlayEquippedLockerMusic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubGame                                CallFunc_GetSubGame_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFort_Entry_Music_Controller_BP_C*>CallFunc_GetAllActorsOfClass_OutActors                 (ReferenceParm, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFort_Entry_Music_Controller_BP_C*CallFunc_Array_Get_Item                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVBucksStoreScreen_C::PlayEquippedLockerMusic(ESubGame CallFunc_GetSubGame_ReturnValue, TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "PlayEquippedLockerMusic");

	Params::VBucksStoreScreen_C_PlayEquippedLockerMusic Parms{};

	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = std::move(CallFunc_GetAllActorsOfClass_OutActors);
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_GetAllActorsOfClass_OutActors = std::move(Parms.CallFunc_GetAllActorsOfClass_OutActors);
}


// Function VBucksStoreScreen.VBucksStoreScreen_C.HandleAllOffersGenerated
// (Public, BlueprintCallable, BlueprintEvent)

void UVBucksStoreScreen_C::HandleAllOffersGenerated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "HandleAllOffersGenerated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VBucksStoreScreen.VBucksStoreScreen_C.GetVisibilityByChildrenPresence
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPanelWidget*                     Panel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_HasAnyChildren_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVBucksStoreScreen_C::GetVisibilityByChildrenPresence(class UPanelWidget* Panel, ESlateVisibility* NewParam, bool Temp_bool_Variable, bool CallFunc_HasAnyChildren_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "GetVisibilityByChildrenPresence");

	Params::VBucksStoreScreen_C_GetVisibilityByChildrenPresence Parms{};

	Parms.Panel = Panel;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}


// Function VBucksStoreScreen.VBucksStoreScreen_C.ApplyMobileLayout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOverlaySlot*                     CallFunc_SlotAsOverlaySlot_ReturnValue                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVBucksStoreScreen_C::ApplyMobileLayout(class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "ApplyMobileLayout");

	Params::VBucksStoreScreen_C_ApplyMobileLayout Parms{};

	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function VBucksStoreScreen.VBucksStoreScreen_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UVBucksStoreScreen_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("VBucksStoreScreen_C", "BP_GetDesiredFocusTarget");

	Params::VBucksStoreScreen_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

