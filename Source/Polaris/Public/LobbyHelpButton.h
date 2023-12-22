#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELobbyHelpButtonIconType.h"
#include "ELobbyHelpButtonSceneType.h"
#include "LobbyHelpButton.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ULobbyHelpButton : public UObject {
    GENERATED_BODY()
public:
    ULobbyHelpButton();

    UFUNCTION(BlueprintCallable)
    void Scene(ELobbyHelpButtonSceneType InType);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceButton(ELobbyHelpButtonIconType InIconType, FName InTextId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveButton(ELobbyHelpButtonIconType InIconType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool End();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Begin();
    
};

