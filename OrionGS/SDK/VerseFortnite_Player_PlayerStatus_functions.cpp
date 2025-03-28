#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VerseFortnite_Player_PlayerStatus

#include "Basic.hpp"

#include "VerseFortnite_Player_PlayerStatus_classes.hpp"
#include "VerseFortnite_Player_PlayerStatus_parameters.hpp"


namespace SDK
{

// Function VerseFortnite_Player_PlayerStatus.PlayerStatus.getStatus
// (Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPlayerComponent*                 __verse_0x9F1D658F_player                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPlayerStatusType                       __verse_0x076C3C41_statusType                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   RetVal                                                 (Parm, OutParm, ReturnParm, NoDestructor)

uint8 UPlayerStatus::GetStatus(class UPlayerComponent* __verse_0x9F1D658F_player, EPlayerStatusType __verse_0x076C3C41_statusType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("PlayerStatus", "getStatus");

	Params::PlayerStatus_GetStatus Parms{};

	Parms.__verse_0x9F1D658F_player = __verse_0x9F1D658F_player;
	Parms.__verse_0x076C3C41_statusType = __verse_0x076C3C41_statusType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function VerseFortnite_Player_PlayerStatus.PlayerStatus.$InitCDO
// ()

void UPlayerStatus::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerStatus", "$InitCDO");

	UObject::ProcessEvent(Func, nullptr);
}


// Function VerseFortnite_Player_PlayerStatus.PlayerStatus.$InitInstance
// ()

void UPlayerStatus::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerStatus", "$InitInstance");

	UObject::ProcessEvent(Func, nullptr);
}

}

