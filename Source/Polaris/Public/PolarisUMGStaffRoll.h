#pragma once
#include "CoreMinimal.h"
#include "PolarisUserWidget.h"
#include "StaffRollFbsDataStruct.h"
#include "StaffRollParamStruct.h"
#include "PolarisUMGStaffRoll.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGStaffRoll : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGStaffRoll();

    UFUNCTION(BlueprintCallable)
    void SetStaffrollParam(float scroll_speed, int32 line_size, int32 font_size_TITLE_1, int32 font_size_TITLE_2, int32 font_size_TITLE_3, int32 font_size_TITLE_4, int32 font_size_TITLE_5, int32 font_size_BOLD, int32 font_size_NAME, int32 font_size_AUTHOR_TITLE, int32 font_size_RIGHT_NOTATION);
    
    UFUNCTION(BlueprintCallable)
    void SetLogoTex(UTexture2D* tex);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTextureLoadingFinished(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsPause(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFinished(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFbsLoadingFinished(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFadout(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void SetFastForwardValue(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RestartStaffRollWidget();
    
    UFUNCTION(BlueprintCallable)
    FStaffRollParamStruct GetStaffrollParam();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetLogoTypeArray();
    
    UFUNCTION(BlueprintCallable)
    TArray<UTexture2D*> GetLogoTexArray();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsTextureLoadingFinished();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsPause();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsFinished();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsFbsLoadingFinished();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsFadeOut();
    
    UFUNCTION(BlueprintCallable)
    TArray<FStaffRollFbsDataStruct> GetFbsRowData();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFastForwardValue();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FrameIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FbsDataOnLoaded();
    
    UFUNCTION(BlueprintCallable)
    void AddLogoType(const FString& logo_type);
    
    UFUNCTION(BlueprintCallable)
    void AddFbsRowData(FStaffRollFbsDataStruct fbsdata);
    
};

