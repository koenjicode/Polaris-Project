#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "PolarisDrawDummyComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POLARIS_API UPolarisDrawDummyComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Exposure;
    
    UPolarisDrawDummyComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateExposureCompositionCache(float& currentExposure, bool& bValid);
    
    UFUNCTION(BlueprintCallable)
    void RequestUpdateExposureCompositionForNextFrame();
    
};

