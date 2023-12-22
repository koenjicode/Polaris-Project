#pragma once
#include "CoreMinimal.h"
#include "EUMG_CUS_ST_SESTStatus.generated.h"

UENUM(BlueprintType)
enum class EUMG_CUS_ST_SESTStatus : uint8 {
    None,
    New,
    Lock,
};

