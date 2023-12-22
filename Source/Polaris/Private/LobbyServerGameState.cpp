#include "LobbyServerGameState.h"
#include "Net/UnrealNetwork.h"

ALobbyServerGameState::ALobbyServerGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ALobbyServerGameState::OnRep_ChatHistory() {
}

void ALobbyServerGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ALobbyServerGameState, ChatHistory);
}


