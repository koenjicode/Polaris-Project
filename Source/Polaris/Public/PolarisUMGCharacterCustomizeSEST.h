#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EUMG_CUS_ST_ArrowClick.h"
#include "EUMG_CUS_ST_ButtonType.h"
#include "EUMG_CUS_ST_CallbackCategory.h"
#include "EUMG_CUS_ST_SESTStatus.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGCharacterCustomizeSEST.generated.h"

class UPolarisUMGColorDialog;
class UTexture;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGCharacterCustomizeSEST : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGCharacterCustomizeSEST();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSESTListVisibility(bool F);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSESTListTabVisibility(int32 Index, bool F);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSESTListTabArrow(bool left_visible, bool right_visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSESTListTab(int32 Index, int32 ID, const FString& Label, bool new_icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSESTListScroll(int32 scroll);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSESTListNum(int32 Current, int32 Total);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSESTHover(int32 Index, bool is_hober);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSESTEquipped(int32 Index, bool is_equipped);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMouseEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEditMenuVisibility(bool F);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEditMenuSliderValue(int32 Index, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEditMenuSlider(int32 Index, float Min, float Max, float step);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEditMenuScroll(int32 scroll);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEditMenuListBox(int32 Index, const FString& Label, bool left_visible, bool right_visible, EUMG_CUS_ST_ArrowClick click);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEditMenuIcon(int32 Index, const UTexture* Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEditMenuEnable(int32 Index, bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEditMenuColor(int32 Index, const FLinearColor& Color);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetColorPanelVisibility(bool F);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetEditMenuScroll();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetEditMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySESTListTabAnim(int32 Index, FName anim_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySESTAnim(int32 Index, FName anim_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayEditMenuAnim(int32 Index, FName anim_name, bool stop_prev_anim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnim(FName anim_name, bool stop_prev_anim);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 MakeCallbakId(EUMG_CUS_ST_CallbackCategory Category, int32 ID, EUMG_CUS_ST_ButtonType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsSESTAnimPlaying(int32 Index, FName anim_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEditMenuAnimPlaying(int32 Index, FName anim_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAnimPlaying(FName anim_name);
    
    UFUNCTION(BlueprintCallable)
    void InvokeValueChangeCallback(int32 ID, float Value);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeButtonClickCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitSESTListTabArrow(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitEditMenu(int32 Index, const FString& Label);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetEditMenuSlider();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetEditMenuListBox();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetEditMenuDecideButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetEditMenuButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetColorDialogPathName();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPolarisUMGColorDialog* GetColorDialog();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCallbakId(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUMG_CUS_ST_CallbackCategory GetCallbakCategory(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUMG_CUS_ST_ButtonType GetCallbakButtonType(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearSESTList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddSEST(int32 ID, bool is_remove, const UTexture* Icon, EUMG_CUS_ST_SESTStatus Status, bool is_equipped);
    
};

