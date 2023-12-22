#include "AvatarItemDataRepository.h"

UAvatarItemDataRepository::UAvatarItemDataRepository() {
}

ULobbyAvatarItemDataAsset* UAvatarItemDataRepository::GetItemDataAsset(ELobbyAvatarItemType item_type) const {
    return NULL;
}

FAvatarItemData UAvatarItemDataRepository::GetItemData_Implementation(ELobbyAvatarItemType item_type, int32 item_id) const {
    return FAvatarItemData{};
}

TArray<ULobbyAvatarItemDataAsset*> UAvatarItemDataRepository::GetAllItemDataAsset() const {
    return TArray<ULobbyAvatarItemDataAsset*>();
}


