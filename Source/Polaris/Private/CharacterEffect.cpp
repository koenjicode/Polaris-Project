#include "CharacterEffect.h"

FCharacterEffect::FCharacterEffect() {
    this->Particle = NULL;
    this->Blueprint = NULL;
    this->LifeSpan = 0.00f;
    this->isAttachedCharacter = false;
    this->isDispUI = false;
    this->isGetAitePosition = false;
    this->SortPriority = 0;
    this->isAutoDestroy = false;
    this->isPlaySound = false;
}

