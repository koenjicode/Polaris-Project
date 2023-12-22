#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGTextMenuEditingDelegateDelegate.generated.h"

class UTextBlock;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FPolarisUMGTextMenuEditingDelegate, UTextBlock*, Text, int32, Param, bool, is_init);

