#include "PolarisDebugCharaSeleActor.h"

APolarisDebugCharaSeleActor::APolarisDebugCharaSeleActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FighterId = 0;
    this->OverrideCustomizeSet = NULL;
    this->IsMirror = false;
    this->MyDebugCustomizeActor = NULL;
}


