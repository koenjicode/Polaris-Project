#pragma once
#include "CoreMinimal.h"
#include "AttachInfo.generated.h"

USTRUCT(BlueprintType)
struct FAttachInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName bone_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 effect_id;
    
    POLARIS_API FAttachInfo();
};

