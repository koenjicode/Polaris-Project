#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PhoenixSkeletonBinary.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPhoenixSkeletonBinary : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> RawData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPhoenixSkeletonBinary();

};

