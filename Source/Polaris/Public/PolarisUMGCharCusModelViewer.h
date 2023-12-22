#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGCharCusModelViewer.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGCharCusModelViewer : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGCharCusModelViewer();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHelpTextVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHelpText(int32 idx, const FString& Icon, const FString& help);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCaptureFrameVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCapturedTexture(const UTexture2D* tex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestTexScaleAnim(bool downsize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestOnOffAnim(bool On);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestIOAnim(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasTexScaleAnimationFinished(bool downsize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasOnOffAnimationFinished(bool On);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool in);
    
};

