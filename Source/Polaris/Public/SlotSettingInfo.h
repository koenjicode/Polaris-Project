#pragma once
#include "CoreMinimal.h"
#include "SlotSettingInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct POLARIS_API FSlotSettingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SlotTexture;
    
    FSlotSettingInfo();
};

