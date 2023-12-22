#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGFader.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGFader : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGFader();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSwitchDrawMode(bool is_black);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetDrawFlag(bool is_draw);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetDrawAlpha(bool is_black, float ALPHA);
    
};

