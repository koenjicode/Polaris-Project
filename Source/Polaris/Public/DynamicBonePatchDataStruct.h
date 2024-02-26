#pragma once
#include "CoreMinimal.h"
#include "DynamicBonePatchDataStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FDynamicBonePatchDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RootCollisionScale;
    
    FDynamicBonePatchDataStruct();
};

