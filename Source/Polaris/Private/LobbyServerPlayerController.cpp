#include "LobbyServerPlayerController.h"

ALobbyServerPlayerController::ALobbyServerPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
}

void ALobbyServerPlayerController::SendTextChat_Implementation(const FText& Message) {
}


