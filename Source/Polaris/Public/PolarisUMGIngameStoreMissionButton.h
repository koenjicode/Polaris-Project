#pragma once
#include "CoreMinimal.h"
#include "EMissionListType.h"
#include "PolarisUMGStoreButton.h"
#include "PolarisUMGIngameStoreMissionButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreMissionButton : public UPolarisUMGStoreButton {
    GENERATED_BODY()
public:
    UPolarisUMGIngameStoreMissionButton();

    UFUNCTION(BlueprintCallable)
    void SetMissionTypeInfo(EMissionListType Type, int32 Number);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayPrevAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayNextAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCompleteAnim();
    
};

