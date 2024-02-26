#include "PolarisTAMFunctionLibrary.h"

UPolarisTAMFunctionLibrary::UPolarisTAMFunctionLibrary() {
}

void UPolarisTAMFunctionLibrary::UpdateNextScenarioID(int32 current_id, bool is_special) {
}

void UPolarisTAMFunctionLibrary::UpdateCampUnlockSpotIndex(EPolarisTAMLobbyType Type) {
}

void UPolarisTAMFunctionLibrary::UpdateCampUnlockSpotAnimIndex() {
}

void UPolarisTAMFunctionLibrary::UpdateCampScenarioID() {
}

void UPolarisTAMFunctionLibrary::UnlockIncentiveId(int32 ID) {
}

void UPolarisTAMFunctionLibrary::UnlockBuddyMenu_Camp() {
}

void UPolarisTAMFunctionLibrary::UnlockAllAdvice() {
}

void UPolarisTAMFunctionLibrary::UnlockAdvice(EPolarisTAMAdviceType Type) {
}

void UPolarisTAMFunctionLibrary::StopLobbySound() {
}

void UPolarisTAMFunctionLibrary::StartLobbyMovie() {
}

void UPolarisTAMFunctionLibrary::ShowTamTournamentUI(int32 target_round) {
}

void UPolarisTAMFunctionLibrary::ShowTamHelpDialogFromSpotID(int32 spot_id) {
}

void UPolarisTAMFunctionLibrary::ShowTamHelpDialogFromAdviceID(int32 advice_id, int32 sub_id) {
}

void UPolarisTAMFunctionLibrary::ShowTamHelpDialog(const FString& help_dialog_id) {
}

void UPolarisTAMFunctionLibrary::ShowTamDialog() {
}

void UPolarisTAMFunctionLibrary::ShowTamButtonHelpByHash(int32 button_help_hash) {
}

void UPolarisTAMFunctionLibrary::ShowTamButtonHelp(const FString& button_help_id) {
}

void UPolarisTAMFunctionLibrary::ShowRewardDialogFromId(int32 id1, int32 id2, int32 id3, int32 id4, int32 id5) {
}

void UPolarisTAMFunctionLibrary::ShowRewardDialog(const FString& reward_id, bool is_reward_dialog_id_direct) {
}

void UPolarisTAMFunctionLibrary::ShowPrevTamButtonHelpByElement() {
}

void UPolarisTAMFunctionLibrary::ShowLoadingIconTAM() {
}

void UPolarisTAMFunctionLibrary::ShowInformationBar(const FString& text_id) {
}

void UPolarisTAMFunctionLibrary::SetTutorialSkip(bool is_skip) {
}

void UPolarisTAMFunctionLibrary::SetTutorialAdviceFlag(bool is_tutorial_advice) {
}

void UPolarisTAMFunctionLibrary::SetTargetGhostLocation(int32 Type, int32 fighter_id) {
}

void UPolarisTAMFunctionLibrary::SetTAMSequencerSkipFlag(bool flag) {
}

void UPolarisTAMFunctionLibrary::SetTamDialogUseStr(bool is_use_str) {
}

void UPolarisTAMFunctionLibrary::SetTamDialogHelpTextType(bool is_user_manual) {
}

void UPolarisTAMFunctionLibrary::SetTamDialogGamePause() {
}

void UPolarisTAMFunctionLibrary::SetTamDialogDisplayOrder(int32 Order) {
}

void UPolarisTAMFunctionLibrary::SetTamDialogDefaultCursor(int32 default_cursor) {
}

void UPolarisTAMFunctionLibrary::SetTamDialogCancelable(bool flag) {
}

void UPolarisTAMFunctionLibrary::SetTamDialogButtonAlignCenter(bool flag) {
}

void UPolarisTAMFunctionLibrary::SetTamDialogButton(int32 Index, const FString& Text) {
}

void UPolarisTAMFunctionLibrary::SetSequencerSubtitle(const FString& movie_hash) {
}

void UPolarisTAMFunctionLibrary::SetSequencerCurrentFrame(int32 frame) {
}

