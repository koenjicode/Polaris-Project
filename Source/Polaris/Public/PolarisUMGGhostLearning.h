#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGGhostLearning.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGGhostLearning : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGGhostLearning();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOut(bool isrightside);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNotify(bool isrightside);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIn(bool isrightside);
    
};

