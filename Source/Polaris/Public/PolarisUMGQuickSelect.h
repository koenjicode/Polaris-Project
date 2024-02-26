#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGQuickSelectButton.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGQuickSelect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGQuickSelect : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGQuickSelect();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateStage(const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePlaySide(int32 side, const FString& text_next, const FString& text_prev, int32 lr, int32 Item, int32 item_max);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCustomize(int32 side, const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCPU(int32 side, const FString& text_next, const FString& text_prev, int32 lr, int32 Item, int32 item_max);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCharacter(int32 side, const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBallDamage(int32 side, const FString& Text, bool is_raw_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBall(int32 side, const FString& Text, bool is_raw_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHeader(int32 left_type, int32 right_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDisableMouse(int32 side, bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectMenu(int32 side, int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimDecide(int32 side, int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Play1PAnimCenter();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 side, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 side, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeArrowButtonClickCallback(int32 side, int32 ID, int32 lr);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeMenu(const TArray<FPolarisUMGQuickSelectButton>& item_names_1p, const TArray<FPolarisUMGQuickSelectButton>& item_names_2p);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableMenu(int32 side, bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideMenu(int32 side, int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeMouseOwnership(int32 side);
    
};

