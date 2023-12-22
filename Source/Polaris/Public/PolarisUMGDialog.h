#pragma once
#include "CoreMinimal.h"
#include "EPolarisTextBlockFontType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGDialog.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGDialog : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGDialog();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButton(int32 ID, const FString& Text, bool is_raw_text, bool is_enable, bool use_centering, bool change_font_type, EPolarisTextBlockFontType font_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPosition(const int32 X, const int32 Y);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDescription(const FString& Text, bool is_raw_text, bool use_centering);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectMenu(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimOut(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimIn(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimDecide(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowBackground(bool flag);
    
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
    void EnableMenu(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideMenu(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AlignToLeft(int32 ID, bool ghost_icon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AlignToDefault(int32 ID);
    
};

