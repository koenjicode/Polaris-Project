#pragma once
#include "CoreMinimal.h"
#include "PolarisStageFloorActor.h"
#include "PolarisStageFloorBreakActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisStageFloorBreakActor : public APolarisStageFloorActor {
    GENERATED_BODY()
public:
    APolarisStageFloorBreakActor(const FObjectInitializer& ObjectInitializer);

};

