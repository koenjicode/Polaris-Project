#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EStageAnotherWorldProcType.h"
#include "EStageAnotherWorldType.h"
#include "EventOnChangeAnotherWorldParam.generated.h"

USTRUCT(BlueprintType)
struct FEventOnChangeAnotherWorldParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageAnotherWorldType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageAnotherWorldProcType proc_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Pos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator rot;
    
    POLARIS_API FEventOnChangeAnotherWorldParam();
};

