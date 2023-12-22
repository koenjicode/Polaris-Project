#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PolarisHUD.generated.h"

UCLASS(Blueprintable, NonTransient)
class POLARIS_API APolarisHUD : public AHUD {
    GENERATED_BODY()
public:
    APolarisHUD(const FObjectInitializer& ObjectInitializer);

};

