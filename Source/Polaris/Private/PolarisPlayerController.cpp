#include "PolarisPlayerController.h"
#include "PolarisPlayerCameraManager.h"

APolarisPlayerController::APolarisPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = APolarisPlayerCameraManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
}


