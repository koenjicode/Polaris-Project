#pragma once
#include "CoreMinimal.h"
#include "PolarisBaseGameMode.h"
#include "Templates/SubclassOf.h"
#include "PolarisBattleGameMode.generated.h"

class APhotoModeActor;
class APolarisBallManager;
class APolarisBattleEventManager;
class APolarisDramaManager;
class APolarisEffectManager;
class APolarisMobManager;
class APolarisStageManager;

UCLASS(Blueprintable, NonTransient)
class POLARIS_API APolarisBattleGameMode : public APolarisBaseGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APolarisEffectManager> EffectManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APolarisBattleEventManager> BattleEventManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APolarisStageManager> StageManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APolarisDramaManager> DramaManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APolarisMobManager> MobManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APolarisBallManager> BallManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APhotoModeActor> PhotoModeActorClass;
    
    APolarisBattleGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WaitAndProcessSublevelReady();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawnDummyEffect(int32 category_number, float Numerator, float Denominator);
    
};

