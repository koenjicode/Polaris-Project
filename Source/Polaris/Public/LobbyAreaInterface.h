#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ELobbyArea.h"
#include "LobbyAreaInterface.generated.h"

UINTERFACE(Blueprintable)
class POLARIS_API ULobbyAreaInterface : public UInterface {
    GENERATED_BODY()
};

class POLARIS_API ILobbyAreaInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ELobbyArea GetArea();
    
};

