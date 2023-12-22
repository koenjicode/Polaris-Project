#include "PolarisMoviePlayer.h"

UPolarisMoviePlayer::UPolarisMoviePlayer() {
    this->mana_player_ = NULL;
    this->player_texture_ = NULL;
    this->mana_texture_ = NULL;
    this->material_opaque_ = NULL;
    this->material_translucent_ = NULL;
}

void UPolarisMoviePlayer::Stop() const {
}

void UPolarisMoviePlayer::PlayStreamWithID(UManaTexture* Texture, int32 movie_id, bool is_opaque, bool is_loop, float Volume) {
}

void UPolarisMoviePlayer::PlayStream(UManaTexture* Texture, bool is_opaque, bool is_loop, float Volume) {
}

void UPolarisMoviePlayer::PlayMemoryWithID(const TArray<uint8>& Data, int32 movie_id, bool is_opaque, bool is_loop, float Volume) {
}

void UPolarisMoviePlayer::PlayMemory(const TArray<uint8>& Data, bool is_opaque, bool is_loop, float Volume) {
}

void UPolarisMoviePlayer::Pause(bool is_pause) const {
}

void UPolarisMoviePlayer::OnManaPlayerMovieOpened(const FString& opened_url) {
}

bool UPolarisMoviePlayer::IsSeeking() const {
    return false;
}

bool UPolarisMoviePlayer::IsPlaying() const {
    return false;
}

bool UPolarisMoviePlayer::IsPaused() const {
    return false;
}

int32 UPolarisMoviePlayer::GetMovieTotalFrame() const {
    return 0;
}

int32 UPolarisMoviePlayer::GetMovieID() const {
    return 0;
}

int32 UPolarisMoviePlayer::GetMovieFrame() const {
    return 0;
}

int32 UPolarisMoviePlayer::GetCriStatus() const {
    return 0;
}

void UPolarisMoviePlayer::ClearAllEvents() {
}


