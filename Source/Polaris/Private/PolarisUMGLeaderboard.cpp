#include "PolarisUMGLeaderboard.h"

UPolarisUMGLeaderboard::UPolarisUMGLeaderboard() {
    this->MinScrollDelta = 0.05f;
    this->CurrentPlayerNameType = EPlayerNameType::PlayerName;
    this->SelectedTabIndex = 0;
    this->CurrentTabIndex = 0;
    this->SelectedCursorIndex = 0;
    this->PlayerEnable = true;
    this->CharacterEnable = true;
    this->PlatformEnable = true;
    this->PeriodEnable = true;
}








void UPolarisUMGLeaderboard::SetSelfRankingData(FRankingData ranking_data) {
}

void UPolarisUMGLeaderboard::SetSelectedCursorByWidget(int32 Index) {
}

void UPolarisUMGLeaderboard::SetRequireOpenProfile(bool require) {
}

void UPolarisUMGLeaderboard::SetRankingDatas(int32 start_rank, TArray<FRankingData> ranking_datas, int32 ranking_num) {
}









bool UPolarisUMGLeaderboard::IsScrolling() {
    return false;
}










void UPolarisUMGLeaderboard::ClearRankingList() {
}

void UPolarisUMGLeaderboard::ChangeTabByWidget(int32 Index) {
}


