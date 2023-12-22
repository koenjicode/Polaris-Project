#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "DebugHDRSettingsWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UDebugHDRSettingsWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UDebugHDRSettingsWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWidgetPosition(FVector2D position);
    
    UFUNCTION(BlueprintCallable)
    void SetUILuminance(float Luminance);
    
    UFUNCTION(BlueprintCallable)
    void SetUILevel(float Level);
    
    UFUNCTION(BlueprintCallable)
    void SetMinimumLuminance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMiddleLuminance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaximumLuminance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAcesColorMultiplier(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabledHDROutput();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUILuminance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUILevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinimumLuminance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMiddleLuminance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaximumLuminance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAcesColorMultiplier();
    
    UFUNCTION(BlueprintCallable)
    void EnableHDROutput(bool Enable, int32 Nits);
    
};

