#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "EStageLightType.h"
#include "EStagePositionTypeId.h"
#include "PolarisBattlePlayerStartCamera.h"
#include "PolarisStageForcusCamera.h"
#include "PolarisBattlePlayerStart.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisBattlePlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageSequenceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageBrokenHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStagePositionTypeId StagePositionTypeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FloorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageLightType StageLightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsWallAdjust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisBattlePlayerStartCamera> RoundStartCameraAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisStageForcusCamera> StageForcusCameraAssets;
    
    APolarisBattlePlayerStart(const FObjectInitializer& ObjectInitializer);

};

