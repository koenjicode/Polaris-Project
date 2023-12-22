#pragma once
#include "CoreMinimal.h"
#include "SweatMIDStruct.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct POLARIS_API FSweatMIDStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> SweatMID;
    
    FSweatMIDStruct();
};

