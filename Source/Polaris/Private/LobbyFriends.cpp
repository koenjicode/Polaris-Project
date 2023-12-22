#include "LobbyFriends.h"

ULobbyFriends::ULobbyFriends() {
    this->_rivalCosmosId = 0;
}

void ULobbyFriends::UnsetRival(ULobbyFriends::FOnUnsetRival OnUnsetRival) {
}

void ULobbyFriends::TestKamuiFunction() {
}

void ULobbyFriends::SetRival(int64 cosmosId, ULobbyFriends::FOnSetRival OnSetRival) {
}

void ULobbyFriends::RemoveFriend(int64 cosmosId, ULobbyFriends::FOnCallbackSuccess OnRemoveFriend) {
}

void ULobbyFriends::RemoveFollow(int64 cosmosId, ULobbyFriends::FOnRemoveFollow OnRemoveFollow) {
}

ULobbyFriends* ULobbyFriends::OnlineFriend() {
    return NULL;
}

bool ULobbyFriends::IsRival(int64 cosmosId) const {
    return false;
}

bool ULobbyFriends::IsPfFriend(int64 cosmosId) const {
    return false;
}

bool ULobbyFriends::IsPdFriend(int64 cosmosId) const {
    return false;
}

bool ULobbyFriends::IsFriend(int64 cosmosId) const {
    return false;
}

bool ULobbyFriends::IsFollow(int64 cosmosId) const {
    return false;
}

int32 ULobbyFriends::GetFriendNum(const FString& loungeId) const {
    return 0;
}

void ULobbyFriends::GetFriendList(TArray<FName>& friends) const {
}

int32 ULobbyFriends::GetFollowNum(const FString& loungeId) const {
    return 0;
}

void ULobbyFriends::FriendRequest(int64 cosmosId, ULobbyFriends::FOnCallbackSuccess_Status OnRequestFriend) {
}

void ULobbyFriends::DownloadRival(ULobbyFriends::FOnDownloadRival OnDownloadRival, bool isForceUpdate) {
}

void ULobbyFriends::DownloadPfFriendList(ULobbyFriends::FOnCallbackSuccess OnDownloadPfFriendList) {
}

void ULobbyFriends::DownloadFriendRequest(ULobbyFriends::FOnCallbackSuccess OnDownloadFriendRequest, bool isForceUpdate) {
}

void ULobbyFriends::DownloadFriendPending(ULobbyFriends::FOnCallbackSuccess OnDownloadFriendPending) {
}

void ULobbyFriends::DownloadFriendList(ULobbyFriends::FLobbyDownloadFriendList OnDownloadFriendList, bool isForceUpdate) {
}

void ULobbyFriends::DownloadFollows(ULobbyFriends::FOnDownloadFollows OnDownloadFollows, bool isForceUpdate) {
}

void ULobbyFriends::DenyPending(int64 cosmosId, ULobbyFriends::FOnCallbackSuccess_Status OnDenyPending) {
}

void ULobbyFriends::CancelRequest(int64 cosmosId, ULobbyFriends::FOnCallbackSuccess OnCancelRequest) {
}

void ULobbyFriends::ApprovePending(int64 cosmosId, ULobbyFriends::FOnCallbackSuccess_Status OnApprovePending) {
}

void ULobbyFriends::AddFollow(int64 cosmosId, ULobbyFriends::FOnAddFollow OnAddFollow) {
}


