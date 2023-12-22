#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGComboChallenge.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGComboChallenge : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGComboChallenge();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityMenu(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFighterTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFighterNameTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCursorIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCurrentData(const FString& noteText, const FString& damageText, int32 difficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMovieFadeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMovieFadeIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimDecide(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAnimDecide();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearCommandData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearButtonData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddCommandData(const FString& commandText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddButtonData(const FString& nameText, bool checked);
    
};

