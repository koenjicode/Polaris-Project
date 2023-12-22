#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PolarisTraceKindSetting.h"
#include "PolarisTraceKindDataAssetList.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisTraceKindDataAssetList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisTraceKindSetting> KindSettingTable;
    
    UPolarisTraceKindDataAssetList();

    UFUNCTION(BlueprintCallable)
    void SetUpKindId();
    
};

