#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "EGeneralBattleEvent.h"
#include "PolarisReducibleInterface.h"
#include "StageDestruction.h"
#include "StageLevelSequence.h"
#include "PolarisStageLevelControl.generated.h"

class ALevelSequenceActor;
class ULevelSequence;
class ULevelSequencePlayer;

UCLASS(Blueprintable)
class POLARIS_API APolarisStageLevelControl : public AActor, public IPolarisReducibleInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGeneralBattleEvent, FStageLevelSequence> BattleEventLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageDestruction StageDestruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequence*> ResidentLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageLevelSequence ResetStageLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery ReductionTagQuery;
    
    APolarisStageLevelControl(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetResetStageLevelSequencePlayer(TArray<ULevelSequencePlayer*> LevelSequencePlayer, TArray<ALevelSequenceActor*> LevelSequenceActor);
    
    UFUNCTION(BlueprintCallable)
    void SetOnceStatus(EGeneralBattleEvent Type, bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelSequencePlayer(EGeneralBattleEvent Type, TArray<ULevelSequencePlayer*> LevelSequencePlayer, TArray<ALevelSequenceActor*> LevelSequenceActor);
    
    UFUNCTION(BlueprintCallable)
    void KeyOnEventForSequencer(EGeneralBattleEvent Type, int32 LevelSeqArrayNum);
    

    // Fix for true pure virtual functions not being implemented
};

