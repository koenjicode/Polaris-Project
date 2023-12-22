#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventOnMissileUpdateParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnMissileUpdateParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    POLARIS_API FEventOnMissileUpdateParam();
};

