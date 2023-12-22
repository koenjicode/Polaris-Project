#include "LobbyChatAddressList.h"

ULobbyChatAddressList::ULobbyChatAddressList() : UUserWidget(FObjectInitializer::Get()) {
}

TArray<FLobbyChatAddressUserInfoType> ULobbyChatAddressList::MoveTopAddressInfo(const TArray<FLobbyChatAddressUserInfoType>& InAddressInfo, const FString& InCosmosId) const {
    return TArray<FLobbyChatAddressUserInfoType>();
}

TArray<FLobbyChatAddressUserInfoType> ULobbyChatAddressList::CoalesceAddressInfo(const TArray<FLobbyChatAddressUserInfoType>& InAddressLatestInfo, const TArray<FLobbyChatAddressUserInfoType>& InTogetherInfo) const {
    return TArray<FLobbyChatAddressUserInfoType>();
}


