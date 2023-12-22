#pragma once
#include "CoreMinimal.h"
#include "ESkeletonMirrorAxisType.h"
#include "ESkeletonMirrorTargetType.h"
#include "SkeletonMirrorPair.generated.h"

USTRUCT(BlueprintType)
struct FSkeletonMirrorPair {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkeletonMirrorTargetType targetType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkeletonMirrorAxisType axisType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BoneNamePair1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BoneNamePair2;
    
    POLARIS_API FSkeletonMirrorPair();
};

