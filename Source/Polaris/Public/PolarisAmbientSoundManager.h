#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisAmbientSoundManager.generated.h"

class APolarisAmbientSoundActor;
class APolarisAmbientSoundBoxActor;

UCLASS(Blueprintable)
class POLARIS_API APolarisAmbientSoundManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APolarisAmbientSoundActor*> AmbientSoundActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APolarisAmbientSoundBoxActor*> CurrentAmbientSoundBoxActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAmbientSoundPlaying;
    
    APolarisAmbientSoundManager(const FObjectInitializer& ObjectInitializer);

};

