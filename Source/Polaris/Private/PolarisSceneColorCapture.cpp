#include "PolarisSceneColorCapture.h"
#include "PolarisSceneColorCaptureComponent.h"

APolarisSceneColorCapture::APolarisSceneColorCapture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CaptureComponent = CreateDefaultSubobject<UPolarisSceneColorCaptureComponent>(TEXT("NewSceneColorCaptureComponent"));
}


