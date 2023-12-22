#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisCharacterCameraActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisCharacterCameraActor : public AActor {
    GENERATED_BODY()
public:
    APolarisCharacterCameraActor(const FObjectInitializer& ObjectInitializer);

};

