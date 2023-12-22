#pragma once
#include "CoreMinimal.h"
#include "ELobbyMachineType.generated.h"

UENUM(BlueprintType)
enum class ELobbyMachineType : uint8 {
    Single,
    Lobbymatch,
    Other,
    Practice,
    PlayerMatch,
    ArcadeQuest,
    BallLobbymatch,
    BallPlayermatch,
};

