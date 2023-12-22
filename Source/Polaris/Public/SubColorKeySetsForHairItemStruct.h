#pragma once
#include "CoreMinimal.h"
#include "SubColorKeySetsForHairItemStruct.generated.h"

class UCustomizeItem;
class USubColorKeySetsGroup;

USTRUCT(BlueprintType)
struct POLARIS_API FSubColorKeySetsForHairItemStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCustomizeItem> TargetCI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USubColorKeySetsGroup* SubColorKeySetsGroup;
    
    FSubColorKeySetsForHairItemStruct();
};

