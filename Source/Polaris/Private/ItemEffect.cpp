#include "ItemEffect.h"

FItemEffect::FItemEffect() {
    this->ItemEffect = NULL;
    this->EffectParent = EItemEffectParent::Item_Self;
    this->PlayerSocketPosition = EEffectPositionId::core;
    this->ItemPositionId = 0;
    this->AccessoryNum = 0;
}

