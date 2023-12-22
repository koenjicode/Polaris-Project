#include "LobbyTargetPoint.h"

ALobbyTargetPoint::ALobbyTargetPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_type = ELobbyTargetPointType::None;
    this->_index = 0;
}

void ALobbyTargetPoint::LobbyGetTargetPoints(ELobbyTargetPointType Type, TArray<ALobbyTargetPoint*>& targetPoints) {
}

ALobbyTargetPoint* ALobbyTargetPoint::LobbyGetTargetPoint(ELobbyTargetPointType Type) {
    return NULL;
}


