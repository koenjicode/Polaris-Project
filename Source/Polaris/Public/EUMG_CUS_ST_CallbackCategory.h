#pragma once
#include "CoreMinimal.h"
#include "EUMG_CUS_ST_CallbackCategory.generated.h"

UENUM(BlueprintType)
enum class EUMG_CUS_ST_CallbackCategory : uint8 {
    SESTCategory,
    SESTList,
    EditMenu,
};

