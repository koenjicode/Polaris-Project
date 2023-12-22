#pragma once
#include "CoreMinimal.h"
#include "PolarisHUD.h"
#include "PolarisBattleHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class POLARIS_API APolarisBattleHUD : public APolarisHUD {
    GENERATED_BODY()
public:
    APolarisBattleHUD(const FObjectInitializer& ObjectInitializer);

};

