#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "RewardItemDesc.h"
#include "PolarisUMGRewardsDialog.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGRewardsDialog : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGRewardsDialog();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Setup(const FString& title_text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Select(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeSelectCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void InvokeDecideCallback(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasIOAnimationFinished(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Decide(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddRewardItem(const FRewardItemDesc& Desc);
    
};

