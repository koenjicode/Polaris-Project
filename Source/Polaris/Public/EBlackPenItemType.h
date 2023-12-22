#pragma once
#include "CoreMinimal.h"
#include "EBlackPenItemType.generated.h"

UENUM(BlueprintType)
enum class EBlackPenItemType : uint8 {
    Item_None,
    Item_Item,
    Item_ItemSet,
    Item_Coin = 99,
};

