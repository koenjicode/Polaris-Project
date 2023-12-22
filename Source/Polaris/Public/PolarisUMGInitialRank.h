#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGInitialRank.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGInitialRank : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGInitialRank();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButton(int32 ID, const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTekkenPower(int32 tekken_power);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRank(UTexture2D* rank_icon, UTexture2D* rank_no_icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOtherCharRankText(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectButton(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimDecide(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayAnimDecide();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideButton(int32 ID);
    
};

