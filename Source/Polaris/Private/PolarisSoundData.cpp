#include "PolarisSoundData.h"

FPolarisSoundData::FPolarisSoundData() {
    this->SoundID = 0;
    this->AudioEvent = NULL;
    this->NoMultiPlayFrame = 0;
    this->TriggerPoint = ESoundTriggerPoint::E_NoAssign;
}

