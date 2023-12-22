#pragma once
#include "CoreMinimal.h"
#include "ChangeDependencyParam.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FChangeDependencyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DepdencencyMeshNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMainMeshVisibility;
    
    FChangeDependencyParam();
};

