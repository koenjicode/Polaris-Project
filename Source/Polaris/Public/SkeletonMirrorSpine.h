#pragma once
#include "CoreMinimal.h"
#include "ESkeletonMirrorAxisType.h"
#include "ESkeletonMirrorTargetType.h"
#include "SkeletonMirrorSpine.generated.h"

USTRUCT(BlueprintType)
struct FSkeletonMirrorSpine {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkeletonMirrorTargetType targetType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkeletonMirrorAxisType axisType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BoneName;
    
    POLARIS_API FSkeletonMirrorSpine();
};

