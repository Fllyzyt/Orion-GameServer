#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SubtitlesWidgets

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"
#include "SubtitlesWidgets_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class SubtitlesWidgets.FortMediaSubtitlesPlayer
// 0x0020 (0x0048 - 0x0028)
class UFortMediaSubtitlesPlayer final  : public UObject
{
public:
	uint8                                         Pad_4D28[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlays*                              SourceSubtitles;                                   // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4D29[0x10];                                    // 0x0038(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void BindToMediaPlayer(class UMediaPlayer* InMediaPlayer);
	void Play();
	void SetSubtitles(class UOverlays* Subtitles);
	void Stop();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortMediaSubtitlesPlayer">();
	}
	static class UFortMediaSubtitlesPlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMediaSubtitlesPlayer>();
	}
};
static_assert(alignof(UFortMediaSubtitlesPlayer) == 0x000008, "Wrong alinment on UFortMediaSubtitlesPlayer");
static_assert(sizeof(UFortMediaSubtitlesPlayer) == 0x000048, "Wrong size on UFortMediaSubtitlesPlayer");
static_assert(offsetof(UFortMediaSubtitlesPlayer, SourceSubtitles) == 0x000030, "Member 'UFortMediaSubtitlesPlayer::SourceSubtitles' has a wrong offset!");

// Class SubtitlesWidgets.SubtitleDisplay
// 0x0330 (0x0438 - 0x0108)
class USubtitleDisplay final  : public UWidget
{
public:
	struct FSubtitleFormat                        Format;                                            // 0x0108(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_4D2A[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USubtitleDisplayOptions*                Options;                                           // 0x0110(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WrapTextAt;                                        // 0x0118(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bPreviewMode;                                      // 0x011C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4D2B[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   PreviewText;                                       // 0x0120(0x0018)(Edit, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                        GeneratedStyle;                                    // 0x0138(0x0268)(Transient, NativeAccessSpecifierPrivate)
	struct FSlateBrush                            GeneratedBackgroundBorder;                         // 0x03A0(0x0088)(Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4D2C[0x10];                                    // 0x0428(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	bool HasSubtitles() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SubtitleDisplay">();
	}
	static class USubtitleDisplay* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubtitleDisplay>();
	}
};
static_assert(alignof(USubtitleDisplay) == 0x000008, "Wrong alinment on USubtitleDisplay");
static_assert(sizeof(USubtitleDisplay) == 0x000438, "Wrong size on USubtitleDisplay");
static_assert(offsetof(USubtitleDisplay, Format) == 0x000108, "Member 'USubtitleDisplay::Format' has a wrong offset!");
static_assert(offsetof(USubtitleDisplay, Options) == 0x000110, "Member 'USubtitleDisplay::Options' has a wrong offset!");
static_assert(offsetof(USubtitleDisplay, WrapTextAt) == 0x000118, "Member 'USubtitleDisplay::WrapTextAt' has a wrong offset!");
static_assert(offsetof(USubtitleDisplay, bPreviewMode) == 0x00011C, "Member 'USubtitleDisplay::bPreviewMode' has a wrong offset!");
static_assert(offsetof(USubtitleDisplay, PreviewText) == 0x000120, "Member 'USubtitleDisplay::PreviewText' has a wrong offset!");
static_assert(offsetof(USubtitleDisplay, GeneratedStyle) == 0x000138, "Member 'USubtitleDisplay::GeneratedStyle' has a wrong offset!");
static_assert(offsetof(USubtitleDisplay, GeneratedBackgroundBorder) == 0x0003A0, "Member 'USubtitleDisplay::GeneratedBackgroundBorder' has a wrong offset!");

// Class SubtitlesWidgets.SubtitleDisplayOptions
// 0x0130 (0x0160 - 0x0030)
class USubtitleDisplayOptions final  : public UDataAsset
{
public:
	struct FSlateFontInfo                         Font;                                              // 0x0030(0x0050)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DisplayTextSizes[0x5];                             // 0x0080(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           DisplayTextColors[0x2];                            // 0x0094(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DisplayBorderSize[0x3];                            // 0x00B4(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DisplayBackgroundOpacity[0x5];                     // 0x00C0(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4D2D[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            BackgroundBrush;                                   // 0x00D8(0x0088)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SubtitleDisplayOptions">();
	}
	static class USubtitleDisplayOptions* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubtitleDisplayOptions>();
	}
};
static_assert(alignof(USubtitleDisplayOptions) == 0x000008, "Wrong alinment on USubtitleDisplayOptions");
static_assert(sizeof(USubtitleDisplayOptions) == 0x000160, "Wrong size on USubtitleDisplayOptions");
static_assert(offsetof(USubtitleDisplayOptions, Font) == 0x000030, "Member 'USubtitleDisplayOptions::Font' has a wrong offset!");
static_assert(offsetof(USubtitleDisplayOptions, DisplayTextSizes) == 0x000080, "Member 'USubtitleDisplayOptions::DisplayTextSizes' has a wrong offset!");
static_assert(offsetof(USubtitleDisplayOptions, DisplayTextColors) == 0x000094, "Member 'USubtitleDisplayOptions::DisplayTextColors' has a wrong offset!");
static_assert(offsetof(USubtitleDisplayOptions, DisplayBorderSize) == 0x0000B4, "Member 'USubtitleDisplayOptions::DisplayBorderSize' has a wrong offset!");
static_assert(offsetof(USubtitleDisplayOptions, DisplayBackgroundOpacity) == 0x0000C0, "Member 'USubtitleDisplayOptions::DisplayBackgroundOpacity' has a wrong offset!");
static_assert(offsetof(USubtitleDisplayOptions, BackgroundBrush) == 0x0000D8, "Member 'USubtitleDisplayOptions::BackgroundBrush' has a wrong offset!");

// Class SubtitlesWidgets.SubtitleDisplaySubsystem
// 0x0020 (0x0050 - 0x0030)
class USubtitleDisplaySubsystem final  : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_4D2E[0x18];                                    // 0x0030(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSubtitleFormat                        SubtitleFormat;                                    // 0x0048(0x0004)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4D2F[0x4];                                     // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SubtitleDisplaySubsystem">();
	}
	static class USubtitleDisplaySubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubtitleDisplaySubsystem>();
	}
};
static_assert(alignof(USubtitleDisplaySubsystem) == 0x000008, "Wrong alinment on USubtitleDisplaySubsystem");
static_assert(sizeof(USubtitleDisplaySubsystem) == 0x000050, "Wrong size on USubtitleDisplaySubsystem");
static_assert(offsetof(USubtitleDisplaySubsystem, SubtitleFormat) == 0x000048, "Member 'USubtitleDisplaySubsystem::SubtitleFormat' has a wrong offset!");

}

