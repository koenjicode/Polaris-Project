#include "CwClothDebugDrawComponent.h"

UCwClothDebugDrawComponent::UCwClothDebugDrawComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VertexDebugDrawMaterial = NULL;
    this->SimulationMeshDebugDrawMaterial = NULL;
}


