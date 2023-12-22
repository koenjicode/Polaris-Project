#pragma once
#include "CoreMinimal.h"
#include "BallSlotSettingInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct POLARIS_API FBallSlotSettingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SlotTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Locked;
    
    FBallSlotSettingInfo();
};

