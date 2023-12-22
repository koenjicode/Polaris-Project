#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "EGroundAttribute_DirtColor.h"
#include "PhysicsMaterialDirt.h"
#include "PhysicsMaterialDown.h"
#include "PhysicsMaterialStep.h"
#include "PolarisPhysicsMaterialDataAsset.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisPhysicsMaterialDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 SurfaceTypes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 CopyUpSurfaceTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPhysicsMaterialDown> PhysicsMaterialDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPhysicsMaterialStep> PhysicsMaterialStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPhysicsMaterialDirt> PhysicsMaterialDirt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> PhysicsMaterialSoundName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGroundAttribute_DirtColor> DefaultDirtColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDirtyRaito;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootShadowAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FootShadowScale;
    
    UPolarisPhysicsMaterialDataAsset();

};

