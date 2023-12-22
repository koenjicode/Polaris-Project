#pragma once
#include "CoreMinimal.h"
#include "PolarisCharacterCameraActor.h"
#include "PolarisCharacterSelectCameraActor.generated.h"

class ULevelSequence;
class ULevelSequencePlayer;

UCLASS(Blueprintable)
class POLARIS_API APolarisCharacterSelectCameraActor : public APolarisCharacterCameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* PlayCameraSeqSideToChara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* PlayCameraSeqCharaToSide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* PlayCameraSeqCharaToStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* PlayCameraSeqStageToChara;
    
    APolarisCharacterSelectCameraActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoopCheck(ULevelSequencePlayer* _player);
    
};

