#include "MNTRecoverComponent.h"

UMNTRecoverComponent::UMNTRecoverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Collection = NULL;
    this->HeadRecoverSpeed = 0.00f;
    this->ArmRecoverSpeed = 0.00f;
    this->MaxRadius = 0.00f;
    this->SafeRadius = 0.00f;
}

void UMNTRecoverComponent::RecoverRightArm() {
}

void UMNTRecoverComponent::RecoverLeftArm() {
}

void UMNTRecoverComponent::RecoverHead() {
}

void UMNTRecoverComponent::RecoveredRightArm() {
}

void UMNTRecoverComponent::RecoveredLeftArm() {
}

void UMNTRecoverComponent::RecoveredHead() {
}

void UMNTRecoverComponent::InitializeParameters() {
}

TArray<UMaterialInstanceDynamic*> UMNTRecoverComponent::GetReplaceFaceMaterials_Implementation(UMeshComponent* pMeshComponent) {
    return TArray<UMaterialInstanceDynamic*>();
}

TArray<UMaterialInstanceDynamic*> UMNTRecoverComponent::GetReplaceArmMaterials_Implementation(UMeshComponent* pMeshComponent, bool IsLeft) {
    return TArray<UMaterialInstanceDynamic*>();
}


