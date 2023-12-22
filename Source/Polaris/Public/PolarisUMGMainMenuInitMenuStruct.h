#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGMainMenuInitMenuStruct.generated.h"

USTRUCT(BlueprintType)
struct FPolarisUMGMainMenuInitMenuStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Padding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_actual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool use_red_bar;
    
    POLARIS_API FPolarisUMGMainMenuInitMenuStruct();
};

