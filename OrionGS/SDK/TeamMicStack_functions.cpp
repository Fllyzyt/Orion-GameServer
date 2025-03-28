#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TeamMicStack

#include "Basic.hpp"

#include "TeamMicStack_classes.hpp"
#include "TeamMicStack_parameters.hpp"


namespace SDK
{

// Function TeamMicStack.TeamMicStack_C.ExecuteUbergraph_TeamMicStack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_IntInt_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void(const struct FFortTeamMemberInfo& NewTeamMemberInfo)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// TDelegate<void(int32 PlayerIndex)>      K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor)
// TDelegate<void(const struct FFortTeamMemberInfo& TeamMemberInfo)>K2Node_CreateDelegate_OutputDelegate_2                 (ZeroConstructor, NoDestructor)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*                CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUITeamInfo*                  CallFunc_GetLocalPlayerTeam_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortTeamMemberInfo>      CallFunc_GetTeamMembers_TeamMembers                    (ReferenceParm, HasGetValueTypeHash)
// struct FFortTeamMemberInfo              CallFunc_Array_Get_Item                                (HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate_3                 (ZeroConstructor, NoDestructor)

void UTeamMicStack_C::ExecuteUbergraph_TeamMicStack(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, TDelegate<void(const struct FFortTeamMemberInfo& NewTeamMemberInfo)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(int32 PlayerIndex)> K2Node_CreateDelegate_OutputDelegate_1, TDelegate<void(const struct FFortTeamMemberInfo& TeamMemberInfo)> K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Loop_Counter_Variable, class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortUITeamInfo* CallFunc_GetLocalPlayerTeam_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FFortTeamMemberInfo>& CallFunc_GetTeamMembers_TeamMembers, const struct FFortTeamMemberInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMicStack_C", "ExecuteUbergraph_TeamMicStack");

	Params::TeamMicStack_C_ExecuteUbergraph_TeamMicStack Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalPlayerTeam_ReturnValue = CallFunc_GetLocalPlayerTeam_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetTeamMembers_TeamMembers = std::move(CallFunc_GetTeamMembers_TeamMembers);
	Parms.CallFunc_Array_Get_Item = std::move(CallFunc_Array_Get_Item);
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_GetTeamMembers_TeamMembers = std::move(Parms.CallFunc_GetTeamMembers_TeamMembers);
}


// Function TeamMicStack.TeamMicStack_C.HandlePartyLeft
// (BlueprintCallable, BlueprintEvent)

void UTeamMicStack_C::HandlePartyLeft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMicStack_C", "HandlePartyLeft");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TeamMicStack.TeamMicStack_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTeamMicStack_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMicStack_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TeamMicStack.TeamMicStack_C.HandleTeamMemberRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Member_Index                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Subtract_IntInt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetChildrenCount_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_RemoveChildAt_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EqualEqual_IntInt_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeamMicStack_C::HandleTeamMemberRemoved(int32 Member_Index, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_RemoveChildAt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMicStack_C", "HandleTeamMemberRemoved");

	Params::TeamMicStack_C_HandleTeamMemberRemoved Parms{};

	Parms.Member_Index = Member_Index;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_RemoveChildAt_ReturnValue = CallFunc_RemoveChildAt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TeamMicStack.TeamMicStack_C.HandleTeamMemberChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo              Member_Info                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*                  CallFunc_GetContext_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Subtract_IntInt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsLocalPlayersUniqueID_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCinematicMinusTeamMics_C*        CallFunc_Array_Get_Item                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeamMicStack_C::HandleTeamMemberChanged(const struct FFortTeamMemberInfo& Member_Info, int32 CallFunc_Array_Length_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_IsLocalPlayersUniqueID_ReturnValue, class UCinematicMinusTeamMics_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMicStack_C", "HandleTeamMemberChanged");

	Params::TeamMicStack_C_HandleTeamMemberChanged Parms{};

	Parms.Member_Info = std::move(Member_Info);
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_IsLocalPlayersUniqueID_ReturnValue = CallFunc_IsLocalPlayersUniqueID_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TeamMicStack.TeamMicStack_C.AppendTeamMember
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo              TeamMemberInfo                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// int32                                   CurrentIndex                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                          K2Node_MakeStruct_Margin                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCinematicMinusTeamMics_C*        CallFunc_Create_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Add_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*                 CallFunc_AddChildToVerticalBox_ReturnValue             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamMicStack_C::AppendTeamMember(struct FFortTeamMemberInfo& TeamMemberInfo, int32 CurrentIndex, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCinematicMinusTeamMics_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMicStack_C", "AppendTeamMember");

	Params::TeamMicStack_C_AppendTeamMember Parms{};

	Parms.TeamMemberInfo = std::move(TeamMemberInfo);
	Parms.CurrentIndex = CurrentIndex;
	Parms.K2Node_MakeStruct_Margin = std::move(K2Node_MakeStruct_Margin);
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	TeamMemberInfo = std::move(Parms.TeamMemberInfo);
}


// Function TeamMicStack.TeamMicStack_C.ClearContents
// (Public, BlueprintCallable, BlueprintEvent)

void UTeamMicStack_C::ClearContents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TeamMicStack_C", "ClearContents");

	UObject::ProcessEvent(Func, nullptr);
}

}

