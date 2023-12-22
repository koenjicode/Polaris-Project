#pragma once
#include "CoreMinimal.h"
#include "PolarisStageWallActor.h"
#include "PolarisStageBattleSpaceWallActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisStageBattleSpaceWallActor : public APolarisStageWallActor {
    GENERATED_BODY()
public:
    APolarisStageBattleSpaceWallActor(const FObjectInitializer& ObjectInitializer);

};

