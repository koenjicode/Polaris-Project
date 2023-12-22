#pragma once
#include "CoreMinimal.h"
#include "EPlayerNameType.h"
#include "PolarisUserWidget.h"
#include "RankingData.h"
#include "PolarisUMGLeaderboard.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class POLARIS_API UPolarisUMGLeaderboard : public UPolarisUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRankingData> RankingDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRankingData SelfRankingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinScrollDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerNameType CurrentPlayerNameType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedTabIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentTabIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedCursorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayerEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CharacterEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlatformEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PeriodEnable;
    
public:
    UPolarisUMGLeaderboard();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTabIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSelfRankingView();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateScroll(int32 top_index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateRankingListView(int32 update_start_rank, int32 update_num);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePlayerNameType();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCurrentCursor(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleConnecting(bool is_visible);
    
    UFUNCTION(BlueprintCallable)
    void SetSelfRankingData(FRankingData ranking_data);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSelectedCursorByWidget(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetRequireOpenProfile(bool require);
    
    UFUNCTION(BlueprintCallable)
    void SetRankingDatas(int32 start_rank, TArray<FRankingData> ranking_datas, int32 ranking_num);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRankingDataNum(int32 ranking_num);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFilterStringId(const FString& Player, const FString& Character, const FString& Platform, const FString& Period);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayEnableAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDisableAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayDecideAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRankingListInitialized();
    
    UFUNCTION(BlueprintCallable)
    bool IsScrolling();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingEnableAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingDisableAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlayingDecideAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetSkipNum();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetScrollDelta();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetDisplayedListRange(int32& top_index, int32& bottom_index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearRankingListView();
    
    UFUNCTION(BlueprintCallable)
    void ClearRankingList();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeTabByWidget(int32 Index);
    
};

