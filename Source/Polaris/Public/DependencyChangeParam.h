#pragma once
#include "CoreMinimal.h"
#include "ItemPositionKey.h"
#include "DependencyChangeParam.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FDependencyChangeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemPositionKey TgtPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChangeDepNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsMainMeshVisibility;
    
    FDependencyChangeParam();
};

