#pragma once
#include "CoreMinimal.h"
#include "PolarisUMGTextMenuDelegateDelegate.generated.h"

class UTextBlock;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FPolarisUMGTextMenuDelegate, UTextBlock*, Text, int32, Param);

