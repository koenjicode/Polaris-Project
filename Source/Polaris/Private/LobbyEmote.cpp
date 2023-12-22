#include "LobbyEmote.h"

ULobbyEmote::ULobbyEmote() {
    this->_dataTable = NULL;
}

void ULobbyEmote::UploadShortcuts(const TArray<FName>& shortcuts, ULobbyEmote::FOnCallbackSuccess OnDownloadShortcuts) {
}

void ULobbyEmote::SetupShortcutsIfEmpty() {
}

void ULobbyEmote::ResetCustomize() {
}

void ULobbyEmote::ReleaseIconsForLounge() {
}

void ULobbyEmote::ReleaseAnimationsForProfile() {
}

void ULobbyEmote::ReleaseAnimationsForLounge() {
}

void ULobbyEmote::PrepareForCustomize(ULobbyEmote::FOnCallbackCustomize OnPrepareForCustomize) {
}

ULobbyEmote* ULobbyEmote::LobbyEmoteManager() {
    return NULL;
}

void ULobbyEmote::LoadIconsForLounge(ULobbyEmote::FOnCallbackSuccess OnLoadIcons) {
}

void ULobbyEmote::LoadAnimationsForLounge(ULobbyEmote::FOnCallbackSuccess OnLoadAnimationsForLounge) {
}

void ULobbyEmote::LoadAnimationForView(const FName& emoteId, ULobbyEmote::FOnCallbackSuccess OnLoadAnimationForView) {
}

bool ULobbyEmote::IsInitialized() {
    return false;
}

bool ULobbyEmote::IsExist(const FName& emoteId) {
    return false;
}

bool ULobbyEmote::IsChanged() {
    return false;
}

void ULobbyEmote::ImportInventory() {
}

FString ULobbyEmote::GetTextID(const FName& emoteId) {
    return TEXT("");
}

ELobbyEmoteCategory ULobbyEmote::GetCategory(const FName& emoteId) {
    return ELobbyEmoteCategory::None;
}

void ULobbyEmote::GetAllEmoteId(TArray<FName>& Result) {
}

bool ULobbyEmote::FindAnimation(bool& EnableCancel, FName& FacialId, FLobbyEmoteAnimSequence& Animation, const FName& emoteId) {
    return false;
}

void ULobbyEmote::DownloadShortcuts(ULobbyEmote::FOnCallbackSuccess OnDownloadShortcuts) {
}

void ULobbyEmote::ChangeCustomize(int32 slotIndex) {
}


