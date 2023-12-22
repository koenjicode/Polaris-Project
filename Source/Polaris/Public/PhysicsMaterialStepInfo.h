#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PhysicsMaterialStepInfo.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FPhysicsMaterialStepInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* DecalMaterialAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DecalSize;
    
    POLARIS_API FPhysicsMaterialStepInfo();
};

