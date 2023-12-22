#pragma once
#include "CoreMinimal.h"
#include "WorldContextObject.h"
#include "LobbyChatSubMenuEvent.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class POLARIS_API ULobbyChatSubMenuEvent : public UWorldContextObject {
    GENERATED_BODY()
public:
    ULobbyChatSubMenuEvent();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Execute();
    
};

