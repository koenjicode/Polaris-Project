#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "PolarisMasterSkeletalMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisMasterSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UPolarisMasterSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

};

