#include "SphereRangeSpecificationSoundSource.h"

FSphereRangeSpecificationSoundSource::FSphereRangeSpecificationSoundSource() {
    this->KeyOnCountBase = 0;
    this->KeyOnCountRandomAppend = 0;
    this->KeyOnCountRandomAppendValue = 0;
    this->KeyOnCountFrame = 0;
    this->KeyOnSound = NULL;
    this->Radius = 0.00f;
    this->AlphaDegree1 = 0.00f;
    this->AlphaDegree2 = 0.00f;
    this->BetaDegree1 = 0.00f;
    this->BetaDegree2 = 0.00f;
    this->IsEnable = false;
}

