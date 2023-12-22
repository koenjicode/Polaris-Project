#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PolarisAmbientSoundShapeActor.generated.h"

class APolarisAmbientSoundActor;
class UAkAudioEvent;

UCLASS(Blueprintable)
class POLARIS_API APolarisAmbientSoundShapeActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SourceAmbientSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APolarisAmbientSoundActor* AmbientActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableObjectOcclision;
    
    APolarisAmbientSoundShapeActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentListenerPosition() const;
    
};

