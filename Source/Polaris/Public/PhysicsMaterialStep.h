#pragma once
#include "CoreMinimal.h"
#include "EEffectPositionId.h"
#include "PhysicsMaterialStepInfo.h"
#include "PhysicsMaterialStepParticleInfo.h"
#include "PhysicsMaterialStep.generated.h"

USTRUCT(BlueprintType)
struct FPhysicsMaterialStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEffectPositionId, FPhysicsMaterialStepInfo> PhysicsMaterialStepInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhysicsMaterialStepParticleInfo> ParticleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialType;
    
    POLARIS_API FPhysicsMaterialStep();
};

