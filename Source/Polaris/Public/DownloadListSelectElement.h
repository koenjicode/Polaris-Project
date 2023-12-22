#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DownloadListSelectElement.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FDownloadListSelectElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 fighter_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 tekken_power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime update_at;
    
    FDownloadListSelectElement();
};

