#include "PolarisDramaActor.h"

APolarisDramaActor::APolarisDramaActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LevelSequencePlayer = NULL;
    this->LevelSequenceActor = NULL;
    this->LevelSequence2 = NULL;
    this->MotHeadFrame = 0.00f;
    this->ResetClothCheckMoveThreshold = 0.00f;
    this->IsStopAtEnd = false;
}

void APolarisDramaActor::UpdateCameraCut() {
}







