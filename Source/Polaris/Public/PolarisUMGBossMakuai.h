#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGBossMakuai.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGBossMakuai : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGBossMakuai();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasAnimOutFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasAnimInFinished();
    
};

