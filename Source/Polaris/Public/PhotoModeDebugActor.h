#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PhotoModeDebugActor.generated.h"

class APhotoFeatureColldier;
class APhotoModeActor;

UCLASS(Blueprintable)
class POLARIS_API APhotoModeDebugActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APhotoModeActor* PhotoModeActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APhotoFeatureColldier* PhotoFeatureCollider;
    
    APhotoModeDebugActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SearchPhotoModeActor();
    
};

