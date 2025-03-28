#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShowdownScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShowdownScreen.ShowdownScreen_C
// 0x00A8 (0x05A0 - 0x04F8)
class UShowdownScreen_C final  : public UFortShowdownScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Outro;                                             // 0x0500(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0508(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCircleArrowButton_C*                   CircleArrowButton_Left;                            // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircleArrowButton_C*                   CircleArrowButton_Right;                           // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  CommonWidgetSwitcher_ErrorSwitcher;                // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Bg;                                          // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       NoTournamentsContent;                              // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_NoTournamentContent;                       // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownTournamentTile_C*              ShowdownTournamentTile;                            // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownTournamentTile_C*              ShowdownTournamentTile_0;                          // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownTournamentTile_C*              ShowdownTournamentTile_1;                          // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Posters;                                   // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortSwipePanel*                        SwipePanel;                                        // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TournamentsContent;                                // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                            PrimaryColor;                                      // 0x0570(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWidget*                                SelectedTile;                                      // 0x0598(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ShowdownScreen(int32 EntryPoint, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float K2Node_ComponentBoundEvent_CurrentOffset, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, int32 Temp_int_Variable, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, class UWidget* K2Node_Select_Default, bool K2Node_Event_bUsingGamepad, const struct FVector4& CallFunc_GetSafeZonePadding_SafePadding, const struct FVector2D& CallFunc_GetSafeZonePadding_SafePaddingScale, const struct FVector4& CallFunc_GetSafeZonePadding_SpillOverPadding, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue_3, const struct FMargin& K2Node_MakeStruct_Margin, class UWidget* K2Node_CustomEvent_CurrentWidget, ESlateVisibility Temp_byte_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, class UShowdownTournamentTile_C* K2Node_DynamicCast_AsShowdown_Tournament_Tile, bool K2Node_DynamicCast_bSuccess, class UShowdownTournamentTile_C* K2Node_DynamicCast_AsShowdown_Tournament_Tile_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetChildIndex_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanOR_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, ESlateVisibility K2Node_Select_Default_1, bool K2Node_Event_bFrontIsSelected, bool K2Node_Event_bEndIsSelected, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1);
	void BP_OnDeactivated();
	void SelectedEndTournament(bool bEndIsSelected);
	void SelectedFrontTournament(bool bFrontIsSelected);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TournamentListSelect(class UWidget* CurrentWidget);
	void OnInputModeChanged(bool bUsingGamepad);
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_4_OnFortSwipeEvent__DelegateSignature();
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_3_OnFortSwipeEvent__DelegateSignature();
	void BP_OnActivated();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ScrollBox_TournamentList_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
	void BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShowdownScreen_C">();
	}
	static class UShowdownScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShowdownScreen_C>();
	}
};
static_assert(alignof(UShowdownScreen_C) == 0x000008, "Wrong alinment on UShowdownScreen_C");
static_assert(sizeof(UShowdownScreen_C) == 0x0005A0, "Wrong size on UShowdownScreen_C");
static_assert(offsetof(UShowdownScreen_C, UberGraphFrame) == 0x0004F8, "Member 'UShowdownScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, Outro) == 0x000500, "Member 'UShowdownScreen_C::Outro' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, Intro) == 0x000508, "Member 'UShowdownScreen_C::Intro' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, CircleArrowButton_Left) == 0x000510, "Member 'UShowdownScreen_C::CircleArrowButton_Left' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, CircleArrowButton_Right) == 0x000518, "Member 'UShowdownScreen_C::CircleArrowButton_Right' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, CommonWidgetSwitcher_ErrorSwitcher) == 0x000520, "Member 'UShowdownScreen_C::CommonWidgetSwitcher_ErrorSwitcher' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, Image_Bg) == 0x000528, "Member 'UShowdownScreen_C::Image_Bg' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, NoTournamentsContent) == 0x000530, "Member 'UShowdownScreen_C::NoTournamentsContent' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, Overlay_NoTournamentContent) == 0x000538, "Member 'UShowdownScreen_C::Overlay_NoTournamentContent' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, ShowdownTournamentTile) == 0x000540, "Member 'UShowdownScreen_C::ShowdownTournamentTile' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, ShowdownTournamentTile_0) == 0x000548, "Member 'UShowdownScreen_C::ShowdownTournamentTile_0' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, ShowdownTournamentTile_1) == 0x000550, "Member 'UShowdownScreen_C::ShowdownTournamentTile_1' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, SizeBox_Posters) == 0x000558, "Member 'UShowdownScreen_C::SizeBox_Posters' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, SwipePanel) == 0x000560, "Member 'UShowdownScreen_C::SwipePanel' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, TournamentsContent) == 0x000568, "Member 'UShowdownScreen_C::TournamentsContent' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, PrimaryColor) == 0x000570, "Member 'UShowdownScreen_C::PrimaryColor' has a wrong offset!");
static_assert(offsetof(UShowdownScreen_C, SelectedTile) == 0x000598, "Member 'UShowdownScreen_C::SelectedTile' has a wrong offset!");

}

