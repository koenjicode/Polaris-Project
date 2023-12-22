#include "PolarisDrawDummyComponent.h"

UPolarisDrawDummyComponent::UPolarisDrawDummyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bExcludeFromLightAttachmentGroup = true;
    this->bUseEditorCompositing = true;
    this->Exposure = 0.00f;
}

void UPolarisDrawDummyComponent::UpdateExposureCompositionCache(float& currentExposure, bool& bValid) {
}

void UPolarisDrawDummyComponent::RequestUpdateExposureCompositionForNextFrame() {
}


