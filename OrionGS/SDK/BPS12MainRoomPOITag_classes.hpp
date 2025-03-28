#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPS12MainRoomPOITag

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BPS12MainRoomPOITag.BPS12MainRoomPOITag_C
// 0x0048 (0x02D0 - 0x0288)
class UBPS12MainRoomPOITag_C final  : public UFortEventLevelNavigationDetails
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       BackingFadeOff;                                    // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       BackingFadeOn;                                     // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Outro;                                             // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               All;                                               // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Backing;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NameGlow;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       POI_Name;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Animate_POI_Title(class FText Param_POI_Name);
	void Construct();
	void CollapseWidget();
	void ExecuteUbergraph_BPS12MainRoomPOITag(int32 EntryPoint, class FText K2Node_CustomEvent_POI_Name);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPS12MainRoomPOITag_C">();
	}
	static class UBPS12MainRoomPOITag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBPS12MainRoomPOITag_C>();
	}
};
static_assert(alignof(UBPS12MainRoomPOITag_C) == 0x000008, "Wrong alinment on UBPS12MainRoomPOITag_C");
static_assert(sizeof(UBPS12MainRoomPOITag_C) == 0x0002D0, "Wrong size on UBPS12MainRoomPOITag_C");
static_assert(offsetof(UBPS12MainRoomPOITag_C, UberGraphFrame) == 0x000288, "Member 'UBPS12MainRoomPOITag_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBPS12MainRoomPOITag_C, BackingFadeOff) == 0x000290, "Member 'UBPS12MainRoomPOITag_C::BackingFadeOff' has a wrong offset!");
static_assert(offsetof(UBPS12MainRoomPOITag_C, BackingFadeOn) == 0x000298, "Member 'UBPS12MainRoomPOITag_C::BackingFadeOn' has a wrong offset!");
static_assert(offsetof(UBPS12MainRoomPOITag_C, Outro) == 0x0002A0, "Member 'UBPS12MainRoomPOITag_C::Outro' has a wrong offset!");
static_assert(offsetof(UBPS12MainRoomPOITag_C, Intro) == 0x0002A8, "Member 'UBPS12MainRoomPOITag_C::Intro' has a wrong offset!");
static_assert(offsetof(UBPS12MainRoomPOITag_C, All) == 0x0002B0, "Member 'UBPS12MainRoomPOITag_C::All' has a wrong offset!");
static_assert(offsetof(UBPS12MainRoomPOITag_C, Backing) == 0x0002B8, "Member 'UBPS12MainRoomPOITag_C::Backing' has a wrong offset!");
static_assert(offsetof(UBPS12MainRoomPOITag_C, NameGlow) == 0x0002C0, "Member 'UBPS12MainRoomPOITag_C::NameGlow' has a wrong offset!");
static_assert(offsetof(UBPS12MainRoomPOITag_C, POI_Name) == 0x0002C8, "Member 'UBPS12MainRoomPOITag_C::POI_Name' has a wrong offset!");

}

