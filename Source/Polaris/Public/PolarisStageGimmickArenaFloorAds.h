#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPolarisStageGimmickArenaFloorAdsState.h"
#include "EventOnGeneralBattleEventParam.h"
#include "EventOnInitBattleParam.h"
#include "PolarisStageGimmickBaseActor.h"
#include "PolarisStageGimmickArenaFloorAds.generated.h"

class ALevelSequenceActor;
class ULevelSequence;
class ULevelSequencePlayer;

UCLASS(Blueprintable)
class POLARIS_API APolarisStageGimmickArenaFloorAds : public APolarisStageGimmickBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPolarisStageGimmickArenaFloorAdsState, ULevelSequence*> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPolarisStageGimmickArenaFloorAdsState, ULevelSequencePlayer*> LevelSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPolarisStageGimmickArenaFloorAdsState, ALevelSequenceActor*> LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FightLoopPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReadyFrame;
    
    APolarisStageGimmickArenaFloorAds(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitBattle(FEventOnInitBattleParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGeneralBattleEvent(FEventOnGeneralBattleEventParam Param);
    
};

