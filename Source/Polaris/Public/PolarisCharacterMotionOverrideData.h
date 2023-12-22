#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PolarisCharacterMotionOverrideDataNode.h"
#include "PolarisCharacterMotionOverrideData.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisCharacterMotionOverrideData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisCharacterMotionOverrideDataNode> DataNodes;
    
    UPolarisCharacterMotionOverrideData();

};

