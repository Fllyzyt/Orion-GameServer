#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VerseFortnite_FortBuildingSettingsComponent

#include "Basic.hpp"

#include "VerseFortnite_FortBuildingSettingsComponent_classes.hpp"
#include "VerseFortnite_FortBuildingSettingsComponent_parameters.hpp"


namespace SDK
{

// Function VerseFortnite_FortBuildingSettingsComponent.FortBuildingSettingsComponent.$InitCDO
// ()

void UFortBuildingSettingsComponent::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBuildingSettingsComponent", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VerseFortnite_FortBuildingSettingsComponent.FortBuildingSettingsComponent.$InitInstance
// ()

void UFortBuildingSettingsComponent::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBuildingSettingsComponent", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VerseFortnite_FortBuildingSettingsComponent.FortBuildingSettingsComponent.setBuilding
// (Native, Public, BlueprintCallable)
// Parameters:
// EPlayerSettingState                     __verse_0xDDCAFCF3_state                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortBuildingSettingsComponent::SetBuilding(EPlayerSettingState __verse_0xDDCAFCF3_state)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBuildingSettingsComponent", "setBuilding");

	Params::FortBuildingSettingsComponent_SetBuilding Parms{};

	Parms.__verse_0xDDCAFCF3_state = __verse_0xDDCAFCF3_state;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortnite_FortBuildingSettingsComponent.FortBuildingSettingsComponent.setBuildingOnWater
// (Native, Public, BlueprintCallable)
// Parameters:
// EPlayerSettingState                     __verse_0xDDCAFCF3_state                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortBuildingSettingsComponent::SetBuildingOnWater(EPlayerSettingState __verse_0xDDCAFCF3_state)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBuildingSettingsComponent", "setBuildingOnWater");

	Params::FortBuildingSettingsComponent_SetBuildingOnWater Parms{};

	Parms.__verse_0xDDCAFCF3_state = __verse_0xDDCAFCF3_state;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortnite_FortBuildingSettingsComponent.FortBuildingSettingsComponent.setEditing
// (Native, Public, BlueprintCallable)
// Parameters:
// EPlayerSettingState                     __verse_0xDDCAFCF3_state                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortBuildingSettingsComponent::SetEditing(EPlayerSettingState __verse_0xDDCAFCF3_state)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBuildingSettingsComponent", "setEditing");

	Params::FortBuildingSettingsComponent_SetEditing Parms{};

	Parms.__verse_0xDDCAFCF3_state = __verse_0xDDCAFCF3_state;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortnite_FortBuildingSettingsComponent.FortBuildingSettingsComponent.setEditingHostile
// (Native, Public, BlueprintCallable)
// Parameters:
// EPlayerSettingState                     __verse_0xDDCAFCF3_state                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortBuildingSettingsComponent::SetEditingHostile(EPlayerSettingState __verse_0xDDCAFCF3_state)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBuildingSettingsComponent", "setEditingHostile");

	Params::FortBuildingSettingsComponent_SetEditingHostile Parms{};

	Parms.__verse_0xDDCAFCF3_state = __verse_0xDDCAFCF3_state;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function VerseFortnite_FortBuildingSettingsComponent.FortBuildingSettingsComponent.setTrapPlacement
// (Native, Public, BlueprintCallable)
// Parameters:
// EPlayerSettingState                     __verse_0xDDCAFCF3_state                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortBuildingSettingsComponent::SetTrapPlacement(EPlayerSettingState __verse_0xDDCAFCF3_state)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FortBuildingSettingsComponent", "setTrapPlacement");

	Params::FortBuildingSettingsComponent_SetTrapPlacement Parms{};

	Parms.__verse_0xDDCAFCF3_state = __verse_0xDDCAFCF3_state;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

