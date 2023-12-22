#include "CharacterEffectData.h"

FCharacterEffectData::FCharacterEffectData() {
    this->ParticleAsset = NULL;
    this->BluePrintAsset = NULL;
    this->BlueprintLifeSpan = 0.00f;
    this->isAttachedCharacter = false;
    this->isDispUI = false;
    this->isGetAitePosition = false;
    this->SortPriority = 0;
    this->isAutoDestroy = false;
    this->isPlaySound = false;
}

