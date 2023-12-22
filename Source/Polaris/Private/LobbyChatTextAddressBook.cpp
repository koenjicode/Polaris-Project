#include "LobbyChatTextAddressBook.h"

ULobbyChatTextAddressBook::ULobbyChatTextAddressBook() {
}

void ULobbyChatTextAddressBook::SetAddressSelected(ELobbyChatAddressType InAddress, FLobbyChatAddressInfoUser InUser) {
}

void ULobbyChatTextAddressBook::Regist(ELobbyChatBehavior in_behavior, const FString& in_player_name, const FString& in_cosmos_id, const FString& in_platform_id, const FString& in_polaris_id, const FString& in_online_id, const int32& in_platform_tag, const FString& in_update_datetime, bool in_session) {
}

bool ULobbyChatTextAddressBook::GetAddressSelected(ELobbyChatAddressType& OutAddress, FLobbyChatAddressInfoUser& OutUser) const {
    return false;
}

void ULobbyChatTextAddressBook::GetAddressLatestSession(int32 in_num, TArray<FLobbyChatAddressInfoUser>& out_address) const {
}

void ULobbyChatTextAddressBook::GetAddressLatest(ELobbyChatBehavior InBehavior, int32 in_num, TArray<FLobbyChatAddressInfoUser>& out_address) const {
}

bool ULobbyChatTextAddressBook::GetAddress(const FString& in_cosmos_id, FLobbyChatAddressInfoUser& out_address) const {
    return false;
}


