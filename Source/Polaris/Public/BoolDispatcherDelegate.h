#pragma once
#include "CoreMinimal.h"
#include "BoolDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBoolDispatcher, bool, bFlag);

