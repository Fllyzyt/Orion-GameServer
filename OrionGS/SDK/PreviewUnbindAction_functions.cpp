#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PreviewUnbindAction

#include "Basic.hpp"

#include "PreviewUnbindAction_classes.hpp"
#include "PreviewUnbindAction_parameters.hpp"


namespace SDK
{

// Function PreviewUnbindAction.PreviewUnbindAction_C.ExecuteUbergraph_PreviewUnbindAction
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          K2Node_Event_ListItemObject                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_bIsExpanded                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_Event_bIsSelected                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPreviewUnbindAction_C::ExecuteUbergraph_PreviewUnbindAction(int32 EntryPoint, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PreviewUnbindAction_C", "ExecuteUbergraph_PreviewUnbindAction");

	Params::PreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PreviewUnbindAction.PreviewUnbindAction_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPreviewUnbindAction_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PreviewUnbindAction_C", "OnListItemObjectSet");

	Params::PreviewUnbindAction_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PreviewUnbindAction.PreviewUnbindAction_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPreviewUnbindAction_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PreviewUnbindAction_C", "BP_OnItemSelectionChanged");

	Params::PreviewUnbindAction_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PreviewUnbindAction.PreviewUnbindAction_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPreviewUnbindAction_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PreviewUnbindAction_C", "BP_OnItemExpansionChanged");

	Params::PreviewUnbindAction_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PreviewUnbindAction.PreviewUnbindAction_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UPreviewUnbindAction_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PreviewUnbindAction_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}

}

