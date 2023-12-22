#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGPlayDataSortType.generated.h"

UENUM(BlueprintType)
enum class EPolarisUMGPlayDataSortType : uint8 {
    Rank,
    Wins,
    WinRate,
    UseRate,
};

