#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGReplayInfoIconType.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGReplayInfo.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGReplayInfo : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGReplayInfo();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIcon(EPolarisUMGReplayInfoIconType Type, bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOnAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOffAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInAnimation();
    
};

