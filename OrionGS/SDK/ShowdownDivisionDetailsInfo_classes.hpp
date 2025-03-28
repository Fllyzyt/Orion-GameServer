#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShowdownDivisionDetailsInfo

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShowdownDivisionDetailsInfo.ShowdownDivisionDetailsInfo_C
// 0x0018 (0x06E8 - 0x06D0)
class UShowdownDivisionDetailsInfo_C final  : public UFortDivisionDetailsInfo
{
public:
	class UImage*                                 Hidden_Delete_;                                    // 0x06D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_66;                                          // 0x06D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichTextBlock_AboutLeagues;                        // 0x06E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownDivisionDetailsInfo_C">();
	}
	static class UShowdownDivisionDetailsInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownDivisionDetailsInfo_C>();
	}
};
static_assert(alignof(UShowdownDivisionDetailsInfo_C) == 0x000008, "Wrong alinment on UShowdownDivisionDetailsInfo_C");
static_assert(sizeof(UShowdownDivisionDetailsInfo_C) == 0x0006E8, "Wrong size on UShowdownDivisionDetailsInfo_C");
static_assert(offsetof(UShowdownDivisionDetailsInfo_C, Hidden_Delete_) == 0x0006D0, "Member 'UShowdownDivisionDetailsInfo_C::Hidden_Delete_' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionDetailsInfo_C, Image_66) == 0x0006D8, "Member 'UShowdownDivisionDetailsInfo_C::Image_66' has a wrong offset!");
static_assert(offsetof(UShowdownDivisionDetailsInfo_C, RichTextBlock_AboutLeagues) == 0x0006E0, "Member 'UShowdownDivisionDetailsInfo_C::RichTextBlock_AboutLeagues' has a wrong offset!");

}

