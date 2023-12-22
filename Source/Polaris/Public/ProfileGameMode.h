#pragma once
#include "CoreMinimal.h"
#include "PolarisBaseGameMode.h"
#include "ProfileGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class POLARIS_API AProfileGameMode : public APolarisBaseGameMode {
    GENERATED_BODY()
public:
    AProfileGameMode(const FObjectInitializer& ObjectInitializer);

};

