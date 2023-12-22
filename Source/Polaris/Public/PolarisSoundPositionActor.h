#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisSoundPositionActor.generated.h"

class UAkAudioEvent;
class USceneComponent;

UCLASS(Blueprintable)
class POLARIS_API APolarisSoundPositionActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSoundPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBattlePositionActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBattleBasePositionActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootScene;
    
public:
    APolarisSoundPositionActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void KeyOnFromThisActor(UAkAudioEvent* _Event);
    
};

