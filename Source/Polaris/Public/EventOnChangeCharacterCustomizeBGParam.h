#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventOnChangeCharacterCustomizeBGParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnChangeCharacterCustomizeBGParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor Color;
    
    POLARIS_API FEventOnChangeCharacterCustomizeBGParam();
};

