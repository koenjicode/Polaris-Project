#pragma once
#include "CoreMinimal.h"
#include "ELobbyMatchingAnywhere_MatchingStatus.generated.h"

UENUM(BlueprintType)
enum class ELobbyMatchingAnywhere_MatchingStatus : uint8 {
    None,
    Initialize,
    NoSession,
    Matching,
    MeasureLineQuality,
    WaitMeasureLineQualityReady,
    FindMatchingPlayer,
    WaitDestroySession,
    PauseMatching,
    WaitPlayerReady,
    Matched,
};

