#include "LobbyBlocks.h"

ULobbyBlocks::ULobbyBlocks() {
}

void ULobbyBlocks::Release(int64 cosmosId, ULobbyBlocks::FDelegate OnRelease) {
}

ULobbyBlocks* ULobbyBlocks::OnlineBlock() {
    return NULL;
}

bool ULobbyBlocks::IsBlock(int64 cosmosId, const FString& steamId) {
    return false;
}

void ULobbyBlocks::DownloadBlockList(ULobbyBlocks::FDelegate OnDownload, bool isForceUpdate) {
}

void ULobbyBlocks::Add(int64 cosmosId, ULobbyBlocks::FDelegate OnAdd) {
}


