#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EZoneType.h"
#include "EventOnZoneBeginParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnZoneBeginParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZoneType zone_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector hit_pos;
    
    POLARIS_API FEventOnZoneBeginParam();
};

