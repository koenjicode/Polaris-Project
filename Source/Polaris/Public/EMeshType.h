#pragma once
#include "CoreMinimal.h"
#include "EMeshType.generated.h"

UENUM(BlueprintType)
enum class EMeshType : uint8 {
    E_SkeletalMesh,
    E_SkeletalMeshArray,
    E_StaticMesh,
    E_NoneStaticMesh,
};

