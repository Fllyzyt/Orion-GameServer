#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SrirachaRanch

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "SrirachaRanch_structs.hpp"


namespace SDK::Params
{

// Function SrirachaRanch.StreamingRadioPlayerComponent.AuthPlayIndex
// 0x0004 (0x0004 - 0x0000)
struct StreamingRadioPlayerComponent_AuthPlayIndex final 
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamingRadioPlayerComponent_AuthPlayIndex) == 0x000004, "Wrong alinment on StreamingRadioPlayerComponent_AuthPlayIndex");
static_assert(sizeof(StreamingRadioPlayerComponent_AuthPlayIndex) == 0x000004, "Wrong size on StreamingRadioPlayerComponent_AuthPlayIndex");
static_assert(offsetof(StreamingRadioPlayerComponent_AuthPlayIndex, Param_Index) == 0x000000, "Member 'StreamingRadioPlayerComponent_AuthPlayIndex::Param_Index' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.AuthSaveAutoStart
// 0x0001 (0x0001 - 0x0000)
struct StreamingRadioPlayerComponent_AuthSaveAutoStart final 
{
public:
	bool                                          bAutoStart;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamingRadioPlayerComponent_AuthSaveAutoStart) == 0x000001, "Wrong alinment on StreamingRadioPlayerComponent_AuthSaveAutoStart");
