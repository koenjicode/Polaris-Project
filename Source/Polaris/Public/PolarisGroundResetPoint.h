#pragma once
#include "CoreMinimal.h"
#include "Engine/NavigationObjectBase.h"
#include "PolarisGroundResetPoint.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisGroundResetPoint : public ANavigationObjectBase {
    GENERATED_BODY()
public:
    APolarisGroundResetPoint(const FObjectInitializer& ObjectInitializer);

};

