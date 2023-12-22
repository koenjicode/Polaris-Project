#include "PolarisStageFloorBreakActor.h"

APolarisStageFloorBreakActor::APolarisStageFloorBreakActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsNextStageSequence = true;
    this->IsDurable = true;
    this->IsFloorBreakable = true;
}


