#pragma once
#include "CoreMinimal.h"
#include "GSMenuCursor.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FGSMenuCursor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 current_x;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 current_y;
    
    FGSMenuCursor();
};

