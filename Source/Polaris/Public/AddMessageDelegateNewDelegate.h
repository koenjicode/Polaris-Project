#pragma once
#include "CoreMinimal.h"
#include "ELobbyChatAddressType.h"
#include "AddMessageDelegateNewDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAddMessageDelegateNew, ELobbyChatAddressType, InType, const int32&, InGuid);

