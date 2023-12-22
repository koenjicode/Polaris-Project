#pragma once
#include "CoreMinimal.h"
#include "PolarisMobAnimal.h"
#include "PolarisMobAnimalAlpaca.generated.h"

class UMobAlpacaActionSet;
class UPolarisMobAnimalAlpacaIsShake;

UCLASS(Blueprintable)
class POLARIS_API APolarisMobAnimalAlpaca : public APolarisMobAnimal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMobAlpacaActionSet* ActionSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMobAlpacaActionSet*> ActionSetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HogeHoge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolarisMobAnimalAlpacaIsShake* IsShakeChecker;
    
    APolarisMobAnimalAlpaca(const FObjectInitializer& ObjectInitializer);

};

