#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGAppearStage.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGAppearStage : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGAppearStage();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowAppearStage(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimation(int32 ID);
    
};

