#pragma once
#include "CoreMinimal.h"
#include "SESTBakeData.h"
#include "BaseSESTItemDataStruct.generated.h"

class UBaseSESTItem;

USTRUCT(BlueprintType)
struct POLARIS_API FBaseSESTItemDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseSESTItem* BaseSESTItemUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBaseSESTItem* BaseSESTItemTmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDispBaseSESTItemDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSESTBakeData SESTBakeData;
    
    FBaseSESTItemDataStruct();
};

