#pragma once
#include "CoreMinimal.h"
#include "EStageLightType.h"
#include "StageLevelSequenceAsset.h"
#include "StageLevelSequence.generated.h"

class ALevelSequenceActor;
class ULevelSequencePlayer;

USTRUCT(BlueprintType)
struct FStageLevelSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStageLevelSequenceAsset> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequencePlayer*> LevelSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALevelSequenceActor*> LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageLightType LightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOnceStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStopAtInitBattle;
    
    POLARIS_API FStageLevelSequence();
};

