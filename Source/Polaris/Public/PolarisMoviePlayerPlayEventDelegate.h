#pragma once
#include "CoreMinimal.h"
#include "PolarisMoviePlayerPlayEventDelegate.generated.h"

class UMaterialInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPolarisMoviePlayerPlayEvent, UMaterialInstance*, Material);

