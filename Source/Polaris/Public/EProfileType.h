#pragma once
#include "CoreMinimal.h"
#include "EProfileType.generated.h"

UENUM(BlueprintType)
enum class EProfileType : uint8 {
    Self,
    Battle1,
    Battle2,
    Other,
};

