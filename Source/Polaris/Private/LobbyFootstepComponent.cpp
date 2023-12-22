#include "LobbyFootstepComponent.h"

ULobbyFootstepComponent::ULobbyFootstepComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_groundSurfaceType = 0;
    this->_speed = 0.00f;
}


