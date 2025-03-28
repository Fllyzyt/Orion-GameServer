#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_HeldObjectSocket

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function B_HeldObjectSocket.B_HeldObjectSocket_C.ExecuteUbergraph_B_HeldObjectSocket
// 0x00E0 (0x00E0 - 0x0000)
struct B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6B6B[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_SelfActor;                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OtherActor;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_NormalImpulse;                  // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_CustomEvent_Hit;                            // 0x0034(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AB_HeldObject_Parent_C*                 K2Node_DynamicCast_AsB_Held_Object_Parent;         // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B6C[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_HeldObject_Parent_C*                 CallFunc_ValidateHeldObject_HeldObject_Output;     // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidateHeldObject_IsValid;               // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket) == 0x000008, "Wrong alinment on B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket");
static_assert(sizeof(B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket) == 0x0000E0, "Wrong size on B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket");
static_assert(offsetof(B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket, EntryPoint) == 0x000000, "Member 'B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket, K2Node_CustomEvent_SelfActor) == 0x000018, "Member 'B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket::K2Node_CustomEvent_SelfActor' has a wrong offset!");
static_assert(offsetof(B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket, K2Node_CustomEvent_OtherActor) == 0x000020, "Member 'B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket::K2Node_CustomEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket, K2Node_CustomEvent_NormalImpulse) == 0x000028, "Member 'B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket::K2Node_CustomEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket, K2Node_CustomEvent_Hit) == 0x000034, "Member 'B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket::K2Node_CustomEvent_Hit' has a wrong offset!");
static_assert(offsetof(B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket, K2Node_DynamicCast_AsB_Held_Object_Parent) == 0x0000C0, "Member 'B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket::K2Node_DynamicCast_AsB_Held_Object_Parent' has a wrong offset!");
static_assert(offsetof(B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket, CallFunc_ValidateHeldObject_HeldObject_Output) == 0x0000D0, "Member 'B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket::CallFunc_ValidateHeldObject_HeldObject_Output' has a wrong offset!");
static_assert(offsetof(B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket, CallFunc_ValidateHeldObject_IsValid) == 0x0000D8, "Member 'B_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket::CallFunc_ValidateHeldObject_IsValid' has a wrong offset!");

// Function B_HeldObjectSocket.B_HeldObjectSocket_C.OnHitHeldObject
// 0x00A8 (0x00A8 - 0x0000)
struct B_HeldObjectSocket_C_OnHitHeldObject final 
{
public:
	class AActor*                                 SelfActor;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x001C(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(B_HeldObjectSocket_C_OnHitHeldObject) == 0x000008, "Wrong alinment on B_HeldObjectSocket_C_OnHitHeldObject");
static_assert(sizeof(B_HeldObjectSocket_C_OnHitHeldObject) == 0x0000A8, "Wrong size on B_HeldObjectSocket_C_OnHitHeldObject");
static_assert(offsetof(B_HeldObjectSocket_C_OnHitHeldObject, SelfActor) == 0x000000, "Member 'B_HeldObjectSocket_C_OnHitHeldObject::SelfActor' has a wrong offset!");
static_assert(offsetof(B_HeldObjectSocket_C_OnHitHeldObject, OtherActor) == 0x000008, "Member 'B_HeldObjectSocket_C_OnHitHeldObject::OtherActor' has a wrong offset!");
static_assert(offsetof(B_HeldObjectSocket_C_OnHitHeldObject, NormalImpulse) == 0x000010, "Member 'B_HeldObjectSocket_C_OnHitHeldObject::NormalImpulse' has a wrong offset!");
static_assert(offsetof(B_HeldObjectSocket_C_OnHitHeldObject, Hit) == 0x00001C, "Member 'B_HeldObjectSocket_C_OnHitHeldObject::Hit' has a wrong offset!");

// Function B_HeldObjectSocket.B_HeldObjectSocket_C.OnRep_SocketIsFilled
// 0x0001 (0x0001 - 0x0000)
struct B_HeldObjectSocket_C_OnRep_SocketIsFilled final 
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_HeldObjectSocket_C_OnRep_SocketIsFilled) == 0x000001, "Wrong alinment on B_HeldObjectSocket_C_OnRep_SocketIsFilled");
static_assert(sizeof(B_HeldObjectSocket_C_OnRep_SocketIsFilled) == 0x000001, "Wrong size on B_HeldObjectSocket_C_OnRep_SocketIsFilled");
static_assert(offsetof(B_HeldObjectSocket_C_OnRep_SocketIsFilled, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'B_HeldObjectSocket_C_OnRep_SocketIsFilled::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function B_HeldObjectSocket.B_HeldObjectSocket_C.ValidateHeldObject
// 0x0030 (0x0030 - 0x0000)
struct B_HeldObjectSocket_C_ValidateHeldObject final 
{
public:
	class AB_HeldObject_Parent_C*                 HeldObject_Input;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AB_HeldObject_Parent_C*                 HeldObject_Output;                                 // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsValid;                                           // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B6D[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput; // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAllMatchingGameplayTags_ReturnValue;   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_HeldObjectSocket_C_ValidateHeldObject) == 0x000008, "Wrong alinment on B_HeldObjectSocket_C_ValidateHeldObject");
static_assert(sizeof(B_HeldObjectSocket_C_ValidateHeldObject) == 0x000030, "Wrong size on B_HeldObjectSocket_C_ValidateHeldObject");
static_assert(offsetof(B_HeldObjectSocket_C_ValidateHeldObject, HeldObject_Input) == 0x000000, "Member 'B_HeldObjectSocket_C_ValidateHeldObject::HeldObject_Input' has a wrong offset!");
static_assert(offsetof(B_HeldObjectSocket_C_ValidateHeldObject, HeldObject_Output) == 0x000008, "Member 'B_HeldObjectSocket_C_ValidateHeldObject::HeldObject_Output' has a wrong offset!");
static_assert(offsetof(B_HeldObjectSocket_C_ValidateHeldObject, IsValid) == 0x000010, "Member 'B_HeldObjectSocket_C_ValidateHeldObject::IsValid' has a wrong offset!");
static_assert(offsetof(B_HeldObjectSocket_C_ValidateHeldObject, CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput) == 0x000018, "Member 'B_HeldObjectSocket_C_ValidateHeldObject::CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput' has a wrong offset!");
static_assert(offsetof(B_HeldObjectSocket_C_ValidateHeldObject, CallFunc_HasAllMatchingGameplayTags_ReturnValue) == 0x000028, "Member 'B_HeldObjectSocket_C_ValidateHeldObject::CallFunc_HasAllMatchingGameplayTags_ReturnValue' has a wrong offset!");

}

