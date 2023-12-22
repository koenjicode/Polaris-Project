#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGRageArts.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGRageArts : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGRageArts();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAnimFrame(float frame, int32 motion_frame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAnimPlaying() const;
    
};

