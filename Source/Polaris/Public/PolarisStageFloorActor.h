#pragma once
#include "CoreMinimal.h"
#include "PolarisStageGroundActor.h"
#include "PolarisStageFloorActor.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisStageFloorActor : public APolarisStageGroundActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFloorBreakable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStageDestruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDummyBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFloorBlast;
    
    APolarisStageFloorActor(const FObjectInitializer& ObjectInitializer);

};

