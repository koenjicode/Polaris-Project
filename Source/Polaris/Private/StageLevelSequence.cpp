#include "StageLevelSequence.h"

FStageLevelSequence::FStageLevelSequence() {
    this->LightType = EStageLightType::Default;
    this->IsOnce = false;
    this->IsOnceStatus = false;
    this->IsStopAtInitBattle = false;
}

