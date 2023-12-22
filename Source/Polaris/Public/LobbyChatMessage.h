#pragma once
#include "CoreMinimal.h"
#include "LobbyChatMessage.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FLobbyChatMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText playerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChatMessage;
    
    FLobbyChatMessage();
};

