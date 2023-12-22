#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "LobbyChatWindow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API ULobbyChatWindow : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    ULobbyChatWindow();

    UFUNCTION(BlueprintCallable)
    bool CheckTutorialSetEventFlag();
    
    UFUNCTION(BlueprintCallable)
    bool CheckTutorialSessionSetEventFlag();
    
};

