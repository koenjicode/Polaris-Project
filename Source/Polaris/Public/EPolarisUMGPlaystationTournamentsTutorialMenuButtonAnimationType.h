#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGPlaystationTournamentsTutorialMenuButtonAnimationType.generated.h"

UENUM(BlueprintType)
enum class EPolarisUMGPlaystationTournamentsTutorialMenuButtonAnimationType : uint8 {
    Click,
    Hover,
    Normal,
    In,
    SelectIn,
    BackSelectIn,
    NoSelectIn,
    BackNoSelectIn,
};

