#pragma once
#include "CoreMinimal.h"
#include "Engine/NavigationObjectBase.h"
#include "PolarisTwEnemyNavObj.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisTwEnemyNavObj : public ANavigationObjectBase {
    GENERATED_BODY()
public:
    APolarisTwEnemyNavObj(const FObjectInitializer& ObjectInitializer);

};

