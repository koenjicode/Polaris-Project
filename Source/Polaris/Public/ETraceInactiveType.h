#pragma once
#include "CoreMinimal.h"
#include "ETraceInactiveType.generated.h"

UENUM(BlueprintType)
enum class ETraceInactiveType : uint8 {
    Immediatery,
    Standard,
    Stoped,
};

