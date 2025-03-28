#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TimeSynthTrackComponent

#include "Basic.hpp"

#include "TimeSynth_TrackMixState_structs.hpp"
#include "Engine_structs.hpp"
#include "TimeSynth_structs.hpp"
#include "TimeSynth_TrackPlayStates_structs.hpp"
#include "TimeSynth_TransitionData_structs.hpp"
#include "TimeSynth_TrackStemData_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TimeSynthTrackComponent.BP_TimeSynthTrackComponent_C
// 0x0108 (0x01B8 - 0x00B0)
class UBP_TimeSynthTrackComponent_C : public UFortTimeSynthTrackComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   TrackID;                                           // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_TimeSynthController_Base_C*         TimeSynthController;                               // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TrackLengthBeats;                                  // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimeSynthQuantizationSettings         QuantizationSettings;                              // 0x00CC(0x0014)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<struct FTimeSynth_TrackStemData>       Clips;                                             // 0x00E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         CurrentBeatDecrement;                              // 0x00F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6730[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimeSynth_TrackStemData               StopClip;                                          // 0x00F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FTimeSynth_TransitionData> Transitions;                                       // 0x0108(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTimeSynthClipHandle>           Handles;                                           // 0x0158(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          QuantizationEventBound;                            // 0x0168(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DebugEnabled;                                      // 0x0169(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ETimeSynth_TrackPlayStates                    PlayState;                                         // 0x016A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6731[0x1];                                     // 0x016B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrentBeat;                                       // 0x016C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPlayStateChanged;                                // 0x0170(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FTimeSynth_TrackMixState>       TrackMixStates;                                    // 0x0180(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         PriorityWeight;                                    // 0x0190(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6732[0x4];                                     // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  TrackDisableTags;                                  // 0x0198(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void SetMixStateVolumeByIndex(int32 Param_Index, float Volume, float LocalVolume, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Log_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FTimeSynth_VolumeGroupState& CallFunc_Array_Get_Item, float CallFunc_FMin_ReturnValue, float CallFunc_SelectFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_TimeSynthController_Base_C* CallFunc_GetTimeSynthController_TimeSynthController, bool CallFunc_Less_IntInt_ReturnValue, class UTimeSynthComponent* CallFunc_GetTimeSynthComponent_TimeSynth);
	void GetMixStateIndexFromName(class FName Param_Name, int32* Array_Index, int32 CallFunc_FindMixState_Array_Index);
	void GetPriority(float* Priority);
	void SetMixStateVolume(class FName MixStateName, float Volume, float LocalVolume, float LocalFadeTime, bool LocalEnabled, class FName LocalMixStateName, float CallFunc_FClamp_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue_1, class ABP_TimeSynthController_Base_C* CallFunc_GetTimeSynthController_TimeSynthController, float CallFunc_Log_ReturnValue, class UTimeSynthComponent* CallFunc_GetTimeSynthComponent_TimeSynth, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FindMixState_Array_Index, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FTimeSynth_VolumeGroupState& CallFunc_Array_Get_Item);
	void FindMixState(class FName Param_Name, int32* Array_Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FTimeSynth_TrackMixState& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void GetMaxClipDuration(int32* MaxClipDuration);
	void GetQuantizationSettings(struct FTimeSynthQuantizationSettings* Param_QuantizationSettings);
	void GetTrackID(class FName* Param_TrackID);
	void GetTimeSynthController(class ABP_TimeSynthController_Base_C** Param_TimeSynthController);
	void OnQuantizationBar(ETimeSynthEventQuantization QuantizationType, int32 NumBars, float Beat, bool CallFunc_CheckPlaystate_Result, bool CallFunc_CheckPlaystate_Result_1);
	void SetPlaystate(ETimeSynth_TrackPlayStates Is_In_Play_State, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6);
	void CheckPlaystate(ETimeSynth_TrackPlayStates Is_In_Play_State, bool* Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnQuantizationBeat(ETimeSynthEventQuantization QuantizationType, int32 NumBars, float Beat, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, bool CallFunc_CheckPlaystate_Result, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, bool CallFunc_CheckPlaystate_Result_1, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void HasTransitionForTrack(class FName Param_TrackID, bool* Transition_Found, struct FTimeSynth_TransitionData* Transition_Data, const struct FTimeSynth_TransitionData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void CalculateMaxClipDuration(TArray<struct FTimeSynth_TrackStemData>& Param_Clips, int32* Duration, int32 MaxDuration, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FTimeSynth_TrackStemData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue);
	void LoopCurrentTrack(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FTimeSynthTimeDef& K2Node_MakeStruct_TimeSynthTimeDef, int32 Temp_int_Loop_Counter_Variable_1, class UTimeSynthComponent* CallFunc_GetTimeSynthComponent_TimeSynth, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FTimeSynthClipHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_CalculateMaxClipDuration_Duration, class UTimeSynthComponent* CallFunc_GetTimeSynthComponent_TimeSynth_1, const struct FTimeSynth_TrackStemData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FTimeSynthClipHandle& CallFunc_PlayClip_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void QueueTrackStop(bool Play_Outro, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_CheckPlaystate_Result, bool CallFunc_CheckPlaystate_Result_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FTimeSynthClipHandle& CallFunc_PlayClip_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FTimeSynthClipHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void QueueTrackStart(bool Is_First_Track, ETimeSynth_TrackPlayStates Temp_byte_Variable, ETimeSynth_TrackPlayStates Temp_byte_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UQuartzSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsQuartzEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, class AFortGameStateAthena* CallFunc_GetGameStateAthena_ReturnValue, ETimeSynth_TrackPlayStates K2Node_Select_Default, const struct FGameplayTagContainer& CallFunc_GetAthenaPlaylistContextTags_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_CalculateMaxClipDuration_Duration, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_CheckPlaystate_Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CheckPlaystate_Result_1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FTimeSynth_TrackStemData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FTimeSynthClipHandle& CallFunc_PlayClip_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void SetTimeSynthController(class ABP_TimeSynthController_Base_C* Param_TimeSynthController, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_TimeSynthController_Base_C* CallFunc_GetTimeSynthController_TimeSynthController, class ABP_TimeSynthController_Base_C* CallFunc_GetTimeSynthController_TimeSynthController_1, const struct FTimeSynth_TrackStemData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, TDelegate<void(ETimeSynthEventQuantization QuantizationType, int32 NumBars, float Beat)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(ETimeSynthEventQuantization QuantizationType, int32 NumBars, float Beat)> K2Node_CreateDelegate_OutputDelegate_1);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_TimeSynthTrackComponent(int32 EntryPoint, class UBP_TimeSynthTrackComponent_C* Temp_object_Variable, class UQuartzSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsQuartzEnabled_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_TimeSynthController_Base_C* K2Node_DynamicCast_AsBP_Time_Synth_Controller_Base, bool K2Node_DynamicCast_bSuccess);
	void OnPlayStateChanged__DelegateSignature(ETimeSynth_TrackPlayStates Previous, ETimeSynth_TrackPlayStates New);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TimeSynthTrackComponent_C">();
	}
	static class UBP_TimeSynthTrackComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TimeSynthTrackComponent_C>();
	}
};
static_assert(alignof(UBP_TimeSynthTrackComponent_C) == 0x000008, "Wrong alinment on UBP_TimeSynthTrackComponent_C");
static_assert(sizeof(UBP_TimeSynthTrackComponent_C) == 0x0001B8, "Wrong size on UBP_TimeSynthTrackComponent_C");
static_assert(offsetof(UBP_TimeSynthTrackComponent_C, UberGraphFrame) == 0x0000B0, "Member 'UBP_TimeSynthTrackComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_C, TrackID) == 0x0000B8, "Member 'UBP_TimeSynthTrackComponent_C::TrackID' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_C, TimeSynthController) == 0x0000C0, "Member 'UBP_TimeSynthTrackComponent_C::TimeSynthController' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_C, TrackLengthBeats) == 0x0000C8, "Member 'UBP_TimeSynthTrackComponent_C::TrackLengthBeats' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_C, QuantizationSettings) == 0x0000CC, "Member 'UBP_TimeSynthTrackComponent_C::QuantizationSettings' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_C, Clips) == 0x0000E0, "Member 'UBP_TimeSynthTrackComponent_C::Clips' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_C, CurrentBeatDecrement) == 0x0000F0, "Member 'UBP_TimeSynthTrackComponent_C::CurrentBeatDecrement' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_C, StopClip) == 0x0000F8, "Member 'UBP_TimeSynthTrackComponent_C::StopClip' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_C, Transitions) == 0x000108, "Member 'UBP_TimeSynthTrackComponent_C::Transitions' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_C, Handles) == 0x000158, "Member 'UBP_TimeSynthTrackComponent_C::Handles' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_C, QuantizationEventBound) == 0x000168, "Member 'UBP_TimeSynthTrackComponent_C::QuantizationEventBound' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_C, DebugEnabled) == 0x000169, "Member 'UBP_TimeSynthTrackComponent_C::DebugEnabled' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_C, PlayState) == 0x00016A, "Member 'UBP_TimeSynthTrackComponent_C::PlayState' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_C, CurrentBeat) == 0x00016C, "Member 'UBP_TimeSynthTrackComponent_C::CurrentBeat' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_C, OnPlayStateChanged) == 0x000170, "Member 'UBP_TimeSynthTrackComponent_C::OnPlayStateChanged' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_C, TrackMixStates) == 0x000180, "Member 'UBP_TimeSynthTrackComponent_C::TrackMixStates' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_C, PriorityWeight) == 0x000190, "Member 'UBP_TimeSynthTrackComponent_C::PriorityWeight' has a wrong offset!");
static_assert(offsetof(UBP_TimeSynthTrackComponent_C, TrackDisableTags) == 0x000198, "Member 'UBP_TimeSynthTrackComponent_C::TrackDisableTags' has a wrong offset!");

}

