#include "PolarisStageLevelSequenceActor2.h"

APolarisStageLevelSequenceActor2::APolarisStageLevelSequenceActor2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LevelSequenceHardRef = NULL;
    this->SequencePlayer = NULL;
    this->SequenceActor = NULL;
}


