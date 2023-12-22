#pragma once
#include "CoreMinimal.h"
#include "EStageAnotherWorldType.generated.h"

UENUM(BlueprintType)
enum class EStageAnotherWorldType : uint8 {
    None,
    Training,
    AML,
    SWL,
    GRF,
    CRW,
    KMD,
    CML,
    BBN,
    CAT,
    XXA,
    XXB,
    ZBR,
    APPEND_START = 50,
    DOG,
    STORY_START = 100,
    SWL_STORY,
    DEBUG_START = 200,
    DEBUG_GREEN = DEBUG_START,
    DEBUG_RED,
    ANOTHER_WORLD_TYPE_MAX UMETA(Hidden),
};

