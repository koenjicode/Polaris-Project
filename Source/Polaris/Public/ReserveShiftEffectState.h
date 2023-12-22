#pragma once
#include "CoreMinimal.h"
#include "ReserveShiftEffectState.generated.h"

USTRUCT(BlueprintType)
struct FReserveShiftEffectState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 player_number;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName bone_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float speed_scale;
    
    POLARIS_API FReserveShiftEffectState();
};

