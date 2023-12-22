#pragma once
#include "CoreMinimal.h"
#include "Components/ListView.h"
#include "LobbyListViewChat.generated.h"

UCLASS(Blueprintable)
class POLARIS_API ULobbyListViewChat : public UListView {
    GENERATED_BODY()
public:
    ULobbyListViewChat();

    UFUNCTION(BlueprintCallable)
    void SwapItem(int32 target_index, int32 source_index);
    
};

