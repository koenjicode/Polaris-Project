#include "LobbyMatchingAnywhere.h"

ULobbyMatchingAnywhere::ULobbyMatchingAnywhere() {
    this->BattleMode = ELobbyMatchingAnywhere_BattleMode::Rank;
    this->RankRange = ELobbyMatchingAnywhere_RankRange::ThreePlus;
    this->NetworkQuality = ELobbyMatchingAnywhere_NetworkQuality::More4;
    this->BattlePosition = ELobbyMatchingAnywhere_BattlePosition::Left;
    this->CanChangeCrossPlayFlag = false;
}

void ULobbyMatchingAnywhere::Tick(float InDeltaSeconds) {
}

void ULobbyMatchingAnywhere::SetRankRange(ELobbyMatchingAnywhere_RankRange InNewRankLimit) {
}

void ULobbyMatchingAnywhere::SetNetworkQuality(ELobbyMatchingAnywhere_NetworkQuality InNewNetworkQuality) {
}

void ULobbyMatchingAnywhere::SetFighterId(int32 in_fighter_id) {
}

void ULobbyMatchingAnywhere::SetDefaultValues() {
}

void ULobbyMatchingAnywhere::SetCustomizeInfoMenu(int32 in_costume_type, int32 in_customize_slot) {
}

void ULobbyMatchingAnywhere::SetCustomizeInfo(int32 in_costume_type, int32 in_customize_slot) {
}

void ULobbyMatchingAnywhere::SetCrossPlay(bool InCrossPlay) {
}

void ULobbyMatchingAnywhere::SetBattlePosition(ELobbyMatchingAnywhere_BattlePosition InNewPosition) {
}

void ULobbyMatchingAnywhere::SetBattleMode(ELobbyMatchingAnywhere_BattleMode InNewBattleMode) {
}

bool ULobbyMatchingAnywhere::IsValidCustomizeSlot(int32 in_costume_type, int32 in_customize_slot) const {
    return false;
}

bool ULobbyMatchingAnywhere::GetFighterId(int32& out_fighter_id) const {
    return false;
}

bool ULobbyMatchingAnywhere::GetCustomizeInfoMenu(int32& out_costume_type, int32& out_customize_slot) const {
    return false;
}

bool ULobbyMatchingAnywhere::GetCustomizeInfo(int32& out_costume_type, int32& out_customize_slot) const {
    return false;
}

bool ULobbyMatchingAnywhere::CanCrossPlay() const {
    return false;
}

bool ULobbyMatchingAnywhere::CanChangeCrossPlay() const {
    return false;
}


