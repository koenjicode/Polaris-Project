#include "CommonEffect.h"

FCommonEffect::FCommonEffect() {
    this->Particle = NULL;
    this->isAttachedCharacter = false;
    this->isDispUI = false;
    this->SortPriority = 0;
    this->MaxInstanceByPlayer = 0;
    this->isReactiveInstance = false;
}

