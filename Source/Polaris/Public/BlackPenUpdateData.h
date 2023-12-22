#pragma once
#include "CoreMinimal.h"
#include "BlackPenBasic.h"
#include "BlackPenDetail.h"
#include "BlackPenItemDetail.h"
#include "BlackPenLevelItemFlatList.h"
#include "BlackPenMissionBasicItem.h"
#include "BlackPenPickup.h"
#include "BlackPenUpdateData.generated.h"

USTRUCT(BlueprintType)
struct POLARIS_API FBlackPenUpdateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackPenLevelItemFlatList flat_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackPenBasic basic_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackPenDetail detail_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBlackPenItemDetail> free_item_details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBlackPenItemDetail> premium_item_details;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlackPenMissionBasicItem> mission_basics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlackPenPickup> pickup_infos;
    
    FBlackPenUpdateData();
};

