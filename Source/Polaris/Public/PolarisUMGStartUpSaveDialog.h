#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStartUpSaveDialog.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGStartUpSaveDialog : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStartUpSaveDialog();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayButtonDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnableButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayButtonDecideEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayAnimOutEnd();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
};

