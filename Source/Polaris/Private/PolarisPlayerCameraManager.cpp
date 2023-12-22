#include "PolarisPlayerCameraManager.h"

APolarisPlayerCameraManager::APolarisPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
    this->bDefaultConstrainAspectRatio = true;
    this->IsAdjustHorizonalFOV = true;
}

float APolarisPlayerCameraManager::GetFOVAngleNative() const {
    return 0.0f;
}


