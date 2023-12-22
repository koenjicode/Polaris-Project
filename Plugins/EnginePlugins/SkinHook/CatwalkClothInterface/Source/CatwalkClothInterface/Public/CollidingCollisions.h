#pragma once
#include "CoreMinimal.h"
#include "CollidingCollisions.generated.h"

USTRUCT(BlueprintType)
struct FCollidingCollisions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CollisionNames;
    
    CATWALKCLOTHINTERFACE_API FCollidingCollisions();
};

