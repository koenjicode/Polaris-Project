#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ImportCollisionVolume.h"
#include "ImportSphereCollisionVolume.generated.h"

USTRUCT(BlueprintType)
struct FImportSphereCollisionVolume : public FImportCollisionVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Center;
    
    CATWALKCLOTHINTERFACE_API FImportSphereCollisionVolume();
};

