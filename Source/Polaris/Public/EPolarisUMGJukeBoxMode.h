#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGJukeBoxMode.generated.h"

UENUM(BlueprintType)
enum class EPolarisUMGJukeBoxMode : uint8 {
    PLAYLIST,
    RANDOM_PRESET,
    MYLIST,
    MYLIST_BGM,
};

