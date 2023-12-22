#include "PolarisAmbientSoundShapeActor.h"

APolarisAmbientSoundShapeActor::APolarisAmbientSoundShapeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SourceAmbientSoundEvent = NULL;
    this->AmbientActor = NULL;
    this->IsEnableObjectOcclision = false;
}

FVector APolarisAmbientSoundShapeActor::GetCurrentListenerPosition() const {
    return FVector{};
}


