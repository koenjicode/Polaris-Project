#include "LobbyAreaComponent.h"

ULobbyAreaComponent::ULobbyAreaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

ELobbyArea ULobbyAreaComponent::GetArea() const {
    return ELobbyArea::None;
}


