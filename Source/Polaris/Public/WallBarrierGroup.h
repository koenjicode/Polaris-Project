#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BarrierGroup.h"
#include "WallBarrierGroup.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FWallBarrierGroup : public FBarrierGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FacadeVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LocalFacade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableBarrierIfBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectAlphaOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> EffectActors;
    
    POLARIS_API FWallBarrierGroup();
};

