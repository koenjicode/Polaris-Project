#pragma once
#include "CoreMinimal.h"
#include "LobbyUserWidget.h"
#include "PolarisUMGCommunityMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGCommunityMenu : public ULobbyUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGCommunityMenu();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestSetVisibilityRecursive(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestClose(bool Immediate);
    
    UFUNCTION(BlueprintCallable)
    void InvokeOnCloseCallback();
    
};

