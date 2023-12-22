#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGConnectingIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGConnectingIcon : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGConnectingIcon();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimStay();
    
};

