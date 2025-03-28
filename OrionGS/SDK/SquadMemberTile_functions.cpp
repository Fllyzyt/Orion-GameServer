#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SquadMemberTile

#include "Basic.hpp"

#include "SquadMemberTile_classes.hpp"
#include "SquadMemberTile_parameters.hpp"


namespace SDK
{

// Function SquadMemberTile.SquadMemberTile_C.SetVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameReadiness                          Member_Readiness                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Is_In_Frontend                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*               Temp_object_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*               Temp_object_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanOR_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*               Temp_object_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGameReadiness                          Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*               K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadMemberTile_C::SetVisuals(EGameReadiness Member_Readiness, bool Is_In_Frontend, class UMaterialInterface* Temp_object_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class UMaterialInterface* Temp_object_Variable_1, bool CallFunc_BooleanOR_ReturnValue, class UMaterialInterface* Temp_object_Variable_2, EGameReadiness Temp_byte_Variable, class UMaterialInterface* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "SetVisuals");

	Params::SquadMemberTile_C_SetVisuals Parms{};

	Parms.Member_Readiness = Member_Readiness;
	Parms.Is_In_Frontend = Is_In_Frontend;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SquadMemberTile.SquadMemberTile_C.SetEmptyVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                      K2Node_MakeStruct_SlateColor                           ()
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadMemberTile_C::SetEmptyVisuals(const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "SetEmptyVisuals");

	Params::SquadMemberTile_C_SetEmptyVisuals Parms{};

	Parms.K2Node_MakeStruct_SlateColor = std::move(K2Node_MakeStruct_SlateColor);
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SquadMemberTile.SquadMemberTile_C.SetSitOutVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                      K2Node_MakeStruct_SlateColor                           ()
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadMemberTile_C::SetSitOutVisuals(const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "SetSitOutVisuals");

	Params::SquadMemberTile_C_SetSitOutVisuals Parms{};

	Parms.K2Node_MakeStruct_SlateColor = std::move(K2Node_MakeStruct_SlateColor);
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SquadMemberTile.SquadMemberTile_C.SetReadyVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                      K2Node_MakeStruct_SlateColor                           ()
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadMemberTile_C::SetReadyVisuals(const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "SetReadyVisuals");

	Params::SquadMemberTile_C_SetReadyVisuals Parms{};

	Parms.K2Node_MakeStruct_SlateColor = std::move(K2Node_MakeStruct_SlateColor);
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SquadMemberTile.SquadMemberTile_C.SetNotReadyVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                      K2Node_MakeStruct_SlateColor                           ()
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadMemberTile_C::SetNotReadyVisuals(const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "SetNotReadyVisuals");

	Params::SquadMemberTile_C_SetNotReadyVisuals Parms{};

	Parms.K2Node_MakeStruct_SlateColor = std::move(K2Node_MakeStruct_SlateColor);
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SquadMemberTile.SquadMemberTile_C.OnLoaded_A3B69DDA4214DBAA66546FAB9F43D5E7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadMemberTile_C::OnLoaded_A3B69DDA4214DBAA66546FAB9F43D5E7(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "OnLoaded_A3B69DDA4214DBAA66546FAB9F43D5E7");

