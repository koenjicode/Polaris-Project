#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGReplayControl.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGReplayControl : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGReplayControl();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateControlSpritePosition(int32 side, FVector position, float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimerNum(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayControlOnAnimation(int32 side);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayControlOffAnimation();
    
};

