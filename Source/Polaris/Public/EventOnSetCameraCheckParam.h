#pragma once
#include "CoreMinimal.h"
#include "EventOnSetCameraCheckParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnSetCameraCheckParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Size;
    
    POLARIS_API FEventOnSetCameraCheckParam();
};

