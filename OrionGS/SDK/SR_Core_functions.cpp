#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SR_Core

#include "Basic.hpp"

#include "SR_Core_classes.hpp"
#include "SR_Core_parameters.hpp"


namespace SDK
{

// Function SR_Core.SR_Core_C.ExecuteUbergraph_SR_Core
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFortVehicleInterface>K2Node_Event_Vehicle                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                        K2Node_Event_PlayerPawn                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   K2Node_Event_SeatIndex                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFortVehicleInterface>K2Node_Event_Vehicle_1                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                        K2Node_Event_PlayerPawn_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   K2Node_Event_SeatIndex_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USR_Core_C::ExecuteUbergraph_SR_Core(int32 EntryPoint, TScriptInterface<class IFortVehicleInterface> K2Node_Event_Vehicle, class AFortPawn* K2Node_Event_PlayerPawn, int32 K2Node_Event_SeatIndex, TScriptInterface<class IFortVehicleInterface> K2Node_Event_Vehicle_1, class AFortPawn* K2Node_Event_PlayerPawn_1, int32 K2Node_Event_SeatIndex_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SR_Core_C", "ExecuteUbergraph_SR_Core");

	Params::SR_Core_C_ExecuteUbergraph_SR_Core Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Vehicle = K2Node_Event_Vehicle;
	Parms.K2Node_Event_PlayerPawn = K2Node_Event_PlayerPawn;
	Parms.K2Node_Event_SeatIndex = K2Node_Event_SeatIndex;
	Parms.K2Node_Event_Vehicle_1 = K2Node_Event_Vehicle_1;
	Parms.K2Node_Event_PlayerPawn_1 = K2Node_Event_PlayerPawn_1;
	Parms.K2Node_Event_SeatIndex_1 = K2Node_Event_SeatIndex_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SR_Core.SR_Core_C.OnPawnExitSeat
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TScriptInterface<class IFortVehicleInterface>Vehicle                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper)
// class AFortPawn*                        PlayerPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SeatIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USR_Core_C::OnPawnExitSeat(TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SR_Core_C", "OnPawnExitSeat");

	Params::SR_Core_C_OnPawnExitSeat Parms{};

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SR_Core.SR_Core_C.OnPawnEnterSeat
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TScriptInterface<class IFortVehicleInterface>Vehicle                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper)
// class AFortPawn*                        PlayerPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SeatIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USR_Core_C::OnPawnEnterSeat(TScriptInterface<class IFortVehicleInterface>& Vehicle, class AFortPawn* PlayerPawn, int32 SeatIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SR_Core_C", "OnPawnEnterSeat");

	Params::SR_Core_C_OnPawnEnterSeat Parms{};

	Parms.Vehicle = Vehicle;
	Parms.PlayerPawn = PlayerPawn;
	Parms.SeatIndex = SeatIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SR_Core.SR_Core_C.HandleSeatStateUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                        Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Entering                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   SeatIdx                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsExternalSeat_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsLocallyControlled_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TDelegate<void(class UStreamingRadioPlayerComponent* Component, const struct FAthenaRadioStation& AffectedSource)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)
// TDelegate<void(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)>K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor)

void USR_Core_C::HandleSeatStateUpdated(class AFortPawn* Pawn, bool Entering, int32 SeatIdx, bool CallFunc_IsExternalSeat_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, TDelegate<void(class UStreamingRadioPlayerComponent* Component, const struct FAthenaRadioStation& AffectedSource)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon)> K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SR_Core_C", "HandleSeatStateUpdated");

	Params::SR_Core_C_HandleSeatStateUpdated Parms{};

	Parms.Pawn = Pawn;
	Parms.Entering = Entering;
	Parms.SeatIdx = SeatIdx;
	Parms.CallFunc_IsExternalSeat_ReturnValue = CallFunc_IsExternalSeat_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SR_Core.SR_Core_C.HandleWeaponStateUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortWeapon*                      NewWeapon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortWeapon*                      PrevWeapon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(bool bIsTargeting)>      K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor)

void USR_Core_C::HandleWeaponStateUpdated(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon, TDelegate<void(bool bIsTargeting)> K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SR_Core_C", "HandleWeaponStateUpdated");

	Params::SR_Core_C_HandleWeaponStateUpdated Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SR_Core.SR_Core_C.HandleADSStateUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Is_Targeting                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USR_Core_C::HandleADSStateUpdated(bool Is_Targeting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SR_Core_C", "HandleADSStateUpdated");

	Params::SR_Core_C_HandleADSStateUpdated Parms{};

	Parms.Is_Targeting = Is_Targeting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SR_Core.SR_Core_C.HandleOnSourcePlayed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStreamingRadioPlayerComponent*   Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAthenaRadioStation              AffectedSource                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void USR_Core_C::HandleOnSourcePlayed(class UStreamingRadioPlayerComponent* Component, const struct FAthenaRadioStation& AffectedSource)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SR_Core_C", "HandleOnSourcePlayed");

	Params::SR_Core_C_HandleOnSourcePlayed Parms{};

	Parms.Component = Component;
	Parms.AffectedSource = std::move(AffectedSource);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SR_Core.SR_Core_C.UpdateMixState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CallFunc_GetIsMixAllowed_MixAllowed                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void USR_Core_C::UpdateMixState(bool CallFunc_GetIsMixAllowed_MixAllowed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SR_Core_C", "UpdateMixState");

	Params::SR_Core_C_UpdateMixState Parms{};

	Parms.CallFunc_GetIsMixAllowed_MixAllowed = CallFunc_GetIsMixAllowed_MixAllowed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SR_Core.SR_Core_C.GetIsMixAllowed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    MixAllowed                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsPlayingLiveFeed_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void USR_Core_C::GetIsMixAllowed(bool* MixAllowed, bool CallFunc_IsPlayingLiveFeed_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SR_Core_C", "GetIsMixAllowed");

	Params::SR_Core_C_GetIsMixAllowed Parms{};

	Parms.CallFunc_IsPlayingLiveFeed_ReturnValue = CallFunc_IsPlayingLiveFeed_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (MixAllowed != nullptr)
		*MixAllowed = std::move(Parms.MixAllowed);
}

}

