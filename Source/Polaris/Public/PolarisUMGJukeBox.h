#pragma once
#include "CoreMinimal.h"
#include "EPolarisUMGJukeBoxMode.h"
#include "JukeBoxBGM.h"
#include "JukeBoxMyList.h"
#include "JukeBoxPlayList.h"
#include "JukeBoxSeriesTab.h"
#include "PolarisUserWidget.h"
#include "PolarisUMGJukeBox.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGJukeBox : public UPolarisUserWidget {
    GENERATED_BODY()
public:
    UPolarisUMGJukeBox();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupPlayList(const TArray<FJukeBoxPlayList>& infos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupMyList(const TArray<FJukeBoxMyList>& infos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupBGMSeriesTab(const TArray<FJukeBoxSeriesTab>& infos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupBGMList(const FJukeBoxSeriesTab& series, const TArray<FJukeBoxBGM>& infos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMode(EPolarisUMGJukeBoxMode Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInputEnable(bool On);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectSeriesTab(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectRandomPreset(int32 Index, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectMyListInfo(int32 Index, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectJacket(int32 Index, bool Force, bool scroll_right);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectBGM(int32 Index, bool Force);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestAnimPresetWindowIO(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestAnimNextPrev(bool Next);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestAnimMyListWindowIO(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestAnimMyListBGMWindowIO(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestAnimIO(bool in);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestAnimClick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void JacketMove(float delta_time);
    
    UFUNCTION(BlueprintCallable)
    void InvokeRandomPresetSelectCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeRandomPresetDecideCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeMyListSelectCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeMyListDecideCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeJacketSelectCallback(bool Right);
    
    UFUNCTION(BlueprintCallable)
    void InvokeJacketDecideCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeBGMSeriesTabSelectCallback(bool Right);
    
    UFUNCTION(BlueprintCallable)
    void InvokeBGMSeriesTabDecideCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeBGMSelectCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void InvokeBGMDecideCallback(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimSelectJacket();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimPrev();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimPresetWindowOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimPresetWindowIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimPresetWindowClick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimNext();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimMyListWindowOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimMyListWindowIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimMyListClick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimMyListBGMWindowOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimMyListBGMWindowIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimMyListBGMClick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimIn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool HasFinishedAnimClick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideRandomPreset(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideMyListInfo(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DecideBGM(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyMyListInfo(const FJukeBoxMyList& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyJacket(const FJukeBoxPlayList& Info);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyBGM(const FJukeBoxBGM& Info);
    
};

