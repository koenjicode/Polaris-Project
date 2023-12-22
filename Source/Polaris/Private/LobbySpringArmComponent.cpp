#include "LobbySpringArmComponent.h"

ULobbySpringArmComponent::ULobbySpringArmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ULobbySpringArmComponent::SetProperty(double closeSpeed, double awaySpeed, double heightOffset_Near, double heightOffset_Std, double distance_Std) {
}

void ULobbySpringArmComponent::ResetLocationModify() {
}

FVector ULobbySpringArmComponent::GetModifiedWorldLocation() const {
    return FVector{};
}


