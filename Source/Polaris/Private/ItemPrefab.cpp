#include "ItemPrefab.h"

UItemPrefab::UItemPrefab() {
    this->BaseItemRef = NULL;
    this->BaseCharacterItemRef = NULL;
    this->CustomizeItemRef = NULL;
}

bool UItemPrefab::IsValidItemPrefab() {
    return false;
}


