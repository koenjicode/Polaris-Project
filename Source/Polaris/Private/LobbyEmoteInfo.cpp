#include "LobbyEmoteInfo.h"

FLobbyEmoteInfo::FLobbyEmoteInfo() {
    this->EnableCancel = false;
    this->Category = ELobbyEmoteCategory::None;
    this->Always = false;
    this->unlockId = 0;
}

