#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PolarisCharacterManager.generated.h"

class APolarisCharacterActor;

UCLASS(Blueprintable)
class POLARIS_API APolarisCharacterManager : public AActor {
    GENERATED_BODY()
public:
    APolarisCharacterManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    APolarisCharacterActor* GetCharacterActor(int32 _EntryId);
    
};

