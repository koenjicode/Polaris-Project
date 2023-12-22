#include "LobbyAreaVolume.h"

ALobbyAreaVolume::ALobbyAreaVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Area = ELobbyArea::None;
}

float ALobbyAreaVolume::GetAreaDistance_Implementation(const FVector& InLocation) const {
    return 0.0f;
}

ELobbyArea ALobbyAreaVolume::GetArea() const {
    return ELobbyArea::None;
}


