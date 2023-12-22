#pragma once
#include "CoreMinimal.h"
#include "BlackPenItem_Core.h"
#include "BlackPenItem.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenItem : public FBlackPenItem_Core {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool vc_flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName icon_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlackPenItem_Core> detail_datas;
    
    FBlackPenItem();
};