static_assert(sizeof(StreamingRadioPlayerComponent_AuthSaveAutoStart) == 0x000001, "Wrong size on StreamingRadioPlayerComponent_AuthSaveAutoStart");
static_assert(offsetof(StreamingRadioPlayerComponent_AuthSaveAutoStart, bAutoStart) == 0x000000, "Member 'StreamingRadioPlayerComponent_AuthSaveAutoStart::bAutoStart' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.AuthSavedSource
// 0x0038 (0x0038 - 0x0000)
struct StreamingRadioPlayerComponent_AuthSavedSource final 
{
public:
	struct FAthenaRadioStation                    Source;                                            // 0x0000(0x0038)(Parm, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamingRadioPlayerComponent_AuthSavedSource) == 0x000008, "Wrong alinment on StreamingRadioPlayerComponent_AuthSavedSource");
static_assert(sizeof(StreamingRadioPlayerComponent_AuthSavedSource) == 0x000038, "Wrong size on StreamingRadioPlayerComponent_AuthSavedSource");
static_assert(offsetof(StreamingRadioPlayerComponent_AuthSavedSource, Source) == 0x000000, "Member 'StreamingRadioPlayerComponent_AuthSavedSource::Source' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.AuthSaveFadeOutTime
// 0x0004 (0x0004 - 0x0000)
struct StreamingRadioPlayerComponent_AuthSaveFadeOutTime final 
{
public:
	float                                         FadeoutSeconds;                                    // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamingRadioPlayerComponent_AuthSaveFadeOutTime) == 0x000004, "Wrong alinment on StreamingRadioPlayerComponent_AuthSaveFadeOutTime");
static_assert(sizeof(StreamingRadioPlayerComponent_AuthSaveFadeOutTime) == 0x000004, "Wrong size on StreamingRadioPlayerComponent_AuthSaveFadeOutTime");
static_assert(offsetof(StreamingRadioPlayerComponent_AuthSaveFadeOutTime, FadeoutSeconds) == 0x000000, "Member 'StreamingRadioPlayerComponent_AuthSaveFadeOutTime::FadeoutSeconds' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.AuthSetDisabledForCurrentPlayerState
// 0x0001 (0x0001 - 0x0000)
struct StreamingRadioPlayerComponent_AuthSetDisabledForCurrentPlayerState final 
{
public:
	bool                                          bShouldDisableForCurrentPlayerState;               // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamingRadioPlayerComponent_AuthSetDisabledForCurrentPlayerState) == 0x000001, "Wrong alinment on StreamingRadioPlayerComponent_AuthSetDisabledForCurrentPlayerState");
static_assert(sizeof(StreamingRadioPlayerComponent_AuthSetDisabledForCurrentPlayerState) == 0x000001, "Wrong size on StreamingRadioPlayerComponent_AuthSetDisabledForCurrentPlayerState");
static_assert(offsetof(StreamingRadioPlayerComponent_AuthSetDisabledForCurrentPlayerState, bShouldDisableForCurrentPlayerState) == 0x000000, "Member 'StreamingRadioPlayerComponent_AuthSetDisabledForCurrentPlayerState::bShouldDisableForCurrentPlayerState' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaExplicitClose
// 0x0001 (0x0001 - 0x0000)
struct StreamingRadioPlayerComponent_MediaExplicitClose final 
{
public:
	bool                                          bReallyExplicit;                                   // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamingRadioPlayerComponent_MediaExplicitClose) == 0x000001, "Wrong alinment on StreamingRadioPlayerComponent_MediaExplicitClose");
static_assert(sizeof(StreamingRadioPlayerComponent_MediaExplicitClose) == 0x000001, "Wrong size on StreamingRadioPlayerComponent_MediaExplicitClose");
static_assert(offsetof(StreamingRadioPlayerComponent_MediaExplicitClose, bReallyExplicit) == 0x000000, "Member 'StreamingRadioPlayerComponent_MediaExplicitClose::bReallyExplicit' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaFailedToOpen
// 0x0010 (0x0010 - 0x0000)
struct StreamingRadioPlayerComponent_MediaFailedToOpen final 
{
public:
	class FString                                 String;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamingRadioPlayerComponent_MediaFailedToOpen) == 0x000008, "Wrong alinment on StreamingRadioPlayerComponent_MediaFailedToOpen");
static_assert(sizeof(StreamingRadioPlayerComponent_MediaFailedToOpen) == 0x000010, "Wrong size on StreamingRadioPlayerComponent_MediaFailedToOpen");
static_assert(offsetof(StreamingRadioPlayerComponent_MediaFailedToOpen, String) == 0x000000, "Member 'StreamingRadioPlayerComponent_MediaFailedToOpen::String' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.MediaReady
// 0x0010 (0x0010 - 0x0000)
struct StreamingRadioPlayerComponent_MediaReady final 
{
public:
	class FString                                 String;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamingRadioPlayerComponent_MediaReady) == 0x000008, "Wrong alinment on StreamingRadioPlayerComponent_MediaReady");
static_assert(sizeof(StreamingRadioPlayerComponent_MediaReady) == 0x000010, "Wrong size on StreamingRadioPlayerComponent_MediaReady");
static_assert(offsetof(StreamingRadioPlayerComponent_MediaReady, String) == 0x000000, "Member 'StreamingRadioPlayerComponent_MediaReady::String' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterSeat
// 0x0020 (0x0020 - 0x0000)
struct StreamingRadioPlayerComponent_NativeOnPawnEnterSeat final 
{
public:
	TScriptInterface<class IFortVehicleInterface> Vehicle;                                           // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class AFortPawn*                              PlayerPawn;                                        // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SeatIndex;                                         // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_47AE[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(StreamingRadioPlayerComponent_NativeOnPawnEnterSeat) == 0x000008, "Wrong alinment on StreamingRadioPlayerComponent_NativeOnPawnEnterSeat");
static_assert(sizeof(StreamingRadioPlayerComponent_NativeOnPawnEnterSeat) == 0x000020, "Wrong size on StreamingRadioPlayerComponent_NativeOnPawnEnterSeat");
static_assert(offsetof(StreamingRadioPlayerComponent_NativeOnPawnEnterSeat, Vehicle) == 0x000000, "Member 'StreamingRadioPlayerComponent_NativeOnPawnEnterSeat::Vehicle' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_NativeOnPawnEnterSeat, PlayerPawn) == 0x000010, "Member 'StreamingRadioPlayerComponent_NativeOnPawnEnterSeat::PlayerPawn' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_NativeOnPawnEnterSeat, SeatIndex) == 0x000018, "Member 'StreamingRadioPlayerComponent_NativeOnPawnEnterSeat::SeatIndex' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnEnterVehicle
// 0x0020 (0x0020 - 0x0000)
struct StreamingRadioPlayerComponent_NativeOnPawnEnterVehicle final 
{
public:
	TScriptInterface<class IFortVehicleInterface> Vehicle;                                           // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class AFortPawn*                              PlayerPawn;                                        // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SeatIndex;                                         // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_47AF[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(StreamingRadioPlayerComponent_NativeOnPawnEnterVehicle) == 0x000008, "Wrong alinment on StreamingRadioPlayerComponent_NativeOnPawnEnterVehicle");
static_assert(sizeof(StreamingRadioPlayerComponent_NativeOnPawnEnterVehicle) == 0x000020, "Wrong size on StreamingRadioPlayerComponent_NativeOnPawnEnterVehicle");
static_assert(offsetof(StreamingRadioPlayerComponent_NativeOnPawnEnterVehicle, Vehicle) == 0x000000, "Member 'StreamingRadioPlayerComponent_NativeOnPawnEnterVehicle::Vehicle' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_NativeOnPawnEnterVehicle, PlayerPawn) == 0x000010, "Member 'StreamingRadioPlayerComponent_NativeOnPawnEnterVehicle::PlayerPawn' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_NativeOnPawnEnterVehicle, SeatIndex) == 0x000018, "Member 'StreamingRadioPlayerComponent_NativeOnPawnEnterVehicle::SeatIndex' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitSeat
// 0x0020 (0x0020 - 0x0000)
struct StreamingRadioPlayerComponent_NativeOnPawnExitSeat final 
{
public:
	TScriptInterface<class IFortVehicleInterface> Vehicle;                                           // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class AFortPawn*                              PlayerPawn;                                        // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SeatIndex;                                         // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_47B0[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(StreamingRadioPlayerComponent_NativeOnPawnExitSeat) == 0x000008, "Wrong alinment on StreamingRadioPlayerComponent_NativeOnPawnExitSeat");
static_assert(sizeof(StreamingRadioPlayerComponent_NativeOnPawnExitSeat) == 0x000020, "Wrong size on StreamingRadioPlayerComponent_NativeOnPawnExitSeat");
static_assert(offsetof(StreamingRadioPlayerComponent_NativeOnPawnExitSeat, Vehicle) == 0x000000, "Member 'StreamingRadioPlayerComponent_NativeOnPawnExitSeat::Vehicle' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_NativeOnPawnExitSeat, PlayerPawn) == 0x000010, "Member 'StreamingRadioPlayerComponent_NativeOnPawnExitSeat::PlayerPawn' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_NativeOnPawnExitSeat, SeatIndex) == 0x000018, "Member 'StreamingRadioPlayerComponent_NativeOnPawnExitSeat::SeatIndex' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.NativeOnPawnExitVehicle
// 0x0020 (0x0020 - 0x0000)
struct StreamingRadioPlayerComponent_NativeOnPawnExitVehicle final 
{
public:
	TScriptInterface<class IFortVehicleInterface> Vehicle;                                           // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class AFortPawn*                              PlayerPawn;                                        // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SeatIndex;                                         // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_47B1[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(StreamingRadioPlayerComponent_NativeOnPawnExitVehicle) == 0x000008, "Wrong alinment on StreamingRadioPlayerComponent_NativeOnPawnExitVehicle");
static_assert(sizeof(StreamingRadioPlayerComponent_NativeOnPawnExitVehicle) == 0x000020, "Wrong size on StreamingRadioPlayerComponent_NativeOnPawnExitVehicle");
static_assert(offsetof(StreamingRadioPlayerComponent_NativeOnPawnExitVehicle, Vehicle) == 0x000000, "Member 'StreamingRadioPlayerComponent_NativeOnPawnExitVehicle::Vehicle' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_NativeOnPawnExitVehicle, PlayerPawn) == 0x000010, "Member 'StreamingRadioPlayerComponent_NativeOnPawnExitVehicle::PlayerPawn' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_NativeOnPawnExitVehicle, SeatIndex) == 0x000018, "Member 'StreamingRadioPlayerComponent_NativeOnPawnExitVehicle::SeatIndex' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.OnFailedURL
// 0x0010 (0x0010 - 0x0000)
struct StreamingRadioPlayerComponent_OnFailedURL final 
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamingRadioPlayerComponent_OnFailedURL) == 0x000008, "Wrong alinment on StreamingRadioPlayerComponent_OnFailedURL");
static_assert(sizeof(StreamingRadioPlayerComponent_OnFailedURL) == 0x000010, "Wrong size on StreamingRadioPlayerComponent_OnFailedURL");
static_assert(offsetof(StreamingRadioPlayerComponent_OnFailedURL, URL) == 0x000000, "Member 'StreamingRadioPlayerComponent_OnFailedURL::URL' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.OnLicensedAudioSettingChanged
// 0x0008 (0x0008 - 0x0000)
struct StreamingRadioPlayerComponent_OnLicensedAudioSettingChanged final 
{
public:
	class UFortClientSettingsRecord*              Settings;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamingRadioPlayerComponent_OnLicensedAudioSettingChanged) == 0x000008, "Wrong alinment on StreamingRadioPlayerComponent_OnLicensedAudioSettingChanged");
static_assert(sizeof(StreamingRadioPlayerComponent_OnLicensedAudioSettingChanged) == 0x000008, "Wrong size on StreamingRadioPlayerComponent_OnLicensedAudioSettingChanged");
static_assert(offsetof(StreamingRadioPlayerComponent_OnLicensedAudioSettingChanged, Settings) == 0x000000, "Member 'StreamingRadioPlayerComponent_OnLicensedAudioSettingChanged::Settings' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.OnOwningVehicleDied
// 0x0038 (0x0038 - 0x0000)
struct StreamingRadioPlayerComponent_OnOwningVehicleDied final 
{
public:
	class AFortAthenaVehicle*                     DeadVehicle;                                       // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                  InTags;                                            // 0x0008(0x0020)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AController*                            EventInstigator;                                   // 0x0028(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 DamageCauser;                                      // 0x0030(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamingRadioPlayerComponent_OnOwningVehicleDied) == 0x000008, "Wrong alinment on StreamingRadioPlayerComponent_OnOwningVehicleDied");
static_assert(sizeof(StreamingRadioPlayerComponent_OnOwningVehicleDied) == 0x000038, "Wrong size on StreamingRadioPlayerComponent_OnOwningVehicleDied");
static_assert(offsetof(StreamingRadioPlayerComponent_OnOwningVehicleDied, DeadVehicle) == 0x000000, "Member 'StreamingRadioPlayerComponent_OnOwningVehicleDied::DeadVehicle' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_OnOwningVehicleDied, InTags) == 0x000008, "Member 'StreamingRadioPlayerComponent_OnOwningVehicleDied::InTags' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_OnOwningVehicleDied, EventInstigator) == 0x000028, "Member 'StreamingRadioPlayerComponent_OnOwningVehicleDied::EventInstigator' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_OnOwningVehicleDied, DamageCauser) == 0x000030, "Member 'StreamingRadioPlayerComponent_OnOwningVehicleDied::DamageCauser' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterSeat
// 0x0020 (0x0020 - 0x0000)
struct StreamingRadioPlayerComponent_OnPawnEnterSeat final 
{
public:
	TScriptInterface<class IFortVehicleInterface> Vehicle;                                           // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class AFortPawn*                              PlayerPawn;                                        // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SeatIndex;                                         // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_47B2[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(StreamingRadioPlayerComponent_OnPawnEnterSeat) == 0x000008, "Wrong alinment on StreamingRadioPlayerComponent_OnPawnEnterSeat");
static_assert(sizeof(StreamingRadioPlayerComponent_OnPawnEnterSeat) == 0x000020, "Wrong size on StreamingRadioPlayerComponent_OnPawnEnterSeat");
static_assert(offsetof(StreamingRadioPlayerComponent_OnPawnEnterSeat, Vehicle) == 0x000000, "Member 'StreamingRadioPlayerComponent_OnPawnEnterSeat::Vehicle' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_OnPawnEnterSeat, PlayerPawn) == 0x000010, "Member 'StreamingRadioPlayerComponent_OnPawnEnterSeat::PlayerPawn' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_OnPawnEnterSeat, SeatIndex) == 0x000018, "Member 'StreamingRadioPlayerComponent_OnPawnEnterSeat::SeatIndex' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnEnterVehicle
// 0x0020 (0x0020 - 0x0000)
struct StreamingRadioPlayerComponent_OnPawnEnterVehicle final 
{
public:
	TScriptInterface<class IFortVehicleInterface> Vehicle;                                           // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class AFortPawn*                              PlayerPawn;                                        // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SeatIndex;                                         // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_47B3[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(StreamingRadioPlayerComponent_OnPawnEnterVehicle) == 0x000008, "Wrong alinment on StreamingRadioPlayerComponent_OnPawnEnterVehicle");
static_assert(sizeof(StreamingRadioPlayerComponent_OnPawnEnterVehicle) == 0x000020, "Wrong size on StreamingRadioPlayerComponent_OnPawnEnterVehicle");
static_assert(offsetof(StreamingRadioPlayerComponent_OnPawnEnterVehicle, Vehicle) == 0x000000, "Member 'StreamingRadioPlayerComponent_OnPawnEnterVehicle::Vehicle' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_OnPawnEnterVehicle, PlayerPawn) == 0x000010, "Member 'StreamingRadioPlayerComponent_OnPawnEnterVehicle::PlayerPawn' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_OnPawnEnterVehicle, SeatIndex) == 0x000018, "Member 'StreamingRadioPlayerComponent_OnPawnEnterVehicle::SeatIndex' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitSeat
// 0x0020 (0x0020 - 0x0000)
struct StreamingRadioPlayerComponent_OnPawnExitSeat final 
{
public:
	TScriptInterface<class IFortVehicleInterface> Vehicle;                                           // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class AFortPawn*                              PlayerPawn;                                        // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SeatIndex;                                         // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_47B4[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(StreamingRadioPlayerComponent_OnPawnExitSeat) == 0x000008, "Wrong alinment on StreamingRadioPlayerComponent_OnPawnExitSeat");
static_assert(sizeof(StreamingRadioPlayerComponent_OnPawnExitSeat) == 0x000020, "Wrong size on StreamingRadioPlayerComponent_OnPawnExitSeat");
static_assert(offsetof(StreamingRadioPlayerComponent_OnPawnExitSeat, Vehicle) == 0x000000, "Member 'StreamingRadioPlayerComponent_OnPawnExitSeat::Vehicle' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_OnPawnExitSeat, PlayerPawn) == 0x000010, "Member 'StreamingRadioPlayerComponent_OnPawnExitSeat::PlayerPawn' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_OnPawnExitSeat, SeatIndex) == 0x000018, "Member 'StreamingRadioPlayerComponent_OnPawnExitSeat::SeatIndex' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPawnExitVehicle
// 0x0020 (0x0020 - 0x0000)
struct StreamingRadioPlayerComponent_OnPawnExitVehicle final 
{
public:
	TScriptInterface<class IFortVehicleInterface> Vehicle;                                           // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class AFortPawn*                              PlayerPawn;                                        // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SeatIndex;                                         // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_47B5[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(StreamingRadioPlayerComponent_OnPawnExitVehicle) == 0x000008, "Wrong alinment on StreamingRadioPlayerComponent_OnPawnExitVehicle");
static_assert(sizeof(StreamingRadioPlayerComponent_OnPawnExitVehicle) == 0x000020, "Wrong size on StreamingRadioPlayerComponent_OnPawnExitVehicle");
static_assert(offsetof(StreamingRadioPlayerComponent_OnPawnExitVehicle, Vehicle) == 0x000000, "Member 'StreamingRadioPlayerComponent_OnPawnExitVehicle::Vehicle' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_OnPawnExitVehicle, PlayerPawn) == 0x000010, "Member 'StreamingRadioPlayerComponent_OnPawnExitVehicle::PlayerPawn' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_OnPawnExitVehicle, SeatIndex) == 0x000018, "Member 'StreamingRadioPlayerComponent_OnPawnExitVehicle::SeatIndex' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.OnPiPPlayerBlockedChanged
// 0x0001 (0x0001 - 0x0000)
struct StreamingRadioPlayerComponent_OnPiPPlayerBlockedChanged final 
{
public:
	bool                                          bPiPPlayerBlocking;                                // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamingRadioPlayerComponent_OnPiPPlayerBlockedChanged) == 0x000001, "Wrong alinment on StreamingRadioPlayerComponent_OnPiPPlayerBlockedChanged");
static_assert(sizeof(StreamingRadioPlayerComponent_OnPiPPlayerBlockedChanged) == 0x000001, "Wrong size on StreamingRadioPlayerComponent_OnPiPPlayerBlockedChanged");
static_assert(offsetof(StreamingRadioPlayerComponent_OnPiPPlayerBlockedChanged, bPiPPlayerBlocking) == 0x000000, "Member 'StreamingRadioPlayerComponent_OnPiPPlayerBlockedChanged::bPiPPlayerBlocking' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.OnSuccessfulURL
// 0x0010 (0x0010 - 0x0000)
struct StreamingRadioPlayerComponent_OnSuccessfulURL final 
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamingRadioPlayerComponent_OnSuccessfulURL) == 0x000008, "Wrong alinment on StreamingRadioPlayerComponent_OnSuccessfulURL");
static_assert(sizeof(StreamingRadioPlayerComponent_OnSuccessfulURL) == 0x000010, "Wrong size on StreamingRadioPlayerComponent_OnSuccessfulURL");
static_assert(offsetof(StreamingRadioPlayerComponent_OnSuccessfulURL, URL) == 0x000000, "Member 'StreamingRadioPlayerComponent_OnSuccessfulURL::URL' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.SetExteriorVolume
// 0x0010 (0x0010 - 0x0000)
struct StreamingRadioPlayerComponent_SetExteriorVolume final 
{
public:
	TScriptInterface<class IFortVehicleInterface> Vehicle;                                           // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamingRadioPlayerComponent_SetExteriorVolume) == 0x000008, "Wrong alinment on StreamingRadioPlayerComponent_SetExteriorVolume");
static_assert(sizeof(StreamingRadioPlayerComponent_SetExteriorVolume) == 0x000010, "Wrong size on StreamingRadioPlayerComponent_SetExteriorVolume");
static_assert(offsetof(StreamingRadioPlayerComponent_SetExteriorVolume, Vehicle) == 0x000000, "Member 'StreamingRadioPlayerComponent_SetExteriorVolume::Vehicle' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.SetInteriorVolume
// 0x0010 (0x0010 - 0x0000)
struct StreamingRadioPlayerComponent_SetInteriorVolume final 
{
public:
	TScriptInterface<class IFortVehicleInterface> Vehicle;                                           // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamingRadioPlayerComponent_SetInteriorVolume) == 0x000008, "Wrong alinment on StreamingRadioPlayerComponent_SetInteriorVolume");
static_assert(sizeof(StreamingRadioPlayerComponent_SetInteriorVolume) == 0x000010, "Wrong size on StreamingRadioPlayerComponent_SetInteriorVolume");
static_assert(offsetof(StreamingRadioPlayerComponent_SetInteriorVolume, Vehicle) == 0x000000, "Member 'StreamingRadioPlayerComponent_SetInteriorVolume::Vehicle' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateTargetingState
// 0x0001 (0x0001 - 0x0000)
struct StreamingRadioPlayerComponent_SoundMixUpdateTargetingState final 
{
public:
	bool                                          bNewIsTargeting;                                   // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamingRadioPlayerComponent_SoundMixUpdateTargetingState) == 0x000001, "Wrong alinment on StreamingRadioPlayerComponent_SoundMixUpdateTargetingState");
static_assert(sizeof(StreamingRadioPlayerComponent_SoundMixUpdateTargetingState) == 0x000001, "Wrong size on StreamingRadioPlayerComponent_SoundMixUpdateTargetingState");
static_assert(offsetof(StreamingRadioPlayerComponent_SoundMixUpdateTargetingState, bNewIsTargeting) == 0x000000, "Member 'StreamingRadioPlayerComponent_SoundMixUpdateTargetingState::bNewIsTargeting' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.SoundMixUpdateWeaponState
// 0x0010 (0x0010 - 0x0000)
struct StreamingRadioPlayerComponent_SoundMixUpdateWeaponState final 
{
public:
	class AFortWeapon*                            NewWeapon;                                         // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortWeapon*                            PrevWeapon;                                        // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamingRadioPlayerComponent_SoundMixUpdateWeaponState) == 0x000008, "Wrong alinment on StreamingRadioPlayerComponent_SoundMixUpdateWeaponState");
static_assert(sizeof(StreamingRadioPlayerComponent_SoundMixUpdateWeaponState) == 0x000010, "Wrong size on StreamingRadioPlayerComponent_SoundMixUpdateWeaponState");
static_assert(offsetof(StreamingRadioPlayerComponent_SoundMixUpdateWeaponState, NewWeapon) == 0x000000, "Member 'StreamingRadioPlayerComponent_SoundMixUpdateWeaponState::NewWeapon' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_SoundMixUpdateWeaponState, PrevWeapon) == 0x000008, "Member 'StreamingRadioPlayerComponent_SoundMixUpdateWeaponState::PrevWeapon' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.StartRadio
// 0x0008 (0x0008 - 0x0000)
struct StreamingRadioPlayerComponent_StartRadio final 
{
public:
	int32                                         IdxToPlay;                                         // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFallbackOverride;                                 // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_47B6[0x3];                                     // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(StreamingRadioPlayerComponent_StartRadio) == 0x000004, "Wrong alinment on StreamingRadioPlayerComponent_StartRadio");
static_assert(sizeof(StreamingRadioPlayerComponent_StartRadio) == 0x000008, "Wrong size on StreamingRadioPlayerComponent_StartRadio");
static_assert(offsetof(StreamingRadioPlayerComponent_StartRadio, IdxToPlay) == 0x000000, "Member 'StreamingRadioPlayerComponent_StartRadio::IdxToPlay' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_StartRadio, bFallbackOverride) == 0x000004, "Member 'StreamingRadioPlayerComponent_StartRadio::bFallbackOverride' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.StopIfNoDriver
// 0x0010 (0x0010 - 0x0000)
struct StreamingRadioPlayerComponent_StopIfNoDriver final 
{
public:
	TScriptInterface<class IFortVehicleInterface> Vehicle;                                           // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamingRadioPlayerComponent_StopIfNoDriver) == 0x000008, "Wrong alinment on StreamingRadioPlayerComponent_StopIfNoDriver");
static_assert(sizeof(StreamingRadioPlayerComponent_StopIfNoDriver) == 0x000010, "Wrong size on StreamingRadioPlayerComponent_StopIfNoDriver");
static_assert(offsetof(StreamingRadioPlayerComponent_StopIfNoDriver, Vehicle) == 0x000000, "Member 'StreamingRadioPlayerComponent_StopIfNoDriver::Vehicle' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.StopRadioWithFadeout
// 0x0004 (0x0004 - 0x0000)
struct StreamingRadioPlayerComponent_StopRadioWithFadeout final 
{
public:
	int32                                         Milliseconds;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamingRadioPlayerComponent_StopRadioWithFadeout) == 0x000004, "Wrong alinment on StreamingRadioPlayerComponent_StopRadioWithFadeout");
static_assert(sizeof(StreamingRadioPlayerComponent_StopRadioWithFadeout) == 0x000004, "Wrong size on StreamingRadioPlayerComponent_StopRadioWithFadeout");
static_assert(offsetof(StreamingRadioPlayerComponent_StopRadioWithFadeout, Milliseconds) == 0x000000, "Member 'StreamingRadioPlayerComponent_StopRadioWithFadeout::Milliseconds' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.GetOptionAt
// 0x0040 (0x0040 - 0x0000)
struct StreamingRadioPlayerComponent_GetOptionAt final 
{
public:
	int32                                         Idx;                                               // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_47B7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAthenaRadioStation                    ReturnValue;                                       // 0x0008(0x0038)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamingRadioPlayerComponent_GetOptionAt) == 0x000008, "Wrong alinment on StreamingRadioPlayerComponent_GetOptionAt");
static_assert(sizeof(StreamingRadioPlayerComponent_GetOptionAt) == 0x000040, "Wrong size on StreamingRadioPlayerComponent_GetOptionAt");
static_assert(offsetof(StreamingRadioPlayerComponent_GetOptionAt, Idx) == 0x000000, "Member 'StreamingRadioPlayerComponent_GetOptionAt::Idx' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_GetOptionAt, ReturnValue) == 0x000008, "Member 'StreamingRadioPlayerComponent_GetOptionAt::ReturnValue' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.IsExternalSeat
// 0x0008 (0x0008 - 0x0000)
struct StreamingRadioPlayerComponent_IsExternalSeat final 
{
public:
	int32                                         SeatIdx;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_47B8[0x3];                                     // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(StreamingRadioPlayerComponent_IsExternalSeat) == 0x000004, "Wrong alinment on StreamingRadioPlayerComponent_IsExternalSeat");
static_assert(sizeof(StreamingRadioPlayerComponent_IsExternalSeat) == 0x000008, "Wrong size on StreamingRadioPlayerComponent_IsExternalSeat");
static_assert(offsetof(StreamingRadioPlayerComponent_IsExternalSeat, SeatIdx) == 0x000000, "Member 'StreamingRadioPlayerComponent_IsExternalSeat::SeatIdx' has a wrong offset!");
static_assert(offsetof(StreamingRadioPlayerComponent_IsExternalSeat, ReturnValue) == 0x000004, "Member 'StreamingRadioPlayerComponent_IsExternalSeat::ReturnValue' has a wrong offset!");

// Function SrirachaRanch.StreamingRadioPlayerComponent.IsPlayingLiveFeed
// 0x0001 (0x0001 - 0x0000)
struct StreamingRadioPlayerComponent_IsPlayingLiveFeed final 
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(StreamingRadioPlayerComponent_IsPlayingLiveFeed) == 0x000001, "Wrong alinment on StreamingRadioPlayerComponent_IsPlayingLiveFeed");
static_assert(sizeof(StreamingRadioPlayerComponent_IsPlayingLiveFeed) == 0x000001, "Wrong size on StreamingRadioPlayerComponent_IsPlayingLiveFeed");
static_assert(offsetof(StreamingRadioPlayerComponent_IsPlayingLiveFeed, ReturnValue) == 0x000000, "Member 'StreamingRadioPlayerComponent_IsPlayingLiveFeed::ReturnValue' has a wrong offset!");

}

