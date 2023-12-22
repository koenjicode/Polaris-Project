#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTAMMission.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGTAMMission : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGTAMMission();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIn();
    
};

