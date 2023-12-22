#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGCommandListHelp.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGCommandListHelp : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGCommandListHelp();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHelpType(int32 help_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimIn();
    
};

