#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGCharSelectTimer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGCharSelectTimer : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGCharSelectTimer();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimerNum(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInAnimation();
    
};

