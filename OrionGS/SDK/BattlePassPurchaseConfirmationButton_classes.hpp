#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BattlePassPurchaseConfirmationButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BattlePassPurchaseConfirmationButton.BattlePassPurchaseConfirmationButton_C
// 0x0068 (0x0C18 - 0x0BB0)
class UBattlePassPurchaseConfirmationButton_C final  : public UBattlePassPurchaseConfirmationButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BB0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       TextBounce;                                        // 0x0BB8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ResetTrianglesANim;                                // 0x0BC0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HoverTrianglesAnim;                                // 0x0BC8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       GlowBurst;                                         // 0x0BD0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       LoopingButtonGlow;                                 // 0x0BD8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Selected;                                          // 0x0BE0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Backing;                                           // 0x0BE8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BackingHoverLift;                                  // 0x0BF0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ButtonBacking;                                     // 0x0BF8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HoverTriangles;                                    // 0x0C00(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VBuck;                                             // 0x0C08(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsBundle;                                          // 0x0C10(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_593E[0x3];                                     // 0x0C11(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DelayCycle;                                        // 0x0C14(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnHovered();
	void BP_OnUnhovered();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_BattlePassPurchaseConfirmationButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattlePassPurchaseConfirmationButton_C">();
	}
	static class UBattlePassPurchaseConfirmationButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattlePassPurchaseConfirmationButton_C>();
	}
};
static_assert(alignof(UBattlePassPurchaseConfirmationButton_C) == 0x000008, "Wrong alinment on UBattlePassPurchaseConfirmationButton_C");
static_assert(sizeof(UBattlePassPurchaseConfirmationButton_C) == 0x000C18, "Wrong size on UBattlePassPurchaseConfirmationButton_C");
static_assert(offsetof(UBattlePassPurchaseConfirmationButton_C, UberGraphFrame) == 0x000BB0, "Member 'UBattlePassPurchaseConfirmationButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseConfirmationButton_C, TextBounce) == 0x000BB8, "Member 'UBattlePassPurchaseConfirmationButton_C::TextBounce' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseConfirmationButton_C, ResetTrianglesANim) == 0x000BC0, "Member 'UBattlePassPurchaseConfirmationButton_C::ResetTrianglesANim' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseConfirmationButton_C, HoverTrianglesAnim) == 0x000BC8, "Member 'UBattlePassPurchaseConfirmationButton_C::HoverTrianglesAnim' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseConfirmationButton_C, GlowBurst) == 0x000BD0, "Member 'UBattlePassPurchaseConfirmationButton_C::GlowBurst' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseConfirmationButton_C, LoopingButtonGlow) == 0x000BD8, "Member 'UBattlePassPurchaseConfirmationButton_C::LoopingButtonGlow' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseConfirmationButton_C, Selected) == 0x000BE0, "Member 'UBattlePassPurchaseConfirmationButton_C::Selected' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseConfirmationButton_C, Backing) == 0x000BE8, "Member 'UBattlePassPurchaseConfirmationButton_C::Backing' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseConfirmationButton_C, BackingHoverLift) == 0x000BF0, "Member 'UBattlePassPurchaseConfirmationButton_C::BackingHoverLift' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseConfirmationButton_C, ButtonBacking) == 0x000BF8, "Member 'UBattlePassPurchaseConfirmationButton_C::ButtonBacking' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseConfirmationButton_C, HoverTriangles) == 0x000C00, "Member 'UBattlePassPurchaseConfirmationButton_C::HoverTriangles' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseConfirmationButton_C, VBuck) == 0x000C08, "Member 'UBattlePassPurchaseConfirmationButton_C::VBuck' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseConfirmationButton_C, IsBundle) == 0x000C10, "Member 'UBattlePassPurchaseConfirmationButton_C::IsBundle' has a wrong offset!");
static_assert(offsetof(UBattlePassPurchaseConfirmationButton_C, DelayCycle) == 0x000C14, "Member 'UBattlePassPurchaseConfirmationButton_C::DelayCycle' has a wrong offset!");

}

