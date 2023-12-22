#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGSaveIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGSaveIcon : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGSaveIcon();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimStay();
    
};

