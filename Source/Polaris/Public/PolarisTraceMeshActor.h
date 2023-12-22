#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "PolarisTraceMeshActor.generated.h"

UCLASS(Blueprintable)
class APolarisTraceMeshActor : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
    APolarisTraceMeshActor(const FObjectInitializer& ObjectInitializer);

};

