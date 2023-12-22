#pragma once
#include "CoreMinimal.h"
#include "PolarisPawn.h"
#include "PolarisBattleCameraPawn.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class POLARIS_API APolarisBattleCameraPawn : public APolarisPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    APolarisBattleCameraPawn(const FObjectInitializer& ObjectInitializer);

};

