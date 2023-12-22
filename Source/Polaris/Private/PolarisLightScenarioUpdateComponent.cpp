#include "PolarisLightScenarioUpdateComponent.h"

UPolarisLightScenarioUpdateComponent::UPolarisLightScenarioUpdateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->State = 0;
    this->FirstLoopCount = 3;
    this->TotalDelayFrames = 100;
}

bool UPolarisLightScenarioUpdateComponent::IsProcessing() {
    return false;
}

void UPolarisLightScenarioUpdateComponent::ForceUpdateImmediate() {
}

void UPolarisLightScenarioUpdateComponent::ForceStop() {
}

void UPolarisLightScenarioUpdateComponent::BeginLightScenarioUpdate() {
}


