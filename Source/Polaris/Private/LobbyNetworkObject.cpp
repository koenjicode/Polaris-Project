#include "LobbyNetworkObject.h"

ULobbyNetworkObject::ULobbyNetworkObject() {
}

void ULobbyNetworkObject::SetResponseDebugOwner() {
}

void ULobbyNetworkObject::SetInterval(int32 Interval) {
}

void ULobbyNetworkObject::SetCoordinateDebug(bool bCoordinateDebug) {
}

void ULobbyNetworkObject::QuickChange(int32 slotId) {
}

bool ULobbyNetworkObject::IsResponseDebugOwner(float& delayMin, float& delayMax) {
    return false;
}

bool ULobbyNetworkObject::IsLobbyErrors(TArray<int32>& Types, TArray<int32>& codes, TArray<FString>& Messages) {
    return false;
}

bool ULobbyNetworkObject::IsLobbyError(int32& Type, int32& code, FString& Message) {
    return false;
}

void ULobbyNetworkObject::InitializeResume() {
}

TArray<int64> ULobbyNetworkObject::GetSpawnEnemies() {
    return TArray<int64>();
}

TArray<int64> ULobbyNetworkObject::GetRemoveEnemies() {
    return TArray<int64>();
}

FLobbyOtherState ULobbyNetworkObject::GetOtherState(int64 cosmosId) {
    return FLobbyOtherState{};
}

int32 ULobbyNetworkObject::GetEnemyStateIndex(int64 enemyId) const {
    return 0;
}

void ULobbyNetworkObject::GetEnemiesCosmosIdAndNames(TMap<FName, FString>& Result) {
}

bool ULobbyNetworkObject::GetCoordinateDebug() {
    return false;
}


