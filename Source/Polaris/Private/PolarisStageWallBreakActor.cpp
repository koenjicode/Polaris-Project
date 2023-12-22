#include "PolarisStageWallBreakActor.h"

APolarisStageWallBreakActor::APolarisStageWallBreakActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsNextStageSequence = true;
    this->IsDurable = true;
}


