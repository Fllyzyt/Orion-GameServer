#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreSelection

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"
#include "CommonUI_classes.hpp"
#include "StoreSelection_structs.hpp"


namespace SDK
{

// Class StoreSelection.FortStoreSelectionData
// 0x0058 (0x0438 - 0x03E0)
class UFortStoreSelectionData final  : public UFortGameFeatureData
{
public:
	TSoftClassPtr<class UClass>                   StoreSelectionScreenClass;                         // 0x03E0(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   RegularStoreSelectedText;                          // 0x0408(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   NonRegularStoreSelectedText;                       // 0x0420(0x0018)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortStoreSelectionData">();
	}
	static class UFortStoreSelectionData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortStoreSelectionData>();
	}
};
static_assert(alignof(UFortStoreSelectionData) == 0x000008, "Wrong alinment on UFortStoreSelectionData");
static_assert(sizeof(UFortStoreSelectionData) == 0x000438, "Wrong size on UFortStoreSelectionData");
static_assert(offsetof(UFortStoreSelectionData, StoreSelectionScreenClass) == 0x0003E0, "Member 'UFortStoreSelectionData::StoreSelectionScreenClass' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionData, RegularStoreSelectedText) == 0x000408, "Member 'UFortStoreSelectionData::RegularStoreSelectedText' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionData, NonRegularStoreSelectedText) == 0x000420, "Member 'UFortStoreSelectionData::NonRegularStoreSelectedText' has a wrong offset!");

// Class StoreSelection.FortStoreSelectionOptionEntry
// 0x0020 (0x0BC0 - 0x0BA0)
class UFortStoreSelectionOptionEntry final  : public UCommonButton
{
public:
	class UFortLazyImage*                         Image_Icon;                                        // 0x0BA0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       Text_Description;                                  // 0x0BA8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       Text_Price;                                        // 0x0BB0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                   RichText_Label;                                    // 0x0BB8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortStoreSelectionOptionEntry">();
	}
	static class UFortStoreSelectionOptionEntry* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortStoreSelectionOptionEntry>();
	}
};
static_assert(alignof(UFortStoreSelectionOptionEntry) == 0x000008, "Wrong alinment on UFortStoreSelectionOptionEntry");
static_assert(sizeof(UFortStoreSelectionOptionEntry) == 0x000BC0, "Wrong size on UFortStoreSelectionOptionEntry");
static_assert(offsetof(UFortStoreSelectionOptionEntry, Image_Icon) == 0x000BA0, "Member 'UFortStoreSelectionOptionEntry::Image_Icon' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionOptionEntry, Text_Description) == 0x000BA8, "Member 'UFortStoreSelectionOptionEntry::Text_Description' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionOptionEntry, Text_Price) == 0x000BB0, "Member 'UFortStoreSelectionOptionEntry::Text_Price' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionOptionEntry, RichText_Label) == 0x000BB8, "Member 'UFortStoreSelectionOptionEntry::RichText_Label' has a wrong offset!");

// Class StoreSelection.FortStoreSelectionScreen
// 0x0420 (0x0878 - 0x0458)
class UFortStoreSelectionScreen final  : public UCommonActivatablePanel
{
public:
	uint8                                         Pad_48D9[0x8];                                     // 0x0458(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonGroup*                     EntryBoxButtonGroup;                               // 0x0460(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortRealMoneyOffer*                    StoreOffer;                                        // 0x0468(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonLoadGuard*                       StoreOfferLoadGuard;                               // 0x0470(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                       Text_Header;                                       // 0x0478(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                       DynamicEntryBox_Options;                           // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                          Button_Continue;                                   // 0x0488(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButton*                          Button_Cancel;                                     // 0x0490(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                   RichText_InitiallySelectedHint;                    // 0x0498(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TScriptInterface<class IPurchaseChoiceRequesterInterface> PurchaseChoiceOwner;                               // 0x04A0(0x0010)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FItemData>                      StoreOptions;                                      // 0x04B0(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UFortMtxOfferData>       SoftDisplayAsset;                                  // 0x04C0(0x0028)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FItemData                              ItemData[0xC];                                     // 0x04E8(0x0048)(Edit, NativeAccessSpecifierPrivate)
	class FText                                   OptionalLabels[0x2];                               // 0x0848(0x0018)(Edit, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortStoreSelectionScreen">();
	}
	static class UFortStoreSelectionScreen* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortStoreSelectionScreen>();
	}
};
static_assert(alignof(UFortStoreSelectionScreen) == 0x000008, "Wrong alinment on UFortStoreSelectionScreen");
static_assert(sizeof(UFortStoreSelectionScreen) == 0x000878, "Wrong size on UFortStoreSelectionScreen");
static_assert(offsetof(UFortStoreSelectionScreen, EntryBoxButtonGroup) == 0x000460, "Member 'UFortStoreSelectionScreen::EntryBoxButtonGroup' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, StoreOffer) == 0x000468, "Member 'UFortStoreSelectionScreen::StoreOffer' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, StoreOfferLoadGuard) == 0x000470, "Member 'UFortStoreSelectionScreen::StoreOfferLoadGuard' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, Text_Header) == 0x000478, "Member 'UFortStoreSelectionScreen::Text_Header' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, DynamicEntryBox_Options) == 0x000480, "Member 'UFortStoreSelectionScreen::DynamicEntryBox_Options' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, Button_Continue) == 0x000488, "Member 'UFortStoreSelectionScreen::Button_Continue' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, Button_Cancel) == 0x000490, "Member 'UFortStoreSelectionScreen::Button_Cancel' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, RichText_InitiallySelectedHint) == 0x000498, "Member 'UFortStoreSelectionScreen::RichText_InitiallySelectedHint' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, PurchaseChoiceOwner) == 0x0004A0, "Member 'UFortStoreSelectionScreen::PurchaseChoiceOwner' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, StoreOptions) == 0x0004B0, "Member 'UFortStoreSelectionScreen::StoreOptions' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, SoftDisplayAsset) == 0x0004C0, "Member 'UFortStoreSelectionScreen::SoftDisplayAsset' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, ItemData) == 0x0004E8, "Member 'UFortStoreSelectionScreen::ItemData' has a wrong offset!");
static_assert(offsetof(UFortStoreSelectionScreen, OptionalLabels) == 0x000848, "Member 'UFortStoreSelectionScreen::OptionalLabels' has a wrong offset!");

}

