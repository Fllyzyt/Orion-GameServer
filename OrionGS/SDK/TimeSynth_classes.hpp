#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TimeSynth

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "TimeSynth_structs.hpp"
#include "AudioMixer_classes.hpp"


namespace SDK
{

// Class TimeSynth.TimeSynthVolumeGroup
// 0x0008 (0x0030 - 0x0028)
class UTimeSynthVolumeGroup final  : public UObject
{
public:
	float                                         DefaultVolume;                                     // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4D46[0x4];                                     // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TimeSynthVolumeGroup">();
	}
	static class UTimeSynthVolumeGroup* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTimeSynthVolumeGroup>();
	}
};
static_assert(alignof(UTimeSynthVolumeGroup) == 0x000008, "Wrong alinment on UTimeSynthVolumeGroup");
static_assert(sizeof(UTimeSynthVolumeGroup) == 0x000030, "Wrong size on UTimeSynthVolumeGroup");
static_assert(offsetof(UTimeSynthVolumeGroup, DefaultVolume) == 0x000028, "Member 'UTimeSynthVolumeGroup::DefaultVolume' has a wrong offset!");

// Class TimeSynth.TimeSynthClip
// 0x0040 (0x0068 - 0x0028)
class UTimeSynthClip final  : public UObject
{
public:
	TArray<struct FTimeSynthClipSound>            Sounds;                                            // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              VolumeScaleDb;                                     // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              PitchScaleSemitones;                               // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimeSynthTimeDef                      FadeInTime;                                        // 0x0048(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          bApplyFadeOut;                                     // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4D47[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimeSynthTimeDef                      FadeOutTime;                                       // 0x0054(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTimeSynthTimeDef                      ClipDuration;                                      // 0x005C(0x0008)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	ETimeSynthEventClipQuantization               ClipQuantization;                                  // 0x0064(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4D48[0x3];                                     // 0x0065(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TimeSynthClip">();
	}
	static class UTimeSynthClip* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTimeSynthClip>();
	}
};
static_assert(alignof(UTimeSynthClip) == 0x000008, "Wrong alinment on UTimeSynthClip");
static_assert(sizeof(UTimeSynthClip) == 0x000068, "Wrong size on UTimeSynthClip");
static_assert(offsetof(UTimeSynthClip, Sounds) == 0x000028, "Member 'UTimeSynthClip::Sounds' has a wrong offset!");
static_assert(offsetof(UTimeSynthClip, VolumeScaleDb) == 0x000038, "Member 'UTimeSynthClip::VolumeScaleDb' has a wrong offset!");
static_assert(offsetof(UTimeSynthClip, PitchScaleSemitones) == 0x000040, "Member 'UTimeSynthClip::PitchScaleSemitones' has a wrong offset!");
static_assert(offsetof(UTimeSynthClip, FadeInTime) == 0x000048, "Member 'UTimeSynthClip::FadeInTime' has a wrong offset!");
static_assert(offsetof(UTimeSynthClip, bApplyFadeOut) == 0x000050, "Member 'UTimeSynthClip::bApplyFadeOut' has a wrong offset!");
static_assert(offsetof(UTimeSynthClip, FadeOutTime) == 0x000054, "Member 'UTimeSynthClip::FadeOutTime' has a wrong offset!");
static_assert(offsetof(UTimeSynthClip, ClipDuration) == 0x00005C, "Member 'UTimeSynthClip::ClipDuration' has a wrong offset!");
static_assert(offsetof(UTimeSynthClip, ClipQuantization) == 0x000064, "Member 'UTimeSynthClip::ClipQuantization' has a wrong offset!");

