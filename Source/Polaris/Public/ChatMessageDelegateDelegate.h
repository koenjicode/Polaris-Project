#pragma once
#include "CoreMinimal.h"
#include "LobbyChatMessage.h"
#include "ChatMessageDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChatMessageDelegate, const FLobbyChatMessage&, NewMessage);

