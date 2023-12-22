#pragma once
#include "CoreMinimal.h"
#include "ENpcAvatarMaterialParameterType.generated.h"

UENUM(BlueprintType)
enum class ENpcAvatarMaterialParameterType : uint8 {
    SSS_Color_Inside,
    SSS_Color_Outside,
    RootColor,
    TipColor,
    SpecularColor,
    BaseColor01,
    BaseColor02,
    BaseColor03,
    BaseColor04,
    BaseHSV01,
    BaseHSV02,
    BaseHSV03,
    BaseHSV04,
};

