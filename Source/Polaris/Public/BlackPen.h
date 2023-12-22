#pragma once
#include "CoreMinimal.h"
#include "BlackPen.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IconResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlockLevel;
    
    FBlackPen();
};

