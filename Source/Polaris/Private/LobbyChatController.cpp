#include "LobbyChatController.h"

ULobbyChatController::ULobbyChatController() {
}

void ULobbyChatController::ToggleVisibility() {
}

bool ULobbyChatController::IsOpenProfile_Implementation() const {
    return false;
}

bool ULobbyChatController::CloseProfile_Implementation() {
    return false;
}

bool ULobbyChatController::ActiveLogChat_Implementation() {
    return false;
}

bool ULobbyChatController::ActiveInputBoxChat_Implementation() {
    return false;
}

bool ULobbyChatController::ActiveDirectChat_Implementation(const int32& InPlatform012, const FString& InPlayerName, const FString& InCosmosId, const FString& InPlatformId, const FString& InPolarisId, const FString& InOnlineId) {
    return false;
}


