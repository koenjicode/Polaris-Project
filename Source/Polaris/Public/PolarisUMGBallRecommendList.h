#pragma once
#include "CoreMinimal.h"
#include "BallRecommendInfo.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGBallRecommendList.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGBallRecommendList : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGBallRecommendList();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateRecommendList(const TArray<FBallRecommendInfo>& InfoArray);
    
};

