#pragma once
#include "CoreMinimal.h"
#include "Components/WrapBox.h"
#include "LobbyWrapBoxChat.generated.h"

class UWidget;

UCLASS(Blueprintable)
class POLARIS_API ULobbyWrapBoxChat : public UWrapBox {
    GENERATED_BODY()
public:
    ULobbyWrapBoxChat();

    UFUNCTION(BlueprintCallable)
    void AddTop(UWidget* InWidget);
    
};

