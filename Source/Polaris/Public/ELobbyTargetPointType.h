#pragma once
#include "CoreMinimal.h"
#include "ELobbyTargetPointType.generated.h"

UENUM(BlueprintType)
enum class ELobbyTargetPointType : uint8 {
    None,
    Start,
    Entrance,
    Battle,
    Customize,
    Dojo,
    Beach,
    Performance,
};

