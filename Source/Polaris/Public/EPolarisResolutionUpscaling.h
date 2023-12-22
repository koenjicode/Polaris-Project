#pragma once
#include "CoreMinimal.h"
#include "EPolarisResolutionUpscaling.generated.h"

UENUM(BlueprintType)
enum class EPolarisResolutionUpscaling : uint8 {
    CatmullRom,
    TAAU,
    TSR,
    FSR_1,
    FSR_2,
    NIS,
    DLSS,
    XeSS,
    None,
};

