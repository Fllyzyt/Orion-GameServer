#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaGenericLobbyViolator

#include "Basic.hpp"


namespace SDK::Params
{

// Function AthenaGenericLobbyViolator.AthenaGenericLobbyViolator_C.SetGamemodeName
// 0x0068 (0x0068 - 0x0000)
struct AthenaGenericLobbyViolator_C_SetGamemodeName final 
{
public:
	class FText                                   Param_Name;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Param_SubText;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0030(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D0C[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextToUpper_ReturnValue_1;                // 0x0050(0x0018)()
};
static_assert(alignof(AthenaGenericLobbyViolator_C_SetGamemodeName) == 0x000008, "Wrong alinment on AthenaGenericLobbyViolator_C_SetGamemodeName");
static_assert(sizeof(AthenaGenericLobbyViolator_C_SetGamemodeName) == 0x000068, "Wrong size on AthenaGenericLobbyViolator_C_SetGamemodeName");
static_assert(offsetof(AthenaGenericLobbyViolator_C_SetGamemodeName, Param_Name) == 0x000000, "Member 'AthenaGenericLobbyViolator_C_SetGamemodeName::Param_Name' has a wrong offset!");
static_assert(offsetof(AthenaGenericLobbyViolator_C_SetGamemodeName, Param_SubText) == 0x000018, "Member 'AthenaGenericLobbyViolator_C_SetGamemodeName::Param_SubText' has a wrong offset!");
static_assert(offsetof(AthenaGenericLobbyViolator_C_SetGamemodeName, CallFunc_TextToUpper_ReturnValue) == 0x000030, "Member 'AthenaGenericLobbyViolator_C_SetGamemodeName::CallFunc_TextToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaGenericLobbyViolator_C_SetGamemodeName, CallFunc_TextIsEmpty_ReturnValue) == 0x000048, "Member 'AthenaGenericLobbyViolator_C_SetGamemodeName::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaGenericLobbyViolator_C_SetGamemodeName, CallFunc_TextToUpper_ReturnValue_1) == 0x000050, "Member 'AthenaGenericLobbyViolator_C_SetGamemodeName::CallFunc_TextToUpper_ReturnValue_1' has a wrong offset!");

}

