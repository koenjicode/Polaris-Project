#pragma once
#include "CoreMinimal.h"
#include "AkAmbientSound.h"
#include "PolarisAmbientSoundActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisAmbientSoundActor : public AAkAmbientSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableObjectOcclision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsObjectOcclisionBeforeFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEmotion;
    
    APolarisAmbientSoundActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentlyPlayingForBP();
    
};

