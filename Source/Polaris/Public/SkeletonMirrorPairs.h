#pragma once
#include "CoreMinimal.h"
#include "SkeletonMirrorPair.h"
#include "SkeletonMirrorPairs.generated.h"

USTRUCT(BlueprintType)
struct FSkeletonMirrorPairs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkeletonMirrorPair> pair;
    
    POLARIS_API FSkeletonMirrorPairs();
};

