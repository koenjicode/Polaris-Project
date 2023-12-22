#pragma once
#include "CoreMinimal.h"
#include "ImportCollisionVolume.generated.h"

USTRUCT(BlueprintType)
struct FImportCollisionVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCollidesWithVirtualParticles;
    
    CATWALKCLOTHINTERFACE_API FImportCollisionVolume();
};

