#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisSequenceActor.generated.h"

class ALevelSequenceActor;

UCLASS(Blueprintable)
class POLARIS_API APolarisSequenceActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ALevelSequenceActor> LevelSequenceActor;
    
    APolarisSequenceActor(const FObjectInitializer& ObjectInitializer);

};

