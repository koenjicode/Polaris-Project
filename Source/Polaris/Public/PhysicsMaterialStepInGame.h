#pragma once
#include "CoreMinimal.h"
#include "EEffectPositionId.h"
#include "PhysicsMaterialStepInfoInGame.h"
#include "PhysicsMaterialStepParticleInfoInGame.h"
#include "PhysicsMaterialStepInGame.generated.h"

USTRUCT(BlueprintType)
struct FPhysicsMaterialStepInGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEffectPositionId, FPhysicsMaterialStepInfoInGame> PhysicsMaterialStepInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhysicsMaterialStepParticleInfoInGame> ParticleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialType;
    
    POLARIS_API FPhysicsMaterialStepInGame();
};

