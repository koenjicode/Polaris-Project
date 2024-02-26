#pragma once
#include "CoreMinimal.h"
#include "EStageBreakType.generated.h"

UENUM(BlueprintType)
enum class EStageBreakType : uint8 {
    None,
    Break,
    Fracture,
};