void UPolarisTAMFunctionLibrary::SetSelectCampSpotIndex(int32 spot_index) {
}

void UPolarisTAMFunctionLibrary::SetSelectCampSpotID(int32 spot_id) {
}

void UPolarisTAMFunctionLibrary::SetScenarioID(int32 ID) {
}

void UPolarisTAMFunctionLibrary::SetRestartType(EPolarisTAMRestartType Type) {
}

void UPolarisTAMFunctionLibrary::SetReplayInviteFlag(bool flag) {
}

void UPolarisTAMFunctionLibrary::SetRankIncentiveId(int32 rank, int32 id1, int32 id2, int32 id3, int32 id4, int32 id5) {
}

void UPolarisTAMFunctionLibrary::SetPlayerRotate(FRotator rot) {
}

void UPolarisTAMFunctionLibrary::SetPlayerLocation(FVector Pos) {
}

void UPolarisTAMFunctionLibrary::SetMachineBattleClearType(EPolarisTAMMachineBattleClearType Type) {
}

void UPolarisTAMFunctionLibrary::SetMachineBattleClearFlag(bool flag) {
}

void UPolarisTAMFunctionLibrary::SetLogicalDeviceAnalogToPOV(bool flag) {
}

void UPolarisTAMFunctionLibrary::SetLobbyWaitPlayer(bool is_wait) {
}

void UPolarisTAMFunctionLibrary::SetLobbyPauseMenuFlag(bool flag, bool is_sequencer) {
}

void UPolarisTAMFunctionLibrary::SetLobbyMovieUse(bool flag) {
}

void UPolarisTAMFunctionLibrary::SetLobbyMovieName(const FString& movie_name) {
}

void UPolarisTAMFunctionLibrary::SetLobbyMovieLoadPause(bool flag) {
}

void UPolarisTAMFunctionLibrary::SetIsSequencerMovieSkipAfter(bool flag) {
}

void UPolarisTAMFunctionLibrary::SetIsPlayingEventSequencer(bool is_playing) {
}

void UPolarisTAMFunctionLibrary::SetIsPause(bool flag) {
}

void UPolarisTAMFunctionLibrary::SetIsMainMenuAfterResetCamera(bool flag) {
}

void UPolarisTAMFunctionLibrary::SetIsLockBuddyMemo(EPolarisTAMBuddyMemoType Type) {
}

void UPolarisTAMFunctionLibrary::SetInviteBuddyMemoType(EPolarisTAMBuddyMemoType Type) {
}

void UPolarisTAMFunctionLibrary::SetHideButtonHelpFrame(int32 frame) {
}

void UPolarisTAMFunctionLibrary::SetGhostUnlockId(int32 ID) {
}

void UPolarisTAMFunctionLibrary::SetGhostEventId(int32 ID) {
}

void UPolarisTAMFunctionLibrary::SetForceHideButtonhelp(bool flag) {
}

void UPolarisTAMFunctionLibrary::SetEventSpecialParam(const FString& param_name, int32 Param) {
}

void UPolarisTAMFunctionLibrary::SetEventScriptNextScenarioID(int32 next_id) {
}

void UPolarisTAMFunctionLibrary::SetDownloadGhostCache(int32 npc_id, int32 ghost_index) {
}

void UPolarisTAMFunctionLibrary::SetCpuGhostCache(int32 npc_id, int32 ghost_index) {
}

void UPolarisTAMFunctionLibrary::SetClearLobby(EPolarisTAMLobbyType Type) {
}

void UPolarisTAMFunctionLibrary::SetCampUnlockSpotIndex(int32 Index) {
}

void UPolarisTAMFunctionLibrary::SetCampSpotWin(int32 spot_index, int32 list_index) {
}

void UPolarisTAMFunctionLibrary::SetCampSpotListIndex(int32 list_index) {
}

void UPolarisTAMFunctionLibrary::SetCampSpotIndex(int32 spot_index) {
}

void UPolarisTAMFunctionLibrary::SetCampSpotID(int32 spot_id) {
}

void UPolarisTAMFunctionLibrary::SetCampSpotClick(int32 spot_index) {
}

