#pragma once
#include "CoreMinimal.h"
#include "PlayerProfileData.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGPlayerProfileView.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGPlayerProfileView : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString battleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharaCustomizeJson;
    
    UPolarisUMGPlayerProfileView();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRightProfile(UPARAM(Ref) FPlayerProfileData& profile_data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLeftProfile(UPARAM(Ref) FPlayerProfileData& profile_data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCenterProfile(UPARAM(Ref) FPlayerProfileData& profile_data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenRightProfile(bool with_menu, int32 submenu_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenLeftProfile(bool with_menu, int32 submenu_type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenCenterProfile();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingOutAnimation();
    
    UFUNCTION(BlueprintCallable)
    void InvokeOnStartSubmenuExec();
    
    UFUNCTION(BlueprintCallable)
    void InvokeOnEndSubmenuExec();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseRightProfile();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseLeftProfile();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseCenterProfile();
    
};

