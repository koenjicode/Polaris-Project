#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGFpsDisplay.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGFpsDisplay : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGFpsDisplay();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFps(int32 FPS);
    
};

