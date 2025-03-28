#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemPreviewViewport

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemPreviewViewport.ItemPreviewViewport_C
// 0x0008 (0x0268 - 0x0260)
class UItemPreviewViewport_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void Construct();
	void ExecuteUbergraph_ItemPreviewViewport(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemPreviewViewport_C">();
	}
	static class UItemPreviewViewport_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemPreviewViewport_C>();
	}
};
static_assert(alignof(UItemPreviewViewport_C) == 0x000008, "Wrong alinment on UItemPreviewViewport_C");
static_assert(sizeof(UItemPreviewViewport_C) == 0x000268, "Wrong size on UItemPreviewViewport_C");
static_assert(offsetof(UItemPreviewViewport_C, UberGraphFrame) == 0x000260, "Member 'UItemPreviewViewport_C::UberGraphFrame' has a wrong offset!");

}

