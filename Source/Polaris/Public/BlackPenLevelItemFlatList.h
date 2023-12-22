#pragma once
#include "CoreMinimal.h"
#include "BlackPenLevelItemPair.h"
#include "BlackPenLevelItemFlatList.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenLevelItemFlatList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlackPenLevelItemPair> item_list;
    
    FBlackPenLevelItemFlatList();
};

