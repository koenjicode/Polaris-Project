#pragma once
#include "CoreMinimal.h"
#include "PolarisStageGimmickAnimationSet.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FPolarisStageGimmickAnimationSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimationAsset*> AnimationAsset;
    
    POLARIS_API FPolarisStageGimmickAnimationSet();
};

