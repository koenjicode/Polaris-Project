#pragma once
#include "CoreMinimal.h"
#include "PolarisMobManager.h"
#include "PolarisVATMobManager.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisVATMobManager : public APolarisMobManager {
    GENERATED_BODY()
public:
    APolarisVATMobManager(const FObjectInitializer& ObjectInitializer);

};

