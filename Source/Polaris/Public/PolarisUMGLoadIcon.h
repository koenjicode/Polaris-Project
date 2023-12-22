#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGLoadIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGLoadIcon : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGLoadIcon();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimStay();
    
};

