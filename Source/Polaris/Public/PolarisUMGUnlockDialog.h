#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGUnlockDialog.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGUnlockDialog : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGUnlockDialog();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetText(const FString& Title, const FString& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameIn();
    
};