void UPolarisTAMFunctionLibrary::SetCampSpotClear(int32 spot_index) {
}

void UPolarisTAMFunctionLibrary::SetCampSpotBossAppear(int32 spot_index) {
}

void UPolarisTAMFunctionLibrary::SetCameraRotate(FRotator rot) {
}

void UPolarisTAMFunctionLibrary::SetBuddyMissionIncentiveReceivedFlag(EPolarisTAMCampMapIconType lobby_type, bool flag) {
}

void UPolarisTAMFunctionLibrary::SetBuddyMemoType(EPolarisTAMBuddyMemoType Type) {
}

void UPolarisTAMFunctionLibrary::SetBattleRoundTime(int32 Second) {
}

void UPolarisTAMFunctionLibrary::SetBattleRoundNum(int32 Num) {
}

void UPolarisTAMFunctionLibrary::SetBattleNpcId(int32 npc_id) {
}

void UPolarisTAMFunctionLibrary::SetBattleNaviDispFlag(bool flag) {
}

void UPolarisTAMFunctionLibrary::SetAdvicePlayFlag(EPolarisTAMAdviceType Type, bool flag) {
}

void UPolarisTAMFunctionLibrary::SetAdviceFromBuddyMenuFlag(bool is_advice_from_buddy_menu) {
}

void UPolarisTAMFunctionLibrary::SendKPI_TutorialAllSkip_TAM() {
}

void UPolarisTAMFunctionLibrary::SavePrevTamButtonHelpElement() {
}

void UPolarisTAMFunctionLibrary::SaveButtonHelpHash(const FString& button_help_id) {
}

void UPolarisTAMFunctionLibrary::ResetTamDialog(const FString& Title, const FString& Text, bool is_horizontal) {
}

void UPolarisTAMFunctionLibrary::ResetSequencerSubtitle() {
}

void UPolarisTAMFunctionLibrary::ResetReplayInvitePunishCount() {
}

void UPolarisTAMFunctionLibrary::ResetReplayInviteComboCount() {
}

void UPolarisTAMFunctionLibrary::ResetCampUnlockSpotAnimIndex() {
}

void UPolarisTAMFunctionLibrary::ResetCampEnemyList() {
}

void UPolarisTAMFunctionLibrary::RequestShowBuddyMenuNewIcon(EPolarisTAMBuddyMenuType Index) {
}

void UPolarisTAMFunctionLibrary::RequestSequencerMovieTAM(const FString& movie_name) {
}

void UPolarisTAMFunctionLibrary::RequestSave() {
}

void UPolarisTAMFunctionLibrary::RequestMapSoundStart() {
}

void UPolarisTAMFunctionLibrary::RequestLobbyChangeFadeWhite() {
}

void UPolarisTAMFunctionLibrary::RequestLobbyChangeFadeClear() {
}

void UPolarisTAMFunctionLibrary::RequestFadeClear() {
}

void UPolarisTAMFunctionLibrary::RequestFadeBlackOut(float fade_time) {
}

void UPolarisTAMFunctionLibrary::RequestFadeBlackIn(float fade_time) {
}

void UPolarisTAMFunctionLibrary::RequestFadeBlack() {
}

void UPolarisTAMFunctionLibrary::PreLoadSequencerMovieTAM(const FString& movie_name) {
}

void UPolarisTAMFunctionLibrary::PlaySE_TalkDecide_Force() {
}

void UPolarisTAMFunctionLibrary::PlaySE_TalkDecide() {
}

void UPolarisTAMFunctionLibrary::OnEndNewChallenger_Lobby() {
}

void UPolarisTAMFunctionLibrary::OnBeginNewChallenger_Lobby() {
}

UTexture2D* UPolarisTAMFunctionLibrary::LoadTexture(const FString& Path) {
    return NULL;
}

