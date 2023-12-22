#pragma once
#include "CoreMinimal.h"
#include "EGroundAttribute_DirtColor.h"
#include "EGroundAttribute_NoiseIntensity.h"
#include "EGroundAttribute_WaterIntensity.h"
#include "PhysicsMaterialDirt.generated.h"

USTRUCT(BlueprintType)
struct FPhysicsMaterialDirt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGroundAttribute_WaterIntensity> WaterIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGroundAttribute_DirtColor> DirtColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGroundAttribute_NoiseIntensity> NoizeIntensity;
    
    POLARIS_API FPhysicsMaterialDirt();
};

