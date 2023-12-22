#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PolarisMenuEventSubsystem.generated.h"

UCLASS(Blueprintable)
class POLARIS_API UPolarisMenuEventSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuTitleSequence, int32, sequenceNo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuInputFocus, bool, out);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMenuInOut, bool, out);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMenuBrightnessInOut, bool, out, bool, hdr);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHoge, int32, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDecideMenu, int32, item_id);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeGameMode, int32, gamemode_id, int32, gamemode_sub_id);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCameraFocus, bool, out);
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHoge OnHogeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeGameMode OnChangeGameModeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecideMenu OnDecideMenuDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecideMenu OnDecideShortcutDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuInOut OnMenuInOutDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuBrightnessInOut OnMenuBrightnessInOutDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuTitleSequence OnMenuTitleSequenceDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMenuInputFocus OnMenuInputFocusDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraFocus OnCameraFocusDelegate;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImmediate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlack;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLatestSequenceNo;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LatestSequenceNo;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LatestFocusOut;
    
    UPolarisMenuEventSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAnalogAxisRight(float& X, float& Y) const;
    
};

