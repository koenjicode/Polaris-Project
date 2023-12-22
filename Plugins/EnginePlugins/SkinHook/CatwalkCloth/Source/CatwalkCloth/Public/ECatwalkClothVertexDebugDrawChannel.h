#pragma once
#include "CoreMinimal.h"
#include "ECatwalkClothVertexDebugDrawChannel.generated.h"

UENUM(BlueprintType)
enum class ECatwalkClothVertexDebugDrawChannel : uint8 {
    Collision,
    MaxDistance,
    BackstopLimit,
    FrontstopLimit,
    SelfCollision,
};

