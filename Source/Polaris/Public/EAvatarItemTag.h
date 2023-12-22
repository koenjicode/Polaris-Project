#pragma once
#include "CoreMinimal.h"
#include "EAvatarItemTag.generated.h"

UENUM(BlueprintType)
enum class EAvatarItemTag : uint8 {
    None,
    Overdress,
    Underdress,
    MaleMotion,
    FemaleMotion,
};

