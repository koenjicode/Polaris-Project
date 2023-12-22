#pragma once
#include "CoreMinimal.h"
#include "EPlayerNameType.generated.h"

UENUM(BlueprintType)
enum class EPlayerNameType : uint8 {
    PlayerName,
    OnlineID,
    PolarisID,
};

