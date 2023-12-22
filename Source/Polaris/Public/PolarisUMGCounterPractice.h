#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGCounterPractice.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGCounterPractice : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGCounterPractice();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibilityTab(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSideText(const FString& sideText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFighterTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFighterNameTexture(const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCursorIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCurrentTab(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonExistRecommend(int32 Index, bool exist);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonCheck(int32 Index, bool check);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActiveLayer(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimDecide(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAnimDecide();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectLeftCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideLeftCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddHeadingData(const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddButtonData(int32 no, const FString& nameText, const FString& commandText, const FString& noteText, const FString& damageText, int32 difficulty, const UTexture2D* texture0, const UTexture2D* texture1, const UTexture2D* texture2, const UTexture2D* texture3, bool isRawNameText);
    
};

