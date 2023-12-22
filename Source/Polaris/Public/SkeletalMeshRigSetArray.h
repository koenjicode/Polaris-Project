#pragma once
#include "CoreMinimal.h"
#include "DependencySkeletalMeshRigSet.h"
#include "SkeletalMeshRigSetArray.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FSkeletalMeshRigSetArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDependencySkeletalMeshRigSet> RigSetArray;
    
    FSkeletalMeshRigSetArray();
};

