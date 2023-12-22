#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGReplayInfoIconType.generated.h"

UENUM(BlueprintType)
enum class EPolarisUMGReplayInfoIconType : uint8 {
    EReplayInfoIconType_None,
    EReplayInfoIconType_Play,
    EReplayInfoIconType_Pause,
    EReplayInfoIconType_Rewind,
    EReplayInfoIconType_Forward,
    EReplayInfoIconType_Next_Round,
    EReplayInfoIconType_Prev_Round,
};

