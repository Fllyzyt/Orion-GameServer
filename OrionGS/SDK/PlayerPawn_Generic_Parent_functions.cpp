#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerPawn_Generic_Parent

#include "Basic.hpp"

#include "PlayerPawn_Generic_Parent_classes.hpp"
#include "PlayerPawn_Generic_Parent_parameters.hpp"


namespace SDK
{

// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.OnOverlapWaterVolume__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsInWater                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*                  Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Water                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APlayerPawn_Generic_Parent_C::OnOverlapWaterVolume__DelegateSignature(bool bIsInWater, class AFortPlayerPawn* Pawn, class AActor* Water)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_Parent_C", "OnOverlapWaterVolume__DelegateSignature");

	Params::PlayerPawn_Generic_Parent_C_OnOverlapWaterVolume__DelegateSignature Parms{};

	Parms.bIsInWater = bIsInWater;
	Parms.Pawn = Pawn;
	Parms.Water = Water;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Generic_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       Temp_struct_Variable                                   (ConstParm, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_IsLocallyControlled_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPostProcessComponent*            CallFunc_AddComponent_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsDedicatedServer_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                       K2Node_CustomEvent_NewTransform                        (ConstParm, IsPlainOldData, NoDestructor)

void APlayerPawn_Generic_Parent_C::ExecuteUbergraph_PlayerPawn_Generic_Parent(int32 EntryPoint, struct FTransform& Temp_struct_Variable, bool CallFunc_IsLocallyControlled_ReturnValue, class UPostProcessComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, struct FTransform& K2Node_CustomEvent_NewTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_Parent_C", "ExecuteUbergraph_PlayerPawn_Generic_Parent");

	Params::PlayerPawn_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Generic_Parent Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = std::move(Temp_struct_Variable);
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_CustomEvent_NewTransform = std::move(K2Node_CustomEvent_NewTransform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReinitializeWeaponMaterials
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Generic_Parent_C::ReinitializeWeaponMaterials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_Parent_C", "ReinitializeWeaponMaterials");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Player Creates a Splash
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       NewTransform                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)

void APlayerPawn_Generic_Parent_C::Player_Creates_a_Splash(struct FTransform& NewTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_Parent_C", "Player Creates a Splash");

	Params::PlayerPawn_Generic_Parent_C_Player_Creates_a_Splash Parms{};

	Parms.NewTransform = std::move(NewTransform);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Entered Water Volume
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Generic_Parent_C::Entered_Water_Volume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_Parent_C", "Entered Water Volume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayerPawn_Generic_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerPawn_Generic_Parent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

