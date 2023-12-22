#pragma once
#include "CoreMinimal.h"
#include "PolarisStagePhysicsActorCache.generated.h"

class AActor;
class APolarisStagePhysicsActor;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FPolarisStagePhysicsActorCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OwnerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APolarisStagePhysicsActor* Actor;
    
    POLARIS_API FPolarisStagePhysicsActorCache();
};

