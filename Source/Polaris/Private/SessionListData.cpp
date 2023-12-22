#include "SessionListData.h"

FSessionListData::FSessionListData() {
    this->is_default_session_name = false;
    this->max_public_slot = 0;
    this->current_public_slot = 0;
    this->max_private_slot = 0;
    this->current_private_slot = 0;
    this->same_time_battle_num = 0;
    this->round_count = 0;
    this->antena_state = 0;
    this->has_pass_code = false;
    this->host_characterIcon = NULL;
    this->host_rank = NULL;
    this->host_platformId = 0;
}

