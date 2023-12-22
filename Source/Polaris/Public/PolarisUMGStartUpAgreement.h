#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStartUpAgreement.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGStartUpAgreement : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStartUpAgreement();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDisagreeText(const FString& text_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonCollapsed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBodyText(const FString& raw_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBGBlackVisibility(bool is_visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAgreeText(const FString& text_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectButton(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveScrollOffset(float Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecideButton(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayAnimOutEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsDecideButtonAnimEnd();
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
};

