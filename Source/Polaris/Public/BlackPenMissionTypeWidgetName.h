#pragma once
#include "CoreMinimal.h"
#include "BlackPenMissionTypeWidgetName.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenMissionTypeWidgetName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName title_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName numerator_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName slash_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName denominator_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName time_text;
    
    FBlackPenMissionTypeWidgetName();
};

