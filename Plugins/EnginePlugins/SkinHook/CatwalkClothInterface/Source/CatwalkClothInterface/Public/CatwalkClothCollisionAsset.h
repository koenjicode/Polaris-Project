#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CollidingCollisions.h"
#include "ImportBoxCollisionVolume.h"
#include "ImportCapsuleCollisionVolume.h"
#include "ImportSphereCollisionVolume.h"
#include "CatwalkClothCollisionAsset.generated.h"

UCLASS(Blueprintable)
class CATWALKCLOTHINTERFACE_API UCatwalkClothCollisionAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FImportSphereCollisionVolume> Spheres;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FImportCapsuleCollisionVolume> Capsules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FImportBoxCollisionVolume> Boxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FCollidingCollisions> CollidingCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FCollidingCollisions> CollidingCollisionsForAttachment;
    
    UCatwalkClothCollisionAsset();

};

