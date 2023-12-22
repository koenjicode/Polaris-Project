#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PolarisPawn.generated.h"

UCLASS(Blueprintable)
class POLARIS_API APolarisPawn : public APawn {
    GENERATED_BODY()
public:
    APolarisPawn(const FObjectInitializer& ObjectInitializer);

};

