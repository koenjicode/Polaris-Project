#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGPauseMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGPauseMenu : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGPauseMenu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WindowOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WindowIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnableButton(int32 ID, bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectMenu(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimDecide(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangedMenuType(int32 Type);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeMenu(const TArray<FString>& item_names, int32 Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasWindowAnimIOFinished(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasAnimOutFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasAnimInFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableMenu(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideMenu(int32 ID);
    
};