bool UPolarisTAMFunctionLibrary::IsWinAllNpcCurrentLobby() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsUseSubtitleSpecialUI() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsUnlockBuddyMenu_Camp() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsUnlockAdvice(int32 advice_id) {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsTrigHomeButton() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsTamTournamentUIEnd() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsTAMSequencerSkip() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsTamHelpDialogDecided() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsTamDialogGamePause() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsTamDialogDecided() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsTamDialogCanceled() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsTAMDebugHideAllUI() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsTAMDebugHeadNpcID() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsSuperGhostBattleSequence() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsShowUnlockNewGhostDialog() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsSequencerMovieSkipAfter() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsRewardDialogClosed() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsReplayInvitePunish() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsReplayInviteCombo() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsPlayingEventSequencer() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsPlayerGhostExist() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsModeNotLobby() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsMainMenuAfterResetCamera() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsLobbyPauseMenu() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsLobbyMovieUse() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsLobbyMoviePlaying() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsLobbyMovieLoaded() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsLobbyMovieEnd() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsInviteAdvice(EPolarisTAMAdviceType Type) {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsIncentiveNpc(int32 npc_id) {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsEnableGhostTutorial() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsDownloadGhostValid(int32 Index) {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsDownloadGhostLoaded() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsDownloadGhostExist() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsDownloadGhostDeleted(int32 Index) {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsCpuGhostValid(int32 Index) {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsCpuGhostLoaded() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsClearLobby(EPolarisTAMLobbyType Type) {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsChangeLobbyNone() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsCBT_TAM() {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsCampSpotWin(int32 spot_index, int32 list_index) {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsCampSpotClick(int32 spot_index) {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsCampSpotClear(int32 spot_index) {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsCampSpotBossAppear(int32 spot_index) {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsBuddyMissionUnlock(EPolarisTAMCampMapIconType lobby_type, int32 mission_index) {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsBuddyMissionIncentiveReceived(EPolarisTAMCampMapIconType lobby_type) {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsBuddyMissionClear(EPolarisTAMCampMapIconType lobby_type, int32 mission_index) {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsBuddyMenuIndexNewIcon(int32 Index) {
    return false;
}

bool UPolarisTAMFunctionLibrary::IsAdviceMenuIndexNewIcon(int32 Index) {
    return false;
}

void UPolarisTAMFunctionLibrary::IncCampUnlockSpotIndex() {
}

void UPolarisTAMFunctionLibrary::HideTamButtonHelp() {
}

void UPolarisTAMFunctionLibrary::HideLoadingIconTAM() {
}

void UPolarisTAMFunctionLibrary::HideInformationBar() {
}

void UPolarisTAMFunctionLibrary::HideBuddyMenuIndexNewIcon(int32 Index) {
}

void UPolarisTAMFunctionLibrary::HideAdviceMenuIndexNewIcon(int32 Index) {
}

void UPolarisTAMFunctionLibrary::GhostCacheClear() {
}

int32 UPolarisTAMFunctionLibrary::GetTamTournamentType() {
    return 0;
}

FString UPolarisTAMFunctionLibrary::GetTamTournamentPlayerFighterName() {
    return TEXT("");
}

UTexture2D* UPolarisTAMFunctionLibrary::GetTamTournamentPlayerCharaIconNormalTexture() {
    return NULL;
}

UTexture2D* UPolarisTAMFunctionLibrary::GetTamTournamentPlayerCharaIconHighlightTexture() {
    return NULL;
}

UTexture2D* UPolarisTAMFunctionLibrary::GetTamTournamentNpcIconTexture(int32 npc_id) {
    return NULL;
}

FString UPolarisTAMFunctionLibrary::GetTamTournamentNpcFighterName(int32 npc_id) {
    return TEXT("");
}

UTexture2D* UPolarisTAMFunctionLibrary::GetTamTournamentNpcCharaIconNormalTexture(int32 npc_id) {
    return NULL;
}

UTexture2D* UPolarisTAMFunctionLibrary::GetTamTournamentNpcCharaIconHighlightTexture(int32 npc_id) {
    return NULL;
}

int32 UPolarisTAMFunctionLibrary::GetTAMPlayerRankExpPromotion() {
    return 0;
}

int32 UPolarisTAMFunctionLibrary::GetTAMPlayerRankExp() {
    return 0;
}

int32 UPolarisTAMFunctionLibrary::GetTAMPlayerRank() {
    return 0;
}

int32 UPolarisTAMFunctionLibrary::GetTAMPlayerHighestRank() {
    return 0;
}

int32 UPolarisTAMFunctionLibrary::GetTamDialogResultIndex() {
    return 0;
}

int32 UPolarisTAMFunctionLibrary::GetTamDialogCursor() {
    return 0;
}

int32 UPolarisTAMFunctionLibrary::GetTamButtonHelpHash() {
    return 0;
}

int32 UPolarisTAMFunctionLibrary::GetSubtitleSpecialUI_AnimId() {
    return 0;
}

int32 UPolarisTAMFunctionLibrary::GetStringMaxLineLength(const FString& String, bool is_ignore_tag) {
    return 0;
}

int32 UPolarisTAMFunctionLibrary::GetStringLength(const FString& String, bool is_ignore_tag) {
    return 0;
}

int32 UPolarisTAMFunctionLibrary::GetStringLastLineLength(const FString& String, bool is_ignore_tag) {
    return 0;
}

UTexture2D* UPolarisTAMFunctionLibrary::GetSkitTexture(const FString& skit_id) {
    return NULL;
}

int32 UPolarisTAMFunctionLibrary::GetScenarioID() {
    return 0;
}

EPolarisTAMRestartType UPolarisTAMFunctionLibrary::GetRestartType() {
    return EPolarisTAMRestartType::None;
}

FRotator UPolarisTAMFunctionLibrary::GetPlayerRotate() {
    return FRotator{};
}

FVector UPolarisTAMFunctionLibrary::GetPlayerLocation() {
    return FVector{};
}

bool UPolarisTAMFunctionLibrary::GetPlayerGhost(int32 Index, int32& fighter_id, int32& rank, int64& last_update_time, FDateTime& date_time) {
    return false;
}

TArray<FString> UPolarisTAMFunctionLibrary::GetNpcTalk(int32 npc_id, EPolarisTAMTalkType talk_type) {
    return TArray<FString>();
}

int32 UPolarisTAMFunctionLibrary::GetNpcRank(int32 talk_npc_id) {
    return 0;
}

FText UPolarisTAMFunctionLibrary::GetNpcName(int32 npc_id) {
    return FText::GetEmpty();
}

int32 UPolarisTAMFunctionLibrary::GetNpcBattleWinCountCurrent() {
    return 0;
}

int32 UPolarisTAMFunctionLibrary::GetNpcBattleWinCount(int32 npc_id) {
    return 0;
}

EPolarisTAMNpcBattleState UPolarisTAMFunctionLibrary::GetNpcBattleState() {
    return EPolarisTAMNpcBattleState::None;
}

FString UPolarisTAMFunctionLibrary::GetMyPlayerName() {
    return TEXT("");
}

int32 UPolarisTAMFunctionLibrary::GetMissionCount(EPolarisTAMCampMapIconType lobby_type) {
    return 0;
}

int32 UPolarisTAMFunctionLibrary::GetMachineEventNpcId() {
    return 0;
}

bool UPolarisTAMFunctionLibrary::GetIsTamNPCButtleMode() {
    return false;
}

bool UPolarisTAMFunctionLibrary::GetIsTamMode() {
    return false;
}

bool UPolarisTAMFunctionLibrary::GetIsTamButtleMode() {
    return false;
}

bool UPolarisTAMFunctionLibrary::GetIsShowingBuddyMenu() {
    return false;
}

bool UPolarisTAMFunctionLibrary::GetIsSequenceFlag() {
    return false;
}

bool UPolarisTAMFunctionLibrary::GetIsOpeningDialog() {
    return false;
}

EPolarisTAMBuddyMemoType UPolarisTAMFunctionLibrary::GetInviteBuddyMemoType() {
    return EPolarisTAMBuddyMemoType::BuddyMemoType_None;
}

EPolarisTAMAdviceType UPolarisTAMFunctionLibrary::GetInviteAdviceType() {
    return EPolarisTAMAdviceType::Ad_01_Tutorial_1;
}

int32 UPolarisTAMFunctionLibrary::GetIncentiveNpcId(int32 npc_id) {
    return 0;
}

int32 UPolarisTAMFunctionLibrary::GetHideButtonHelpFrame() {
    return 0;
}

int32 UPolarisTAMFunctionLibrary::GetGhostEventId() {
    return 0;
}

bool UPolarisTAMFunctionLibrary::GetForceHideButtonhelp() {
    return false;
}

int32 UPolarisTAMFunctionLibrary::GetEventSpecialParam(const FString& param_name) {
    return 0;
}

bool UPolarisTAMFunctionLibrary::GetDownloadGhostOnlineId(int32 Index, int64& online_id) {
    return false;
}

int32 UPolarisTAMFunctionLibrary::GetDownloadGhostMaxCount() {
    return 0;
}

bool UPolarisTAMFunctionLibrary::GetDownloadGhostCache(int32 npc_id, int32& ghost_index) {
    return false;
}

bool UPolarisTAMFunctionLibrary::GetDownloadGhostAvatarData(int32 Index, FString& Name, FString& talk, int32& rank, ULobbyAvatarData* avatar_data, bool& is_won, bool& is_treasure) {
    return false;
}

bool UPolarisTAMFunctionLibrary::GetDownloadGhost(int32 Index, FString& Name, int32& fighter_id, int32& rank, int32& tekken_power, FDateTime& date_time, bool& is_won) {
    return false;
}

EPolarisTAMLobbyType UPolarisTAMFunctionLibrary::GetCurrentLobbyType() {
    return EPolarisTAMLobbyType::None;
}

EPolarisTAMCampMapIconType UPolarisTAMFunctionLibrary::GetCurrentCampMapIconType() {
    return EPolarisTAMCampMapIconType::Spot;
}

UNpcAvatarData* UPolarisTAMFunctionLibrary::GetCpuGhostNpcAvatarData(const FString& asset_path) {
    return NULL;
}

int32 UPolarisTAMFunctionLibrary::GetCpuGhostMaxCount() {
    return 0;
}

bool UPolarisTAMFunctionLibrary::GetCpuGhostCache(int32 npc_id, int32& ghost_index) {
    return false;
}

bool UPolarisTAMFunctionLibrary::GetCpuGhostAvatarData(int32 Index, FString& Name, FString& talk, int32& rank, FString& asset_path, int32& motion_id, bool& is_won, bool& is_treasure) {
    return false;
}

bool UPolarisTAMFunctionLibrary::GetCpuGhost(int32 Index, FString& Name, int32& fighter_id, int32& rank, int32& tekken_power, bool& is_won, bool& is_treasure) {
    return false;
}

int32 UPolarisTAMFunctionLibrary::GetCharaMoveButtonHelpHash() {
    return 0;
}

int32 UPolarisTAMFunctionLibrary::GetCampUnlockSpotIndex() {
    return 0;
}

int32 UPolarisTAMFunctionLibrary::GetCampUnlockSpotAnimIndex() {
    return 0;
}

int32 UPolarisTAMFunctionLibrary::GetCampSpotListIndex() {
    return 0;
}

int32 UPolarisTAMFunctionLibrary::GetCampSpotIndex() {
    return 0;
}

UDataTable* UPolarisTAMFunctionLibrary::GetCampEventDataTable() {
    return NULL;
}

FRotator UPolarisTAMFunctionLibrary::GetCameraRotate() {
    return FRotator{};
}

bool UPolarisTAMFunctionLibrary::GetButtonHelpIsVisible() {
    return false;
}

FString UPolarisTAMFunctionLibrary::GetBuddyMissionTextId(EPolarisTAMCampMapIconType lobby_type, int32 mission_index) {
    return TEXT("");
}

FString UPolarisTAMFunctionLibrary::GetBuddyMissionNumText(EPolarisTAMCampMapIconType lobby_type, int32 mission_index) {
    return TEXT("");
}

FString UPolarisTAMFunctionLibrary::GetBuddyMenuText(int32 Index) {
    return TEXT("");
}

EPolarisTAMBuddyMenuType UPolarisTAMFunctionLibrary::GetBuddyMenuIndexType(int32 Index) {
    return EPolarisTAMBuddyMenuType::Advice;
}

int32 UPolarisTAMFunctionLibrary::GetBuddyMenuIndexNum() {
    return 0;
}

FString UPolarisTAMFunctionLibrary::GetBuddyMenuHelpText(int32 Index) {
    return TEXT("");
}

EPolarisTAMBuddyMemoType UPolarisTAMFunctionLibrary::GetBuddyMemoType() {
    return EPolarisTAMBuddyMemoType::BuddyMemoType_None;
}

TArray<EPolarisTAMBuddyMemoType> UPolarisTAMFunctionLibrary::GetBuddyMemoMenuList() {
    return TArray<EPolarisTAMBuddyMemoType>();
}

int32 UPolarisTAMFunctionLibrary::GetBattleNpcId() {
    return 0;
}

int32 UPolarisTAMFunctionLibrary::GetAutoPlayEventNo() {
    return 0;
}

FString UPolarisTAMFunctionLibrary::GetAdviceMenuText(int32 Index) {
    return TEXT("");
}

EPolarisTAMAdviceType UPolarisTAMFunctionLibrary::GetAdviceMenuIndexType(int32 Index) {
    return EPolarisTAMAdviceType::Ad_01_Tutorial_1;
}

int32 UPolarisTAMFunctionLibrary::GetAdviceMenuIndexNum() {
    return 0;
}

FString UPolarisTAMFunctionLibrary::GetAdviceMenuHelpText(int32 Index) {
    return TEXT("");
}

void UPolarisTAMFunctionLibrary::DownloadGhostDelete(int32 Index) {
}

void UPolarisTAMFunctionLibrary::DisableLobbyToBattleWait() {
}

void UPolarisTAMFunctionLibrary::CloseTamDialog() {
}

void UPolarisTAMFunctionLibrary::ClearMachineNpcIdList() {
}

void UPolarisTAMFunctionLibrary::ChangeTutorialBattle() {
}

void UPolarisTAMFunctionLibrary::ChangeSuperGhostBattle() {
}

void UPolarisTAMFunctionLibrary::ChangePlayerCustomize() {
}

void UPolarisTAMFunctionLibrary::ChangeMyReplayAndTips() {
}

void UPolarisTAMFunctionLibrary::ChangeMachineBattle() {
}

bool UPolarisTAMFunctionLibrary::ChangeLobby(EPolarisTAMLobbyType Type) {
    return false;
}

void UPolarisTAMFunctionLibrary::ChangeIsTournamentBracketFlag(bool flag) {
}

void UPolarisTAMFunctionLibrary::ChangeIsShowingBuddyMenu(bool flag) {
}

void UPolarisTAMFunctionLibrary::ChangeIsSequenceFlag(bool flag) {
}

void UPolarisTAMFunctionLibrary::ChangeIsNPCTalkingFlag(bool flag) {
}

void UPolarisTAMFunctionLibrary::ChangeIsExpeditionFlag(bool flag) {
}

void UPolarisTAMFunctionLibrary::ChangeCharacterSelect() {
}

void UPolarisTAMFunctionLibrary::ChangeCharacterCustomize() {
}

void UPolarisTAMFunctionLibrary::ChangeCampaignBattle() {
}

void UPolarisTAMFunctionLibrary::ChangeBattle() {
}

void UPolarisTAMFunctionLibrary::ChangeAvatarCustomize() {
}

void UPolarisTAMFunctionLibrary::ChangeAllClearMainMenu() {
}

void UPolarisTAMFunctionLibrary::ChangeAdviceBattle(EPolarisTAMAdviceType Type) {
}

int32 UPolarisTAMFunctionLibrary::CalcTamTournamentNpcBattleResult(int32 npc_id_1st, int32 npc_id_2nd) {
    return 0;
}

void UPolarisTAMFunctionLibrary::AddMachineNpcIdList(int32 npc_id) {
}

void UPolarisTAMFunctionLibrary::AddLobbyBattleNpcIdList(int32 npc_id) {
}


