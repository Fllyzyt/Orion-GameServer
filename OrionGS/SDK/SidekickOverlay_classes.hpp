#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SidekickOverlay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SidekickOverlay.SidekickOverlay_C
// 0x0010 (0x03E8 - 0x03D8)
class USidekickOverlay_C final  : public USidekickOverlay
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_235;                                         // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SidekickOverlay(int32 EntryPoint, bool CallFunc_OpenSource_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_OpenSource_ReturnValue_1, bool CallFunc_OpenSource_ReturnValue_2, bool CallFunc_OpenSource_ReturnValue_3, bool CallFunc_OpenSource_ReturnValue_4, bool CallFunc_OpenSource_ReturnValue_5);
	void OnInitialized();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SidekickOverlay_C">();
	}
	static class USidekickOverlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USidekickOverlay_C>();
	}
};
static_assert(alignof(USidekickOverlay_C) == 0x000008, "Wrong alinment on USidekickOverlay_C");
static_assert(sizeof(USidekickOverlay_C) == 0x0003E8, "Wrong size on USidekickOverlay_C");
static_assert(offsetof(USidekickOverlay_C, UberGraphFrame) == 0x0003D8, "Member 'USidekickOverlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USidekickOverlay_C, Image_235) == 0x0003E0, "Member 'USidekickOverlay_C::Image_235' has a wrong offset!");

}

