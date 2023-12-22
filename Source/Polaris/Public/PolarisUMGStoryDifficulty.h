#pragma once
#include "CoreMinimal.h"
#include "EPolarisDifficultyMode.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStoryDifficulty.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGStoryDifficulty : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStoryDifficulty();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectMenu(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimDecide(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeMenu(EPolarisDifficultyMode Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableFader(bool Enable);
    
};

