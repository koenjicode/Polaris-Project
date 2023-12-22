#pragma once
#include "CoreMinimal.h"
#include "CUS_ItemIconEnum.h"
#include "CustomizeItemDataUI.h"
#include "PolarisUserWidget.h"
#include "SliderMinMax.h"
#include "PolarisUMGCharacterCustomizeEquipment.generated.h"

class UPolarisUMGCharacterCustomizeSEST;
class UTexture;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGCharacterCustomizeEquipment : public UPolarisUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UTexture2D*> thumb_item_textures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UTexture2D*> rarity_icon_textures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> asset_names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FCustomizeItemDataUI> cus_item_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSliderMinMax> AccSliderMinMax;
    
public:
    UPolarisUMGCharacterCustomizeEquipment();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopMenu22Anim(int32 idx, FName animation_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopAnim(FName animation_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitle(const FString& Title);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSESTWidgetEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPanelPreviewTexture(const UTexture2D* Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPanelPreviewFlag(bool F);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu3Visibility(bool F);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu3ScrollTop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu3Scroll(int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu3RarityIconAndItemName(int32 rarity, const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu3RarityIcon(int32 rarity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu3ItemNameId(int32 X, int32 Y, const FString& text_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu3ItemName(const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu3Cursor(int32 X, int32 Y, bool IsActive, bool isDebugDisp, const FString& asset_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu3Click(int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu3Btn(int32 menu1_idx, int32 menu2_idx, int32 menu3_x, int32 menu3_y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu2Visibility(bool F);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu2OffsetY(float Offset_Y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu2BtnVisibility(int32 idx, bool F);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu2Badge(int32 idx, CUS_ItemIconEnum Icon, bool is_enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu2AccBtnLabelAndTexture(int32 idx, const FString& Label, const UTexture* Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu22ItemNumber(int32 idx, const FString& Number);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu22ItemLabel(int32 idx, const FString& Label);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu22ItemIconVisibility(int32 idx, bool F);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu22ItemIcon(int32 idx, const UTexture* Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu22Enabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu1Label(int32 idx, const FString& Label);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu1IconAndLabel(int32 idx, const UTexture2D* Icon, const FString& Label, bool isNew);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu1Icon(int32 idx, const UTexture2D* Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMenu1Badge(int32 idx, CUS_ItemIconEnum Icon, bool is_enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemIcon(int32 idx, CUS_ItemIconEnum Icon, bool is_enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemComment(const FString& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetFightMoney(int64 money);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetExclusionIcon(bool F);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetColorPickerPreviewFlag(bool F);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAccDialogSliderMinMax(int32 idx, float Min, float Max);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAccDialogPos(int32 idx, const FString& pos_str, int32 Pos, int32 pos_min, int32 pos_max, int32 dir, bool is_loop);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAccDialogNum(int32 idx, const FString& num_str, float num_float);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAccDialogLabel(int32 idx, const FString& Label);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAccDialogElemUnable(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAccDialogElemEnable(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPanelPreviewAnim(FName animation_name, bool stop_prev_anim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMenu2AnimNoSelectOut(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMenu2AnimNoSelectIn(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMenu2AnimNormal(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMenu2AnimLineOut(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMenu2AnimLineIn(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMenu2AnimIn(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMenu2AnimHover(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMenu2AnimClick(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMenu2AnimBackSelect(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMenu2AnimBackNoSelect(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMenu2Anim(int32 idx, FName animation_name, bool stop_prev_anim, bool is_loop);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMenu22Anim(int32 idx, FName animation_name, bool stop_prev_anim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMenu1AnimNormal(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMenu1AnimHover(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMenu1AnimClick(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMenu1Anim(int32 idx, FName anim_name, bool stop_prev_anim, bool is_loop);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayItemAnim(int32 idx, FName animation_name, bool stop_prev_anim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimThirdOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimThirdIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimSecondOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimSecondIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnim(FName animation_name, bool stop_prev_anim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAccSlotMenuAnimNormal(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAccSlotMenuAnimHover(int32 idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAccSlotMenuAnim(int32 idx, FName animation_name, bool stop_prev_anim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAccDialogElemAnim(int32 idx, FName animation_name, bool stop_prev_anim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenColorDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenAccDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Menu3toMenu22(int32 menu2_num, int32 menu2_idx, int32 menu3_num, int32 menu3_x, int32 menu3_y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Menu3toMenu2(int32 menu2_num, int32 menu2_idx, int32 menu3_num, int32 menu3_x, int32 menu3_y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Menu2toMenu3(int32 menu2_num, int32 menu2_idx, int32 menu3_num, int32 menu3_x, int32 menu3_y, bool play_clickanim, bool isDebugDisp, const FString& asset_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Menu2toMenu1(int32 menu1_num, int32 menu1_idx, int32 menu2_num, int32 menu2_idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Menu2CursorMoveEvent(int32 idx, int32 prev_idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Menu22toMenu3(int32 menu2_num, int32 menu2_idx, int32 menu3_num, int32 menu3_x, int32 menu3_y, const FString& asset_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Menu22toMenu1(int32 menu1_num, int32 menu1_idx, int32 menu2_num, int32 menu2_idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Menu1toMenu2(int32 menu1_num, int32 menu1_idx, int32 menu2_num, int32 menu2_idx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakeMenu3Btn(int32 menu1_idx, int32 menu2_idx, int32 menu3_x, int32 menu3_y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsMenuAccAnimPlaying(int32 idx, FName anim_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsMenu2AnimPlaying(int32 idx, FName anim_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsMenu22AnimPlaying(int32 idx, FName anim_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsMenu1AnimPlaying(int32 idx, FName anim_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAnimPlaying(FName anim_name);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectMenu3Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectMenu2Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectMenu1Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectAccCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideMenu3Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideMenu2Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideMenu1Callback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideAccCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideAccArrowCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeChangeAccSliderCallback(int32 ID, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitParams(int32 menu1_max, int32 menu2_max);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideMoney(bool isHide);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasPreviewAnimationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasOpenAnimationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasNextAnimationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimThirdOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimThirdIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimSecondOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimSecondIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasCloseAnimationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPolarisUMGCharacterCustomizeSEST* GetSESTWidget();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMenuHierarchy();
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* GetMenu3ItemThumb(int32 menu1_idx, int32 menu2_idx, int32 menu3_idx);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMenu2CursorIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMenu1CursorIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 GetEquipItemRow();
    
    UFUNCTION(BlueprintCallable)
    int32 GetEquipItemCol();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCustomizeItemDataStructNum();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetColorDialogPathName();
    
    UFUNCTION(BlueprintCallable)
    int32 EncodeMenu3ItemIndex(int32 menu1_idx, int32 menu2_idx, int32 menu3_idx);
    
    UFUNCTION(BlueprintCallable)
    int32 EncodeMenu3IndexFromInt2d(int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DispInt(int32 N);
    
    UFUNCTION(BlueprintCallable)
    void DecodeInt2dMenu3FromIndex(int32 idx, int32& X, int32& Y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DebugPrintText(int32 idx, const FString& Label);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseColorDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseAccDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearMenu3Btn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearMenu2Btn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CharacterCustomizeEquipmentUITick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddMenu3Btn(const FCustomizeItemDataUI& item_data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddMenu2BtnLabel(const FString& Label, bool is_new);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddMenu2AccBtnLabel(int32 N, const FString& Label, const UTexture* Icon);
    
};

