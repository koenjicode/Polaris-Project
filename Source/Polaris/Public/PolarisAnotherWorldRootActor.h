#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisAnotherWorldRootActor.generated.h"

class APolarisCharacterActor;
class USceneComponent;

UCLASS(Blueprintable)
class POLARIS_API APolarisAnotherWorldRootActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APolarisCharacterActor* OwnerPlayer;
    
    APolarisAnotherWorldRootActor(const FObjectInitializer& ObjectInitializer);

};

