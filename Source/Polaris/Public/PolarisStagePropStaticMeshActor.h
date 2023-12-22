#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "PolarisStagePropStaticMeshActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisStagePropStaticMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    APolarisStagePropStaticMeshActor(const FObjectInitializer& ObjectInitializer);

};

