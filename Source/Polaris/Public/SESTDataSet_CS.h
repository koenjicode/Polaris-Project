#pragma once
#include "CoreMinimal.h"
#include "SESTBakeData.h"
#include "SESTDataSet_CS.generated.h"

class UBaseSESTItem;

USTRUCT(BlueprintType)
struct POLARIS_API FSESTDataSet_CS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBaseSESTItem> SESTItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSESTBakeData SESTBakeData;
    
    FSESTDataSet_CS();
};

