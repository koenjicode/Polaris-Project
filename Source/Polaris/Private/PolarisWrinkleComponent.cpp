#include "PolarisWrinkleComponent.h"

UPolarisWrinkleComponent::UPolarisWrinkleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WrinkleTexture = NULL;
    this->WrinkleMaskTexture = NULL;
    this->WrinkleMaterial = NULL;
}

void UPolarisWrinkleComponent::Initialize(USkeletalMeshComponent* MeshComponent, int32 materialIndex) {
}


