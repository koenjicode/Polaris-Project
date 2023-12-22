#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGControllerSetting.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGControllerSetting : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGControllerSetting();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdatePage(int32 page);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateCursor(int32 page, int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateCheckDialog(int32 arrow_num, bool is_lp, bool is_rp, bool is_lk, bool is_rk, bool is_rage, bool is_zone_drive, bool is_assist);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateButton(int32 page, int32 ID, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowTitle(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowCheckDialog(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowBackground(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPlayerSide(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayFrameOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayFrameInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayDecideAnimation(int32 page, int32 ID, int32 Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnableButtons(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClearButtons();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddTypeButton(int32 page, int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddMoveButton(int32 page, int32 ID, const FString& textId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddEditableButton(int32 page, int32 ID, const FString& Command, const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddCommandButton(int32 page, int32 ID, const FString& textId);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecide(int32 page, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeChangeTypeRight(int32 page);
    
    UFUNCTION(BlueprintCallable)
    void InvokeChangeTypeLeft(int32 page);
    
    UFUNCTION(BlueprintCallable)
    void InvokeChangeMoveRight(int32 page);
    
    UFUNCTION(BlueprintCallable)
    void InvokeChangeMoveLeft(int32 page);
    
    UFUNCTION(BlueprintCallable)
    void InvokeChangeCursor(int32 page, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeAnimEnd(bool is_frame_in, bool is_frame_out, bool is_decide, bool is_check_dialog);
    
};

