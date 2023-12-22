#pragma once
#include "CoreMinimal.h"
#include "EStoreHomeState.generated.h"

UENUM(BlueprintType)
enum class EStoreHomeState : uint8 {
    Top,
    Pickup,
    ItemDetails,
};

