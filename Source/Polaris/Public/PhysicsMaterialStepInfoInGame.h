#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PhysicsMaterialStepInfoInGame.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FPhysicsMaterialStepInfoInGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* DecalMaterialAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DecalSize;
    
    POLARIS_API FPhysicsMaterialStepInfoInGame();
};