// Class TimeSynth.TimeSynthComponent
// 0x0A50 (0x1120 - 0x06D0)
class UTimeSynthComponent final  : public USynthComponent
{
public:
	struct FTimeSynthQuantizationSettings         QuantizationSettings;                              // 0x06D0(0x0014)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         bEnableSpectralAnalysis : 1;                       // 0x06E4(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_4D49[0x3];                                     // 0x06E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 FrequenciesToAnalyze;                              // 0x06E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETimeSynthFFTSize                             FFTSize;                                           // 0x06F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4D4A[0x7];                                     // 0x06F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPlaybackTime;                                    // 0x0700(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         bIsFilterAEnabled : 1;                             // 0x0710(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bIsFilterBEnabled : 1;                             // 0x0710(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_4D4B[0x3];                                     // 0x0711(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimeSynthFilterSettings               FilterASettings;                                   // 0x0714(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTimeSynthFilterSettings               FilterBSettings;                                   // 0x0720(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         bIsEnvelopeFollowerEnabled : 1;                    // 0x072C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_4D4C[0x3];                                     // 0x072D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimeSynthEnvelopeFollowerSettings     EnvelopeFollowerSettings;                          // 0x0730(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         MaxPoolSize;                                       // 0x073C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4D4D[0x9E0];                                   // 0x0740(0x09E0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddQuantizationEventDelegate(ETimeSynthEventQuantization QuantizationType, TDelegate<void(ETimeSynthEventQuantization QuantizationType, int32 NumBars, float Beat)>& OnQuantizationEvent);
	bool HasActiveClips();
	struct FTimeSynthClipHandle PlayClip(class UTimeSynthClip* InClip, class UTimeSynthVolumeGroup* InVolumeGroup);
	void ResetSeed();
	void SetBPM(float BeatsPerMinute);
	void SetEnvelopeFollowerEnabled(bool bInIsEnabled);
	void SetEnvelopeFollowerSettings(struct FTimeSynthEnvelopeFollowerSettings& InSettings);
	void SetFFTSize(ETimeSynthFFTSize InFFTSize);
	void SetFilterEnabled(ETimeSynthFilter Filter, bool bIsEnabled);
	void SetFilterSettings(ETimeSynthFilter Filter, struct FTimeSynthFilterSettings& InSettings);
	void SetQuantizationSettings(struct FTimeSynthQuantizationSettings& InQuantizationSettings);
	void SetSeed(int32 InSeed);
	void SetVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, float VolumeDb, float FadeTimeSec);
	void StopClip(const struct FTimeSynthClipHandle& InClipHandle, ETimeSynthEventClipQuantization EventQuantization);
	void StopClipWithFadeOverride(const struct FTimeSynthClipHandle& InClipHandle, ETimeSynthEventClipQuantization EventQuantization, struct FTimeSynthTimeDef& FadeTime);
	void StopSoundsOnVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization);
	void StopSoundsOnVolumeGroupWithFadeOverride(class UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization, struct FTimeSynthTimeDef& FadeTime);

	int32 GetBPM() const;
	float GetEnvelopeFollowerValue() const;
	int32 GetMaxActiveClipLimit() const;
	TArray<struct FTimeSynthSpectralData> GetSpectralData() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TimeSynthComponent">();
	}
	static class UTimeSynthComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTimeSynthComponent>();
	}
};
static_assert(alignof(UTimeSynthComponent) == 0x000010, "Wrong alinment on UTimeSynthComponent");
static_assert(sizeof(UTimeSynthComponent) == 0x001120, "Wrong size on UTimeSynthComponent");
static_assert(offsetof(UTimeSynthComponent, QuantizationSettings) == 0x0006D0, "Member 'UTimeSynthComponent::QuantizationSettings' has a wrong offset!");
static_assert(offsetof(UTimeSynthComponent, FrequenciesToAnalyze) == 0x0006E8, "Member 'UTimeSynthComponent::FrequenciesToAnalyze' has a wrong offset!");
static_assert(offsetof(UTimeSynthComponent, FFTSize) == 0x0006F8, "Member 'UTimeSynthComponent::FFTSize' has a wrong offset!");
static_assert(offsetof(UTimeSynthComponent, OnPlaybackTime) == 0x000700, "Member 'UTimeSynthComponent::OnPlaybackTime' has a wrong offset!");
static_assert(offsetof(UTimeSynthComponent, FilterASettings) == 0x000714, "Member 'UTimeSynthComponent::FilterASettings' has a wrong offset!");
static_assert(offsetof(UTimeSynthComponent, FilterBSettings) == 0x000720, "Member 'UTimeSynthComponent::FilterBSettings' has a wrong offset!");
static_assert(offsetof(UTimeSynthComponent, EnvelopeFollowerSettings) == 0x000730, "Member 'UTimeSynthComponent::EnvelopeFollowerSettings' has a wrong offset!");
static_assert(offsetof(UTimeSynthComponent, MaxPoolSize) == 0x00073C, "Member 'UTimeSynthComponent::MaxPoolSize' has a wrong offset!");

}

