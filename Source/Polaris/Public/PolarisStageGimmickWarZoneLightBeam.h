#pragma once
#include "CoreMinimal.h"
#include "EStageGimmickWarZoneLightBeamState.h"
#include "EventOnGeneralBattleEventParam.h"
#include "EventOnInitBattleParam.h"
#include "PolarisStageGimmickBaseActor.h"
#include "PolarisStageGimmickWarZoneLightBeam.generated.h"

class ALevelSequenceActor;
class ULevelSequence;
class ULevelSequencePlayer;

UCLASS(Blueprintable)
class POLARIS_API APolarisStageGimmickWarZoneLightBeam : public APolarisStageGimmickBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStageGimmickWarZoneLightBeamState, ULevelSequence*> LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStageGimmickWarZoneLightBeamState, ULevelSequencePlayer*> LevelSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStageGimmickWarZoneLightBeamState, ALevelSequenceActor*> LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageGimmickWarZoneLightBeamState LightBeamState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBroken;
    
    APolarisStageGimmickWarZoneLightBeam(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitBattle(FEventOnInitBattleParam Param);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGeneralBattleEvent(FEventOnGeneralBattleEventParam Param);
    
};

