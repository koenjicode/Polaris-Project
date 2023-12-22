#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PhoenixDynamicBoneBinary.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPhoenixDynamicBoneBinary : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> RawData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPhoenixDynamicBoneBinary();

};

