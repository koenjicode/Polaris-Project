#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DemoHelpActor.generated.h"

class ALevelSequenceActor;
class ULevelSequence;
class ULevelSequencePlayer;

UCLASS(Abstract, Blueprintable)
class POLARIS_API ADemoHelpActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* UseDemoSequencer;
    
    ADemoHelpActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUpUseSequencer(ULevelSequencePlayer* _SeqPlayer, ALevelSequenceActor* _SeqActor);
    
};

