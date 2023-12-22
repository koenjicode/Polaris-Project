#pragma once
#include "CoreMinimal.h"
#include "BattleSysToneIdWrapPinStruct.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBattleSysToneIdWrapPinStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Key;
    
    FBattleSysToneIdWrapPinStruct();
};

