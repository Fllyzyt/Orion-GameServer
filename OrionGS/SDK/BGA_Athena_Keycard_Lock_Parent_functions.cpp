#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_Athena_Keycard_Lock_Parent

#include "Basic.hpp"

#include "BGA_Athena_Keycard_Lock_Parent_classes.hpp"
#include "BGA_Athena_Keycard_Lock_Parent_parameters.hpp"


namespace SDK
{

// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ExecuteUbergraph_BGA_Athena_Keycard_Lock_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AVault_Door_C*                    K2Node_DynamicCast_AsVault_Door                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_GetOwnedGameplayTags_self_CastInput           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer            CallFunc_GetOwnedGameplayTags_TagContainer             ()
// class AFortPlayerController*            CallFunc_GetFortPlayerControllerFromActor_ReturnValue  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_K2_RemoveItemFromPlayer_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                        K2Node_Event_InteractingPawn                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              K2Node_Event_InteractionBeingAttempted                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         CallFunc_CreateDynamicMaterialInstance_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent*      CallFunc_GetFortAbilitySystemComponent_ReturnValue     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle      CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue    (NoDestructor, HasGetValueTypeHash)
// class ABP_UI_ScannerScreen_C*           K2Node_DynamicCast_AsBP_UI_Scanner_Screen              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*            CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// Enum_Athena_Lock                        K2Node_Event_LockState                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*            CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     CallFunc_K2_GetVectorParameterValue_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*                CallFunc_GetQuestManager_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_SendComplexCustomStatEvent_QuestActive        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_SendComplexCustomStatEvent_QuestCompleted     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// struct FTimerHandle                     CallFunc_K2_SetTimerDelegate_ReturnValue               (NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_Keycard_Lock_Parent_C::ExecuteUbergraph_BGA_Athena_Keycard_Lock_Parent(int32 EntryPoint, class AVault_Door_C* K2Node_DynamicCast_AsVault_Door, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, int32 CallFunc_K2_RemoveItemFromPlayer_ReturnValue, class AFortPawn* K2Node_Event_InteractingPawn, EInteractionBeingAttempted K2Node_Event_InteractionBeingAttempted, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, class ABP_UI_ScannerScreen_C* K2Node_DynamicCast_AsBP_UI_Scanner_Screen, bool K2Node_DynamicCast_bSuccess_1, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, Enum_Athena_Lock K2Node_Event_LockState, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Keycard_Lock_Parent_C", "ExecuteUbergraph_BGA_Athena_Keycard_Lock_Parent");

	Params::BGA_Athena_Keycard_Lock_Parent_C_ExecuteUbergraph_BGA_Athena_Keycard_Lock_Parent Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsVault_Door = K2Node_DynamicCast_AsVault_Door;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwnedGameplayTags_self_CastInput = CallFunc_GetOwnedGameplayTags_self_CastInput;
	Parms.CallFunc_GetOwnedGameplayTags_TagContainer = std::move(CallFunc_GetOwnedGameplayTags_TagContainer);
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue = CallFunc_GetFortPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_K2_RemoveItemFromPlayer_ReturnValue = CallFunc_K2_RemoveItemFromPlayer_ReturnValue;
	Parms.K2Node_Event_InteractingPawn = K2Node_Event_InteractingPawn;
	Parms.K2Node_Event_InteractionBeingAttempted = K2Node_Event_InteractionBeingAttempted;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetFortAbilitySystemComponent_ReturnValue = CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = std::move(CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue);
	Parms.K2Node_DynamicCast_AsBP_UI_Scanner_Screen = K2Node_DynamicCast_AsBP_UI_Scanner_Screen;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1 = CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1;
	Parms.K2Node_Event_LockState = K2Node_Event_LockState;
	Parms.CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2 = CallFunc_GetFortPlayerControllerFromActor_ReturnValue_2;
	Parms.CallFunc_K2_GetVectorParameterValue_ReturnValue = std::move(CallFunc_K2_GetVectorParameterValue_ReturnValue);
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_SendComplexCustomStatEvent_QuestActive = CallFunc_SendComplexCustomStatEvent_QuestActive;
	Parms.CallFunc_SendComplexCustomStatEvent_QuestCompleted = CallFunc_SendComplexCustomStatEvent_QuestCompleted;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = std::move(CallFunc_K2_SetTimerDelegate_ReturnValue);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.SetLock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// Enum_Athena_Lock                        Param_LockState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_Keycard_Lock_Parent_C::SetLock(Enum_Athena_Lock Param_LockState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Keycard_Lock_Parent_C", "SetLock");

