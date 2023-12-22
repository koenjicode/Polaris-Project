#pragma once
#include "CoreMinimal.h"
#include "EMeshBodyRegionType.generated.h"

UENUM(BlueprintType)
enum class EMeshBodyRegionType : uint8 {
    E_MeshBodyRegionType_None,
    E_MeshBodyRegionType_Head,
    E_MeshBodyRegionType_LArm,
    E_MeshBodyRegionType_RArm,
};

