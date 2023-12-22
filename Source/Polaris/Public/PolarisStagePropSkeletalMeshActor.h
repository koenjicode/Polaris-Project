#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "PolarisStagePropSkeletalMeshActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisStagePropSkeletalMeshActor : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
    APolarisStagePropSkeletalMeshActor(const FObjectInitializer& ObjectInitializer);

};

