#pragma once
#include "CoreMinimal.h"
#include "ELobbyMatchingAnywhere_NetworkQuality.generated.h"

UENUM(BlueprintType)
enum class ELobbyMatchingAnywhere_NetworkQuality : uint8 {
    Unlimited,
    Only5,
    More4,
    More3,
};

