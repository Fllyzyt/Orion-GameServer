#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortnitePartyBackdrop_Camera

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C
// 0x0050 (0x0830 - 0x07E0)
class AFortnitePartyBackdrop_Camera_C final  : public AFortCameraBase
{
public:
	uint8                                         Pad_67D8[0x8];                                     // 0x07D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow;                                             // 0x07E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             SavedTransform;                                    // 0x07F0(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                          Active;                                            // 0x0820(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnActivated(class AFortPlayerController* PlayerController);
	void OnDeactivated(class AFortPlayerController* PlayerController);
	void Reset_Location();
	void ManualActivate();
	void ExecuteUbergraph_FortnitePartyBackdrop_Camera(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, class AFortPlayerController* K2Node_Event_PlayerController_1, TArray<class ATVPostProcessBP_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Array_Index_Variable_2, class ATVPostProcessBP_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AFortTimeOfDayManager* CallFunc_GetTimeOfDayManagerFromContext_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AFortPlayerController* K2Node_Event_PlayerController, TArray<class ABP_FortniteLobbyLightSwitcher_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class ABP_FortniteLobbyLightSwitcher_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class ABP_FortniteLobbyLightSwitcher_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, class ABP_FortniteLobbyLightSwitcher_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortnitePartyBackdrop_Camera_C">();
	}
	static class AFortnitePartyBackdrop_Camera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortnitePartyBackdrop_Camera_C>();
	}
};
static_assert(alignof(AFortnitePartyBackdrop_Camera_C) == 0x000010, "Wrong alinment on AFortnitePartyBackdrop_Camera_C");
static_assert(sizeof(AFortnitePartyBackdrop_Camera_C) == 0x000830, "Wrong size on AFortnitePartyBackdrop_Camera_C");
static_assert(offsetof(AFortnitePartyBackdrop_Camera_C, UberGraphFrame) == 0x0007E0, "Member 'AFortnitePartyBackdrop_Camera_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFortnitePartyBackdrop_Camera_C, Arrow) == 0x0007E8, "Member 'AFortnitePartyBackdrop_Camera_C::Arrow' has a wrong offset!");
static_assert(offsetof(AFortnitePartyBackdrop_Camera_C, SavedTransform) == 0x0007F0, "Member 'AFortnitePartyBackdrop_Camera_C::SavedTransform' has a wrong offset!");
static_assert(offsetof(AFortnitePartyBackdrop_Camera_C, Active) == 0x000820, "Member 'AFortnitePartyBackdrop_Camera_C::Active' has a wrong offset!");

}

