#include "LobbyClientGameMode.h"
#include "LobbyClientPlayerController.h"

ALobbyClientGameMode::ALobbyClientGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = ALobbyClientPlayerController::StaticClass();
}


