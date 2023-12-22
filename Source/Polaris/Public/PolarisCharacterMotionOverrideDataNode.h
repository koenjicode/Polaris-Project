#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PolarisCharacterMotionOverrideDataNode.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FPolarisCharacterMotionOverrideDataNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JointId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OverrideRotation;
    
    FPolarisCharacterMotionOverrideDataNode();
};

