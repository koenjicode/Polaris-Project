#pragma once
#include "CoreMinimal.h"
#include "BlackPenMissionPanel.h"
#include "BlackPenMissionTypeWidgetName.h"
#include "PolarisUMGIngameStoreMissionButton.h"
#include "PolarisUMGIngameStoreBlackPenMissionTypePanel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenMissionTypePanel : public UPolarisUMGIngameStoreMissionButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackPenMissionTypeWidgetName widget_names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackPenMissionPanel Data;
    
public:
    UPolarisUMGIngameStoreBlackPenMissionTypePanel();

};

