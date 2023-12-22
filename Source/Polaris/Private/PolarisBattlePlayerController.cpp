#include "PolarisBattlePlayerController.h"
#include "PolarisBattlePlayerCameraManager.h"

APolarisBattlePlayerController::APolarisBattlePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = APolarisBattlePlayerCameraManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
}


