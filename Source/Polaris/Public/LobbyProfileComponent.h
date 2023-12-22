#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LobbyProfileClosedDelegate.h"
#include "LobbyProfileComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULobbyProfileComponent : public UActorComponent {
    GENERATED_BODY()
public:
    ULobbyProfileComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenProfileSimpleWithSubmenuType(const FString& InUserId, int32 submenuType, const FLobbyProfileClosed& InClosed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenProfileSimple(const FString& InUserId, const FLobbyProfileClosed& InClosed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OpenProfile(const FString& InUserId, const FLobbyProfileClosed& InClosed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowProfileSimple() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CloseProfile();
    
};

