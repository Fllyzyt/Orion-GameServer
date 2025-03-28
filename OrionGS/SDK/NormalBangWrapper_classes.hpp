#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NormalBangWrapper

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NormalBangWrapper.NormalBangWrapper_C
// 0x0098 (0x0340 - 0x02A8)
class UNormalBangWrapper_C final  : public UFortBangWrapper_NUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       IntroSuperBang;                                    // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       TutorialGlow;                                      // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                               BangBox;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               BigBang;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               BigBangCount;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextBlock_0;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Content;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CountText;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ModeSwitcher;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NoMinusCount;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NoMinusCountMinus1;                                // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SmallBang;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SmallBangCount;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SuperBang;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          TutorialBorder;                                    // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          UseSmallVersion;                                   // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_5B84[0x3];                                     // 0x0331(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Count;                                             // 0x0334(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseSuperBangNoCount;                              // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShouldSuppressBang;                                // 0x0339(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_NormalBangWrapper(int32 EntryPoint, bool K2Node_Event_bEnabled, int32 K2Node_Event_Count, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default, class FName K2Node_Event_TutorialObjectiveName, ETutorialType K2Node_Event_TutorialType, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, class FText CallFunc_Conv_IntToText_ReturnValue);
	void OnBangStateChanged(bool bEnabled, int32 Param_Count);
	void PreConstruct(bool IsDesignTime);
	void OnStartCallout(class FName TutorialObjectiveName, ETutorialType TutorialType);
	void OnStopCallout();
	void SetTutorialBorderStyle(class UClass* BorderStyle);
	void Update_Bang_Icon_Version(int32 InCount, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1);
	void Adjust_Bang_Image_Translation(const struct FVector2D& Translation);
	void TriggerIntro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void TriggerReset();
	void InitialReset(float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetEndTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void SetShouldSuppressBang(bool Param_ShouldSuppressBang, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NormalBangWrapper_C">();
	}
	static class UNormalBangWrapper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNormalBangWrapper_C>();
	}
};
static_assert(alignof(UNormalBangWrapper_C) == 0x000008, "Wrong alinment on UNormalBangWrapper_C");
static_assert(sizeof(UNormalBangWrapper_C) == 0x000340, "Wrong size on UNormalBangWrapper_C");
static_assert(offsetof(UNormalBangWrapper_C, UberGraphFrame) == 0x0002A8, "Member 'UNormalBangWrapper_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, IntroSuperBang) == 0x0002B0, "Member 'UNormalBangWrapper_C::IntroSuperBang' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, Intro) == 0x0002B8, "Member 'UNormalBangWrapper_C::Intro' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, TutorialGlow) == 0x0002C0, "Member 'UNormalBangWrapper_C::TutorialGlow' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, BangBox) == 0x0002C8, "Member 'UNormalBangWrapper_C::BangBox' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, BigBang) == 0x0002D0, "Member 'UNormalBangWrapper_C::BigBang' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, BigBangCount) == 0x0002D8, "Member 'UNormalBangWrapper_C::BigBangCount' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, CommonTextBlock_0) == 0x0002E0, "Member 'UNormalBangWrapper_C::CommonTextBlock_0' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, Content) == 0x0002E8, "Member 'UNormalBangWrapper_C::Content' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, CountText) == 0x0002F0, "Member 'UNormalBangWrapper_C::CountText' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, ModeSwitcher) == 0x0002F8, "Member 'UNormalBangWrapper_C::ModeSwitcher' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, NoMinusCount) == 0x000300, "Member 'UNormalBangWrapper_C::NoMinusCount' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, NoMinusCountMinus1) == 0x000308, "Member 'UNormalBangWrapper_C::NoMinusCountMinus1' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, SmallBang) == 0x000310, "Member 'UNormalBangWrapper_C::SmallBang' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, SmallBangCount) == 0x000318, "Member 'UNormalBangWrapper_C::SmallBangCount' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, SuperBang) == 0x000320, "Member 'UNormalBangWrapper_C::SuperBang' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, TutorialBorder) == 0x000328, "Member 'UNormalBangWrapper_C::TutorialBorder' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, UseSmallVersion) == 0x000330, "Member 'UNormalBangWrapper_C::UseSmallVersion' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, Count) == 0x000334, "Member 'UNormalBangWrapper_C::Count' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, bUseSuperBangNoCount) == 0x000338, "Member 'UNormalBangWrapper_C::bUseSuperBangNoCount' has a wrong offset!");
static_assert(offsetof(UNormalBangWrapper_C, ShouldSuppressBang) == 0x000339, "Member 'UNormalBangWrapper_C::ShouldSuppressBang' has a wrong offset!");

}

