#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaVariantTileButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaVariantTileButton.AthenaVariantTileButton_C
// 0x0018 (0x0C30 - 0x0C18)
class UAthenaVariantTileButton_C final  : public UFortVariantTileButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C18(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       WarningPulse;                                      // 0x0C20(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Conflict;                                    // 0x0C28(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void OnListItemObjectSet(class UObject* ListItemObject);
	void ExecuteUbergraph_AthenaVariantTileButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UObject* K2Node_Event_ListItemObject, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsVisible_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaVariantTileButton_C">();
	}
	static class UAthenaVariantTileButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaVariantTileButton_C>();
	}
};
static_assert(alignof(UAthenaVariantTileButton_C) == 0x000008, "Wrong alinment on UAthenaVariantTileButton_C");
static_assert(sizeof(UAthenaVariantTileButton_C) == 0x000C30, "Wrong size on UAthenaVariantTileButton_C");
static_assert(offsetof(UAthenaVariantTileButton_C, UberGraphFrame) == 0x000C18, "Member 'UAthenaVariantTileButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaVariantTileButton_C, WarningPulse) == 0x000C20, "Member 'UAthenaVariantTileButton_C::WarningPulse' has a wrong offset!");
static_assert(offsetof(UAthenaVariantTileButton_C, Image_Conflict) == 0x000C28, "Member 'UAthenaVariantTileButton_C::Image_Conflict' has a wrong offset!");

}

