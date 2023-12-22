#pragma once
#include "CoreMinimal.h"
#include "BlackPenMissionItemPanel.h"
#include "BlackPenMissionPanel.h"
#include "BlackPenMissionWidgetName.h"
#include "PolarisUMGIngameStoreMenuBase.h"
#include "PolarisUMGIngameStoreBlackPenMission.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGIngameStoreBlackPenMission : public UPolarisUMGIngameStoreMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackPenMissionWidgetName widget_names;
    
public:
    UPolarisUMGIngameStoreBlackPenMission();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MissionTypeCallButtonDecide(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateMissionPanelData(const TArray<FBlackPenMissionPanel>& panel_infos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateMissionItemPanelData(const TArray<FBlackPenMissionItemPanel>& panel_infos, int32 mission_type_number);
    
};

