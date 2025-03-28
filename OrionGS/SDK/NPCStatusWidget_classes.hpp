#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPCStatusWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NPCStatusWidget.NPCStatusWidget_C
// 0x0038 (0x0298 - 0x0260)
class UNPCStatusWidget_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNPCStatusWidgetBar_C*                  Bar_Health;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNPCStatusWidgetBar_C*                  Bar_Shield;                                        // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                           VisibiltyTimer;                                    // 0x0278(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             VisibilityChanged;                                 // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         StatusWidgetVisibleDuration;                       // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void VisibilityChanged__DelegateSignature(bool bVisible);
	void ExecuteUbergraph_NPCStatusWidget(int32 EntryPoint, float K2Node_CustomEvent_StatusWidgetVisibleDuration, float K2Node_CustomEvent_health, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void ChangeWidgetVisibleDuration(float Param_StatusWidgetVisibleDuration);
	void EventHideStatus();
	void EventUpdateStatus(float Health);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NPCStatusWidget_C">();
	}
	static class UNPCStatusWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNPCStatusWidget_C>();
	}
};
static_assert(alignof(UNPCStatusWidget_C) == 0x000008, "Wrong alinment on UNPCStatusWidget_C");
static_assert(sizeof(UNPCStatusWidget_C) == 0x000298, "Wrong size on UNPCStatusWidget_C");
static_assert(offsetof(UNPCStatusWidget_C, UberGraphFrame) == 0x000260, "Member 'UNPCStatusWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_C, Bar_Health) == 0x000268, "Member 'UNPCStatusWidget_C::Bar_Health' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_C, Bar_Shield) == 0x000270, "Member 'UNPCStatusWidget_C::Bar_Shield' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_C, VisibiltyTimer) == 0x000278, "Member 'UNPCStatusWidget_C::VisibiltyTimer' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_C, VisibilityChanged) == 0x000280, "Member 'UNPCStatusWidget_C::VisibilityChanged' has a wrong offset!");
static_assert(offsetof(UNPCStatusWidget_C, StatusWidgetVisibleDuration) == 0x000290, "Member 'UNPCStatusWidget_C::StatusWidgetVisibleDuration' has a wrong offset!");

}

