#include "PolarisColorBlendComponent.h"

UPolarisColorBlendComponent::UPolarisColorBlendComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsParentComponent = true;
    this->delaySecond = 0.00f;
    this->endSecond = 0.00f;
}

void UPolarisColorBlendComponent::PlayEX(UPrimitiveComponent* Target, float NewDelaySecond, float NewEndSecond, FVector4 NewStartColor, FVector4 NewEndColor) {
}

void UPolarisColorBlendComponent::Play() {
}

bool UPolarisColorBlendComponent::IsFinish() const {
    return false;
}


