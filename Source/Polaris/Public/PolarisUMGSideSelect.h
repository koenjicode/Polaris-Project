#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGSideSelect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGSideSelect : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGSideSelect();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectRightSide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectLeftSide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnableButtonInput(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsAnimationPlayingFromName(const FName& AnimationName);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasInAnimationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameIn(bool Left);
    
};

