#include "PolarisGameInstance.h"

UPolarisGameInstance::UPolarisGameInstance() {
    this->m_pKamuiManager = NULL;
    this->m_pMoviePlayer = NULL;
    this->StartupPackages.AddDefaulted(12);
}

UPolarisMoviePlayer* UPolarisGameInstance::GetMoviePlayer() const {
    return NULL;
}


