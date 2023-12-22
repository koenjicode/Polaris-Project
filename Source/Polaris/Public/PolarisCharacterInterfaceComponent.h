#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PolarisCharacterInterfaceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisCharacterInterfaceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPolarisCharacterInterfaceComponent(const FObjectInitializer& ObjectInitializer);

};

