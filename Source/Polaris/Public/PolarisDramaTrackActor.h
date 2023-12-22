#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EDramaTrackActorTransformType.h"
#include "PolarisDramaTrackActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisDramaTrackActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EDramaTrackActorTransformType ActorTransformType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FName FighterNameForFate;
    
    APolarisDramaTrackActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentPlayerID();
    
};

