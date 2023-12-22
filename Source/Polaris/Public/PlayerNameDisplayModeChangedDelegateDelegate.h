#pragma once
#include "CoreMinimal.h"
#include "EPlayerNameDisplayMode.h"
#include "PlayerNameDisplayModeChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerNameDisplayModeChangedDelegate, EPlayerNameDisplayMode, playerNameDisplayMode);

