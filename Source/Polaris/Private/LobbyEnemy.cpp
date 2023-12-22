#include "LobbyEnemy.h"
#include "LobbyFootstepComponent.h"

ALobbyEnemy::ALobbyEnemy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_isRival = false;
    this->_isFriend = false;
    this->_isFollow = false;
    this->_rank = -1;
    this->LobbyFootstepComponent = CreateDefaultSubobject<ULobbyFootstepComponent>(TEXT("FootstepComponent"));
    this->_currentMilliSeconds = -1;
    this->_playingEmoteMilliSeconds = -1;
    this->_cosmosId3 = 0;
}

void ALobbyEnemy::UpdateOtherState(FLobbyOtherState& otherState) {
}

void ALobbyEnemy::UpdateEmote() {
}

void ALobbyEnemy::SetCosmosId(const FName& cosmosId, int64 cosmosId2) {
}

void ALobbyEnemy::LobbyGetLoungeEnemies(TMap<int64, FLobbyLoungeEnemy>& loungeEnemies) {
}

void ALobbyEnemy::LobbyGetEnemies(TMap<int64, ALobbyEnemy*>& enemies) {
}

ALobbyEnemy* ALobbyEnemy::LobbyFindEnemy(int64 cosmosId) {
    return NULL;
}

bool ALobbyEnemy::LobbyEnemyIsWatchTarget(int64 cosmosId) {
    return false;
}

void ALobbyEnemy::LobbyEnemyGetDisplayNames(int64 cosmosId, TArray<FString>& displayNames) {
}

void ALobbyEnemy::LeaveSeatWarp() {
}

bool ALobbyEnemy::IsReadyEmote(FLobbyCoordinate& coordinate) {
    return false;
}

bool ALobbyEnemy::IsCloseLevel() {
    return false;
}

bool ALobbyEnemy::IsCancelPlayingEmote(bool& isNextEmote, FLobbyCoordinate& coordinate) {
    return false;
}

bool ALobbyEnemy::InterpolationMove() {
    return false;
}


int32 ALobbyEnemy::GetOtherStateIndex() {
    return 0;
}

FLobbyOtherState ALobbyEnemy::GetOtherState() {
    return FLobbyOtherState{};
}

void ALobbyEnemy::DirectMove() {
}


