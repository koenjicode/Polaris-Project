#pragma once
#include "CoreMinimal.h"
#include "EPolarisStageGimmickArenaFloorAdsState.generated.h"

UENUM(BlueprintType)
enum class EPolarisStageGimmickArenaFloorAdsState : uint8 {
    None,
    Ready,
    Fight,
};

