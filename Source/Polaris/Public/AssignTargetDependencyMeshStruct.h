#pragma once
#include "CoreMinimal.h"
#include "AssignTargetDependencyMeshStruct.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct POLARIS_API FAssignTargetDependencyMeshStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetMeshPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> TargetDependencyMuscleRigMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMainMeshVisiblity;
    
    FAssignTargetDependencyMeshStruct();
};

