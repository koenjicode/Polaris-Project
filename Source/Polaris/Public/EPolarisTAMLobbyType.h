#pragma once
#include "CoreMinimal.h"
#include "EPolarisTAMLobbyType.generated.h"

UENUM(BlueprintType)
enum class EPolarisTAMLobbyType : uint8 {
    None,
    Prologue,
    Home,
    NewLobby1,
    NewLobby2,
    NewLobby3,
    Camp1,
    Camp2,
    LastSpot,
    TWT,
    Ghost,
};

