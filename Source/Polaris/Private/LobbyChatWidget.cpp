#include "LobbyChatWidget.h"

ULobbyChatWidget::ULobbyChatWidget() {
}

void ULobbyChatWidget::ToggleVisibility_Implementation() {
}

void ULobbyChatWidget::SetIgnoreInput(bool InIgnore) {
}

bool ULobbyChatWidget::SetActive_Implementation(bool Inactive, bool InEnableSE) {
    return false;
}

void ULobbyChatWidget::OpenProfile(const FString& in_cosmos_id, int32 in_submenu_type) {
}

void ULobbyChatWidget::OnSetEnableInputChat_Implementation(bool InEnable) {
}

void ULobbyChatWidget::OnPlayerNameChanged_Implementation(EPlayerNameDisplayMode in_player_name_mode) {
}

void ULobbyChatWidget::OnInitializeChat_Implementation() {
}

void ULobbyChatWidget::OnCloseProfile_Implementation() {
}

bool ULobbyChatWidget::IsRightMouseButtonPushing() {
    return false;
}

bool ULobbyChatWidget::IsIgnoreInput() const {
    return false;
}

bool ULobbyChatWidget::IsActive() const {
    return false;
}

ELobbyChatType ULobbyChatWidget::GetChatType() const {
    return ELobbyChatType::Lobby;
}

void ULobbyChatWidget::ClearTrigger() {
}

void ULobbyChatWidget::ClearRightMouseButtonPushing() {
}

bool ULobbyChatWidget::CheckTutorialSetEventFlag() {
    return false;
}

bool ULobbyChatWidget::CheckTutorialSessionSetEventFlag() {
    return false;
}

bool ULobbyChatWidget::ActiveLogChat_Implementation() {
    return false;
}

bool ULobbyChatWidget::ActiveInputBoxChat_Implementation() {
    return false;
}

bool ULobbyChatWidget::ActiveDirectChat_Implementation(const int32& InPlatform012, const FString& InPlayerName, const FString& InCosmosId, const FString& InPlatformId, const FString& InPolarisId, const FString& InOnlineId) {
    return false;
}


