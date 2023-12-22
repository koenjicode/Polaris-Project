#pragma once
#include "CoreMinimal.h"
#include "EStoreItemType.generated.h"

UENUM(BlueprintType)
enum class EStoreItemType : uint8 {
    E_CHR,
    E_STG,
    E_CUS,
    E_STK,
    E_SHO,
    E_SBG,
    E_PPL,
    E_CPL,
    E_PRF_CP,
    E_PRF_AP,
    E_PRF_BG,
    E_GGE,
    E_AVT,
    E_STP,
    E_EMT,
    E_GAL,
    E_BGM,
    E_BAL,
    Num,
};

