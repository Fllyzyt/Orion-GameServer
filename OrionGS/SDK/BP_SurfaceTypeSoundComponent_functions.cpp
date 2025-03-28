#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SurfaceTypeSoundComponent

#include "Basic.hpp"

#include "BP_SurfaceTypeSoundComponent_classes.hpp"
#include "BP_SurfaceTypeSoundComponent_parameters.hpp"


namespace SDK
{

// Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.ExecuteUbergraph_BP_SurfaceTypeSoundComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SurfaceTypeSoundComponent_C::ExecuteUbergraph_BP_SurfaceTypeSoundComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SurfaceTypeSoundComponent_C", "ExecuteUbergraph_BP_SurfaceTypeSoundComponent");

	Params::BP_SurfaceTypeSoundComponent_C_ExecuteUbergraph_BP_SurfaceTypeSoundComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.Test Delay
// (BlueprintCallable, BlueprintEvent)

void UBP_SurfaceTypeSoundComponent_C::Test_Delay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SurfaceTypeSoundComponent_C", "Test Delay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.PlaySound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Param_Location                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                       CallFunc_Map_Find_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Map_Find_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SurfaceTypeSoundComponent_C::PlaySound(const struct FVector& Param_Location, class USoundBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SurfaceTypeSoundComponent_C", "PlaySound");

	Params::BP_SurfaceTypeSoundComponent_C_PlaySound Parms{};

	Parms.Param_Location = std::move(Param_Location);
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.SetSurfaceType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPhysicalSurface                        Param_SurfaceType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPhysicalSurface                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABuildingSMActor*                 K2Node_DynamicCast_AsBuilding_SMActor                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// EPhysicalSurface                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPhysicalSurface                        Temp_byte_Variable_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPhysicalSurface                        Temp_byte_Variable_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPhysicalSurface                        Temp_byte_Variable_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortResourceType                       Temp_byte_Variable_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPhysicalSurface                        Temp_byte_Variable_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPhysicalSurface                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SurfaceTypeSoundComponent_C::SetSurfaceType(EPhysicalSurface Param_SurfaceType, class AActor* Actor, EPhysicalSurface Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, class ABuildingSMActor* K2Node_DynamicCast_AsBuilding_SMActor, bool K2Node_DynamicCast_bSuccess, EPhysicalSurface Temp_byte_Variable_1, EPhysicalSurface Temp_byte_Variable_2, EPhysicalSurface Temp_byte_Variable_3, EPhysicalSurface Temp_byte_Variable_4, EFortResourceType Temp_byte_Variable_5, EPhysicalSurface Temp_byte_Variable_6, EPhysicalSurface K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SurfaceTypeSoundComponent_C", "SetSurfaceType");

	Params::BP_SurfaceTypeSoundComponent_C_SetSurfaceType Parms{};

	Parms.Param_SurfaceType = Param_SurfaceType;
	Parms.Actor = Actor;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_SMActor = K2Node_DynamicCast_AsBuilding_SMActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.ActuallyPlaySound
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                       CallFunc_Map_Find_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Map_Find_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SurfaceTypeSoundComponent_C::ActuallyPlaySound(class USoundBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SurfaceTypeSoundComponent_C", "ActuallyPlaySound");

	Params::BP_SurfaceTypeSoundComponent_C_ActuallyPlaySound Parms{};

	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

