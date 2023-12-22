#include "LobbyNetworkSelect.h"

ULobbyNetworkSelect::ULobbyNetworkSelect() {
    this->_selectedLobbyPlatform = 0;
    this->_bestLoungePlatform = 0;
    this->_currentLoungeNameVersion = 0;
}

void ULobbyNetworkSelect::UploadAvatarChange(bool isFirstUpload, ULobbyNetworkSelect::FLobbyUploadAvatarChange OnUploadAvatarChange) {
}

void ULobbyNetworkSelect::SetTekkenName(const FString& playerName, const FString& Language, ULobbyNetworkSelect::FOnSetTekkenName OnSetTekkenName) {
}

void ULobbyNetworkSelect::SearchFriendLobbies(ULobbyNetworkSelect::FLobbyOnSearched OnSearched) {
}

void ULobbyNetworkSelect::SearchBestLobby(ULobbyNetworkSelect::FLobbyOnBestLobby OnBestLobby) {
}

void ULobbyNetworkSelect::SearchAreaLobbies(const FString& lobbyAreaId, ULobbyNetworkSelect::FLobbyOnSearched OnSearched) {
}

void ULobbyNetworkSelect::LobbyForceRename(ULobbyNetworkSelect::FLobbyForceRename OnForceRename) {
}

void ULobbyNetworkSelect::JoinLounge(const FString& loungeId, const FString& loungeUrl, const FString& loungeName, int32 loungePlatform, ULobbyNetworkSelect::FOnJoinLounge OnJoinLounge) {
}

FString ULobbyNetworkSelect::GetLoungeName(const FString& lobbyPlace, const FString& lobbyName) const {
    return TEXT("");
}

FString ULobbyNetworkSelect::GetDefaultLobbyArea() const {
    return TEXT("");
}

FString ULobbyNetworkSelect::GetCurrentLoungeName() const {
    return TEXT("");
}

FString ULobbyNetworkSelect::GetCurrentLoungeId() const {
    return TEXT("");
}

void ULobbyNetworkSelect::GetAndClearReserveAnotherLoungeId(FString& loungeId, FString& loungeUrl, FString& loungeName, int32& loungePlatform) {
}

void ULobbyNetworkSelect::DecideFriendLounge(const FString& loungeName) {
}


