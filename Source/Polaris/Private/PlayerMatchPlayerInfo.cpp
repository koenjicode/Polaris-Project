#include "PlayerMatchPlayerInfo.h"

FPlayerMatchPlayerInfo::FPlayerMatchPlayerInfo() {
    this->character_s = NULL;
    this->character_l = NULL;
    this->rank_s = NULL;
    this->rank_l = NULL;
    this->shogo_id = 0;
    this->shogo_bg = NULL;
    this->wifi_flag = false;
    this->antena_state = 0;
    this->player_state = EPlayerMatchPLayerStatus::NOT_ENTRY;
    this->win_count = 0;
    this->group_id = 0;
}

