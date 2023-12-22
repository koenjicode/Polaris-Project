#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "ChatMessageDelegateDelegate.h"
#include "LobbyChatMessage.h"
#include "LobbyServerGameState.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ALobbyServerGameState : public AGameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ChatHistory, meta=(AllowPrivateAccess=true))
    TArray<FLobbyChatMessage> ChatHistory;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChatMessageDelegate NewMessageDelegate;
    
    ALobbyServerGameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_ChatHistory();
    
};

