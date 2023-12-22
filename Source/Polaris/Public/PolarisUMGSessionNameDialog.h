#pragma once
#include "CoreMinimal.h"
#include "LobbyUserWidget.h"
#include "PolarisUMGSessionNameDialog.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGSessionNameDialog : public ULobbyUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGSessionNameDialog();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSessionName(const FString& session_name);
    
    UFUNCTION(BlueprintCallable)
    void OnClose(bool decided);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetSessionName() const;
    
};

