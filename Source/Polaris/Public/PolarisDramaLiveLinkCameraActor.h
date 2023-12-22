#pragma once
#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "PolarisDramaLiveLinkCameraActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisDramaLiveLinkCameraActor : public ACineCameraActor {
    GENERATED_BODY()
public:
    APolarisDramaLiveLinkCameraActor(const FObjectInitializer& ObjectInitializer);

};

