#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGOptionTitle.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGOptionTitle : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGOptionTitle();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitleText(const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBgVisibility(bool new_visibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasBgIOAnimationFinished(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameOutBg();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameInBg();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameIn();
    
};

