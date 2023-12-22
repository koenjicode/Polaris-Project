#pragma once
#include "CoreMinimal.h"
#include "EStoreItemAttribute.generated.h"

UENUM(BlueprintType)
enum class EStoreItemAttribute : uint8 {
    None,
    PickupItem,
    PopularItem,
    SaleItem,
    FreeItem,
    NewItem,
};

