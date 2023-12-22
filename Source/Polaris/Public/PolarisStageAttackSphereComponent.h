#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "EStageImpulseStrengthType.h"
#include "PolarisStageAttackSphereComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisStageAttackSphereComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageImpulseStrengthType ImpulseStrengthType;
    
    UPolarisStageAttackSphereComponent(const FObjectInitializer& ObjectInitializer);

};

