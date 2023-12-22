#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LobbyMenuOnCloseDelegateDelegate.h"
#include "LobbyMenuInterface.generated.h"

UINTERFACE(Blueprintable)
class ULobbyMenuInterface : public UInterface {
    GENERATED_BODY()
};

class ILobbyMenuInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UnbindFromEventOnCloseMenu(UPARAM(Ref) FLobbyMenuOnCloseDelegate& OnClose);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BindToEventOnCloseMenu(UPARAM(Ref) FLobbyMenuOnCloseDelegate& OnClose);
    
};

