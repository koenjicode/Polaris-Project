#include "LobbyChatTextMessages.h"

ULobbyChatTextMessages::ULobbyChatTextMessages() {
}

void ULobbyChatTextMessages::SetReportUser(FDateTime InDateTime, const FString& InOnlineId) {
}

bool ULobbyChatTextMessages::HasMessageType(ELobbyChatBehavior InBehavior, ELobbyChatAddressType InType, const int32& InGuid) {
    return false;
}

bool ULobbyChatTextMessages::HasMessageTextId(ELobbyChatBehavior InBehavior, ELobbyChatAddressType InType, const FString& InTextId) const {
    return false;
}

bool ULobbyChatTextMessages::HasMessage(ELobbyChatBehavior InBehavior, ELobbyChatAddressType InType, const int32& InGuid) const {
    return false;
}

bool ULobbyChatTextMessages::GetReportText(int32& OutUnixTime, FString& OutOnlineId, FString& OutText) const {
    return false;
}

bool ULobbyChatTextMessages::GetMessageNew(ELobbyChatBehavior InBehavior, FLobbyChatData& OutInfo, const int32& InGuid) const {
    return false;
}

TArray<FLobbyChatData> ULobbyChatTextMessages::GetMessageLatest(ELobbyChatBehavior InBehavior, ELobbyChatAddressType InType, int32 InNum) {
    return TArray<FLobbyChatData>();
}

TArray<int32> ULobbyChatTextMessages::GetMessageIds(ELobbyChatBehavior InBehavior, ELobbyChatAddressType InType) {
    return TArray<int32>();
}

void ULobbyChatTextMessages::AddMessageReceive(ELobbyChatAddressType InType, const FString& InMessage, const FString& InCosmosId, const FString& InPolarisId, const FString& InPlatformId, const FString& InOnlineId, const FString& InUserName) {
}


