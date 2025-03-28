#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TimeSynth_TrackMixState

#include "Basic.hpp"

#include "TimeSynth_VolumeGroupState_structs.hpp"


namespace SDK
{

// UserDefinedStruct TimeSynth_TrackMixState.TimeSynth_TrackMixState
// 0x0028 (0x0028 - 0x0000)
struct FTimeSynth_TrackMixState final 
{
public:
	class FName                                   MixState_29_DE643ACB4D24E56B4BD5BEB15784E04D;      // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTimeSynth_VolumeGroupState>    VolumeGroupStates_3_6471FE684CEE53024935A3BF6175EB13; // 0x0008(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                         FadeTime_38_90A9CE1C4D73A02B7CC1AE988D7CE73A;      // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxVolumeDb_32_894FD1F0404801C1B358F1853CF2D9F2;   // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentVolumeNormalized_37_7080ED634324AB286742248CFA169B6A; // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FTimeSynth_TrackMixState) == 0x000008, "Wrong alinment on FTimeSynth_TrackMixState");
static_assert(sizeof(FTimeSynth_TrackMixState) == 0x000028, "Wrong size on FTimeSynth_TrackMixState");
static_assert(offsetof(FTimeSynth_TrackMixState, MixState_29_DE643ACB4D24E56B4BD5BEB15784E04D) == 0x000000, "Member 'FTimeSynth_TrackMixState::MixState_29_DE643ACB4D24E56B4BD5BEB15784E04D' has a wrong offset!");
static_assert(offsetof(FTimeSynth_TrackMixState, VolumeGroupStates_3_6471FE684CEE53024935A3BF6175EB13) == 0x000008, "Member 'FTimeSynth_TrackMixState::VolumeGroupStates_3_6471FE684CEE53024935A3BF6175EB13' has a wrong offset!");
static_assert(offsetof(FTimeSynth_TrackMixState, FadeTime_38_90A9CE1C4D73A02B7CC1AE988D7CE73A) == 0x000018, "Member 'FTimeSynth_TrackMixState::FadeTime_38_90A9CE1C4D73A02B7CC1AE988D7CE73A' has a wrong offset!");
static_assert(offsetof(FTimeSynth_TrackMixState, MaxVolumeDb_32_894FD1F0404801C1B358F1853CF2D9F2) == 0x00001C, "Member 'FTimeSynth_TrackMixState::MaxVolumeDb_32_894FD1F0404801C1B358F1853CF2D9F2' has a wrong offset!");
static_assert(offsetof(FTimeSynth_TrackMixState, CurrentVolumeNormalized_37_7080ED634324AB286742248CFA169B6A) == 0x000020, "Member 'FTimeSynth_TrackMixState::CurrentVolumeNormalized_37_7080ED634324AB286742248CFA169B6A' has a wrong offset!");

}

