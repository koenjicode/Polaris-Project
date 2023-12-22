#pragma once
#include "CoreMinimal.h"
#include "MissileSpawnID.generated.h"

USTRUCT(BlueprintType)
struct FMissileSpawnID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 id_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_item_;
    
    POLARIS_API FMissileSpawnID();
};

