#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGTAMTelop.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGTAMTelop : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGTAMTelop();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSubtitleUpdate();
    
};

