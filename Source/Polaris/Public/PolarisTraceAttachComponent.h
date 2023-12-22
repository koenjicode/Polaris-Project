#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PolarisTraceAttachComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisTraceAttachComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPolarisTraceAttachComponent(const FObjectInitializer& ObjectInitializer);

};

