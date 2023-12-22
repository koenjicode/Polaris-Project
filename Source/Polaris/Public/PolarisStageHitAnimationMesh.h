#pragma once
#include "CoreMinimal.h"
#include "PolarisStageGimmickAnimationSet.h"
#include "PolarisStageHitAnimationMesh.generated.h"

class ASkeletalMeshActor;
class AStaticMeshActor;

USTRUCT(BlueprintType)
struct FPolarisStageHitAnimationMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* DefaultMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASkeletalMeshActor* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisStageGimmickAnimationSet> HitAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitAnimationNum;
    
    POLARIS_API FPolarisStageHitAnimationMesh();
};

