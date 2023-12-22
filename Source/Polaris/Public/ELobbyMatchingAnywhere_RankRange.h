#pragma once
#include "CoreMinimal.h"
#include "ELobbyMatchingAnywhere_RankRange.generated.h"

UENUM(BlueprintType)
enum class ELobbyMatchingAnywhere_RankRange : uint8 {
    Unlimited,
    TwoPlus,
    ThreePlus,
};

