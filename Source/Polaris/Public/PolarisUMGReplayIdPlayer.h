#pragma once
#include "CoreMinimal.h"
#include "LobbyUserWidget.h"
#include "PolarisUMGReplayIdPlayer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGReplayIdPlayer : public ULobbyUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGReplayIdPlayer();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsInputing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeUMG(const FString& Title, const FString& Initial, int32 maxLength);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasOutAnimationFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FinalizeUMG();
    
    UFUNCTION(BlueprintCallable)
    void CallDecideCallback(const FString& str);
    
    UFUNCTION(BlueprintCallable)
    FString CallCheckStringCallback(const FString& in);
    
    UFUNCTION(BlueprintCallable)
    void CallCancelCallback();
    
};

