#pragma once
#include "CoreMinimal.h"
#include "LobbyMenuHelpItem.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FLobbyMenuHelpItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString textId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 dialogId;
    
    FLobbyMenuHelpItem();
};

