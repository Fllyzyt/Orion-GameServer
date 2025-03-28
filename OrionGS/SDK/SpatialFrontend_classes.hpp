#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpatialFrontend

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SpatialFrontend.SpatialFrontend_C
// 0x0008 (0x0398 - 0x0390)
class USpatialFrontend_C final  : public UAthenaSpatialFrontend
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0390(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void OnEventLevelTransitionBegin(struct FGameplayTag& TargetCamera, class AFortEventLevelNavigationActor* TargetNavActor);
	void ExecuteUbergraph_SpatialFrontend(int32 EntryPoint, class UBPS12MainRoomPOITag_C* K2Node_DynamicCast_AsBPS12Main_Room_POITag, bool K2Node_DynamicCast_bSuccess, struct FGameplayTag& K2Node_Event_TargetCamera, class AFortEventLevelNavigationActor* K2Node_Event_TargetNavActor, const struct FFortEventLevelNavigationDisplayDetails& CallFunc_GetDisplayDetails_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Len_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SpatialFrontend_C">();
	}
	static class USpatialFrontend_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpatialFrontend_C>();
	}
};
static_assert(alignof(USpatialFrontend_C) == 0x000008, "Wrong alinment on USpatialFrontend_C");
static_assert(sizeof(USpatialFrontend_C) == 0x000398, "Wrong size on USpatialFrontend_C");
static_assert(offsetof(USpatialFrontend_C, UberGraphFrame) == 0x000390, "Member 'USpatialFrontend_C::UberGraphFrame' has a wrong offset!");

}

