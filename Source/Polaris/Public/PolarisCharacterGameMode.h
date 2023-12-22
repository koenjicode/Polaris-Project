#pragma once
#include "CoreMinimal.h"
#include "PolarisBaseGameMode.h"
#include "Templates/SubclassOf.h"
#include "PolarisCharacterGameMode.generated.h"

class APolarisDramaManager;
class APolarisEffectManager;
class APolarisStageManager;

UCLASS(Blueprintable, NonTransient)
class POLARIS_API APolarisCharacterGameMode : public APolarisBaseGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APolarisEffectManager> EffectManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APolarisDramaManager> DramaManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APolarisStageManager> StageManagerClass;
    
    APolarisCharacterGameMode(const FObjectInitializer& ObjectInitializer);

};

