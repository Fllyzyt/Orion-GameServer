#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UnderwaterAudioComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass UnderwaterAudioComponent.UnderwaterAudioComponent_C
// 0x0030 (0x00E0 - 0x00B0)
class UUnderwaterAudioComponent_C final  : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundMix*                              CamUnderwaterSoundMix;                             // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CamUnderwaterStartSound;                           // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CamUnderwaterAudio;                                // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CamUnderwaterLoopSound;                            // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             CamUnderwaterStopSound;                            // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UnderwaterAudioComponent(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, TDelegate<void(bool bIsUnderWater, float DepthUnderwater)> K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_bIsUnderWater, float K2Node_CustomEvent_DepthUnderwater, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UWaterSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, EAudioComponentPlayState CallFunc_GetPlayState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsSplitScreen_ReturnValue, EEndPlayReason K2Node_Event_EndPlayReason);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void On_Camera_Underwater_State_Changed(bool bIsUnderWater, float DepthUnderwater);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UnderwaterAudioComponent_C">();
	}
	static class UUnderwaterAudioComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUnderwaterAudioComponent_C>();
	}
};
static_assert(alignof(UUnderwaterAudioComponent_C) == 0x000008, "Wrong alinment on UUnderwaterAudioComponent_C");
static_assert(sizeof(UUnderwaterAudioComponent_C) == 0x0000E0, "Wrong size on UUnderwaterAudioComponent_C");
static_assert(offsetof(UUnderwaterAudioComponent_C, UberGraphFrame) == 0x0000B0, "Member 'UUnderwaterAudioComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUnderwaterAudioComponent_C, CamUnderwaterSoundMix) == 0x0000B8, "Member 'UUnderwaterAudioComponent_C::CamUnderwaterSoundMix' has a wrong offset!");
static_assert(offsetof(UUnderwaterAudioComponent_C, CamUnderwaterStartSound) == 0x0000C0, "Member 'UUnderwaterAudioComponent_C::CamUnderwaterStartSound' has a wrong offset!");
static_assert(offsetof(UUnderwaterAudioComponent_C, CamUnderwaterAudio) == 0x0000C8, "Member 'UUnderwaterAudioComponent_C::CamUnderwaterAudio' has a wrong offset!");
static_assert(offsetof(UUnderwaterAudioComponent_C, CamUnderwaterLoopSound) == 0x0000D0, "Member 'UUnderwaterAudioComponent_C::CamUnderwaterLoopSound' has a wrong offset!");
static_assert(offsetof(UUnderwaterAudioComponent_C, CamUnderwaterStopSound) == 0x0000D8, "Member 'UUnderwaterAudioComponent_C::CamUnderwaterStopSound' has a wrong offset!");

}

