#include "LobbyGameMode.h"

ALobbyGameMode::ALobbyGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_isLobbyOnly2 = false;
    this->_isUseNetwork = false;
    this->_isBeginPlayFinished = false;
    this->_isDebug = false;
    this->_isDebugOffline = false;
    this->_isInputActive = false;
    this->_isDown = false;
    this->_isLeft = false;
    this->_isRight = false;
    this->_isUp = false;
    this->_isFaceBottom = false;
    this->_isFaceLeft = false;
    this->_isFaceRight = false;
    this->_isFaceTop = false;
    this->_isLeftShoulder = false;
    this->_isLeftTrigger = false;
    this->_isRightShoulder = false;
    this->_isRightTrigger = false;
    this->_balloonChatStamp = 0;
    this->_balloonChatTemplate = 0;
    this->_balloonState = 0;
    this->_isPhotoMode = false;
    this->_isBooting2 = false;
    this->_isDisableInput2 = false;
    this->_enemyManager = NULL;
    this->LobbySoundManagerClass = NULL;
}

void ALobbyGameMode::WatchStart(int64 cosmosId) {
}

bool ALobbyGameMode::WatchIsWaitReady() {
    return false;
}

bool ALobbyGameMode::WatchIsReady() {
    return false;
}

bool ALobbyGameMode::WatchIsAway() {
    return false;
}

FName ALobbyGameMode::WatchGetError() {
    return NAME_None;
}

void ALobbyGameMode::WatchExit() {
}

void ALobbyGameMode::StartServerMonitoring() {
}

void ALobbyGameMode::StartMatchmaking(int32 Delay) {
}

void ALobbyGameMode::ShowPlayData(ALobbyGameMode::FLobbyOnFinishPlayData OnFinishPlayData) {
}

void ALobbyGameMode::SetTransformToEngineCamera_Implementation() {
}

void ALobbyGameMode::SetSimpleProfile(int64 cosmosId, int32 submenuType, ALobbyGameMode::FLobbyOnFinishSimpleProfile OnFinishSimpleProfile) {
}

void ALobbyGameMode::SetLoadedSoundLevel() {
}

void ALobbyGameMode::SetKeyboardActive(bool bActive) {
}


void ALobbyGameMode::SetAutoPlay(bool isAutoplay) {
}

void ALobbyGameMode::SendSeatStatus(bool isSitting, FVector Location, FRotator Rotation) {
}

void ALobbyGameMode::ResumeMatchmaking(int32 Delay) {
}

void ALobbyGameMode::RequestTakeSeat(int32 seatId, ALobbyGameMode::FLobbyOnTakeSeat OnTakeSeat) {
}

void ALobbyGameMode::RequestLeaveSeat() {
}

void ALobbyGameMode::PlatformCommunicationMSGDialog(ALobbyGameMode::FLobbyOnFinishPlatformCommunicationMSGDialog OnPlatformCommunicationMSGDialog) {
}

void ALobbyGameMode::PauseMatchmaking() {
}

void ALobbyGameMode::OnStartPhotoMode_Implementation() {
}

void ALobbyGameMode::OnEndPhotoMode_Implementation() {
}

bool ALobbyGameMode::IsShowProfileSimple() const {
    return false;
}

bool ALobbyGameMode::IsProfileScene() {
    return false;
}

bool ALobbyGameMode::IsOpenMatchDialog() {
    return false;
}

bool ALobbyGameMode::IsInvalidActionCtrl() {
    return false;
}

bool ALobbyGameMode::IsAnywhereMatchingSuspend() const {
    return false;
}

bool ALobbyGameMode::IsAnywhereMatching() const {
    return false;
}






void ALobbyGameMode::GotoWatchByBattleId(const FString& battleId) {
}

void ALobbyGameMode::GotoWatch2() {
}

void ALobbyGameMode::GotoWatch() {
}

void ALobbyGameMode::GotoSwing2(int32 infoTranslation, const FString& StrParam1, int32 NumParam1) {
}

void ALobbyGameMode::GotoSwing(int32 infoTranslation) {
}

void ALobbyGameMode::GotoSpecialMatch(const FString& lobbyMatchId) {
}

void ALobbyGameMode::GotoSpecial() {
}

void ALobbyGameMode::GotoRankMatch() {
}

void ALobbyGameMode::GotoQuickMatch() {
}

void ALobbyGameMode::GotoPractice() {
}

void ALobbyGameMode::GotoPlayerProfile() {
}

void ALobbyGameMode::GotoPlayermatchSearch() {
}

void ALobbyGameMode::GotoPlayerMatchRoom() {
}

void ALobbyGameMode::GotoPlayermatchCreate() {
}

void ALobbyGameMode::GotoPlayerCustomize() {
}

void ALobbyGameMode::GotoOptionMenu() {
}

void ALobbyGameMode::GotoOnlineReplay() {
}

void ALobbyGameMode::GotoOnlineMenu() {
}

void ALobbyGameMode::GotoMainMenu() {
}

void ALobbyGameMode::GotoLobbyMatch(const FString& lobbyMatchId) {
}

void ALobbyGameMode::GotoLeaderboard() {
}

void ALobbyGameMode::GotoGhostBattle() {
}

void ALobbyGameMode::GotoCharacterCustomize() {
}

void ALobbyGameMode::GotoAvatarCustomize() {
}

void ALobbyGameMode::GotoAnotherLobby(const FString& loungeId, const FString& loungeUrl, const FString& loungeName, int32 loungePlatform) {
}

void ALobbyGameMode::GotoAccessibility() {
}

void ALobbyGameMode::GhostDialog(int64 cosmosId, const FString& playerName, bool Save, ALobbyGameMode::FLobbyOnFinishGhostDialog OnFinishGhostDialog) {
}

void ALobbyGameMode::GhostBattleDialog(int64 cosmosId, const FString& playerName, const FString& onlineId, ALobbyGameMode::FLobbyOnFinishGhostDialog OnFinishGhostDialog) {
}

int64 ALobbyGameMode::GetOwnPlayerId() {
    return 0;
}

FLobbyNetwork ALobbyGameMode::GetNetwork() {
    return FLobbyNetwork{};
}

int32 ALobbyGameMode::GetLobbyIndex() {
    return 0;
}

void ALobbyGameMode::GetEnemiesInfo(TArray<FLobbyEnemyInfo>& EnemiesInfo) {
}

bool ALobbyGameMode::GetAutoPlay() {
    return false;
}

void ALobbyGameMode::CloseSimpleProfile() {
}

void ALobbyGameMode::CheckFirstBattle(ALobbyGameMode::FLobbyOnCheckFirstBattle OnCheckFirstBattle) {
}

void ALobbyGameMode::CancelMatchmaking() {
}

void ALobbyGameMode::AnywhereMatchingSuspend() {
}

void ALobbyGameMode::AnywhereMatchingStart() {
}

void ALobbyGameMode::AnywhereMatchingResume() {
}

void ALobbyGameMode::AnywhereMatchingEnd() {
}


