#include "PolarisAmbientSoundActor.h"

APolarisAmbientSoundActor::APolarisAmbientSoundActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsEnableObjectOcclision = false;
    this->IsObjectOcclisionBeforeFrame = false;
    this->IsEmotion = false;
}

bool APolarisAmbientSoundActor::IsCurrentlyPlayingForBP() {
    return false;
}


