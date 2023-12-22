#include "PolarisBaseGameMode.h"
#include "PolarisHUD.h"
#include "PolarisPawn.h"
#include "PolarisPlayerController.h"

APolarisBaseGameMode::APolarisBaseGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = APolarisPlayerController::StaticClass();
    this->HUDClass = APolarisHUD::StaticClass();
    this->DefaultPawnClass = APolarisPawn::StaticClass();
    this->GameModeType = EGameModeType::E_Type_Base;
}

bool APolarisBaseGameMode::IsPause() const {
    return false;
}

bool APolarisBaseGameMode::IsDebugPauseStep() const {
    return false;
}

bool APolarisBaseGameMode::IsDebugPauseEngineStep() const {
    return false;
}

float APolarisBaseGameMode::GetGameSpeedRaw() const {
    return 0.0f;
}


