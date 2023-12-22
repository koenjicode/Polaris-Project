#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "LobbyChatBalloonData.h"
#include "LobbyNameLayerWidget.generated.h"

class AActor;
class ULobbyNameLayerWidget;
class USceneComponent;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API ULobbyNameLayerWidget : public UUserWidget {
    GENERATED_BODY()
public:
    ULobbyNameLayerWidget();

    UFUNCTION(BlueprintCallable)
    static ULobbyNameLayerWidget* LobbyGetNameLayerWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplSetEnableTargetArrow(AActor* Actor, bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplSetBallonChatNew2(AActor* Actor, const FLobbyChatBalloonData& ChatBalloonData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplRemoveActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplOverrideName(AActor* Actor, const FString& playerName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplDebugDisableShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ImplAddAvatar(USceneComponent* AvatarHead);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddMachineGuide2(AActor* Actor, const FVector& Offset, bool Guide, bool Arrow);
    
};

