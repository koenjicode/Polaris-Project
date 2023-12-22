#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PolarisGroundHitSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPolarisGroundHitSignature, FVector, HitLocation, float, Damage);

