#include "PolarisDramaManager.h"

APolarisDramaManager::APolarisDramaManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DramaActorClass = NULL;
    this->PolarisDramaLiveLinkCameraClass = NULL;
    this->HeaderCameraFOV = 0.00f;
}

void APolarisDramaManager::ResetDramaParameterPostProc_Implementation() {
}

void APolarisDramaManager::PlayPostProc_Implementation(int32 DramaType) {
}


