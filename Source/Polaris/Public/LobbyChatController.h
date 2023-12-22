#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LobbyChatController.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ULobbyChatController : public UObject {
    GENERATED_BODY()
public:
    ULobbyChatController();

    UFUNCTION(BlueprintCallable)
    void ToggleVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsOpenProfile() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CloseProfile();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ActiveLogChat();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ActiveInputBoxChat();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ActiveDirectChat(const int32& InPlatform012, const FString& InPlayerName, const FString& InCosmosId, const FString& InPlatformId, const FString& InPolarisId, const FString& InOnlineId);
    
};

