#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Athena_HolidayGiftBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "B_Prj_Athena_GiftBox_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Prj_Athena_HolidayGiftBox.B_Prj_Athena_HolidayGiftBox_C
// 0x0010 (0x0BF0 - 0x0BE0)
class AB_Prj_Athena_HolidayGiftBox_C final  : public AB_Prj_Athena_GiftBox_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_B_Prj_Athena_HolidayGiftBox_C;      // 0x0BE0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        InAirAudio;                                        // 0x0BE8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Prj_Athena_HolidayGiftBox(int32 EntryPoint, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults);
	void OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Prj_Athena_HolidayGiftBox_C">();
	}
	static class AB_Prj_Athena_HolidayGiftBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Prj_Athena_HolidayGiftBox_C>();
	}
};
static_assert(alignof(AB_Prj_Athena_HolidayGiftBox_C) == 0x000008, "Wrong alinment on AB_Prj_Athena_HolidayGiftBox_C");
static_assert(sizeof(AB_Prj_Athena_HolidayGiftBox_C) == 0x000BF0, "Wrong size on AB_Prj_Athena_HolidayGiftBox_C");
static_assert(offsetof(AB_Prj_Athena_HolidayGiftBox_C, UberGraphFrame_B_Prj_Athena_HolidayGiftBox_C) == 0x000BE0, "Member 'AB_Prj_Athena_HolidayGiftBox_C::UberGraphFrame_B_Prj_Athena_HolidayGiftBox_C' has a wrong offset!");
static_assert(offsetof(AB_Prj_Athena_HolidayGiftBox_C, InAirAudio) == 0x000BE8, "Member 'AB_Prj_Athena_HolidayGiftBox_C::InAirAudio' has a wrong offset!");

}

