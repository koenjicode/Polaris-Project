#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PolarisBlackPenMissionPanelData.generated.h"

class UPolarisUMGStoreButton;

UCLASS(Blueprintable)
class POLARIS_API UPolarisBlackPenMissionPanelData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FAction, int32, ID);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText title_text_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPolarisUMGStoreButton* reference_button;
    
    UPolarisBlackPenMissionPanelData();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Unselect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Select();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Decide();
    
    UFUNCTION(BlueprintCallable)
    void CreatePanelData(const FText& title_text);
    
    UFUNCTION(BlueprintCallable)
    void Configure(int32 ID, UPolarisBlackPenMissionPanelData::FAction OnDecide, UPolarisBlackPenMissionPanelData::FAction onSelect, UPolarisBlackPenMissionPanelData::FAction onUnselect);
    
};

