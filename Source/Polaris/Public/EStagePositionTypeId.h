#pragma once
#include "CoreMinimal.h"
#include "EStagePositionTypeId.generated.h"

UENUM(BlueprintType)
enum class EStagePositionTypeId : uint8 {
    DramaStart,
    GameStart,
    DramaWin,
    DramaContinue,
    DramaSpecial,
    GameStart2,
    GameStart3,
    GameStart4,
    GameStart5,
    GameStart6,
    GameStart7,
    GameStart8,
    GameStart9,
    DramaFate1P,
    DramaFate2P,
    DramaFateSet0,
    DramaFateSet1,
    DramaFateSet2,
    DramaFateSet3,
    DramaFateSet4,
};

