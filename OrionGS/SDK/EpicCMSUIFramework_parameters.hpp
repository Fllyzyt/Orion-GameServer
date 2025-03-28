#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EpicCMSUIFramework

#include "Basic.hpp"


namespace SDK::Params
{

// Function EpicCMSUIFramework.EpicCMSImage.SetMediaURL
// 0x0010 (0x0010 - 0x0000)
struct EpicCMSImage_SetMediaURL final 
{
public:
	class FString                                 MediaUrl;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(EpicCMSImage_SetMediaURL) == 0x000008, "Wrong alinment on EpicCMSImage_SetMediaURL");
static_assert(sizeof(EpicCMSImage_SetMediaURL) == 0x000010, "Wrong size on EpicCMSImage_SetMediaURL");
static_assert(offsetof(EpicCMSImage_SetMediaURL, MediaUrl) == 0x000000, "Member 'EpicCMSImage_SetMediaURL::MediaUrl' has a wrong offset!");

// Function EpicCMSUIFramework.EpicCMSTileCarousel.AddTilePage
// 0x0008 (0x0008 - 0x0000)
struct EpicCMSTileCarousel_AddTilePage final 
{
public:
	class UWidget*                                TilePageWidget;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(EpicCMSTileCarousel_AddTilePage) == 0x000008, "Wrong alinment on EpicCMSTileCarousel_AddTilePage");
static_assert(sizeof(EpicCMSTileCarousel_AddTilePage) == 0x000008, "Wrong size on EpicCMSTileCarousel_AddTilePage");
static_assert(offsetof(EpicCMSTileCarousel_AddTilePage, TilePageWidget) == 0x000000, "Member 'EpicCMSTileCarousel_AddTilePage::TilePageWidget' has a wrong offset!");

// Function EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded
// 0x0008 (0x0008 - 0x0000)
struct EpicCMSTileCarousel_HandleTilePageAdded final 
{
public:
	class UWidget*                                TileWidget;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(EpicCMSTileCarousel_HandleTilePageAdded) == 0x000008, "Wrong alinment on EpicCMSTileCarousel_HandleTilePageAdded");
static_assert(sizeof(EpicCMSTileCarousel_HandleTilePageAdded) == 0x000008, "Wrong size on EpicCMSTileCarousel_HandleTilePageAdded");
static_assert(offsetof(EpicCMSTileCarousel_HandleTilePageAdded, TileWidget) == 0x000000, "Member 'EpicCMSTileCarousel_HandleTilePageAdded::TileWidget' has a wrong offset!");

// Function EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged
// 0x0001 (0x0001 - 0x0000)
struct EpicCMSTileCarousel_NavigationVisibilityChanged final 
{
public:
	bool                                          bShowNavigation;                                   // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(EpicCMSTileCarousel_NavigationVisibilityChanged) == 0x000001, "Wrong alinment on EpicCMSTileCarousel_NavigationVisibilityChanged");
static_assert(sizeof(EpicCMSTileCarousel_NavigationVisibilityChanged) == 0x000001, "Wrong size on EpicCMSTileCarousel_NavigationVisibilityChanged");
static_assert(offsetof(EpicCMSTileCarousel_NavigationVisibilityChanged, bShowNavigation) == 0x000000, "Member 'EpicCMSTileCarousel_NavigationVisibilityChanged::bShowNavigation' has a wrong offset!");

// Function EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex
// 0x0004 (0x0004 - 0x0000)
struct EpicCMSTileCarousel_SetCurrentPageByIndex final 
{
public:
	int32                                         PageIndex;                                         // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(EpicCMSTileCarousel_SetCurrentPageByIndex) == 0x000004, "Wrong alinment on EpicCMSTileCarousel_SetCurrentPageByIndex");
static_assert(sizeof(EpicCMSTileCarousel_SetCurrentPageByIndex) == 0x000004, "Wrong size on EpicCMSTileCarousel_SetCurrentPageByIndex");
static_assert(offsetof(EpicCMSTileCarousel_SetCurrentPageByIndex, PageIndex) == 0x000000, "Member 'EpicCMSTileCarousel_SetCurrentPageByIndex::PageIndex' has a wrong offset!");

// Function EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex
// 0x0004 (0x0004 - 0x0000)
struct EpicCMSTileCarousel_GetCurrentPageIndex final 
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(EpicCMSTileCarousel_GetCurrentPageIndex) == 0x000004, "Wrong alinment on EpicCMSTileCarousel_GetCurrentPageIndex");
static_assert(sizeof(EpicCMSTileCarousel_GetCurrentPageIndex) == 0x000004, "Wrong size on EpicCMSTileCarousel_GetCurrentPageIndex");
static_assert(offsetof(EpicCMSTileCarousel_GetCurrentPageIndex, ReturnValue) == 0x000000, "Member 'EpicCMSTileCarousel_GetCurrentPageIndex::ReturnValue' has a wrong offset!");

}

