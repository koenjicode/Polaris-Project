#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PolarisTracePartsDataAssetList.generated.h"

class UPolarisTracePartsDataAsset;

UCLASS(Blueprintable)
class POLARIS_API UPolarisTracePartsDataAssetList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPolarisTracePartsDataAsset*> PartsDataAssetTable;
    
    UPolarisTracePartsDataAssetList();

};

