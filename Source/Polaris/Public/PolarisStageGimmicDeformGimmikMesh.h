#pragma once
#include "CoreMinimal.h"
#include "EStageGimmickState.h"
#include "EStageImpulseStrengthType.h"
#include "PolarisStageGimmicDeformGimmikMesh.generated.h"

class APolarisStageGimmickSkeletalMeshActor;
class ARadialForceActor;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FPolarisStageGimmicDeformGimmikMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APolarisStageGimmickSkeletalMeshActor* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestructDelayRemainTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestructDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageGimmickState DestructionProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraSystem*> BreakEffectsOnMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsTakeOnDamageBreakable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageImpulseStrengthType DestructionImpulseStrengthType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARadialForceActor* DestructionRadialForceActor;
    
    POLARIS_API FPolarisStageGimmicDeformGimmikMesh();
};

