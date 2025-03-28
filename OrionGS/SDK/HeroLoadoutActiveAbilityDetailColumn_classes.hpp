#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeroLoadoutActiveAbilityDetailColumn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HeroLoadoutActiveAbilityDetailColumn.HeroLoadoutActiveAbilityDetailColumn_C
// 0x0038 (0x02C0 - 0x0288)
class UHeroLoadoutActiveAbilityDetailColumn_C final  : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ImageLockPerk;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImagePerkIcon;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PerkIconSizeBox;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFortBrushSize                                Icon_Size;                                         // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_77F6[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHero*                              Host_Hero;                                         // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UFortAbilityKit*                        AbilityKit;                                        // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void SetAbilityKit(class UFortAbilityKit* Param_AbilityKit);
	bool IsAbilityUnlocked(bool CallFunc_IsAbilityKitUnlockedForHero_ReturnValue);
	class UFortAbilityKit* GetAbilityKit();
	void SetHero(class UFortHero* Hero);
	void UpdateFromState(ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsAbilityUnlocked_ReturnValue, bool CallFunc_IsAbilityUnlocked_ReturnValue_1, class UFortAbilityKit* CallFunc_GetAbilityKit_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, ESlateVisibility K2Node_Select_Default, const struct FSlateBrush& CallFunc_NoResourceBrush_ReturnValue, const struct FSlateBrush& CallFunc_ResizeBrush_ResizedBrush, const struct FSlateBrush& CallFunc_ResizeBrush_ResizedBrush_1, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, const struct FLinearColor& K2Node_Select_Default_1);
	void UpdateFromStyle(const struct FVector2D& CallFunc_GetStandardBrushSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_HeroLoadoutActiveAbilityDetailColumn(int32 EntryPoint, bool K2Node_Event_IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HeroLoadoutActiveAbilityDetailColumn_C">();
	}
	static class UHeroLoadoutActiveAbilityDetailColumn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHeroLoadoutActiveAbilityDetailColumn_C>();
	}
};
static_assert(alignof(UHeroLoadoutActiveAbilityDetailColumn_C) == 0x000008, "Wrong alinment on UHeroLoadoutActiveAbilityDetailColumn_C");
static_assert(sizeof(UHeroLoadoutActiveAbilityDetailColumn_C) == 0x0002C0, "Wrong size on UHeroLoadoutActiveAbilityDetailColumn_C");
static_assert(offsetof(UHeroLoadoutActiveAbilityDetailColumn_C, UberGraphFrame) == 0x000288, "Member 'UHeroLoadoutActiveAbilityDetailColumn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutActiveAbilityDetailColumn_C, ImageLockPerk) == 0x000290, "Member 'UHeroLoadoutActiveAbilityDetailColumn_C::ImageLockPerk' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutActiveAbilityDetailColumn_C, ImagePerkIcon) == 0x000298, "Member 'UHeroLoadoutActiveAbilityDetailColumn_C::ImagePerkIcon' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutActiveAbilityDetailColumn_C, PerkIconSizeBox) == 0x0002A0, "Member 'UHeroLoadoutActiveAbilityDetailColumn_C::PerkIconSizeBox' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutActiveAbilityDetailColumn_C, Icon_Size) == 0x0002A8, "Member 'UHeroLoadoutActiveAbilityDetailColumn_C::Icon_Size' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutActiveAbilityDetailColumn_C, Host_Hero) == 0x0002B0, "Member 'UHeroLoadoutActiveAbilityDetailColumn_C::Host_Hero' has a wrong offset!");
static_assert(offsetof(UHeroLoadoutActiveAbilityDetailColumn_C, AbilityKit) == 0x0002B8, "Member 'UHeroLoadoutActiveAbilityDetailColumn_C::AbilityKit' has a wrong offset!");

}

