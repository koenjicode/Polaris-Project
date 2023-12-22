#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "PolarisBallMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisBallMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPolarisBallMeshComponent(const FObjectInitializer& ObjectInitializer);

};

