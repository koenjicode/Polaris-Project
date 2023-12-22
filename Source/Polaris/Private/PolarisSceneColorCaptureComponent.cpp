#include "PolarisSceneColorCaptureComponent.h"

UPolarisSceneColorCaptureComponent::UPolarisSceneColorCaptureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TextureTarget = NULL;
    this->CaptureSource = SCS_SceneColorHDR;
}

void UPolarisSceneColorCaptureComponent::EndCapture() {
}

void UPolarisSceneColorCaptureComponent::BeginCapture() {
}


