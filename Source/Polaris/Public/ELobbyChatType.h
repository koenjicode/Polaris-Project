#pragma once
#include "CoreMinimal.h"
#include "ELobbyChatType.generated.h"

UENUM(BlueprintType)
enum class ELobbyChatType : uint8 {
    Lobby,
    PlayerMatch,
    WatchBattle,
    Ball,
    Other,
};

