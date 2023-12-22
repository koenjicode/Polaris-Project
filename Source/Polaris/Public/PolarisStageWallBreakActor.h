#pragma once
#include "CoreMinimal.h"
#include "PolarisStageWallActor.h"
#include "PolarisStageWallBreakActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisStageWallBreakActor : public APolarisStageWallActor {
    GENERATED_BODY()
public:
    APolarisStageWallBreakActor(const FObjectInitializer& ObjectInitializer);

};

