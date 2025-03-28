#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoginCredentialSelect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LoginCredentialSelect.LoginCredentialSelect_C
// 0x0060 (0x0360 - 0x0300)
class ULoginCredentialSelect_C final  : public UFortLoginCredentialSelect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_0;                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Erebus_Title;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       ErebusType;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_48;                                          // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                TrademarksBorder;                                  // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_LoginCredentialSelect(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoginCredentialSelect_C">();
	}
	static class ULoginCredentialSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoginCredentialSelect_C>();
	}
};
static_assert(alignof(ULoginCredentialSelect_C) == 0x000008, "Wrong alinment on ULoginCredentialSelect_C");
static_assert(sizeof(ULoginCredentialSelect_C) == 0x000360, "Wrong size on ULoginCredentialSelect_C");
static_assert(offsetof(ULoginCredentialSelect_C, UberGraphFrame) == 0x000300, "Member 'ULoginCredentialSelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, CommonWidgetSwitcher_0) == 0x000308, "Member 'ULoginCredentialSelect_C::CommonWidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Erebus_Title) == 0x000310, "Member 'ULoginCredentialSelect_C::Erebus_Title' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, ErebusType) == 0x000318, "Member 'ULoginCredentialSelect_C::ErebusType' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Image_0) == 0x000320, "Member 'ULoginCredentialSelect_C::Image_0' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Image_1) == 0x000328, "Member 'ULoginCredentialSelect_C::Image_1' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Image_2) == 0x000330, "Member 'ULoginCredentialSelect_C::Image_2' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Image_3) == 0x000338, "Member 'ULoginCredentialSelect_C::Image_3' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Image_4) == 0x000340, "Member 'ULoginCredentialSelect_C::Image_4' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Image_5) == 0x000348, "Member 'ULoginCredentialSelect_C::Image_5' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, Image_48) == 0x000350, "Member 'ULoginCredentialSelect_C::Image_48' has a wrong offset!");
static_assert(offsetof(ULoginCredentialSelect_C, TrademarksBorder) == 0x000358, "Member 'ULoginCredentialSelect_C::TrademarksBorder' has a wrong offset!");

}

