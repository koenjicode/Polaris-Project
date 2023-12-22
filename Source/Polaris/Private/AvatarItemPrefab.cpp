#include "AvatarItemPrefab.h"

UAvatarItemPrefab::UAvatarItemPrefab() {
    this->SkeletalMesh = NULL;
}

bool UAvatarItemPrefab::CanOverride() const {
    return false;
}


