#include "LobbyPlayer.h"
#include "LobbyFootstepComponent.h"

ALobbyPlayer::ALobbyPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_isOnlyLobby = false;
    this->_watchTargetCosmosId = 0;
    this->_isEnableUpdate = true;
    this->LobbyFootstepComponent = CreateDefaultSubobject<ULobbyFootstepComponent>(TEXT("FootstepComponent"));
    this->_isResumed = false;
    this->_nearEnemyCount = 0;
    this->_farEnemyCount = 0;
}

void ALobbyPlayer::StartAnywhereBattle() {
}

void ALobbyPlayer::SkipSendLocationAndRotation() {
}


void ALobbyPlayer::ShortWarp() {
}

void ALobbyPlayer::SetStandingLocationAndRotation() {
}

void ALobbyPlayer::SetSeatId(int32 seatId) {
}

void ALobbyPlayer::SetKeepAnimationSpeed() {
}


void ALobbyPlayer::SetGroundSurfaceType(uint8 groundSurfaceType) {
}


void ALobbyPlayer::SetEnableUpdate() {
}

void ALobbyPlayer::SetChatRange(float chatRange) {
}


void ALobbyPlayer::SetActorRotation2(FRotator NewRotation, const FString& Debug) {
}

void ALobbyPlayer::SetActorLocationAndRotation2(FVector NewLocation, FRotator NewRotation, const FString& Debug) {
}

void ALobbyPlayer::SetActorLocation2(FVector NewLocation, const FString& Debug) {
}

void ALobbyPlayer::SendTouch() {
}

void ALobbyPlayer::SendStatusChat() {
}

void ALobbyPlayer::SendStatus(ELobbyPlayerStatus Status) {
}

void ALobbyPlayer::SendJump() {
}

void ALobbyPlayer::SendEmote(const FName& emoteIndex) {
}

void ALobbyPlayer::ResumePreviousStandingLocationAndRotation() {
}

void ALobbyPlayer::Relocation2() {
}

void ALobbyPlayer::Relocation(FVector NewLocation, FRotator NewRotation) {
}

void ALobbyPlayer::PushCustomize(const ULobbyAvatarData* pAvatarData) {
}

void ALobbyPlayer::LongWarp() {
}









FRotator ALobbyPlayer::GetStandingRotation() const {
    return FRotator{};
}

FVector ALobbyPlayer::GetStandingLocation() const {
    return FVector{};
}

int32 ALobbyPlayer::GetSeatId() {
    return 0;
}

ELobbyPlayerStatus ALobbyPlayer::GetOverheadStatus() {
    return ELobbyPlayerStatus::None;
}


bool ALobbyPlayer::GetAndClearPreviousSitting() {
    return false;
}

void ALobbyPlayer::ClearStatusChat() {
}

void ALobbyPlayer::ClearStatus() {
}


void ALobbyPlayer::AddNpcLocation(const AActor* pActor) {
}


