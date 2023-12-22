#include "AvatarItemData.h"

FAvatarItemData::FAvatarItemData() {
    this->item_id = 0;
    this->item_type = ELobbyAvatarItemType::FullFace;
    this->part_type = EAvatarPartType::Face;
    this->rarity = EAvatarItemRarityType::None;
    this->contain_new_creation = false;
    this->unlock_id = 0;
    this->price = 0;
    this->getting_type = EAvatarItemGettingType::InitialPosession;
    this->hidden_when_locked = false;
}

