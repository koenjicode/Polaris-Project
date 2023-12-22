#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTAMGreat.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGTAMGreat : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGTAMGreat();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIn();
    
};

