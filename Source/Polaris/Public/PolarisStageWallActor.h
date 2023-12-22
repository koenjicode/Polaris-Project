#pragma once
#include "CoreMinimal.h"
#include "PolarisStageGroundActor.h"
#include "PolarisStageWallActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisStageWallActor : public APolarisStageGroundActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WallAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNoBreak;
    
    APolarisStageWallActor(const FObjectInitializer& ObjectInitializer);

};

