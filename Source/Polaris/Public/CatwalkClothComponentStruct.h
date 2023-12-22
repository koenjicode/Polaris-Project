#pragma once
#include "CoreMinimal.h"
#include "EMeshBodyRegionType.h"
#include "CatwalkClothComponentStruct.generated.h"

class UCatwalkClothComponentBase;

USTRUCT(BlueprintType)
struct POLARIS_API FCatwalkClothComponentStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCatwalkClothComponentBase* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDisableSimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeshBodyRegionType BodyRegionType;
    
    FCatwalkClothComponentStruct();
};