	Params::BGA_Athena_Keycard_Lock_Parent_C_SetLock Parms{};

	Parms.Param_LockState = Param_LockState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.HideAndKill
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Keycard_Lock_Parent_C::HideAndKill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Keycard_Lock_Parent_C", "HideAndKill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ShowFailScreen
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Keycard_Lock_Parent_C::ShowFailScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Keycard_Lock_Parent_C", "ShowFailScreen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ShowSuccessScreen
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Keycard_Lock_Parent_C::ShowSuccessScreen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Keycard_Lock_Parent_C", "ShowSuccessScreen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_Athena_Keycard_Lock_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Keycard_Lock_Parent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_Athena_Keycard_Lock_Parent_C::BlueprintOnInteract(class AFortPawn* InteractingPawn, EInteractionBeingAttempted InteractionBeingAttempted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Keycard_Lock_Parent_C", "BlueprintOnInteract");

	Params::BGA_Athena_Keycard_Lock_Parent_C_BlueprintOnInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.CallOpenVault
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Keycard_Lock_Parent_C::CallOpenVault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Keycard_Lock_Parent_C", "CallOpenVault");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ApplyFailCheckEffect
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Keycard_Lock_Parent_C::ApplyFailCheckEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Keycard_Lock_Parent_C", "ApplyFailCheckEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.LockCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CheckPassed                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_HasMatchingGameplayTag_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABGA_Athena_Keycard_Lock_Parent_C::LockCheck(class AFortPawn* InteractingPawn, EInteractionBeingAttempted InteractionBeingAttempted, bool* CheckPassed, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Keycard_Lock_Parent_C", "LockCheck");

	Params::BGA_Athena_Keycard_Lock_Parent_C_LockCheck Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CheckPassed != nullptr)
		*CheckPassed = std::move(Parms.CheckPassed);
}


// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETInteractionType                       InteractionType                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BlueprintCanInteract_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABGA_Athena_Keycard_Lock_Parent_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, EInteractionBeingAttempted InteractionBeingAttempted, ETInteractionType InteractionType, bool CallFunc_BlueprintCanInteract_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Keycard_Lock_Parent_C", "BlueprintCanInteract");

	Params::BGA_Athena_Keycard_Lock_Parent_C_BlueprintCanInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;
	Parms.InteractionType = InteractionType;
	Parms.CallFunc_BlueprintCanInteract_ReturnValue = CallFunc_BlueprintCanInteract_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInteractionBeingAttempted              InteractionBeingAttempted                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)
// class FText                             CallFunc_BlueprintGetInteractionString_ReturnValue     ()
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData                   (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array                                 (ReferenceParm, HasGetValueTypeHash)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData_1                 (HasGetValueTypeHash)
// class FText                             CallFunc_Format_ReturnValue                            ()
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array_1                               (ReferenceParm, HasGetValueTypeHash)
// class FText                             CallFunc_Format_ReturnValue_1                          ()
// class ABGA_Athena_Lock_Parent_C*        K2Node_DynamicCast_AsBGA_Athena_Lock_Parent            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_LockCheck_CheckPassed                         (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText ABGA_Athena_Keycard_Lock_Parent_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn, EInteractionBeingAttempted InteractionBeingAttempted, class FText CallFunc_BlueprintGetInteractionString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class ABGA_Athena_Lock_Parent_C* K2Node_DynamicCast_AsBGA_Athena_Lock_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LockCheck_CheckPassed) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BGA_Athena_Keycard_Lock_Parent_C", "BlueprintGetInteractionString");

	Params::BGA_Athena_Keycard_Lock_Parent_C_BlueprintGetInteractionString Parms{};

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;
	Parms.CallFunc_BlueprintGetInteractionString_ReturnValue = CallFunc_BlueprintGetInteractionString_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = std::move(K2Node_MakeStruct_FormatArgumentData);
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = std::move(K2Node_MakeStruct_FormatArgumentData_1);
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = std::move(K2Node_MakeArray_Array_1);
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBGA_Athena_Lock_Parent = K2Node_DynamicCast_AsBGA_Athena_Lock_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LockCheck_CheckPassed = CallFunc_LockCheck_CheckPassed;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
	K2Node_MakeArray_Array_1 = std::move(Parms.K2Node_MakeArray_Array_1);

	return Parms.ReturnValue;
}

}

