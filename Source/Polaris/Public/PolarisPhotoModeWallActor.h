#pragma once
#include "CoreMinimal.h"
#include "PolarisStageWallActor.h"
#include "PolarisPhotoModeWallActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisPhotoModeWallActor : public APolarisStageWallActor {
    GENERATED_BODY()
public:
    APolarisPhotoModeWallActor(const FObjectInitializer& ObjectInitializer);

};

