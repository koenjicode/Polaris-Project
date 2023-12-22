#pragma once
#include "CoreMinimal.h"
#include "DemoCatwalkClothSettingStruct.generated.h"

class UCatwalkClothComponent;
class UCatwalkClothOverride;

USTRUCT(BlueprintType)
struct POLARIS_API FDemoCatwalkClothSettingStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCatwalkClothComponent* CatwalkClothComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCatwalkClothOverride* ClothOverrideSetting;
    
    FDemoCatwalkClothSettingStruct();
};

