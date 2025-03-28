#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Petrol

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function B_Prj_Petrol.B_Prj_Petrol_C.ExecuteUbergraph_B_Prj_Petrol
// 0x0270 (0x0270 - 0x0000)
struct B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7408[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_Event_MyComp;                               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_Other;                                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_Event_OtherComp;                            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bSelfMoved;                           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7409[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                K2Node_Event_HitLocation;                          // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_HitNormal;                            // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_Event_NormalImpulse;                        // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_Hit;                                  // 0x0048(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_Athena_CheckActorHasTags_bDidActorHaveTags; // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_740A[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABGA_Petrol_Pickup_C*                   K2Node_DynamicCast_AsBGA_Petrol_Pickup;            // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_740B[0x2];                                     // 0x00E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_Event_HitActors;                            // 0x00F0(0x0010)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	TArray<struct FHitResult>                     K2Node_Event_HitResults;                           // 0x0100(0x0010)(ConstParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_740C[0x3];                                     // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_Event_Hit_1;                                // 0x0118(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_740D[0x3];                                     // 0x01A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetValueAtLevel_ReturnValue;              // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_740E[0x4];                                     // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue;                // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x01BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_740F[0x3];                                     // 0x01BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortWeapon*                            CallFunc_GetOwnerWeapon_ReturnValue;               // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7410[0x3];                                     // 0x01C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAmmoCostPerFire_ReturnValue;           // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7411[0x4];                                     // 0x01D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABGA_Petrol_Pickup_C*                   K2Node_DynamicCast_AsBGA_Petrol_Pickup_1;          // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7412[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAttachParentActor_ReturnValue;         // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDistanceBetweenActors_Distance;        // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7413[0x4];                                     // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_PetrolWeapon_C*                      K2Node_DynamicCast_AsB_Petrol_Weapon;              // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7414[0x7];                                     // 0x0209(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_1;              // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_1;            // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x021A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x021B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7415[0x4];                                     // 0x021C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortWeapon*                            CallFunc_GetOwnerWeapon_ReturnValue_1;             // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0228(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0238(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_TeleportTo_ReturnValue;                // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0245(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7416[0x2];                                     // 0x0246(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7417[0x3];                                     // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetInstigator_ReturnValue_2;              // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                      CallFunc_GetQuestManager_ReturnValue;              // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SendComplexCustomStatEvent_QuestActive;   // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SendComplexCustomStatEvent_QuestCompleted; // 0x0269(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol) == 0x000008, "Wrong alinment on B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol");
static_assert(sizeof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol) == 0x000270, "Wrong size on B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, EntryPoint) == 0x000000, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::EntryPoint' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, Temp_bool_True_if_break_was_hit_Variable) == 0x000004, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, K2Node_Event_MyComp) == 0x000008, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::K2Node_Event_MyComp' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, K2Node_Event_Other) == 0x000010, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::K2Node_Event_Other' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, K2Node_Event_OtherComp) == 0x000018, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::K2Node_Event_OtherComp' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, K2Node_Event_bSelfMoved) == 0x000020, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::K2Node_Event_bSelfMoved' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, K2Node_Event_HitLocation) == 0x000024, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::K2Node_Event_HitLocation' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, K2Node_Event_HitNormal) == 0x000030, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::K2Node_Event_HitNormal' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, K2Node_Event_NormalImpulse) == 0x00003C, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::K2Node_Event_NormalImpulse' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, K2Node_Event_Hit) == 0x000048, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::K2Node_Event_Hit' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_Athena_CheckActorHasTags_bDidActorHaveTags) == 0x0000D4, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_Athena_CheckActorHasTags_bDidActorHaveTags' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, K2Node_DynamicCast_AsBGA_Petrol_Pickup) == 0x0000D8, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::K2Node_DynamicCast_AsBGA_Petrol_Pickup' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, K2Node_DynamicCast_bSuccess) == 0x0000E0, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000E1, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000E4, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, K2Node_Event_HitActors) == 0x0000F0, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::K2Node_Event_HitActors' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, K2Node_Event_HitResults) == 0x000100, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::K2Node_Event_HitResults' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_Array_Length_ReturnValue) == 0x000110, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_Less_FloatFloat_ReturnValue) == 0x000114, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, K2Node_Event_Hit_1) == 0x000118, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::K2Node_Event_Hit_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_IsValid_ReturnValue) == 0x0001A4, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_GetValueAtLevel_ReturnValue) == 0x0001A8, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_GetInstigator_ReturnValue) == 0x0001B0, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_GetInstigator_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_Round_ReturnValue) == 0x0001B8, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x0001BC, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_GetOwnerWeapon_ReturnValue) == 0x0001C0, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_GetOwnerWeapon_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_IsValid_ReturnValue_1) == 0x0001C8, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_GetAmmoCostPerFire_ReturnValue) == 0x0001CC, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_GetAmmoCostPerFire_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, Temp_int_Array_Index_Variable) == 0x0001D0, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_Array_Get_Item) == 0x0001D8, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, K2Node_DynamicCast_AsBGA_Petrol_Pickup_1) == 0x0001E0, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::K2Node_DynamicCast_AsBGA_Petrol_Pickup_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, K2Node_DynamicCast_bSuccess_1) == 0x0001E8, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_GetAttachParentActor_ReturnValue) == 0x0001F0, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_GetAttachParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_GetDistanceBetweenActors_Distance) == 0x0001F8, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_GetDistanceBetweenActors_Distance' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, K2Node_DynamicCast_AsB_Petrol_Weapon) == 0x000200, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::K2Node_DynamicCast_AsB_Petrol_Weapon' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, K2Node_DynamicCast_bSuccess_2) == 0x000208, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_GetInstigator_ReturnValue_1) == 0x000210, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_GetInstigator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_Less_FloatFloat_ReturnValue_1) == 0x000218, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_Less_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000219, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_BooleanOR_ReturnValue) == 0x00021A, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_IsValid_ReturnValue_2) == 0x00021B, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_GetOwnerWeapon_ReturnValue_1) == 0x000220, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_GetOwnerWeapon_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_GetSocketLocation_ReturnValue) == 0x000228, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, Temp_int_Loop_Counter_Variable) == 0x000234, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000238, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_K2_TeleportTo_ReturnValue) == 0x000244, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_K2_TeleportTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_Less_IntInt_ReturnValue) == 0x000245, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_Add_IntInt_ReturnValue) == 0x000248, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_BooleanAND_ReturnValue) == 0x00024C, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_GetInstigator_ReturnValue_2) == 0x000250, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_GetInstigator_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000258, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_GetQuestManager_ReturnValue) == 0x000260, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_GetQuestManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_SendComplexCustomStatEvent_QuestActive) == 0x000268, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_SendComplexCustomStatEvent_QuestActive' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol, CallFunc_SendComplexCustomStatEvent_QuestCompleted) == 0x000269, "Member 'B_Prj_Petrol_C_ExecuteUbergraph_B_Prj_Petrol::CallFunc_SendComplexCustomStatEvent_QuestCompleted' has a wrong offset!");

// Function B_Prj_Petrol.B_Prj_Petrol_C.ReceiveHit
// 0x00D0 (0x00D0 - 0x0000)
struct B_Prj_Petrol_C_ReceiveHit final 
{
public:
	class UPrimitiveComponent*                    MyComp;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Other;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSelfMoved;                                        // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7418[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HitLocation;                                       // 0x001C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HitNormal;                                         // 0x0028(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0034(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0040(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(B_Prj_Petrol_C_ReceiveHit) == 0x000008, "Wrong alinment on B_Prj_Petrol_C_ReceiveHit");
static_assert(sizeof(B_Prj_Petrol_C_ReceiveHit) == 0x0000D0, "Wrong size on B_Prj_Petrol_C_ReceiveHit");
static_assert(offsetof(B_Prj_Petrol_C_ReceiveHit, MyComp) == 0x000000, "Member 'B_Prj_Petrol_C_ReceiveHit::MyComp' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ReceiveHit, Other) == 0x000008, "Member 'B_Prj_Petrol_C_ReceiveHit::Other' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ReceiveHit, OtherComp) == 0x000010, "Member 'B_Prj_Petrol_C_ReceiveHit::OtherComp' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ReceiveHit, bSelfMoved) == 0x000018, "Member 'B_Prj_Petrol_C_ReceiveHit::bSelfMoved' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ReceiveHit, HitLocation) == 0x00001C, "Member 'B_Prj_Petrol_C_ReceiveHit::HitLocation' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ReceiveHit, HitNormal) == 0x000028, "Member 'B_Prj_Petrol_C_ReceiveHit::HitNormal' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ReceiveHit, NormalImpulse) == 0x000034, "Member 'B_Prj_Petrol_C_ReceiveHit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_ReceiveHit, Hit) == 0x000040, "Member 'B_Prj_Petrol_C_ReceiveHit::Hit' has a wrong offset!");

// Function B_Prj_Petrol.B_Prj_Petrol_C.OnExploded
// 0x0020 (0x0020 - 0x0000)
struct B_Prj_Petrol_C_OnExploded final 
{
public:
	TArray<class AActor*>                         Param_HitActors;                                   // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	TArray<struct FHitResult>                     HitResults;                                        // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};
static_assert(alignof(B_Prj_Petrol_C_OnExploded) == 0x000008, "Wrong alinment on B_Prj_Petrol_C_OnExploded");
static_assert(sizeof(B_Prj_Petrol_C_OnExploded) == 0x000020, "Wrong size on B_Prj_Petrol_C_OnExploded");
static_assert(offsetof(B_Prj_Petrol_C_OnExploded, Param_HitActors) == 0x000000, "Member 'B_Prj_Petrol_C_OnExploded::Param_HitActors' has a wrong offset!");
static_assert(offsetof(B_Prj_Petrol_C_OnExploded, HitResults) == 0x000010, "Member 'B_Prj_Petrol_C_OnExploded::HitResults' has a wrong offset!");

// Function B_Prj_Petrol.B_Prj_Petrol_C.OnStop
// 0x008C (0x008C - 0x0000)
struct B_Prj_Petrol_C_OnStop final 
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(B_Prj_Petrol_C_OnStop) == 0x000004, "Wrong alinment on B_Prj_Petrol_C_OnStop");
static_assert(sizeof(B_Prj_Petrol_C_OnStop) == 0x00008C, "Wrong size on B_Prj_Petrol_C_OnStop");
static_assert(offsetof(B_Prj_Petrol_C_OnStop, Hit) == 0x000000, "Member 'B_Prj_Petrol_C_OnStop::Hit' has a wrong offset!");

// Function B_Prj_Petrol.B_Prj_Petrol_C.UserConstructionScript
// 0x0004 (0x0004 - 0x0000)
struct B_Prj_Petrol_C_UserConstructionScript final 
{
public:
	float                                         CallFunc_GetValueAtLevel_ReturnValue;              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(B_Prj_Petrol_C_UserConstructionScript) == 0x000004, "Wrong alinment on B_Prj_Petrol_C_UserConstructionScript");
static_assert(sizeof(B_Prj_Petrol_C_UserConstructionScript) == 0x000004, "Wrong size on B_Prj_Petrol_C_UserConstructionScript");
static_assert(offsetof(B_Prj_Petrol_C_UserConstructionScript, CallFunc_GetValueAtLevel_ReturnValue) == 0x000000, "Member 'B_Prj_Petrol_C_UserConstructionScript::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");

}

