#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SkeletonMirrorPairs.h"
#include "SkeletonMirrorSpine.h"
#include "SkeletonMirrorAsset.generated.h"

UCLASS(Blueprintable)
class POLARIS_API USkeletonMirrorAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkeletonMirrorSpine> spines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkeletonMirrorPairs> pairs;
    
    USkeletonMirrorAsset();

};

