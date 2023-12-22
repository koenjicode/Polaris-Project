#include "PolarisMeshDeformComponent.h"

UPolarisMeshDeformComponent::UPolarisMeshDeformComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPolarisMeshDeformComponent::UpdateMeshWeightIF(USkeletalMeshComponent* Mesh, TArray<FPolarisMeshDeformParam>& NewDeformParams, FVector HitPosition, float Damage) {
}

void UPolarisMeshDeformComponent::UpdateMeshWeight(FVector HitPosition, float Damage) {
}

void UPolarisMeshDeformComponent::ResetMeshWeightIF(USkeletalMeshComponent* Mesh, TArray<FPolarisMeshDeformParam>& NewDeformParams) {
}

void UPolarisMeshDeformComponent::Init() {
}

float UPolarisMeshDeformComponent::GetInfluence(FVector Center, float Radius, FVector HitPosition) {
    return 0.0f;
}


