#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGDifficultySelect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGDifficultySelect : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGDifficultySelect();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMaxOfDifficultyLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectMenu(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimOut(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimIn(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimDecide(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableMenu(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideMenu(int32 ID);
    
};

