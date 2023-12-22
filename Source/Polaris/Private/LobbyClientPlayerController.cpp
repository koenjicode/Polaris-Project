#include "LobbyClientPlayerController.h"
#include "LobbyClientCheat.h"

ALobbyClientPlayerController::ALobbyClientPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheatClass = ULobbyClientCheat::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
}


