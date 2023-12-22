#include "LobbyAvatarData.h"

ULobbyAvatarData::ULobbyAvatarData() {
    this->slotNo = 0;
    this->skinColorID = 0;
    this->eyeColorID = 0;
    this->eyeblowsColorID = 0;
    this->motionID = 0;
}

void ULobbyAvatarData::UpdatePartData(FLobbyAvatarPartData Data) {
}

void ULobbyAvatarData::SetStructData(const FLobbyAvatarData_Struct& Data) {
}

void ULobbyAvatarData::RemovePartData(ELobbyAvatarItemType Type) {
}

bool ULobbyAvatarData::HasPartData(ELobbyAvatarItemType Type) const {
    return false;
}

void ULobbyAvatarData::GetStructData(FLobbyAvatarData_Struct& Data) const {
}

FLobbyAvatarPartData ULobbyAvatarData::GetPartData(ELobbyAvatarItemType Type) const {
    return FLobbyAvatarPartData{};
}

void ULobbyAvatarData::AddPartData(FLobbyAvatarPartData Data) {
}


