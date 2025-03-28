#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemCardWidget

#include "Basic.hpp"

#include "ItemCardWidget_classes.hpp"
#include "ItemCardWidget_parameters.hpp"


namespace SDK
{

// Function ItemCardWidget.ItemCardWidget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)
// struct FEventReply                      CallFunc_Handled_ReturnValue                           ()
// struct FEventReply                      CallFunc_SetUserFocus_ReturnValue                      ()

struct FEventReply UItemCardWidget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCardWidget_C", "OnFocusReceived");

	Params::ItemCardWidget_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);
	Parms.CallFunc_Handled_ReturnValue = std::move(CallFunc_Handled_ReturnValue);
	Parms.CallFunc_SetUserFocus_ReturnValue = std::move(CallFunc_SetUserFocus_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ItemCardWidget.ItemCardWidget_C.OnCentered
// (BlueprintCallable, BlueprintEvent)

void UItemCardWidget_C::OnCentered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCardWidget_C", "OnCentered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemCardWidget.ItemCardWidget_C.PlayShow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Idx                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemCardWidget_C::PlayShow(int32 Idx)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCardWidget_C", "PlayShow");

	Params::ItemCardWidget_C_PlayShow Parms{};

	Parms.Idx = Idx;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemCardWidget.ItemCardWidget_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UItemCardWidget_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCardWidget_C", "OnFocusLost");

	Params::ItemCardWidget_C_OnFocusLost Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemCardWidget.ItemCardWidget_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UItemCardWidget_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCardWidget_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemCardWidget.ItemCardWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemCardWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCardWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemCardWidget.ItemCardWidget_C.ExecuteUbergraph_ItemCardWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   K2Node_CustomEvent_Idx                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      K2Node_Event_InFocusEvent                              (NoDestructor)

void UItemCardWidget_C::ExecuteUbergraph_ItemCardWidget(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 K2Node_CustomEvent_Idx, bool CallFunc_Less_IntInt_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCardWidget_C", "ExecuteUbergraph_ItemCardWidget");

	Params::ItemCardWidget_C_ExecuteUbergraph_ItemCardWidget Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_Idx = K2Node_CustomEvent_Idx;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_InFocusEvent = std::move(K2Node_Event_InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemCardWidget.ItemCardWidget_C.OnHoveredEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortReceivedItemLootInfo        NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UItemCardWidget_C::OnHoveredEvent__DelegateSignature(const struct FFortReceivedItemLootInfo& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemCardWidget_C", "OnHoveredEvent__DelegateSignature");

	Params::ItemCardWidget_C_OnHoveredEvent__DelegateSignature Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}

}

