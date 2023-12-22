#pragma once
#include "CoreMinimal.h"
#include "SkeletalMeshRigSet.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct POLARIS_API FSkeletalMeshRigSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SourceMuscleRigMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SourceProportionRigMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PhoenixSkeletonPropotionType;
    
    FSkeletalMeshRigSet();
};

