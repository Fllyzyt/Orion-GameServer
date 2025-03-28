#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLobby

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"
#include "CommonInput_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaLobby.AthenaLobby_C
// 0x0058 (0x0648 - 0x05F0)
class UAthenaLobby_C final  : public UAthenaLobbyBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x05F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFeaturedCreativeContent_C*             FeaturedCreativeContent;                           // 0x05F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMatchmakingRegionAndPool_C*            MatchmakingRegion;                                 // 0x0600(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMinimalTeamDisplay_C*                  MinimalTeamDisplay;                                // 0x0608(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Main;                                      // 0x0610(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFancyToastWidget_C*                    StoreToastWidget;                                  // 0x0618(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USoloButton_ViewQuest_C*                ViewQuestButton;                                   // 0x0620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStoreToastRequest*                     StoreToastRequest;                                 // 0x0628(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TryShowToast;                                      // 0x0630(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    InputAction_InspectChallenges;                     // 0x0638(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_AthenaLobby(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UFortPickerContext* CallFunc_GetContext_ReturnValue_1, EFortLobbyType Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, EFortLobbyType Temp_byte_Variable_5, class UUserWidget* K2Node_CustomEvent_UserWidget, TDelegate<void(class UUserWidget* UserWidget)> K2Node_CreateDelegate_OutputDelegate_1, class UUserWidget* Temp_object_Variable, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_2, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsBROnly_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_BooleanAND_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, const struct FMargin& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_2, class UStoreToastRequest* K2Node_Event_StoreUpdatedRequest, bool CallFunc_ShouldBeginRequest_ReturnValue, const struct FStoreCallout& CallFunc_GetToast_ReturnValue, bool CallFunc_IsRequestReady_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsActivated_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, EFortLobbyType K2Node_Event_LobbyType, class UFortPlaylistAthena* K2Node_Event_PlaylistData, ESlateVisibility K2Node_Select_Default_1, bool K2Node_SwitchEnum_CmpSuccess, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_3, class UAthenaMatchmakingPlayLegacy_C* K2Node_DynamicCast_AsAthena_Matchmaking_Play_Legacy, bool K2Node_DynamicCast_bSuccess, int32 K2Node_Event_NewGlyphs, class UWidget* K2Node_Select_Default_2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, bool Temp_bool_IsClosed_Variable, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, class UFortAsyncAction_EnsureClientQuestLogin* CallFunc_SendEnsureClientQuestLogin_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_3, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1);
	void DisplayGlyphQuestUpdated(int32 NewGlyphs);
	void OnPlaylistChanged(EFortLobbyType LobbyType, class UFortPlaylistAthena* PlaylistData);
	void BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature();
	void TryToastAgainNextFrame();
	void AttemptToShowToast();
	void DisplayStoreUpdated(class UStoreToastRequest* StoreUpdatedRequest);
	void BP_OnDeactivated();
	void BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BP_OnActivated();
	void OnComplete_9036807A49B907A7A1B78EB727BAB97A(class UUserWidget* UserWidget);
	void OnSuccess_DA5E62624D068772EA890193344BA4AE();
	void OnFailure_DA5E62624D068772EA890193344BA4AE();
	void StartAthenaLobbyMusic(TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void ConfigureGenericLinkButton(bool Temp_bool_Variable, class FText Temp_text_Variable, TScriptInterface<class IFortClientAnnouncement_TutorialInterface> K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface, bool K2Node_DynamicCast_bSuccess, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class FText CallFunc_GetLobbyGenericLinkButtonOverrideText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_Select_Default);
	void HandleLobbyColorSchemeChange(const struct FLinearColor& NewColorScheme, bool UseDefaultScheme, const struct FLinearColor& Temp_struct_Variable, class UAthenaLobbyMatchmakingPlay_C* K2Node_DynamicCast_AsAthena_Lobby_Matchmaking_Play, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FLinearColor& K2Node_Select_Default);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaLobby_C">();
	}
	static class UAthenaLobby_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaLobby_C>();
	}
};
static_assert(alignof(UAthenaLobby_C) == 0x000008, "Wrong alinment on UAthenaLobby_C");
static_assert(sizeof(UAthenaLobby_C) == 0x000648, "Wrong size on UAthenaLobby_C");
static_assert(offsetof(UAthenaLobby_C, UberGraphFrame) == 0x0005F0, "Member 'UAthenaLobby_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, FeaturedCreativeContent) == 0x0005F8, "Member 'UAthenaLobby_C::FeaturedCreativeContent' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, MatchmakingRegion) == 0x000600, "Member 'UAthenaLobby_C::MatchmakingRegion' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, MinimalTeamDisplay) == 0x000608, "Member 'UAthenaLobby_C::MinimalTeamDisplay' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, Overlay_Main) == 0x000610, "Member 'UAthenaLobby_C::Overlay_Main' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, StoreToastWidget) == 0x000618, "Member 'UAthenaLobby_C::StoreToastWidget' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, ViewQuestButton) == 0x000620, "Member 'UAthenaLobby_C::ViewQuestButton' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, StoreToastRequest) == 0x000628, "Member 'UAthenaLobby_C::StoreToastRequest' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, TryShowToast) == 0x000630, "Member 'UAthenaLobby_C::TryShowToast' has a wrong offset!");
static_assert(offsetof(UAthenaLobby_C, InputAction_InspectChallenges) == 0x000638, "Member 'UAthenaLobby_C::InputAction_InspectChallenges' has a wrong offset!");

}

