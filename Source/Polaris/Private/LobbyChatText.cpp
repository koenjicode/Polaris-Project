#include "LobbyChatText.h"

ULobbyChatText::ULobbyChatText() {
    this->Balloon = NULL;
    this->Messages = NULL;
    this->Sender = NULL;
    this->Address = NULL;
}

void ULobbyChatText::Tick(float InDeltaSeconds) {
}

void ULobbyChatText::SetDirectChatInfo(int32 InWhisperPlatform012, const FString& InWhisperPlayerName, const FString& InWhisperCosmosId, const FString& InWhisperPlatformId, const FString& InWhisperPolarisId, const FString& InWhisperOnlineId) {
}

void ULobbyChatText::ResetDirectChatInfo() {
}

void ULobbyChatText::PlayerNameModeChange(EPlayerNameDisplayMode InPlayerNameMode) {
}

bool ULobbyChatText::IsLobbyJoined() const {
    return false;
}

ULobbyChatTextSender* ULobbyChatText::GetSender() const {
    return NULL;
}

ULobbyChatTextMessages* ULobbyChatText::GetMessages() const {
    return NULL;
}

bool ULobbyChatText::GetDirectChatInfo(int32& OutWhisperPlatform012, FString& OutWhisperPlayerName, FString& OutWhisperCosmosId, FString& OutWhisperPlatformId, FString& OutWhisperPolarisId, FString& OutWhisperOnlineId) {
    return false;
}

ULobbyChatTextBalloon* ULobbyChatText::GetBalloon() const {
    return NULL;
}

ULobbyChatTextAddressBook* ULobbyChatText::GetAddress() const {
    return NULL;
}


