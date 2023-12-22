#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGStorySuppressionGauge.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGStorySuppressionGauge : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStorySuppressionGauge();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSuppressionGauge(float Percent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasAnimationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameIn();
    
};

