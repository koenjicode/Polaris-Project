#include "PolarisCharacterUniqueComponent.h"

UPolarisCharacterUniqueComponent::UPolarisCharacterUniqueComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerCharacterActor = NULL;
    this->BodyTransformState = EPolarisBodyTransformState::Normal;
    this->WeaponMeshVisibility = -1;
    this->LeftKatanaVisibility = EPolarisKatanaVisibility::VisibleAll;
    this->RightKatanaVisibility = EPolarisKatanaVisibility::VisibleAll;
}


void UPolarisCharacterUniqueComponent::SetWeaponMeshVisible(int32 Type, bool IsOn, bool isForce) {
}



void UPolarisCharacterUniqueComponent::SetVisibleRightKatana(EPolarisKatanaVisibility KatanaVisibility, bool isForce) {
}


void UPolarisCharacterUniqueComponent::SetVisibleLeftKatana(EPolarisKatanaVisibility KatanaVisibility, bool isForce) {
}



void UPolarisCharacterUniqueComponent::SetBodyTransform(EPolarisBodyTransformState State, bool isForce) {
}

void UPolarisCharacterUniqueComponent::OnMeshSettingCompleted_Implementation(bool IsDebug) {
}

void UPolarisCharacterUniqueComponent::OnItemCreateCompleted_Implementation() {
}

void UPolarisCharacterUniqueComponent::OnInitBattleReset_Implementation(FEventOnInitBattleParam Param) {
}

void UPolarisCharacterUniqueComponent::OnInitBattle_Implementation(FEventOnInitBattleParam Param) {
}

void UPolarisCharacterUniqueComponent::OnDestroyBefore_Implementation() {
}

void UPolarisCharacterUniqueComponent::OnBakeCompleted_Implementation(bool IsDebug) {
}



