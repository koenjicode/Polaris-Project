#include "PolarisStageFloorActor.h"

APolarisStageFloorActor::APolarisStageFloorActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsFloorBreakable = false;
    this->IsStageDestruction = false;
    this->IsDummyBreak = false;
    this->IsFloorBlast = false;
}


