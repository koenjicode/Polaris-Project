#include "SessionBlueprintFunctionLibrary.h"

USessionBlueprintFunctionLibrary::USessionBlueprintFunctionLibrary() {
}

void USessionBlueprintFunctionLibrary::RefuseInvite(const FString& session_id_string, const FString& cosmos_id_string) {
}

bool USessionBlueprintFunctionLibrary::IsSelf(const FString& cosmos_id) {
    return false;
}

float USessionBlueprintFunctionLibrary::GetRemainWaitingConfirmTime() {
    return 0.0f;
}

void USessionBlueprintFunctionLibrary::GetInviteSessionList(USessionBlueprintFunctionLibrary::FLobbyInviteSessionListDelegate OnInviteSessionList) {
}

FString USessionBlueprintFunctionLibrary::GetDisplayName(const FSessionPlayerName& session_player_name) {
    return TEXT("");
}

bool USessionBlueprintFunctionLibrary::ExistsInvitedSessions() {
    return false;
}

FDateTime USessionBlueprintFunctionLibrary::ConvertToLocalDateTime(const FDateTime& UtcDateTime) {
    return FDateTime{};
}


