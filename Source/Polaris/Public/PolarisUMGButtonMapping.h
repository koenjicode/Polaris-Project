#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGButtonMapping.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGButtonMapping : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGButtonMapping();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateGuide(int32 ID, bool is_select);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateCursor(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowCaution(const FString& text_id);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetShade(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetGuideIcon(int32 ID, const UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetControllerType(const FString& Text, bool is_text_id, bool is_keyboard);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetButtonValue(int32 ID, const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetButtonTextColor(int32 ID, int32 Color);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideCaution();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnableButtons(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecideCursor(int32 ID, bool is_edit, bool is_cancel);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
};

