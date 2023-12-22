#pragma once
#include "CoreMinimal.h"
#include "MobAlpacaControlStruct.generated.h"

USTRUCT(BlueprintType)
struct FMobAlpacaControlStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDebugBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDebugBox2;
    
    POLARIS_API FMobAlpacaControlStruct();
};

