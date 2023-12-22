#pragma once
#include "CoreMinimal.h"
#include "StaffRollFontColorStruct.h"
#include "StaffRollFbsDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FStaffRollFbsDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TextStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStaffRollFontColorStruct RGBFontColor;
    
    POLARIS_API FStaffRollFbsDataStruct();
};

