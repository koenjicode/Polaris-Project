#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PolarisTraceDataAsset.generated.h"

class UPolarisTraceColorPalletDataAsset;
class UPolarisTraceInfinityDataAsset;
class UPolarisTracePartsDataAssetList;

UCLASS(Blueprintable)
class POLARIS_API UPolarisTraceDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolarisTracePartsDataAssetList* TracePartsDataAssetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolarisTraceColorPalletDataAsset* TraceColorPalletDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolarisTraceInfinityDataAsset* TraceInfinityDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDrawTraceFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDrawTraceKeyFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDrawTraceVelocity;
    
    UPolarisTraceDataAsset();

};

