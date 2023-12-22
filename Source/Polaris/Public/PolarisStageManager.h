#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EStageImpulseStrengthType.h"
#include "EventOnFloorHitParam.h"
#include "PolarisStagePhysicsActorCache.h"
#include "Templates/SubclassOf.h"
#include "PolarisStageManager.generated.h"

class APolarisRadialForceActor;
class APolarisStagePhysicsActor;

UCLASS(Blueprintable)
class POLARIS_API APolarisStageManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FPolarisStagePhysicsActorCache> PhysicsActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FPolarisStagePhysicsActorCache> CreateQueuePhysicsActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APolarisStagePhysicsActor> PhysicsActorClass;
    
    APolarisStageManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    APolarisRadialForceActor* SpawnPolarisRadialForce(FVector Location, EStageImpulseStrengthType Type, float EndFrame, float StartRadius, float EndRadius, float Height, float ForceStrength, float ImpulseStrength, float ImpulseIntervalFrame, float DestructibleDamage, int32 TargetMask, bool IsCheckCulling, FVector CheckFrontVector);
    
    UFUNCTION(BlueprintCallable)
    void OnFloorHit(FEventOnFloorHitParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitBattle();
    
};

