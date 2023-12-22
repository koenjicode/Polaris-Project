#pragma once
#include "CoreMinimal.h"
#include "SubColorKeySetsForFurItemStruct.generated.h"

class UMaterialInterface;
class USubColorKeySetsGroup;

USTRUCT(BlueprintType)
struct POLARIS_API FSubColorKeySetsForFurItemStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> TargetMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USubColorKeySetsGroup* SubColorKeySetsGroup;
    
    FSubColorKeySetsForFurItemStruct();
};

