#include "PlayerProfileData.h"

FPlayerProfileData::FPlayerProfileData() {
    this->PlayerType = 0;
    this->MaxRankCharaId = 0;
    this->MaxRank = 0;
    this->CharacterViewType = ECharacterViewType::None;
    this->FighterId = 0;
    this->FighterCostumeId = 0;
    this->FighterCustomizeSlot = 0;
    this->AvatarCostumeId = 0;
    this->UseOnlineCustomizeData = false;
    this->BannedCustomizeData = false;
    this->AvatarData = NULL;
    this->IsFriend = false;
    this->IsFollow = false;
    this->IsRival = false;
    this->IsBlock = false;
    this->platformTag = 0;
}

