#pragma once
#include "CoreMinimal.h"
#include "ELobbyChatAddressType.h"
#include "RemoveMessageDelegateNewDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRemoveMessageDelegateNew, ELobbyChatAddressType, InType, const int32&, InGuid);

