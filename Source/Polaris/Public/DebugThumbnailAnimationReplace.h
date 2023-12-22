#pragma once
#include "CoreMinimal.h"
#include "DebugThumbnailAnimationReplace.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct FDebugThumbnailAnimationReplace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationTime;
    
    POLARIS_API FDebugThumbnailAnimationReplace();
};

