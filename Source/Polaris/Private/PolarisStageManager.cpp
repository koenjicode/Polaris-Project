#include "PolarisStageManager.h"
#include "Components/SceneComponent.h"

APolarisStageManager::APolarisStageManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}


void APolarisStageManager::OnFloorHit(FEventOnFloorHitParam Param) {
}



