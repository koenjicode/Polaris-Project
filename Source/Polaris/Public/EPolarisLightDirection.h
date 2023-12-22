#pragma once
#include "CoreMinimal.h"
#include "EPolarisLightDirection.generated.h"

UENUM(BlueprintType)
enum class EPolarisLightDirection : uint8 {
    RightBack,
    LeftBack,
    Front,
    Any,
};

