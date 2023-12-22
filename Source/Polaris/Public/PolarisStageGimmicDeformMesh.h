#pragma once
#include "CoreMinimal.h"
#include "EStageGimmickState.h"
#include "EStageImpulseStrengthType.h"
#include "PolarisMeshDeformParam.h"
#include "PolarisStageGimmickAnimationSet.h"
#include "PolarisStageGimmickDestructibleMeshData.h"
#include "PolarisStageGimmicDeformMesh.generated.h"

class ASkeletalMeshActor;
class AStaticMeshActor;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FPolarisStageGimmicDeformMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* DefaultMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASkeletalMeshActor* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStaticMeshActor* BrokenMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCancelHitAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisStageGimmickAnimationSet> HitAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitAnimationNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolarisStageGimmickAnimationSet BreakAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisStageGimmickDestructibleMeshData> DestructibleMeshs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisMeshDeformParam> Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestructDelayRemainTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestructDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageGimmickState DestructionProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraSystem*> BreakEffectsOnMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageImpulseStrengthType DestructionImpulseStrengthType;
    
    POLARIS_API FPolarisStageGimmicDeformMesh();
};

