#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Frontend_Lobby_Background

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Frontend_Lobby_Background.Frontend_Lobby_Background_C
// 0x0060 (0x0298 - 0x0238)
class AFrontend_Lobby_Background_C final  : public AFortLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         FadeIn_Fade_3606FDF647A6577B9DAC47B89146CD85;      // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FadeIn__Direction_3606FDF647A6577B9DAC47B89146CD85; // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7650[0x3];                                     // 0x0245(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FadeIn;                                            // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeOut_Fade_44D3B05B49031FA3891648AB32F57584;     // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FadeOut__Direction_44D3B05B49031FA3891648AB32F57584; // 0x0254(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7651[0x3];                                     // 0x0255(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FadeOut;                                           // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadetoBlackFloor;                                  // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeGrid;                                          // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeGrid_Targetvalue;                              // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadetoBlackFloor_TargetValue;                      // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 PresetEnvironment;                                 // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class ABP_FrontendBackPlate_C*                Frontend_BackgroundPlane_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEmitter*                               P_Storm_Rain_01_5_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEmitter*                               P_Snow_Ambient_Lobby_2_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty; // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Frontend_Lobby_Background(int32 EntryPoint, bool K2Node_SwitchString_CmpSuccess, class UTexture* K2Node_ActorBoundEvent_BackgroundImage, const class FString& K2Node_ActorBoundEvent_PresetEnvironmentName, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue, float CallFunc_GetScalarParameterValue_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1);
	void TestDynColor();
	void ReceiveBeginPlay();
	void BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_1_OnEnvironmentBackgroundTextureChangedDynamic__DelegateSignature(class UTexture* BackgroundImage);
	void BndEvt__CMSLobbyDirector_3_K2Node_ActorBoundEvent_0_OnEnvironmentChangedDynamic__DelegateSignature(const class FString& PresetEnvironmentName);
	void FadeOut__UpdateFunc();
	void FadeOut__FinishedFunc();
	void FadeIn__UpdateFunc();
	void FadeIn__FinishedFunc();
	void UpdateFade(float FadeValue, float FadeFloorToBlack, float InFadeGrid, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1);
	void SetShowPedestalSparkles(bool Show, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ATeamMemberPedestal_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ATeamMemberPedestal_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Frontend_Lobby_Background_C">();
	}
	static class AFrontend_Lobby_Background_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFrontend_Lobby_Background_C>();
	}
};
static_assert(alignof(AFrontend_Lobby_Background_C) == 0x000008, "Wrong alinment on AFrontend_Lobby_Background_C");
static_assert(sizeof(AFrontend_Lobby_Background_C) == 0x000298, "Wrong size on AFrontend_Lobby_Background_C");
static_assert(offsetof(AFrontend_Lobby_Background_C, UberGraphFrame) == 0x000238, "Member 'AFrontend_Lobby_Background_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, FadeIn_Fade_3606FDF647A6577B9DAC47B89146CD85) == 0x000240, "Member 'AFrontend_Lobby_Background_C::FadeIn_Fade_3606FDF647A6577B9DAC47B89146CD85' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, FadeIn__Direction_3606FDF647A6577B9DAC47B89146CD85) == 0x000244, "Member 'AFrontend_Lobby_Background_C::FadeIn__Direction_3606FDF647A6577B9DAC47B89146CD85' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, FadeIn) == 0x000248, "Member 'AFrontend_Lobby_Background_C::FadeIn' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, FadeOut_Fade_44D3B05B49031FA3891648AB32F57584) == 0x000250, "Member 'AFrontend_Lobby_Background_C::FadeOut_Fade_44D3B05B49031FA3891648AB32F57584' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, FadeOut__Direction_44D3B05B49031FA3891648AB32F57584) == 0x000254, "Member 'AFrontend_Lobby_Background_C::FadeOut__Direction_44D3B05B49031FA3891648AB32F57584' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, FadeOut) == 0x000258, "Member 'AFrontend_Lobby_Background_C::FadeOut' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, FadetoBlackFloor) == 0x000260, "Member 'AFrontend_Lobby_Background_C::FadetoBlackFloor' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, FadeGrid) == 0x000264, "Member 'AFrontend_Lobby_Background_C::FadeGrid' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, FadeGrid_Targetvalue) == 0x000268, "Member 'AFrontend_Lobby_Background_C::FadeGrid_Targetvalue' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, FadetoBlackFloor_TargetValue) == 0x00026C, "Member 'AFrontend_Lobby_Background_C::FadetoBlackFloor_TargetValue' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, PresetEnvironment) == 0x000270, "Member 'AFrontend_Lobby_Background_C::PresetEnvironment' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, Frontend_BackgroundPlane_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty) == 0x000280, "Member 'AFrontend_Lobby_Background_C::Frontend_BackgroundPlane_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, P_Storm_Rain_01_5_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty) == 0x000288, "Member 'AFrontend_Lobby_Background_C::P_Storm_Rain_01_5_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty' has a wrong offset!");
static_assert(offsetof(AFrontend_Lobby_Background_C, P_Snow_Ambient_Lobby_2_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty) == 0x000290, "Member 'AFrontend_Lobby_Background_C::P_Snow_Ambient_Lobby_2_ExecuteUbergraph_Frontend_Lobby_Background_RefProperty' has a wrong offset!");

}

