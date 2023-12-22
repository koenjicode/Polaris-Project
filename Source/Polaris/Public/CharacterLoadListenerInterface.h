#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CharacterLoadListenerInterface.generated.h"

class APolarisCharacterActor;

UINTERFACE(Blueprintable, MinimalAPI)
class UCharacterLoadListenerInterface : public UInterface {
    GENERATED_BODY()
};

class ICharacterLoadListenerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterLoaded(APolarisCharacterActor* Actor);
    
};

