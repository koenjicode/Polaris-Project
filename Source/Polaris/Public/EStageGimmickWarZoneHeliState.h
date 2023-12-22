#pragma once
#include "CoreMinimal.h"
#include "EStageGimmickWarZoneHeliState.generated.h"

UENUM(BlueprintType)
enum class EStageGimmickWarZoneHeliState : uint8 {
    None,
    Start,
    Loop,
    Break,
    Broken,
};

