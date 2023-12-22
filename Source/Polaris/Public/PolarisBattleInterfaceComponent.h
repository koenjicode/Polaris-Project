#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PolarisBattleInterfaceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisBattleInterfaceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPolarisBattleInterfaceComponent(const FObjectInitializer& ObjectInitializer);

};

