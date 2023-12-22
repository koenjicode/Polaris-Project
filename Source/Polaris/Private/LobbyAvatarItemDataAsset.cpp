#include "LobbyAvatarItemDataAsset.h"

ULobbyAvatarItemDataAsset::ULobbyAvatarItemDataAsset() {
    this->item_type = ELobbyAvatarItemType::Face;
}

FAvatarItemData ULobbyAvatarItemDataAsset::GetItemData(int32 item_id) const {
    return FAvatarItemData{};
}


