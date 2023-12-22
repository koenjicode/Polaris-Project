#include "StageLevelSequenceAsset.h"

FStageLevelSequenceAsset::FStageLevelSequenceAsset() {
    this->LevelSequence = NULL;
    this->IsLooping = false;
    this->IsCancel = false;
    this->IsPauseAtEnd = false;
    this->PlaySoundEventIntervalFrame = 0;
    this->PlaySoundEventIntervalFrameCounter = 0;
}

