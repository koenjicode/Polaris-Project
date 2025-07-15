#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DropItemInfoStruct.generated.h"

class APolarisItemBaseActor;

USTRUCT(BlueprintType)
struct POLARIS_API FDropItemInfoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DropItemImpulsePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsDropItemImpulseDirEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector DropItemImpulseDir;
    
    UPROPERTY(BlueprintReadWrite)
    APolarisItemBaseActor* DropItemActor;
    
    FDropItemInfoStruct();
};

