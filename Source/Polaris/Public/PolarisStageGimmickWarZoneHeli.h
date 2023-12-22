#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EStageGimmickWarZoneHeliState.h"
#include "EventOnGeneralBattleEventParam.h"
#include "EventOnInitBattleParam.h"
#include "PolarisStageGimmickBaseActor.h"
#include "PolarisStageGimmickWarZoneHeli.generated.h"

class ALevelSequenceActor;
class ULevelSequence;
class ULevelSequencePlayer;

UCLASS(Blueprintable)
class POLARIS_API APolarisStageGimmickWarZoneHeli : public APolarisStageGimmickBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStageGimmickWarZoneHeliState, ULevelSequence*> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStageGimmickWarZoneHeliState, ULevelSequencePlayer*> LevelSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStageGimmickWarZoneHeliState, ALevelSequenceActor*> LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BreakLevelSequence_LoopPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageGimmickWarZoneHeliState HeliState;
    
    APolarisStageGimmickWarZoneHeli(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitBattle(FEventOnInitBattleParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGeneralBattleEvent(FEventOnGeneralBattleEventParam Param);
    
};

