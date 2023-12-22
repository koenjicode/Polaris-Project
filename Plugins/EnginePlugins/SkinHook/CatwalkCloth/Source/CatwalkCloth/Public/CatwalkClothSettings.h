#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CatwalkClothSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=CatwalkCloth)
class CATWALKCLOTH_API UCatwalkClothSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAdaptiveIterationRatio;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MaxAbsoluteAdaptiveIterations;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSimulationDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubstepThreshold;
    
    UCatwalkClothSettings();

};

