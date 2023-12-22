#pragma once
#include "CoreMinimal.h"
#include "BlackPenMissionItemPanel.h"
#include "BlackPenMissionItemWidgetName.h"
#include "PolarisUMGIngameStoreMissionButton.h"
#include "PolarisUMGIngameStoreBlackPenMissionItemPanel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenMissionItemPanel : public UPolarisUMGIngameStoreMissionButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackPenMissionItemWidgetName widget_names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackPenMissionItemPanel Data;
    
public:
    UPolarisUMGIngameStoreBlackPenMissionItemPanel();

};

