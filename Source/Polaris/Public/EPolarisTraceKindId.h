#pragma once
#include "CoreMinimal.h"
#include "EPolarisTraceKindId.generated.h"

UENUM(BlueprintType)
enum class EPolarisTraceKindId : uint8 {
    TRC_KIND_ID0,
    TRC_KIND_ID1,
    TRC_KIND_ID2,
    TRC_KIND_ID3,
    TRC_KIND_ID4,
    TRC_KIND_ID5,
    TRC_KIND_MAX UMETA(Hidden),
    TRC_KIND_NONE,
};

