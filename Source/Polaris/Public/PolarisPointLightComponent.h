#pragma once
#include "CoreMinimal.h"
#include "Components/PointLightComponent.h"
#include "PolarisPointLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisPointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PolarisIntensityScale;
    
    UPolarisPointLightComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ApplyPolarisScale();
    
};

