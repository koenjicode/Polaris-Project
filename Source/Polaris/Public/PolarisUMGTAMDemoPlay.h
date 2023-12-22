#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTAMDemoPlay.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGTAMDemoPlay : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGTAMDemoPlay();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimIn();
    
};

