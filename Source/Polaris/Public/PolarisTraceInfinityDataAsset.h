#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PolarisTraceInfinitySetting.h"
#include "PolarisTraceInfinityDataAsset.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisTraceInfinityDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisTraceInfinitySetting> InfinitySettingTable;
    
    UPolarisTraceInfinityDataAsset();

};

