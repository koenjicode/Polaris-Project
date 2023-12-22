#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventOnPetAnimationStartParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnPetAnimationStartParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 no;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Location;
    
    POLARIS_API FEventOnPetAnimationStartParam();
};

