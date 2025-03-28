#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CosmeticLoadoutCard

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CosmeticLoadoutCard.CosmeticLoadoutCard_C
// 0x0080 (0x0448 - 0x03C8)
class UCosmeticLoadoutCard_C final  : public UFortCosmeticLoadoutCard
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnRefreshCard;                                     // 0x03D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnSelected;                                        // 0x03D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnHover;                                           // 0x03E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFortLazyImage*                         Image_Card;                                        // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       PresetName;                                        // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RefreshBacking;                                    // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_Header;                                    // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               UnsavedBang;                                       // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBMainCard;                                        // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                                CharacterAsset;                                    // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                BackblingAsset;                                    // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                PickaxeAsset;                                      // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                GliderAsset;                                       // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                WrapAsset;                                         // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLargeTile;                                       // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Selected;                                          // 0x0441(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_CosmeticLoadoutCard(int32 EntryPoint, EFortLoadoutCardType Temp_byte_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, class UMaterialInterface* Temp_object_Variable_4, EFortLoadoutCardType Temp_byte_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, class UTexture2D* Temp_object_Variable_5, class UTexture2D* Temp_object_Variable_6, bool Temp_bool_Variable_2, class FText Temp_text_Variable_2, class UObject* Temp_object_Variable_7, bool Temp_bool_B_Execution_Happened_Variable, bool Temp_bool_A_Execution_Happened_Variable, bool Temp_bool_B_Execution_Happened_Variable_1, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_A_Execution_Happened_Variable_1, bool Temp_bool_A_Execution_Happened_Variable_2, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_B_Execution_Happened_Variable_2, bool CallFunc_BooleanAND_ReturnValue_2, class UObject* K2Node_CustomEvent_Loaded_4, TDelegate<void(class UObject* Loaded)> K2Node_CreateDelegate_OutputDelegate, TDelegate<void(class UObject* Loaded)> K2Node_CreateDelegate_OutputDelegate_1, class UAthenaItemWrapDefinition* CallFunc_Array_Get_Item, TDelegate<void(class UObject* Loaded)> K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue_3, TDelegate<void(class UObject* Loaded)> K2Node_CreateDelegate_OutputDelegate_3, TDelegate<void(class UObject* Loaded)> K2Node_CreateDelegate_OutputDelegate_4, bool Temp_bool_B_Execution_Happened_Variable_3, bool Temp_bool_A_Execution_Happened_Variable_3, bool CallFunc_BooleanAND_ReturnValue_3, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_3, class UObject* Temp_object_Variable_8, class UObject* K2Node_CustomEvent_Loaded, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, class UMaterialInterface* K2Node_Select_Default_2, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default_3, class UObject* Temp_object_Variable_9, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText K2Node_Select_Default_4, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, class UObject* K2Node_CustomEvent_Loaded_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, bool K2Node_Event_IsDesignTime, class UObject* Temp_object_Variable_10, const struct FMargin& K2Node_MakeStruct_Margin, class UObject* K2Node_CustomEvent_Loaded_2, class UObject* Temp_object_Variable_11, class UObject* K2Node_CustomEvent_Loaded_3, bool CallFunc_IsInSubGame_ReturnValue, class UTexture2D* K2Node_Select_Default_5, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetCharacterPreviewImage_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void OnUpdateCard();
	void Construct();
	void OnLoaded_1E2615E24358EA93BCC3BBB4925113EE(class UObject* Loaded);
	void OnLoaded_B0945C234A1D7EE9DB994DA20F20FC55(class UObject* Loaded);
	void OnLoaded_9C1753664F831A575C95389EB3050D6D(class UObject* Loaded);
	void OnLoaded_720B049647023D90A92C789B29FB1060(class UObject* Loaded);
	void OnLoaded_C53A1CD444E6E41E6696819693452D69(class UObject* Loaded);
	void UpdateLoadoutSlotVisuals(class FName PreviewImageTextureParameterName, class FName DefaultSwitchScalarName, class UObject* Object, class UTexture2D* DefaultTexture, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
	void PlayHoverForward(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void PlayHoverReverse(class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
	void PlaySelectedForward(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void PlaySelectedReverse(class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
	void Get_First_Item(TArray<class UFortItemDefinition*>& InArray, class UFortItemDefinition** Result);
	void IsBlank(bool* Blank, bool CallFunc_EqualEqual_ByteByte_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CosmeticLoadoutCard_C">();
	}
	static class UCosmeticLoadoutCard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCosmeticLoadoutCard_C>();
	}
};
static_assert(alignof(UCosmeticLoadoutCard_C) == 0x000008, "Wrong alinment on UCosmeticLoadoutCard_C");
static_assert(sizeof(UCosmeticLoadoutCard_C) == 0x000448, "Wrong size on UCosmeticLoadoutCard_C");
static_assert(offsetof(UCosmeticLoadoutCard_C, UberGraphFrame) == 0x0003C8, "Member 'UCosmeticLoadoutCard_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutCard_C, OnRefreshCard) == 0x0003D0, "Member 'UCosmeticLoadoutCard_C::OnRefreshCard' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutCard_C, OnSelected) == 0x0003D8, "Member 'UCosmeticLoadoutCard_C::OnSelected' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutCard_C, OnHover) == 0x0003E0, "Member 'UCosmeticLoadoutCard_C::OnHover' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutCard_C, Image_Card) == 0x0003E8, "Member 'UCosmeticLoadoutCard_C::Image_Card' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutCard_C, PresetName) == 0x0003F0, "Member 'UCosmeticLoadoutCard_C::PresetName' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutCard_C, RefreshBacking) == 0x0003F8, "Member 'UCosmeticLoadoutCard_C::RefreshBacking' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutCard_C, SizeBox_Header) == 0x000400, "Member 'UCosmeticLoadoutCard_C::SizeBox_Header' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutCard_C, UnsavedBang) == 0x000408, "Member 'UCosmeticLoadoutCard_C::UnsavedBang' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutCard_C, VBMainCard) == 0x000410, "Member 'UCosmeticLoadoutCard_C::VBMainCard' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutCard_C, CharacterAsset) == 0x000418, "Member 'UCosmeticLoadoutCard_C::CharacterAsset' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutCard_C, BackblingAsset) == 0x000420, "Member 'UCosmeticLoadoutCard_C::BackblingAsset' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutCard_C, PickaxeAsset) == 0x000428, "Member 'UCosmeticLoadoutCard_C::PickaxeAsset' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutCard_C, GliderAsset) == 0x000430, "Member 'UCosmeticLoadoutCard_C::GliderAsset' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutCard_C, WrapAsset) == 0x000438, "Member 'UCosmeticLoadoutCard_C::WrapAsset' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutCard_C, IsLargeTile) == 0x000440, "Member 'UCosmeticLoadoutCard_C::IsLargeTile' has a wrong offset!");
static_assert(offsetof(UCosmeticLoadoutCard_C, Selected) == 0x000441, "Member 'UCosmeticLoadoutCard_C::Selected' has a wrong offset!");

}

