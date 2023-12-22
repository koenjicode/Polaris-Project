#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGPhotomodeTabType.generated.h"

UENUM(BlueprintType)
enum class EPolarisUMGPhotomodeTabType : uint8 {
    Camera,
    DOF,
    Brightness,
    Frame,
    Character,
    Effect,
};

