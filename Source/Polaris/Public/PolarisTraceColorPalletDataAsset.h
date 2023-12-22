#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "PolarisTraceColorPalletSetting.h"
#include "PolarisTraceColorPalletDataAsset.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisTraceColorPalletDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolarisTraceColorPalletSetting> ColorPalletSettings;
    
    UPolarisTraceColorPalletDataAsset();

};

