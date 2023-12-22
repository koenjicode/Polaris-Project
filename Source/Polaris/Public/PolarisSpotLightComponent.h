#pragma once
#include "CoreMinimal.h"
#include "Components/SpotLightComponent.h"
#include "PolarisSpotLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisSpotLightComponent : public USpotLightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PolarisIntensityScale;
    
    UPolarisSpotLightComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ApplyPolarisScale();
    
};

