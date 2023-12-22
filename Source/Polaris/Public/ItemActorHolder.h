#pragma once
#include "CoreMinimal.h"
#include "ItemActorHolder.generated.h"

class APolarisItemBaseActor;

USTRUCT(BlueprintType)
struct POLARIS_API FItemActorHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, APolarisItemBaseActor*> ItemActors;
    
    FItemActorHolder();
};

