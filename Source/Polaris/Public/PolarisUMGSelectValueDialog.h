#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGSelectValueDialogSelectDir.h"
#include "PolarisUMGSelectValueDialogButtonParameter.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGSelectValueDialog.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGSelectValueDialog : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGSelectValueDialog();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButton(FPolarisUMGSelectValueDialogButtonParameter Param, bool is_menu, bool is_enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsEnableDecide(int32 ID, bool is_enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDecideSE(int32 ID, bool use_cancel_se);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectValue(int32 ID, EPolarisUMGSelectValueDialogSelectDir dir);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectButton(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimShadeOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimShadeOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimOutFront();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimInFront();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimDecide(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayAnimOutFront();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayAnimInFront();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayAnimDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDialogClosed();
    
    UFUNCTION(BlueprintCallable)
    void InvokeValueChangedCallback(int32 cursor_id, int32 selected_index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(TArray<int32> selected_indexes);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetButtonNum();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideButton(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Cancel();
    
};

