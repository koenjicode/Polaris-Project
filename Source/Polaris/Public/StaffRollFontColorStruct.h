#pragma once
#include "CoreMinimal.h"
#include "StaffRollFontColorStruct.generated.h"

USTRUCT(BlueprintType)
struct FStaffRollFontColorStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float G;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float B;
    
    POLARIS_API FStaffRollFontColorStruct();
};

