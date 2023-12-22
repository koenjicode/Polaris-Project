#include "ItemAddAuraEffect.h"

FItemAddAuraEffect::FItemAddAuraEffect() {
    this->AddAuraEffectAsset = NULL;
    this->EffectParent = EItemEffectParent::Item_Self;
    this->AuraSocketPosition = EEffectPositionId::core;
    this->SortPriority = 0;
}