	Params::SquadMemberTile_C_OnLoaded_A3B69DDA4214DBAA66546FAB9F43D5E7 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SquadMemberTile.SquadMemberTile_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void USquadMemberTile_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SquadMemberTile.SquadMemberTile_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void USquadMemberTile_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SquadMemberTile.SquadMemberTile_C.OnSquadAssigned
// (Event, Protected, BlueprintEvent)

void USquadMemberTile_C::OnSquadAssigned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "OnSquadAssigned");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SquadMemberTile.SquadMemberTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USquadMemberTile_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SquadMemberTile.SquadMemberTile_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USquadMemberTile_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "PreConstruct");

	Params::SquadMemberTile_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SquadMemberTile.SquadMemberTile_C.OnMemberGameReadinessChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EGameReadiness                          ReadyStatus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USquadMemberTile_C::OnMemberGameReadinessChanged(EGameReadiness ReadyStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "OnMemberGameReadinessChanged");

	Params::SquadMemberTile_C_OnMemberGameReadinessChanged Parms{};

	Parms.ReadyStatus = ReadyStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SquadMemberTile.SquadMemberTile_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void USquadMemberTile_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "BP_OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SquadMemberTile.SquadMemberTile_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void USquadMemberTile_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "BP_OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SquadMemberTile.SquadMemberTile_C.BP_OnTeamMemberEstablished
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bHasValidMember                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USquadMemberTile_C::BP_OnTeamMemberEstablished(bool bHasValidMember)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "BP_OnTeamMemberEstablished");

	Params::SquadMemberTile_C_BP_OnTeamMemberEstablished Parms{};

	Parms.bHasValidMember = bHasValidMember;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SquadMemberTile.SquadMemberTile_C.OnMemberIsInFrontendChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsInFrontEnd                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USquadMemberTile_C::OnMemberIsInFrontendChanged(bool bIsInFrontEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "OnMemberIsInFrontendChanged");

	Params::SquadMemberTile_C_OnMemberIsInFrontendChanged Parms{};

	Parms.bIsInFrontEnd = bIsInFrontEnd;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SquadMemberTile.SquadMemberTile_C.ExecuteUbergraph_SquadMemberTile
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGameReadiness                          CallFunc_GetCurrentMemberGameReadiness_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Temp_object_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAthenaTeamDisplayInfo           CallFunc_GetSquadDisplayInfo_ReturnValue               ()
// class UTexture*                         K2Node_DynamicCast_AsTexture                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsCurrentMemberLocal_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// EGameReadiness                          K2Node_Event_ReadyStatus                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationForward_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationForward_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         CallFunc_GetDynamicMaterial_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          K2Node_CustomEvent_Loaded                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_bHasValidMember                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void(class UObject* Loaded)>  K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// bool                                    K2Node_Event_bIsInFrontend                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsCurrentMemberInFrontend_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)

void USquadMemberTile_C::ExecuteUbergraph_SquadMemberTile(int32 EntryPoint, EGameReadiness CallFunc_GetCurrentMemberGameReadiness_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UObject* Temp_object_Variable, const struct FAthenaTeamDisplayInfo& CallFunc_GetSquadDisplayInfo_ReturnValue, class UTexture* K2Node_DynamicCast_AsTexture, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCurrentMemberLocal_ReturnValue, bool K2Node_Event_IsDesignTime, EGameReadiness K2Node_Event_ReadyStatus, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class UObject* K2Node_CustomEvent_Loaded, bool K2Node_Event_bHasValidMember, TDelegate<void(class UObject* Loaded)> K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bIsInFrontend, bool CallFunc_IsCurrentMemberInFrontend_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SquadMemberTile_C", "ExecuteUbergraph_SquadMemberTile");

	Params::SquadMemberTile_C_ExecuteUbergraph_SquadMemberTile Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurrentMemberGameReadiness_ReturnValue = CallFunc_GetCurrentMemberGameReadiness_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetSquadDisplayInfo_ReturnValue = std::move(CallFunc_GetSquadDisplayInfo_ReturnValue);
	Parms.K2Node_DynamicCast_AsTexture = K2Node_DynamicCast_AsTexture;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsCurrentMemberLocal_ReturnValue = CallFunc_IsCurrentMemberLocal_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_ReadyStatus = K2Node_Event_ReadyStatus;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_Event_bHasValidMember = K2Node_Event_bHasValidMember;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_bIsInFrontend = K2Node_Event_bIsInFrontend;
	Parms.CallFunc_IsCurrentMemberInFrontend_ReturnValue = CallFunc_IsCurrentMemberInFrontend_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

